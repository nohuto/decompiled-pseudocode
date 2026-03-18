/*
 * XREFs of ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0041154
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C015341C (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CInputConfig::_EnsureInputSpace(CInputConfig *this)
{
  if ( *(CInputConfig **)this == this )
  {
    if ( *((_BYTE *)this + 1248) )
      MicrosoftTelemetryAssertTriggeredMsgKM("The input space list should always have an entry in legacy mode");
    *((_BYTE *)this + 1248) = 1;
    CInputConfig::_CreateLegacyInputSpace(this);
  }
}
