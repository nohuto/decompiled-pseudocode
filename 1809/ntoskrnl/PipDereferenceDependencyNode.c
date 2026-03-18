/*
 * XREFs of PipDereferenceDependencyNode @ 0x140739F5C
 * Callers:
 *     IoResolveDependency @ 0x140181BB0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1402879B8 (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x14075D8CC (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
