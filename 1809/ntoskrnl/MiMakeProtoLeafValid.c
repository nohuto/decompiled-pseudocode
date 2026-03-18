/*
 * XREFs of MiMakeProtoLeafValid @ 0x14012734C
 * Callers:
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120E50 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120EB0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 *v5; // rsi
  unsigned __int64 v6; // r15
  char i; // al
  __int64 v8; // r9

  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_READ_PTE_LOCK_FREE(a1); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(a1) )
  {
    MiUnlockPageTableInternal((__int64)v5, v6);
    MiUnlockWorkingSetShared((__int64)v5, a3);
    a3 = MiLockWorkingSetShared((__int64)v5);
    LOBYTE(v8) = a3;
    MiMakeSystemAddressValid(a1, 0LL, 0, v8, 0);
  }
  return 0LL;
}
