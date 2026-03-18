/*
 * XREFs of ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0198F10
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01530A8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetDwmAsyncNotifyDigitizerActiveContacts(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int v4; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      74,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported();
  if ( (int)result >= 0 )
    result = DwmAsyncNotifyDigitizerActiveContactsWrap(0LL, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v4) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v4,
               10,
               75,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
