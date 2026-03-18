/*
 * XREFs of MiPreventControlAreaDelete @ 0x1402B9A54
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 */

unsigned __int64 __fastcall MiPreventControlAreaDelete(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1624LL) = a1;
  return ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
}
