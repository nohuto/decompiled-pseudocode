/*
 * XREFs of ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AB168
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D0F0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyCrossAdapterAllocation(VIDMM_GLOBAL *this, struct _VIDMM_CROSSADAPTER_ALLOC *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  void *v6; // rcx

  v2 = *((int *)a2 + 11);
  if ( *((_QWORD *)a2 + 5) )
  {
    v4 = *((int *)a2 + 10);
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v5[3] = 270LL;
    v5[4] = 65LL;
    v5[5] = a2;
    v5[6] = v4;
    v5[7] = v2;
    WdLogEvent5_WdCriticalError(v5);
  }
  v6 = (void *)*((_QWORD *)a2 + 1);
  if ( v6 )
    MmUnsecureVirtualMemory(v6);
  operator delete(a2);
}
