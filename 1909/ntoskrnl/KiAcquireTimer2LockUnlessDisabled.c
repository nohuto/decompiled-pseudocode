/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x14009F164
 * Callers:
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x140113700 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1401137EC (KeDisableTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  char v2; // al

  KiAcquireKobjectLockSafe(a1);
  v2 = *(_BYTE *)(a1 + 1);
  if ( (v2 & 0x20) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v2 = *(_BYTE *)(a1 + 1);
  }
  return (v2 & 0x20) != 0;
}
