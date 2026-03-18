/*
 * XREFs of RIMGetPointerInputType @ 0x1C013DE10
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0138B9C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C013901C (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C013F450 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C015339C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0153BFC (rimDoProcessAnyPointerDeviceInput.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0156818 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v1 - 1) <= 3 )
    return 2LL;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 3LL;
  if ( v1 == 7 )
    return 5LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v1, 1, 10, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids, a1);
  }
  return 1LL;
}
