/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001080 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140001210 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001260 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001590 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     WinMain @ 0x140001960 (WinMain.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001CC0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001D70 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001E20 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001F30 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140002200 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400027C0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002890 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002A60 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002B70 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x140005E94 (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140005F90 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140006150 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140006470 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x1400067D0 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x140001830 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x140001850 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x140008DB4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140008F1C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  bool v8; // al
  int v9; // ecx
  void *v10; // r9
  const int *v11; // r11
  char v12; // r10

  v8 = IsOOM(a4);
  if ( (a1 & 0x10) == 0 || !v8 )
  {
    if ( !v11 || !a3 )
    {
      v11 = (const int *)&unk_14000BF80;
      a3 = 9;
    }
    if ( IsHRInList(v9, v11, a3) )
      goto LABEL_6;
LABEL_12:
    MilInstrumentationHandleFailure_MaybeFailFast(a4, a1, a5, v10);
    return;
  }
  if ( !v11 || !a3 || !IsHRInList(v9, v11, a3) )
    goto LABEL_12;
LABEL_6:
  if ( (a1 & 4) != 0 )
  {
    if ( v12 )
      DoStackCapture(a4, a5, v10);
  }
}
