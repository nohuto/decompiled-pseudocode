/*
 * XREFs of ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x1800DB510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Mesh::MeshEdge::MeshEdgeNode *__fastcall Mesh::RadialEdgeList::GetNode(
        Mesh::RadialEdgeList *this,
        const struct Mesh::MeshEdge *a2)
{
  return (const struct Mesh::MeshEdge *)((char *)a2 + 72);
}
