/*
 * XREFs of MiMakeProtoLeafValid @ 0x140128F14
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter4, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 *v5; // rsi
  unsigned __int64 v6; // r15
  char i; // al

  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v6 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_READ_PTE_LOCK_FREE(BugCheckParameter4); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(BugCheckParameter4) )
  {
    MiUnlockPageTableInternal((__int64)v5, v6);
    MiUnlockWorkingSetShared((__int64)v5, a3);
    a3 = MiLockWorkingSetShared((__int64)v5);
    MiMakeSystemAddressValid(BugCheckParameter4, 0LL, 0, a3, 0);
  }
  return 0LL;
}
