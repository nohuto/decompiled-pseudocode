/*
 * XREFs of PsGetProcessProtection @ 0x140134E50
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 1786);
}
