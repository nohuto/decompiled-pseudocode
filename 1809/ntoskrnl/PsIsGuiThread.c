/*
 * XREFs of PsIsGuiThread @ 0x140888764
 * Callers:
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsGuiThread(__int64 a1)
{
  return *(_BYTE *)(a1 + 120) >> 7;
}
