/*
 * XREFs of PspJobIsSilo @ 0x1400838C0
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspJobIsSilo(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0;
}
