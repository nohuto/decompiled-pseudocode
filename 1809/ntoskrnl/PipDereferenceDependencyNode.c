/*
 * XREFs of PipDereferenceDependencyNode @ 0x14073B12C
 * Callers:
 *     IoResolveDependency @ 0x140181D10 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x140287CA8 (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x14075EA9C (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
