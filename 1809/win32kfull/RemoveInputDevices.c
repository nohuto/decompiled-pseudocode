/*
 * XREFs of RemoveInputDevices @ 0x1C00EA800
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 * Callees:
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00EA8A8 (ForceUpdatePointerDeviceSystemMetricKeys.c)
 */

__int64 RemoveInputDevices()
{
  unsigned int i; // ebx
  _QWORD *v1; // rcx

  for ( i = 0; i <= 2; ++i )
  {
    if ( i )
    {
      v1 = (_QWORD *)gpHidInput;
      if ( i != 2 )
        v1 = (_QWORD *)gpKeyboardSensor;
    }
    else
    {
      v1 = (_QWORD *)gpMouseSensor;
    }
    CBaseInput::HandleTSRequest(*v1, 3LL);
  }
  CBaseInput::HandleTSRequest(gpMouseSensor, 1LL);
  CBaseInput::HandleTSRequest(gpKeyboardSensor, 1LL);
  CBaseInput::HandleTSRequest(gpHidInput, 1LL);
  return ForceUpdatePointerDeviceSystemMetricKeys();
}
