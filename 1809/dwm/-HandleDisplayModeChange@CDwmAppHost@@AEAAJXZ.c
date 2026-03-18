/*
 * XREFs of ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400011D0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001040 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001220 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qqq @ 0x140005170 (McTemplateU0qqq.c)
 */

__int64 __fastcall CDwmAppHost::HandleDisplayModeChange(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  __int64 result; // rax
  unsigned int v3; // ebx
  HDC DC; // rbx
  int DeviceCaps; // edi
  unsigned int SystemMetrics; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx

  HIBYTE(word_14000B8A0) = 1;
  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v7 = GetSystemMetrics(0);
      McTemplateU0qqq(&Microsoft_Windows_Dwm_Udwm_Provider_Context, v8, v7, SystemMetrics, DeviceCaps);
    }
  }
  result = CDwmAppHost::LpcNotifySettingsChange(v1, 0x21u);
  v3 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x1E1u);
    result = v3;
  }
  HIBYTE(word_14000B8A0) = 0;
  return result;
}
