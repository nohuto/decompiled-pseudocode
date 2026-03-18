/*
 * XREFs of ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AF190
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C005B1B0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BFEC0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::RestoreResourceCB(VIDMM_SEGMENT *this, struct _KTHREAD ***a2, bool *a3, void *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  struct _VIDMM_GLOBAL_ALLOC *i; // rdi
  _QWORD *j; // rsi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB((struct _VIDMM_GLOBAL_ALLOC *)a2) )
  {
    v8 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdEvent(v8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p(v9, &EventVidMmRestoreResource, v10, a2);
    v11 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL, 1u);
    v14 = v11;
    if ( v11 < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdAssertion(v15);
      for ( i = (struct _VIDMM_GLOBAL_ALLOC *)a2[37];
            i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 37);
            i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
      {
        for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
          VidSchMarkDeviceAsError(*(_QWORD *)(*(j - 4) + 32LL));
      }
    }
    *((_BYTE *)a2 + 98) = 1;
    ExReleasePushLockExclusiveEx(a2 + 60, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(a2[40]);
  }
  return 0LL;
}
