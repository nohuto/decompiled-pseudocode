/*
 * XREFs of RtlTryEndReadTickLock @ 0x1400F8D9C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140781950 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
