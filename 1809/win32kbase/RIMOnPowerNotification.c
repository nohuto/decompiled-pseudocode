/*
 * XREFs of RIMOnPowerNotification @ 0x1C00A41C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00A4344 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMDoOnPowerNotification @ 0x1C00A4674 (RIMDoOnPowerNotification.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPowerNotification(char *a1, __int64 a2)
{
  int v3; // r15d
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 k; // rdi
  int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // r14
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 j; // rdi
  __int64 v24; // [rsp+28h] [rbp-60h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  Object = 0LL;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x4Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  if ( a1 == (char *)-1LL )
  {
    if ( a2 == 2 )
    {
      v10 = 0LL;
      v11 = 0;
      RIMLockExclusive((__int64)&gObListLock);
      Flink = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        do
        {
          if ( (HIDWORD(Flink[4].Flink) & 0x20) != 0 && !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
            ++v11;
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v11 )
        {
          v10 = Win32AllocPool(8LL * v11, 0x6D707352u);
          v11 = 0;
          if ( v10 )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v14 = i - 1;
              if ( (HIDWORD(i[4].Flink) & 0x20) != 0 && !BYTE1(v14[5].Flink) && !LOBYTE(v14[5].Flink) )
              {
                v15 = v11++;
                *(_QWORD *)(v10 + 8 * v15) = v14;
              }
            }
          }
        }
      }
      qword_1C01D0F90 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v11 )
      {
        v19 = (__int64 *)v10;
        v20 = v11;
        do
        {
          if ( !v10 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
          v21 = *v19;
          RIMLockExclusive(*v19 + 104);
          if ( *(_BYTE *)(v21 + 81) || *(_BYTE *)(v21 + 82) )
          {
            WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x4Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
          }
          else
          {
            for ( j = *(_QWORD *)(v21 + 424); j; j = *(_QWORD *)(j + 40) )
            {
              if ( (*(_DWORD *)(j + 184) & 0x4000) != 0 )
              {
                InputExtensibilityCallout::CoreMsgSendMessage(v22, 10);
              }
              else if ( !*(_DWORD *)(v21 + 864) )
              {
                WPP_RECORDER_SF_qq(
                  gRimLog,
                  3u,
                  0x16u,
                  0x4Eu,
                  (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
                  v21,
                  j);
                DbgPrintRIMAlways("pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!\n");
              }
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
      if ( v10 )
        Win32FreePool(v10);
    }
  }
  else
  {
    v3 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
    if ( v3 >= 0 )
    {
      RIMEnumerateDevicesForTelemetry(v5, a2);
      v6 = Object;
      RIMLockExclusive((__int64)Object + 104);
      if ( *((_BYTE *)v6 + 81) || *((_BYTE *)v6 + 82) )
      {
        v3 = -1073741637;
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x4Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      }
      else
      {
        RIMLockExclusive((__int64)(v6 + 71));
        for ( k = v6[53]; k; k = *(_QWORD *)(k + 40) )
        {
          v9 = RIMDoOnPowerNotification(v6, k, a2);
          *(_DWORD *)(k + 2004) = 0;
          v3 = v9;
          *(_DWORD *)(k + 2016) = 0;
          *(_QWORD *)(k + 2008) = 0LL;
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
  LODWORD(v24) = v3;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x50u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v24);
  return (unsigned int)v3;
}
