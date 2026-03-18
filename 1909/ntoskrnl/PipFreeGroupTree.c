/*
 * XREFs of PipFreeGroupTree @ 0x140A12158
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A109A8 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140A12158 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140A12158 (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
