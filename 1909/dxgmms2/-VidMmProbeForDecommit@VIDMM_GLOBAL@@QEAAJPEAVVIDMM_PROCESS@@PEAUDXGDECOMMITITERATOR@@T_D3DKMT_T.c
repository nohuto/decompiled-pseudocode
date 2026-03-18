/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C00B1B1C
 * Callers:
 *     ?VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C0024550 (-VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037AC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00ACC8C (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmProbeForDecommit(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  unsigned int v8; // esi
  __int64 v9; // r13
  UINT v10; // ebx
  __int64 v11; // rcx
  __int64 *v13; // rax
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, (VIDMM_GLOBAL *)((char *)this + 40968));
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL));
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39952));
    v10 = a4.Value >> 1;
    v11 = *(_QWORD *)(v9 + 416);
    *((_QWORD *)a3 + 3) = v11;
    *(_QWORD *)a3 = *(_QWORD *)(v9 + 512);
    if ( (v10 & 1) != 0 )
    {
LABEL_3:
      v8 = -1071775484;
    }
    else
    {
      while ( v11 != v9 + 416 )
      {
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(this, (struct _VIDMM_GLOBAL_ALLOC *)(v11 - 416), v10 & 1) )
          goto LABEL_3;
        v13 = (__int64 *)*((_QWORD *)a3 + 3);
        v11 = *v13;
        *((_QWORD *)a3 + 3) = *v13;
      }
    }
    *((_QWORD *)this + 4995) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v8;
}
