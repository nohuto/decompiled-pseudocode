/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x14000CE10
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x14069E180 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1000);
}
