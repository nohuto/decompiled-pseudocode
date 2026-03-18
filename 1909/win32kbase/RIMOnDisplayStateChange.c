/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C0054EF8
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0051324 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     RIMGetQDCActivePathsData @ 0x1C0046020 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0051738 (RIMFreeQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnDisplayStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int *v5; // r12
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // edx
  __int64 v18; // rsi
  __int64 j; // rbx
  __int64 result; // rax
  int v21; // edx
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 69, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v22[0] = 0LL;
  v22[1] = 0LL;
  v5 = RIMGetQDCActivePathsData((unsigned int *)v22, a2, a3);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
        LODWORD(v4) = v4 + 1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( (_DWORD)v4 )
    {
      v7 = Win32AllocPool(8LL * (unsigned int)v4, 0x6D707352u);
      v4 = 0LL;
      v3 = v7;
      if ( v7 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v9 = i - 1;
          if ( !BYTE1(i[4].Flink) && !LOBYTE(v9[5].Flink) )
          {
            *(_QWORD *)(v7 + 8 * v4) = v9;
            v4 = (unsigned int)(v4 + 1);
          }
        }
      }
    }
  }
  qword_1C0215788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v4 )
  {
    v13 = (__int64 *)v3;
    v14 = (unsigned int)v4;
    do
    {
      if ( !v3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      v15 = *v13;
      v16 = *v13 + 104;
      RIMLockExclusive(v16);
      if ( *(_BYTE *)(v15 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 70, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
        }
      }
      else
      {
        v18 = v15 + 568;
        RIMLockExclusive(v15 + 568);
        for ( j = *(_QWORD *)(v15 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1336) )
              rimFindMonitorForDigitizerWithQDCData(j, v5, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 1336) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 480));
          }
        }
        *(_QWORD *)(v18 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v18, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  if ( v3 )
    Win32FreePool(v3);
  result = RIMFreeQDCActivePathsData(v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    return WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, 71, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  return result;
}
