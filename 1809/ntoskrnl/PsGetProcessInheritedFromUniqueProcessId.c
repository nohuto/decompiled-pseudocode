/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x1400AC020
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x140588720 (PsChargeProcessWakeCounter.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406356A0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 992);
}
