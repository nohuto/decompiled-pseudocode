/*
 * XREFs of PsIsGuiThread @ 0x1408C5FA4
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsGuiThread(__int64 a1)
{
  return *(_BYTE *)(a1 + 120) >> 7;
}
