/*
 * XREFs of PspJobIsSilo @ 0x14008F5D8
 * Callers:
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406065F0 (PspJobClose.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspJobIsSilo(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0;
}
