/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C00AE03C
 * Callers:
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00AC070 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ?ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z @ 0x1C00ACEC8 (-ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
