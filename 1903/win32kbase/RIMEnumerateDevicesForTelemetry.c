/*
 * XREFs of RIMEnumerateDevicesForTelemetry @ 0x1C00B3D6C
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00B40C0 (RIMOnPowerNotification.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C006C9DC (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00B4004 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00B4054 (RIMLogDeviceHealthTelemetry.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnumerateDevicesForTelemetry(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int128 v3; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _LIST_ENTRY *v7; // rbx
  struct _LIST_ENTRY *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int i; // edi
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 j; // rbx
  unsigned int v18; // [rsp+38h] [rbp-39h] BYREF
  __int64 v19; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  unsigned int *v21; // [rsp+68h] [rbp-9h]
  __int64 v22; // [rsp+70h] [rbp-1h]
  __int64 *v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int64 *v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  __int64 v27; // [rsp+E0h] [rbp+6Fh] BYREF

  v27 = a2;
  v18 = 0;
  v2 = 0LL;
  v3 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v19 = *((_QWORD *)&v3 + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    BYTE8(v3) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, DWORD2(v3), 1, 153, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v5 = v18;
  while ( Flink != &gObRimList )
  {
    if ( HIDWORD(Flink[4].Flink) && !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
    {
      v5 = (unsigned int)(v5 + 1);
      v18 = v5;
    }
    Flink = Flink->Flink;
  }
  if ( (_DWORD)v5 )
  {
    v2 = Win32AllocPool(8 * v5, 0x6D707352u);
    v6 = 0LL;
    v18 = 0;
    if ( v2 )
    {
      v7 = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        while ( 1 )
        {
          v8 = v7 - 1;
          if ( HIDWORD(v7[4].Flink) && !BYTE1(v8[5].Flink) && !LOBYTE(v8[5].Flink) )
          {
            *(_QWORD *)(v2 + 8 * v6) = v8;
            ++v18;
          }
          v7 = v7->Flink;
          InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v8);
          if ( v7 == &gObRimList )
            break;
          v6 = v18;
        }
      }
    }
  }
  qword_1C0218788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
  {
    v22 = 4LL;
    v21 = &v18;
    v23 = &v19;
    v25 = &v27;
    v24 = 8LL;
    v26 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E4803, 0LL, 0LL, 5u, &pData);
  }
  for ( i = 0; i < v18; ++i )
  {
    if ( !v2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v13 = *(_QWORD *)(v2 + 8LL * i);
    v14 = v13 + 104;
    RIMLockExclusive(v13 + 104);
    if ( !*(_BYTE *)(v13 + 81) && !*(_BYTE *)(v13 + 82) )
    {
      v15 = v13 + 568;
      RIMLockExclusive(v13 + 568);
      for ( j = *(_QWORD *)(v13 + 424); j; j = *(_QWORD *)(j + 40) )
      {
        RIMLogDeviceHealthTelemetry(j, L"RIMOnPowerNotification", v19);
        InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)j);
      }
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v2 )
    Win32FreePool(v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 154, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  return 0LL;
}
