/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C014CBD0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C013C730 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C013F2DC (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01540B8 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0154A00 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C005C344 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C014DD84 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01530A8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

_QWORD *__fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      51,
      (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
  }
  result = rimFindHoldingFrame(a1, v2);
  if ( result && *((_DWORD *)result + 4) )
  {
    rimReclaimHoldingFrame(v6, v5, result);
    result = (_QWORD *)RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0LL, 1LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      return (_QWORD *)WPP_RECORDER_SF_(
                         WPP_GLOBAL_Control->DeviceExtension,
                         v5,
                         1,
                         52,
                         (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
    }
  }
  return result;
}
