/*
 * XREFs of RtlTryEndReadTickLock @ 0x1400FC83C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140783CB0 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
