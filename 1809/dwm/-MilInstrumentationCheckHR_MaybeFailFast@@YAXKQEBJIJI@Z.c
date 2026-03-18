/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001040 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400011D0 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001220 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1400014A0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     WinMain @ 0x140001890 (WinMain.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B00 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001BB0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001C60 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001D10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140001FF0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400025B0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002680 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002850 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002970 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x1400054C4 (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400055C0 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140005780 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140005AA0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140005E10 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x140001710 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x140001730 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x140005FA0 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x140006094 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  bool v8; // al
  unsigned int v9; // ecx
  const int *v10; // r11
  char v11; // r10

  v8 = IsOOM(a4);
  if ( (a1 & 0x10) == 0 || !v8 )
  {
    if ( !v10 || !a3 )
    {
      v10 = (const int *)&unk_140008150;
      a3 = 9;
    }
    if ( IsHRInList(v9, v10, a3) )
      goto LABEL_6;
LABEL_12:
    MilInstrumentationHandleFailure_MaybeFailFast(v9, a4, a1, a5);
    return;
  }
  if ( !v10 || !a3 || !IsHRInList(v9, v10, a3) )
    goto LABEL_12;
LABEL_6:
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      DoStackCapture(1u, a4, a5);
  }
}
