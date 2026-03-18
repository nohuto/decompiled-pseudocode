/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C0051A08
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0041284 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMOnDisplayStateChange()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v6; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 j; // rbx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  LODWORD(v1) = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x46u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RIMGetQDCActivePathsData(v19, v2, v3);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( (HIDWORD(Flink[4].Flink) & 0x1C) != 0 && !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
        LODWORD(v1) = v1 + 1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( (_DWORD)v1 )
    {
      v6 = Win32AllocPool(8LL * (unsigned int)v1, 0x6D707352u);
      v1 = 0LL;
      v0 = v6;
      if ( v6 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v8 = i - 1;
          if ( (HIDWORD(i[4].Flink) & 0x1C) != 0 && !BYTE1(v8[5].Flink) && !LOBYTE(v8[5].Flink) )
          {
            *(_QWORD *)(v6 + 8 * v1) = v8;
            v1 = (unsigned int)(v1 + 1);
          }
        }
      }
    }
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v1 )
  {
    v12 = (__int64 *)v0;
    v13 = (unsigned int)v1;
    do
    {
      if ( !v0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      v14 = *v12;
      v15 = *v12 + 104;
      RIMLockExclusive(v15);
      if ( *(_BYTE *)(v14 + 81) )
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x47u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      }
      else
      {
        v16 = v14 + 568;
        RIMLockExclusive(v14 + 568);
        for ( j = *(_QWORD *)(v14 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1192) )
              rimFindMonitorForDigitizerWithQDCData(j, v4, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 1192) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 480));
          }
        }
        *(_QWORD *)(v16 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v16, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  if ( v0 )
    Win32FreePool(v0);
  RIMFreeQDCActivePathsData(v4);
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x48u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
}
