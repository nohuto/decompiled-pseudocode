/*
 * XREFs of ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0067758
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0065C58 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0187CEC (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_EnsureInputSpace(CInputConfig *this, __int64 a2, __int64 a3)
{
  if ( *(CInputConfig **)this == this )
  {
    if ( *((_BYTE *)this + 1248) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    *((_BYTE *)this + 1248) = 1;
    CInputConfig::_CreateLegacyInputSpace(this);
  }
}
