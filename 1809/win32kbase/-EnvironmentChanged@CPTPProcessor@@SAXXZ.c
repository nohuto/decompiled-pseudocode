/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C003CDB0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C003CA00 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C003CDF0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void CPTPProcessor::EnvironmentChanged(void)
{
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( CBaseInput::_sessionInitialized )
      CBaseInput::EnumDevices(
        *(CBaseInput **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        0LL,
        lambda_9809129e8e2c8ffa8590d024b20886a2_::_lambda_invoker_cdecl_);
  }
}
