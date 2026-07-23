/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x1400FC508
 * Callers:
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400FB1D4 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al

  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  v4 = *(_BYTE *)(a1 + 1);
  if ( (v4 & 0x20) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v4 = *(_BYTE *)(a1 + 1);
  }
  return (v4 & 0x20) != 0;
}
