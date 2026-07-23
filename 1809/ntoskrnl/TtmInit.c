/*
 * XREFs of TtmInit @ 0x140763590
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 */

TLG_STATUS TtmInit()
{
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  int v3; // eax
  const wchar_t *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v8[8]; // [rsp+40h] [rbp-29h] BYREF

  if ( TtmpEnabled == 1 )
  {
    memset(v8, 0, 0x78uLL);
    LOWORD(v8[0]) = 120;
    DWORD2(v8[0]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 2;
    v1 = 0x7FFFLL;
    HIDWORD(v8[1]) = 2031619;
    *((_QWORD *)&v8[3] + 1) = TtmpOpenQueueHandle;
    *(_QWORD *)&v8[4] = TtmpCloseQueueHandle;
    *((_QWORD *)&v8[4] + 1) = TtmpDeleteQueue;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    v2 = L"TerminalEventQueue";
    *(__int128 *)((char *)v8 + 12) = TtmpQueueMapping;
    DWORD1(v8[2]) = 512;
    HIDWORD(v8[2]) = 176;
    while ( *v2 )
    {
      ++v2;
      if ( !--v1 )
        goto LABEL_11;
    }
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = 2 * (0x7FFF - v1);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_11:
    v3 = ObCreateObjectTypeEx(&SourceString, v8, 0LL, (__int16 *)0x80, &TtmpQueueObjectType);
    if ( v3 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v3, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  PoRegisterPowerSettingCallback(
    0LL,
    &GUID_ACDC_POWER_SOURCE,
    (PPOWER_SETTING_CALLBACK)TtmpDisplayBurstPowerSettingCallback,
    (PVOID)5,
    &TtmpAcDcPowerSettingRegistration);
  PoRegisterPowerSettingCallback(
    0LL,
    &GUID_BATTERY_COUNT,
    (PPOWER_SETTING_CALLBACK)TtmpDisplayBurstPowerSettingCallback,
    (PVOID)0x10,
    &TtmpBatteryCountPowerSettingRegistration);
  TtmpSession = 0LL;
  if ( TtmpEnabled == 1 )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    memset(v8, 0, 0x78uLL);
    LOWORD(v8[0]) = 120;
    DWORD2(v8[0]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 6;
    v4 = L"Terminal";
    HIDWORD(v8[1]) = 2031619;
    *((_QWORD *)&v8[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v8[4] = TtmpCloseTerminalHandle;
    *((_QWORD *)&v8[4] + 1) = TtmpDeleteTerminal;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    v5 = 0x7FFFLL;
    *(__int128 *)((char *)v8 + 12) = TtmpTerminalMapping;
    DWORD1(v8[2]) = 512;
    HIDWORD(v8[2]) = 288;
    while ( *v4 )
    {
      ++v4;
      if ( !--v5 )
        goto LABEL_20;
    }
    SourceString.Buffer = L"Terminal";
    SourceString.Length = 2 * (0x7FFF - v5);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_20:
    v6 = ObCreateObjectTypeEx(&SourceString, v8, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( v6 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v6, 0LL, 0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  TraceLoggingRegisterEx(&stru_14096E820, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx(&stru_14096E7E8, 0LL, 0LL);
}
