/*
 * XREFs of PsGetProcessProtection @ 0x140134280
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 1738);
}
