/*
 * XREFs of MiFaultInPagedPool @ 0x1402BCA60
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 * Callees:
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  char *AnyMultiplexedVm; // rbx
  unsigned __int8 v5; // r14
  __int16 v6; // ax

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v5 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0LL);
  v6 = MI_READ_PTE_LOCK_FREE(v2);
  if ( (v6 & 1) != 0 && (v6 & 0x200) != 0 )
    MiCopyOnWrite(BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL, 4);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
  return *(_BYTE *)BugCheckParameter2;
}
