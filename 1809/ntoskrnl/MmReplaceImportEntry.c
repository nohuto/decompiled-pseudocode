/*
 * XREFs of MmReplaceImportEntry @ 0x1402AB1CC
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140848500 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140937180 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x1409372DC (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140937354 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409373BC (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082780 (MiMapPageInHyperSpaceWorker.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087910 (MiCaptureDirtyBitToPfn.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D910 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MiLookupDataTableEntry @ 0x1400DA590 (MiLookupDataTableEntry.c)
 *     MiGetSessionVm @ 0x1400E945C (MiGetSessionVm.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiUnlockPageTableInternal @ 0x140104A90 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB21C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
  ULONG_PTR v5; // rdi
  NTSTATUS v6; // eax
  ULONG_PTR v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // r14
  __int64 SessionVm; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int8 v13; // r12
  unsigned __int64 v14; // rcx
  char v15; // r9
  __int64 v16; // rbp
  int v17; // ebp
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  struct _KEVENT *v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF
  int v27; // [rsp+98h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v5 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    v6 = RtlpImageDirectoryEntryToDataEx(v4[6], 1, 0xCu, (int)&v26, &v23);
    v7 = v23;
    if ( v6 < 0 )
      v7 = 0LL;
    v23 = v7;
    if ( !v7 || !v26 || BugCheckParameter2 < v7 || BugCheckParameter2 >= v7 + v26 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter2, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    return result;
  }
  v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v11 = SessionVm;
  v12 = 0LL;
  v13 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v12 )
      {
        if ( ((BugCheckParameter2 >> 9) & 0xFF8) != 0 )
          goto LABEL_21;
        MiUnlockPageTableInternal(v11, v12);
      }
      v12 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v11, v12, 0);
LABEL_21:
      v24[0] = MI_READ_PTE_LOCK_FREE(v9);
      if ( (v24[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v11, v12);
      MiUnlockWorkingSetShared(v11, v13);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v12, 0);
    }
    v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v24) >> 12) & 0xFFFFFFFFFLL;
    v16 = 48 * v14 - 0x58000000000LL;
    if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) == 0 )
      break;
    v17 = MiCopyOnWrite(BugCheckParameter2, v9, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v17 < 0 )
    {
      MiUnlockPageTableInternal(v11, v12);
      MiUnlockWorkingSetShared(v11, v13);
      MiCopyOnWriteCheckConditions(v11, (unsigned int)v17);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v12, 0);
    }
  }
  if ( (v15 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v18 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000));
    *v18 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, 0x11u, 0x80000000LL);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27, v19, v20);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v21 = MiCaptureDirtyBitToPfn(v16);
    v22 = *(struct _KEVENT **)(qword_14043A748 + 8 * ((*(_QWORD *)(v16 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v21 )
      MiReleasePageFileInfo(v22, v21, 1);
  }
  MiUnlockPageTableInternal(v11, v12);
  return MiUnlockWorkingSetShared(v11, v13);
}
