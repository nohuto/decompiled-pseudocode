/*
 * XREFs of MiAcquireSpinLockExclusive @ 0x1402B8C78
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiAcquireSpinLockExclusive(volatile LONG *a1)
{
  return ExAcquireSpinLockExclusive(a1);
}
