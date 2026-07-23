/*
 * XREFs of MmReplaceImportEntry @ 0x1402C3B3C
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1408830C0 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceImportEntry @ 0x140976A20 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x140976A98 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140976B4C (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x140976C08 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rdi
  NTSTATUS v7; // eax
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // r14
  __int64 SessionVm; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rcx
  char v16; // r9
  __int64 v17; // rbp
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
    v6 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v4 + 48), v5, 12LL, (__int64)&v27, &v24);
    v8 = v24;
    if ( v7 < 0 )
      v8 = 0LL;
    v24 = v8;
    if ( !v8 || !v27 || BugCheckParameter2 < v8 || BugCheckParameter2 >= v8 + v27 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter2, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    return result;
  }
  v10 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v12 = SessionVm;
  v13 = 0LL;
  v14 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        if ( ((BugCheckParameter2 >> 9) & 0xFF8) != 0 )
          goto LABEL_21;
        MiUnlockPageTableInternal(v12, v13);
      }
      v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v12, v13, 0LL);
LABEL_21:
      v25[0] = MI_READ_PTE_LOCK_FREE(v10);
      if ( (v25[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v13);
      MiUnlockWorkingSetShared(v12, v14);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v13, 0LL);
    }
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v25) >> 12) & 0xFFFFFFFFFLL;
    v17 = 48 * v15 - 0x58000000000LL;
    if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0 )
      break;
    v18 = MiCopyOnWrite(BugCheckParameter2, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v18 < 0 )
    {
      MiUnlockPageTableInternal(v12, v13);
      MiUnlockWorkingSetShared(v12, v14);
      MiCopyOnWriteCheckConditions(v12, (unsigned int)v18);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v13, 0LL);
    }
  }
  if ( (v16 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v19 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000);
    LOBYTE(v20) = 17;
    v21 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + v19);
    *v21 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v21, v20, 0x80000000LL);
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v22 = MiCaptureDirtyBitToPfn(v17);
    v23 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v22 )
      MiReleasePageFileInfo(v23, v22, 1);
  }
  MiUnlockPageTableInternal(v12, v13);
  return MiUnlockWorkingSetShared(v12, v14);
}
