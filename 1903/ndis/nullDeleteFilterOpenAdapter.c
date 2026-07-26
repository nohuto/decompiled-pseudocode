/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C00A37DC
 * Callers:
 *     ndisMKillOpen @ 0x1C01379FC (ndisMKillOpen.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C00A2E94 (XRemoveBindingFromLists.c)
 */

void __fastcall nullDeleteFilterOpenAdapter(__int64 *a1, __int64 a2)
{
  XRemoveBindingFromLists(a1, a2);
}
