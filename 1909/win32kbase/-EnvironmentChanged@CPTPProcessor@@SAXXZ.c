/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0053780
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0053740 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C014AAF8 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C00537C0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void CPTPProcessor::EnvironmentChanged(void)
{
  if ( gpHidInput )
  {
    if ( CBaseInput::_sessionInitialized )
      CBaseInput::EnumDevices(gpHidInput, 0LL, lambda_9809129e8e2c8ffa8590d024b20886a2_::_lambda_invoker_cdecl_);
  }
}
