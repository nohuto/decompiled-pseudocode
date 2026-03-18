/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006CFD8
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D0F0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071580 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0075560 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAC44 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C008137C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B59D8 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  int v5; // edx
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rdx

  v5 = *((_DWORD *)a2 + 20);
  if ( (v5 & 0x2000) == 0 )
  {
    v7 = 278528LL;
    if ( (v5 & 0x44000) == 0x44000 )
    {
      v9 = (void *)*((_QWORD *)a2 + 66);
      if ( v9 )
        VIDMM_PROCESS::UnmapHostAddressesFromGuest(
          *((VIDMM_PROCESS **)a2 + 64),
          v9,
          *((_QWORD *)a2 + 67),
          *((_QWORD *)a2 + 1),
          1);
    }
    else
    {
      if ( (v5 & 0x40000) == 0 && (**((_DWORD **)a2 + 63) & 0x10000008) == 0 )
        goto LABEL_5;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(**((unsigned int **)a2 + 63));
      v7 = **((unsigned int **)a2 + 63);
      if ( (v7 & 0x4000000) == 0 || !*((_DWORD *)a2 + 95) )
      {
        if ( (v7 & 8) != 0 )
          MmUnmapViewInSystemSpace(*((PVOID *)a2 + 46));
        if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
          ObfDereferenceObject(*((PVOID *)a2 + 45));
        v8 = (void *)*((_QWORD *)a2 + 45);
        if ( a3 )
          VidMmDereferenceObjectAsync(v8);
        else
          ObfDereferenceObject(v8);
        *((_QWORD *)a2 + 45) = 0LL;
      }
      else
      {
LABEL_5:
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v7);
      }
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1560LL * (*((_DWORD *)a2 + 19) & 0x3F) + *((_QWORD *)this + 5023) + 1528),
    -*((_QWORD *)a2 + 1));
  *((_DWORD *)a2 + 23) &= ~1u;
}
