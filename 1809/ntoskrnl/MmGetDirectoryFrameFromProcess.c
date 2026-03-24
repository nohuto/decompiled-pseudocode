/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1406CB194
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400D8498 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
