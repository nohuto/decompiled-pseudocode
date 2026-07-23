/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTable @ 0x140192988 (MiLockPageTable.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiReferenceDriverPage @ 0x1402A6328 (MiReferenceDriverPage.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // r9
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r13
  unsigned __int8 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  int v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h]
  unsigned __int64 v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v3 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6 = ((*(_QWORD *)(v4 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6 + 8 * ((unsigned __int64)*(unsigned int *)(v4 + 64) >> 12);
  v8 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( v6 >= v7 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  v9 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    }
    v3 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTable((__int64)AnyMultiplexedVm, v3);
LABEL_7:
    v10 = MI_READ_PTE_LOCK_FREE(v6);
    v21 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_17;
    if ( (v10 & 1) != 0 )
    {
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
      v16 = 48 * v15 - 0x58000000000LL;
      if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) == 0 )
      {
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v18, v13, v14);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v15 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
        MiUpdateImagePfnImportRelocations(v19, v20, v9 >> 3, v15);
        MiLockPageInline(48 * v15 - 0x58000000000LL);
        MiRemoveLockedPageChargeAndDecRef(48 * v15 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      }
LABEL_17:
      v6 += 8LL;
      v9 += 8LL;
      continue;
    }
    if ( (v10 & 0x400) != 0 )
      goto LABEL_17;
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    v3 = 0LL;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
    v12 = MmAccessFault(0LL, (__int64)(v6 << 25) >> 16, 0LL, 0LL);
    if ( v12 < 0 )
      KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v6 << 25) >> 16, v11, v12);
    MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  while ( v6 < v7 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
