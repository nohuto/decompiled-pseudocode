/*
 * XREFs of RIMEnumerateDevicesForTelemetry @ 0x1C00E18F4
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00E3AD0 (RIMOnPowerNotification.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00E319C (RIMLogDeviceHealthTelemetry.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnumerateDevicesForTelemetry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // ecx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r9
  unsigned int j; // esi
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 k; // rbx
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
  v19 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x97u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v4 = 0;
  while ( Flink != &gObRimList )
  {
    if ( HIDWORD(Flink[3].Blink) && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
      v18 = ++v4;
    Flink = Flink->Flink;
  }
  if ( v4 )
  {
    v5 = Win32AllocPool(8LL * v4, 0x6D707352u);
    v6 = 0;
    v2 = v5;
    v18 = 0;
    if ( v5 )
    {
      for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
      {
        v8 = i - 1;
        if ( HIDWORD(i[3].Blink) && !BYTE1(v8[4].Blink) && !LOBYTE(v8[4].Blink) )
        {
          *(_QWORD *)(v5 + 8LL * v6) = v8;
          v6 = ++v18;
        }
      }
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
  {
    v22 = 4LL;
    v21 = &v18;
    v23 = &v19;
    v25 = &v27;
    v24 = 8LL;
    v26 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C017835F, 0LL, v11, 5u, &pData);
  }
  for ( j = 0; j < v18; ++j )
  {
    if ( !v2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    v13 = *(_QWORD *)(v2 + 8LL * j);
    v14 = v13 + 96;
    RIMLockExclusive(v13 + 96);
    if ( !*(_BYTE *)(v13 + 73) && !*(_BYTE *)(v13 + 75) )
    {
      v15 = v13 + 552;
      RIMLockExclusive(v13 + 552);
      for ( k = *(_QWORD *)(v13 + 408); k; k = *(_QWORD *)(k + 40) )
        RIMLogDeviceHealthTelemetry(k, L"RIMOnPowerNotification", v19);
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
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x98u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  return 0LL;
}
