/*
 * XREFs of PipIsProviderStarted @ 0x14085E384
 * Callers:
 *     IoResolveDependency @ 0x140192810 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140702CE4 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
