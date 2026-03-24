/*
 * XREFs of PipIsProviderStarted @ 0x140823F34
 * Callers:
 *     IoResolveDependency @ 0x140181BD0 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406E6BD8 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
