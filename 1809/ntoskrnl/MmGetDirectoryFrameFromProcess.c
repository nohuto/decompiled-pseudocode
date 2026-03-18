/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1406CB1B4
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400D8478 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
