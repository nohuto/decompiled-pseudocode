/*
 * XREFs of StorpInitializeHierarchicalResetBuckets @ 0x1C000E794
 * Callers:
 *     StorpLogPerAdapterStatistics @ 0x1C000E660 (StorpLogPerAdapterStatistics.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C001C9F0 (StorpInitializeAdapterTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpInitializeHierarchicalResetBuckets(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = a1 + 5152;
  result = 5LL;
  do
  {
    *(_QWORD *)(v1 - 4) = 0LL;
    *(_BYTE *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 64) = 1;
    v1 += 12LL;
    --result;
  }
  while ( result );
  return result;
}
