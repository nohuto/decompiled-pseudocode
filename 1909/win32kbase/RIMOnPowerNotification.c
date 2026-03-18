/*
 * XREFs of RIMOnPowerNotification @ 0x1C00B0E00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00B09B8 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMDoOnPowerNotification @ 0x1C00B0D04 (RIMDoOnPowerNotification.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPowerNotification(char *a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  int v7; // edx
  __int64 j; // rdi
  int v10; // eax
  __int64 *v11; // rsi
  unsigned int v12; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // r14
  __int64 v20; // r12
  __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdi
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 75, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  if ( a1 == (char *)-1LL )
  {
    if ( v2 == 2 )
    {
      Object = 0LL;
      v11 = 0LL;
      v12 = 0;
      RIMLockExclusive((__int64)&gObListLock);
      Flink = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        do
        {
          if ( (HIDWORD(Flink[4].Flink) & 0x20) != 0 && !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
            ++v12;
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v12 )
        {
          Object = (PVOID)Win32AllocPool(8LL * v12, 0x6D707352u);
          v11 = (__int64 *)Object;
          v12 = 0;
          if ( Object )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v15 = i - 1;
              if ( (HIDWORD(i[4].Flink) & 0x20) != 0 && !BYTE1(v15[5].Flink) && !LOBYTE(v15[5].Flink) )
              {
                v16 = v12++;
                v11[v16] = (__int64)v15;
              }
            }
          }
        }
      }
      qword_1C0215788 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
      {
        v19 = v11;
        v20 = v12;
        do
        {
          if ( !v11 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, a2, v18);
          v21 = *v19;
          RIMLockExclusive(*v19 + 104);
          if ( *(_BYTE *)(v21 + 81) || *(_BYTE *)(v21 + 82) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = 3;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v22, 1, 78, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
            }
          }
          else
          {
            v24 = *(_QWORD *)(v21 + 424);
            if ( v24 )
            {
              do
              {
                if ( (*(_DWORD *)(v24 + 184) & 0x4000) != 0 )
                {
                  InputExtensibilityCallout::CoreMsgSendMessage(v23, 10);
                }
                else if ( !*(_DWORD *)(v21 + 864) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v22) = 4;
                    WPP_RECORDER_SF_qq(
                      (_DWORD)gRimLog,
                      v22,
                      1,
                      77,
                      (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
                      v21,
                      v24);
                  }
                  DbgPrintGDI(
                    "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!",
                    (const void *)v21,
                    (const void *)v24);
                }
                v24 = *(_QWORD *)(v24 + 40);
              }
              while ( v24 );
              v11 = (__int64 *)Object;
            }
          }
          *(_QWORD *)(v21 + 112) = 0LL;
          ExReleasePushLockExclusiveEx(v21 + 104, 0LL);
          KeLeaveCriticalRegion();
          ++v19;
          --v20;
        }
        while ( v20 );
        v3 = 0;
      }
      if ( v11 )
        Win32FreePool((__int64)v11);
    }
  }
  else
  {
    v3 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
    if ( v3 >= 0 )
    {
      RIMEnumerateDevicesForTelemetry(v5, v2);
      v6 = Object;
      RIMLockExclusive((__int64)Object + 104);
      if ( *((_BYTE *)v6 + 81) || *((_BYTE *)v6 + 82) )
      {
        v3 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 76, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
        }
      }
      else
      {
        RIMLockExclusive((__int64)(v6 + 71));
        for ( j = v6[53]; j; j = *(_QWORD *)(j + 40) )
        {
          v10 = RIMDoOnPowerNotification((int)v6, j, v2);
          *(_DWORD *)(j + 2196) = 0;
          v3 = v10;
          *(_DWORD *)(j + 2208) = 0;
          *(_QWORD *)(j + 2200) = 0LL;
        }
        v6[72] = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 71, 0LL);
        KeLeaveCriticalRegion();
      }
      v6[14] = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v6);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, a2, 1, 79, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v3);
  }
  return (unsigned int)v3;
}
