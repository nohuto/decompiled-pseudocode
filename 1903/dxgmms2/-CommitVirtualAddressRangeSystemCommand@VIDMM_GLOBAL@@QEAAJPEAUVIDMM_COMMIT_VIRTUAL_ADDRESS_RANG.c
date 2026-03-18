/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0070568
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005FF14 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077D20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0024F60 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C398 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006E0D0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v5; // edi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 **v13; // rcx
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rdx
  __int64 v18; // rcx
  int v20; // r9d
  int v21; // r9d
  unsigned __int64 v22; // rbp
  __int64 v23; // rdi
  int v24; // esi
  struct _MDL *FullMDL; // rax
  struct _MDL *v26; // r10
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  struct _MDL *v31; // [rsp+28h] [rbp-50h]
  struct VIDMM_ALLOC **v32; // [rsp+38h] [rbp-40h]
  _BYTE v33[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v34; // [rsp+48h] [rbp-30h]
  int v35; // [rsp+50h] [rbp-28h]

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 == -56LL;
  v7 = *(_QWORD *)a2 + 56LL;
  v34 = v7;
  if ( !v6 && *(struct _KTHREAD **)(v7 + 8) == KeGetCurrentThread() )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v28 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v28);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *(_DWORD *)(v7 + 16);
      if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, (const EVENT_DESCRIPTOR *)"g", v10, v20);
    }
    ExAcquirePushLockExclusiveEx(v7, 0LL);
  }
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  v11 = *((_QWORD *)a2 + 3);
  v35 = 2;
  if ( !v11 || **(_QWORD **)(v11 + 16) && **((_QWORD **)a2 + 1) )
  {
    v12 = *((_QWORD *)a2 + 1);
    switch ( (int)(*(_DWORD *)(v12 + 64) << 28) >> 28 )
    {
      case 1:
        v13 = *(__int64 ***)(v12 + 56);
        if ( (*((_DWORD *)v13 + 7) & 3) == 2 )
        {
          v22 = *(_QWORD *)(v12 + 72);
          v23 = **v13;
          v24 = *(_DWORD *)(*(_QWORD *)(v23 + 136) + 80LL) & 0x1001;
          if ( v24 )
          {
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v23, 0LL);
            v12 = *((_QWORD *)a2 + 1);
            v26 = FullMDL;
          }
          else
          {
            v22 += *(_QWORD *)(v23 + 144);
            v26 = 0LL;
          }
          if ( v24 || (v30 = *(_QWORD *)(v23 + 136), (*(_DWORD *)(v30 + 80) & 0x1000) != 0) )
            v27 = 0;
          else
            v27 = *(_DWORD *)(v30 + 16) + 1;
          v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  *(CVirtualAddressAllocator **)a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v12,
                  *(_BYTE *)(v23 + 76) & 0x3F,
                  v27,
                  v22,
                  v26,
                  1u,
                  a3);
        }
        else
        {
          v14 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *(CVirtualAddressAllocator **)a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v12,
                  a3,
                  1);
        }
        goto LABEL_11;
      case 2:
        goto LABEL_28;
      case 6:
        v32 = a3;
        v21 = -2;
        v31 = 0LL;
        goto LABEL_29;
      case 7:
LABEL_28:
        v21 = 0;
        v32 = a3;
        v31 = (struct _MDL *)*((_QWORD *)a2 + 2);
LABEL_29:
        v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v12,
                0,
                v21,
                0LL,
                v31,
                1u,
                v32);
LABEL_11:
        v5 = v14;
        break;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v29);
  }
  if ( v5 == -1073741267 && *((_BYTE *)a2 + 32) )
    goto LABEL_52;
  v15 = (__int64 *)*((_QWORD *)a2 + 3);
  if ( v15 )
  {
    v16 = *v15;
    if ( *v15 )
    {
      if ( *(__int64 **)(v16 + 8) != v15 || (v17 = (__int64 **)v15[1], *v17 != v15) )
        __fastfail(3u);
      *v17 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      v15[1] = 0LL;
    }
    v18 = *((_QWORD *)a2 + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 128), 0xFFFFFFFF) == 1 && v18 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v18);
    operator delete(*((void **)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  if ( v5 == -1073741267 )
  {
LABEL_52:
    if ( !*((_BYTE *)a2 + 32) )
      v5 = -1073741823;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v5;
}
