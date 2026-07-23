/*
 * XREFs of RtlTryEndReadTickLock @ 0x14008A4C4
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14075BA04 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
