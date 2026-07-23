/*
 * XREFs of MmReplaceImportEntry @ 0x1402AB3BC
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140849760 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140938180 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x1409382DC (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140938354 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409383BC (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
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
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  struct _KEVENT *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v6 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlpImageDirectoryEntryToDataEx(v4[6], v5, 12LL, (__int64)&v27, &v24);
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
      MiLockPageTableInternal(v12, v13, 0);
LABEL_21:
      v25[0] = MI_READ_PTE_LOCK_FREE(v10);
      if ( (v25[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v13);
      MiUnlockWorkingSetShared(v12, v14);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v13, 0);
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
      MiLockPageTableInternal(v12, v13, 0);
    }
  }
  if ( (v16 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v19 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000));
    *v19 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u, 0x80000000LL);
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28, v20, v21);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v22 = MiCaptureDirtyBitToPfn(v17);
    v23 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v22 )
      MiReleasePageFileInfo(v23, v22, 1);
  }
  MiUnlockPageTableInternal(v12, v13);
  return MiUnlockWorkingSetShared(v12, v14);
}
