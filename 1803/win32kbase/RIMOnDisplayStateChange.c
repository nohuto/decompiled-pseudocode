/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C0054E10
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18 (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMOnDisplayStateChange()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  _QWORD *v2; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v4; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r9
  __int64 j; // rbx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  LODWORD(v1) = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x46u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v2 = RIMGetQDCActivePathsData(v17);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( (HIDWORD(Flink[3].Blink) & 0x1C) != 0 && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
        LODWORD(v1) = v1 + 1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( (_DWORD)v1 )
    {
      v4 = Win32AllocPool(8LL * (unsigned int)v1, 0x6D707352u);
      v1 = 0LL;
      v0 = v4;
      if ( v4 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v6 = i - 1;
          if ( (HIDWORD(i[3].Blink) & 0x1C) != 0 && !BYTE1(v6[4].Blink) && !LOBYTE(v6[4].Blink) )
          {
            *(_QWORD *)(v4 + 8 * v1) = v6;
            v1 = (unsigned int)(v1 + 1);
          }
        }
      }
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v1 )
  {
    v9 = (__int64 *)v0;
    v10 = (unsigned int)v1;
    do
    {
      if ( !v0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      v11 = *v9;
      v12 = *v9 + 96;
      RIMLockExclusive(v12);
      if ( *(_BYTE *)(v11 + 73) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x47u,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      }
      else
      {
        v13 = v11 + 552;
        RIMLockExclusive(v11 + 552);
        for ( j = *(_QWORD *)(v11 + 408); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 848) )
              rimFindMonitorForDigitizerWithQDCData(j, (__int64)v2, 0LL, v14);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 848) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 480));
          }
        }
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v12 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  if ( v0 )
    Win32FreePool(v0);
  RIMFreeQDCActivePathsData(v2);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x48u,
           (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
}
