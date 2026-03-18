/*
 * XREFs of PipFreeGroupTree @ 0x1409CC4A0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x1409CC4A0 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x1409CC4A0 (PipFreeGroupTree.c)
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
