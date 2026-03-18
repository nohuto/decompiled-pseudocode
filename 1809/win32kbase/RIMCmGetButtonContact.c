/*
 * XREFs of RIMCmGetButtonContact @ 0x1C012EB74
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0123700 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0123E68 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C012ABF8 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C012BA30 (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C012E3B0 (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 904);
  else
    return 0LL;
}
