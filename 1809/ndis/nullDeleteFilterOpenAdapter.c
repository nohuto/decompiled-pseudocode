/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C00688FC
 * Callers:
 *     ndisMKillOpen @ 0x1C0116A68 (ndisMKillOpen.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C0068090 (XRemoveBindingFromLists.c)
 */

void __fastcall nullDeleteFilterOpenAdapter(__int64 *a1, __int64 a2)
{
  XRemoveBindingFromLists(a1, a2);
}
