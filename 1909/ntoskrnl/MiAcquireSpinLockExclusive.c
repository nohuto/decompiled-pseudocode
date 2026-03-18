/*
 * XREFs of MiAcquireSpinLockExclusive @ 0x1402B89D8
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiAcquireSpinLockExclusive(volatile LONG *a1)
{
  return ExAcquireSpinLockExclusive(a1);
}
