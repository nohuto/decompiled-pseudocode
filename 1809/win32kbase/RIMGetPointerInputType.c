/*
 * XREFs of RIMGetPointerInputType @ 0x1C0117D70
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01102DC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C011073C (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C01192B0 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C012886C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C012BA30 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
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
  WPP_RECORDER_SF_q(gRimLog, 3u, 0x14u, 0xAu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, a1);
  return 1LL;
}
