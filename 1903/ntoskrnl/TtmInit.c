/*
 * XREFs of TtmInit @ 0x14075B2D0
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 */

TLG_STATUS TtmInit()
{
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  __int16 v3; // ax
  int v4; // eax
  const wchar_t *v5; // rcx
  __int64 v6; // rax
  __int16 v7; // di
  int v8; // eax
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-39h] BYREF
  __int128 v10[8]; // [rsp+48h] [rbp-29h] BYREF

  if ( TtmpEnabled == 1 )
  {
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 2;
    v1 = 0x7FFFLL;
    HIDWORD(v10[1]) = 2031619;
    *((_QWORD *)&v10[3] + 1) = TtmpOpenQueueHandle;
    *(_QWORD *)&v10[4] = TtmpCloseQueueHandle;
    *((_QWORD *)&v10[4] + 1) = TtmpDeleteQueue;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    v2 = L"TerminalEventQueue";
    *(__int128 *)((char *)v10 + 12) = TtmpQueueMapping;
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 176;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v1;
    }
    while ( v1 );
    if ( v1 )
      v3 = 0x7FFF - v1;
    else
      v3 = 0;
    if ( v1 )
    {
      SourceString.Buffer = L"TerminalEventQueue";
      SourceString.Length = 2 * v3;
      SourceString.MaximumLength = 2 * v3 + 2;
    }
    v4 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, (__int16 *)0x80, &TtmpQueueObjectType);
    if ( v4 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v4, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  PoRegisterPowerSettingCallback(
    0LL,
    &GUID_BATTERY_COUNT,
    TtmpDisplayBurstPowerSettingCallback,
    (PVOID)0x10,
    &TtmpBatteryCountPowerSettingRegistration);
  TtmpSession = 0LL;
  if ( TtmpEnabled == 1 )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 6;
    v5 = L"Terminal";
    HIDWORD(v10[1]) = 2031619;
    *((_QWORD *)&v10[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v10[4] = TtmpCloseTerminalHandle;
    *((_QWORD *)&v10[4] + 1) = TtmpDeleteTerminal;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    v6 = 0x7FFFLL;
    *(__int128 *)((char *)v10 + 12) = TtmpTerminalMapping;
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 288;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v6 )
      v7 = 0x7FFF - v6;
    else
      v7 = 0;
    if ( v6 )
    {
      SourceString.Buffer = L"Terminal";
      SourceString.Length = 2 * v7;
      SourceString.MaximumLength = 2 * v7 + 2;
    }
    v8 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( v8 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v8, 0LL, 0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  TraceLoggingRegisterEx(&stru_1409AD8E0, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx(&stru_1409AD8A8, 0LL, 0LL);
}
