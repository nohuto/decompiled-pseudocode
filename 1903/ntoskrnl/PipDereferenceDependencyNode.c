/*
 * XREFs of PipDereferenceDependencyNode @ 0x14077028C
 * Callers:
 *     IoResolveDependency @ 0x140192810 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14029DBB4 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x14085DD10 (IoDuplicateDependency.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x140784420 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
