/*
 * XREFs of RIMEnumerateDevicesForTelemetry @ 0x1C00A4344
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00A41C0 (RIMOnPowerNotification.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0051990 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00A45C0 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00A4610 (RIMLogDeviceHealthTelemetry.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnumerateDevicesForTelemetry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v4; // eax
  __int64 v5; // rax
  struct _LIST_ENTRY *v6; // rbx
  struct _LIST_ENTRY *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int i; // esi
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 j; // rbx
  unsigned int v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  unsigned int *v20; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  __int64 *v22; // [rsp+78h] [rbp+7h]
  __int64 v23; // [rsp+80h] [rbp+Fh]
  __int64 *v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  __int64 v26; // [rsp+E0h] [rbp+6Fh] BYREF

  v26 = a2;
  v17 = 0;
  v2 = 0LL;
  v18 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x9Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v4 = 0;
  while ( Flink != &gObRimList )
  {
    if ( HIDWORD(Flink[4].Flink) && !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
      v17 = ++v4;
    Flink = Flink->Flink;
  }
  if ( v4 )
  {
    v2 = Win32AllocPool(8LL * v4, 0x6D707352u);
    v5 = 0LL;
    v17 = 0;
    if ( v2 )
    {
      v6 = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        while ( 1 )
        {
          v7 = v6 - 1;
          if ( HIDWORD(v6[4].Flink) && !BYTE1(v7[5].Flink) && !LOBYTE(v7[5].Flink) )
          {
            *(_QWORD *)(v2 + 8 * v5) = v7;
            ++v17;
          }
          v6 = v6->Flink;
          InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v7);
          if ( v6 == &gObRimList )
            break;
          v5 = v17;
        }
      }
    }
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
  {
    v21 = 4LL;
    v20 = &v17;
    v22 = &v18;
    v24 = &v26;
    v23 = 8LL;
    v25 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019E9B2, 0LL, 0LL, 5u, &pData);
  }
  for ( i = 0; i < v17; ++i )
  {
    if ( !v2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v12 = *(_QWORD *)(v2 + 8LL * i);
    v13 = v12 + 104;
    RIMLockExclusive(v12 + 104);
    if ( !*(_BYTE *)(v12 + 81) && !*(_BYTE *)(v12 + 82) )
    {
      v14 = v12 + 568;
      RIMLockExclusive(v12 + 568);
      for ( j = *(_QWORD *)(v12 + 424); j; j = *(_QWORD *)(j + 40) )
      {
        RIMLogDeviceHealthTelemetry(j, L"RIMOnPowerNotification", v18);
        InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)j);
      }
      *(_QWORD *)(v14 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v2 )
    Win32FreePool(v2);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x9Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  return 0LL;
}
