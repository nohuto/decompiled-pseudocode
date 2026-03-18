/*
 * XREFs of RIMCmGetButtonContact @ 0x1C0159964
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013951C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C014D5A4 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C014DDDC (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C01557A0 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0156818 (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C015919C (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 912);
  else
    return 0LL;
}
