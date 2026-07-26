/*
 * XREFs of EthDeleteFilterOpenAdapter @ 0x1C00A1A40
 * Callers:
 *     ndisMKillOpen @ 0x1C01379FC (ndisMKillOpen.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C00A3064 (XRemoveBindingFromLists.c)
 */

void __fastcall EthDeleteFilterOpenAdapter(__int64 a1, __int64 a2)
{
  XRemoveBindingFromLists();
  if ( *(_DWORD *)(a2 + 440) )
  {
    ExFreePoolWithTag(*(PVOID *)(a2 + 448), 0);
    ExFreePoolWithTag(*(PVOID *)(a2 + 464), 0);
  }
  *(_QWORD *)(a2 + 448) = 0LL;
  *(_QWORD *)(a2 + 464) = 0LL;
}
