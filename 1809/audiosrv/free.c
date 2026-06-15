/*
 * XREFs of free @ 0x1800616A0
 * Callers:
 *     ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x18005FF24 (--1CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x180133724 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
