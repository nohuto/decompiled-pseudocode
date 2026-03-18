/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x14000D040
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406EBAF0 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1000);
}
