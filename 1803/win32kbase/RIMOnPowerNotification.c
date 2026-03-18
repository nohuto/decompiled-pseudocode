/*
 * XREFs of RIMOnPowerNotification @ 0x1C00E3AD0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00E1508 (RIMDoMobileKeyboardInvalidation.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00E18F4 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMDoOnPowerNotification @ 0x1C00F1744 (RIMDoOnPowerNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPowerNotification(char *a1, __int64 a2)
{
  int v3; // r15d
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 k; // rdi
  int v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // r8
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // r14
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 j; // rdi
  int v21; // eax
  __int64 v23; // [rsp+28h] [rbp-50h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  Object = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x4Du,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  if ( a1 == (char *)-1LL )
  {
    if ( a2 == 2 )
    {
      v9 = 0LL;
      v10 = 0;
      RIMLockExclusive((__int64)&gObListLock);
      Flink = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        do
        {
          if ( (HIDWORD(Flink[3].Blink) & 0x20) != 0
            && !BYTE1(Flink[3].Blink)
            && !LOBYTE(Flink[3].Blink)
            && !HIDWORD(Flink[52].Flink) )
          {
            ++v10;
          }
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v10 )
        {
          v9 = Win32AllocPool(8LL * v10, 0x6D707352u);
          v10 = 0;
          if ( v9 )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v13 = i - 1;
              if ( (HIDWORD(i[3].Blink) & 0x20) != 0
                && !BYTE1(v13[4].Blink)
                && !LOBYTE(v13[4].Blink)
                && !HIDWORD(v13[53].Flink) )
              {
                v14 = v10++;
                *(_QWORD *)(v9 + 8 * v14) = v13;
              }
            }
          }
        }
      }
      qword_1C01A1640 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v10 )
      {
        v17 = (__int64 *)v9;
        v18 = v10;
        do
        {
          if ( !v9 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
          v19 = *v17;
          RIMLockExclusive(*v17 + 96);
          if ( *(_BYTE *)(v19 + 73) || *(_BYTE *)(v19 + 75) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x50u,
              (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
          }
          else
          {
            RIMLockExclusive(v19 + 552);
            for ( j = *(_QWORD *)(v19 + 408); j; j = *(_QWORD *)(j + 40) )
            {
              v21 = *(_DWORD *)(j + 184);
              if ( (v21 & 0x2000) != 0 && (v21 & 0x4000) != 0 )
              {
                RIMDoMobileKeyboardInvalidation((_BYTE *)v19, j);
              }
              else if ( !*(_DWORD *)(v19 + 848) )
              {
                WPP_RECORDER_SF_qq(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  0x15u,
                  0x4Fu,
                  (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
                  v19,
                  j);
                DbgPrintRIMAlways(
                  "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!\n",
                  (const void *)v19,
                  (const void *)j);
              }
            }
            *(_QWORD *)(v19 + 560) = 0LL;
            ExReleasePushLockExclusiveEx(v19 + 552, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(v19 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v19 + 96, 0LL);
          KeLeaveCriticalRegion();
          ++v17;
          --v18;
        }
        while ( v18 );
        v3 = 0;
      }
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  else
  {
    v3 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
    if ( v3 >= 0 )
    {
      RIMEnumerateDevicesForTelemetry(v5, a2);
      v6 = Object;
      RIMLockExclusive((__int64)Object + 96);
      if ( *((_BYTE *)v6 + 73) || *((_BYTE *)v6 + 75) )
      {
        v3 = -1073741637;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x4Eu,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      }
      else
      {
        RIMLockExclusive((__int64)(v6 + 69));
        for ( k = v6[51]; k; k = *(_QWORD *)(k + 40) )
        {
          v8 = RIMDoOnPowerNotification(v6, k, a2);
          *(_DWORD *)(k + 1652) = 0;
          v3 = v8;
          *(_DWORD *)(k + 1664) = 0;
          *(_QWORD *)(k + 1656) = 0LL;
        }
        v6[70] = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 69, 0LL);
        KeLeaveCriticalRegion();
      }
      v6[13] = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 12, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v6);
    }
  }
  LODWORD(v23) = v3;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x51u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v23);
  return (unsigned int)v3;
}
