/*
 * XREFs of PspJobIsSilo @ 0x14008F4F8
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406075F0 (PspJobClose.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspJobIsSilo(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0;
}
