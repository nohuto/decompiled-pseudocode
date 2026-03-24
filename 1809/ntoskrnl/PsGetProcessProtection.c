/*
 * XREFs of PsGetProcessProtection @ 0x1401342A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 1738);
}
