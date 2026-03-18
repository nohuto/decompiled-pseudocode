/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155AE8 (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x140155DA4 (MiReferenceDriverPage.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r9
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // di
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  int updated; // edi
  unsigned __int64 v16; // rbx
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned __int8 v21; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v8 = v21;
  if ( v7 >= v20 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  v9 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_5;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    }
    v3 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0LL);
LABEL_5:
    v10 = MI_READ_PTE_LOCK_FREE(v7);
    v19 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_8;
    if ( (v10 & 1) != 0 )
    {
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
      v14 = 48 * v13 - 0x58000000000LL;
      if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) == 0 )
      {
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v13 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v9 >> 3, v13);
        MiLockPageInline(48 * v13 - 0x58000000000LL);
        v16 = 0LL;
        v17 = 0LL;
        if ( updated != 1 )
        {
          v16 = MiCaptureDirtyBitToPfn(v14);
          v17 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v14);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v16 )
          MiReleasePageFileInfo(v17, v16, 1);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v8 = v21;
        v4 = a3;
      }
LABEL_8:
      v7 += 8LL;
      v9 += 8LL;
      continue;
    }
    if ( (v10 & 0x400) != 0 )
      goto LABEL_8;
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    v3 = 0LL;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
    v18 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
    if ( v18 < 0 )
      KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v11, v18);
    MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v8 = v21;
  }
  while ( v7 < v20 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
