/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x14015C634
 * Callers:
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 *     MiImageProtoChargedCommit @ 0x14017AC20 (MiImageProtoChargedCommit.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x140138710 (MiLocateSessionProtosInSubsection.c)
 */

__int64 *__fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 *SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}
