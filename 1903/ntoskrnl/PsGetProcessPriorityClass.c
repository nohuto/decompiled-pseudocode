/*
 * XREFs of PsGetProcessPriorityClass @ 0x1403070D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessPriorityClass(__int64 a1)
{
  return *(_BYTE *)(a1 + 1119);
}
