/*
 * XREFs of PipDereferenceDependencyNode @ 0x140773870
 * Callers:
 *     IoResolveDependency @ 0x140192FF0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14029D914 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x140786780 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
