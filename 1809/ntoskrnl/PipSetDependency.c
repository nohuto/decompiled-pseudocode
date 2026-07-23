/*
 * XREFs of PipSetDependency @ 0x140825410
 * Callers:
 *     PipConvertResolutionsToReservations @ 0x14075EB00 (PipConvertResolutionsToReservations.c)
 *     IoReserveDependency @ 0x140824BF0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140824C80 (IoSetDependency.c)
 * Callees:
 *     PipAddDependencyEdgeBetweenNodes @ 0x140287AB4 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipQueryBindingResolution @ 0x14073B088 (PipQueryBindingResolution.c)
 *     PipCreateDependencyNode @ 0x14073B148 (PipCreateDependencyNode.c)
 *     PipDeleteDependencyNode @ 0x14075EA9C (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipSetDependency(__int64 a1, __int64 a2)
{
  __int64 *BindingResolution; // rax
  __int64 DependencyNode; // rdi
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rbx
  bool v9; // zf

  BindingResolution = PipQueryBindingResolution(a1);
  DependencyNode = (__int64)BindingResolution;
  if ( BindingResolution )
  {
    ++*((_DWORD *)BindingResolution + 22);
  }
  else
  {
    DependencyNode = PipCreateDependencyNode(a1);
    if ( !DependencyNode )
      return (unsigned int)-1073741670;
  }
  v7 = PipQueryBindingResolution(a2);
  v8 = (__int64)v7;
  if ( v7 )
  {
    ++*((_DWORD *)v7 + 22);
    goto LABEL_9;
  }
  v8 = PipCreateDependencyNode(a2);
  if ( v8 )
  {
LABEL_9:
    v6 = PipAddDependencyEdgeBetweenNodes(DependencyNode, v8, a2);
    goto LABEL_10;
  }
  v6 = -1073741670;
LABEL_10:
  v9 = (*(_DWORD *)(DependencyNode + 88))-- == 1;
  if ( v9 )
    PipDeleteDependencyNode((_QWORD *)DependencyNode);
  if ( v8 )
  {
    v9 = (*(_DWORD *)(v8 + 88))-- == 1;
    if ( v9 )
      PipDeleteDependencyNode((_QWORD *)v8);
  }
  return v6;
}
