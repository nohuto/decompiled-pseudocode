/*
 * XREFs of RIMCmGetButtonContact @ 0x1C0106CD0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F950C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00F993C (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C010248C (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C01065B0 (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 872);
  else
    return 0LL;
}
