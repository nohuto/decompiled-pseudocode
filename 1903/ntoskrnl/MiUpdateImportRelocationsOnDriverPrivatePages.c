/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155448 (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x140155704 (MiReferenceDriverPage.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int8 v24; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v24 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v8 = v24;
  if ( v7 >= v23 )
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
    v22 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_8;
    if ( (v10 & 1) != 0 )
    {
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL;
      v14 = 48 * v13 - 0x58000000000LL;
      if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) == 0 )
      {
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v27);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v13 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v9 >> 3, v13);
        MiLockPageInline(48 * v13 - 0x58000000000LL);
        v19 = 0LL;
        v20 = 0LL;
        if ( updated != 1 )
        {
          v19 = MiCaptureDirtyBitToPfn(v14);
          v20 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v14, v16, v17, v18);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v19 )
          MiReleasePageFileInfo(v20, v19, 1);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v8 = v24;
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
    v21 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
    if ( v21 < 0 )
      KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v11, v21);
    MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v8 = v24;
  }
  while ( v7 < v23 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
