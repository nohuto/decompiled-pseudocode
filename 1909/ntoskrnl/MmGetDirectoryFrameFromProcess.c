/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x14066C950
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400D42B8 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
