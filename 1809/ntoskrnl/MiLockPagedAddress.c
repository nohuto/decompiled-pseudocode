/*
 * XREFs of MiLockPagedAddress @ 0x140140A10
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x140140944 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR a1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  __int64 v6; // r9
  unsigned __int8 v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  char v13; // al
  int v15; // eax
  ULONG_PTR v16; // rdi
  int v17; // edi
  int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v8 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v6) = v7;
      MiMakeSystemAddressValid(v2, 0LL, 0, v6, 4);
      v9 = MI_READ_PTE_LOCK_FREE(v2);
      v19 = v9;
      if ( (v9 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
      v15 = MmAccessFault(0LL, a1, 0LL, 0LL);
      v16 = v15;
      if ( v15 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v16, 0LL, a1);
      }
LABEL_16:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    if ( (v9 & 0x200) == 0 )
      break;
    v17 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, v2, 0xFFFFFFFFFFFFFFFFuLL, 0);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    if ( v17 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v17);
      goto LABEL_16;
    }
  }
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18, v10, v12);
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v11, 0) )
    v3 = MiCaptureDirtyBitToPfn(v11);
  else
    v8 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    if ( v3 )
      MiReleasePageFileInfo(
        *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)),
        v3,
        1);
    v13 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v13 & 0x20) == 0 || (v13 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(a1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
  return v8;
}
