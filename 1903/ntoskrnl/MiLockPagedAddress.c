/*
 * XREFs of MiLockPagedAddress @ 0x140142C78
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x140142BA0 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x14089AD30 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteVolatile @ 0x1400F69C0 (MiWriteValidPteVolatile.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // al
  int v12; // eax
  ULONG_PTR v13; // rdi
  int v14; // edi
  int v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v6 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v7 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0LL, 0, v6, 4);
      v8 = MI_READ_PTE_LOCK_FREE(v2);
      v16 = v8;
      if ( (v8 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      v12 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v13 = v12;
      if ( v12 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v13, 0LL, BugCheckParameter1);
      }
LABEL_16:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    if ( (v8 & 0x200) == 0 )
      break;
    v14 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, v2, 0xFFFFFFFFFFFFFFFFuLL, 0);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    if ( v14 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v14);
      goto LABEL_16;
    }
  }
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v9, 0) )
    v3 = MiCaptureDirtyBitToPfn(v9);
  else
    v7 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)), v3, 1);
    v10 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
  return v7;
}
