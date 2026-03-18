/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C000F090
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C000EE90 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C000F2B8 (RIMHidTLCActive.c)
 *     RIMHidValidExclusive @ 0x1C000F2F8 (RIMHidValidExclusive.c)
 *     ApiSetIsRemoteConnection @ 0x1C000F32C (ApiSetIsRemoteConnection.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1C00FCA1C (rimFakePnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  int v2; // edx
  int v3; // r14d
  _QWORD *v4; // rdi
  __int64 i; // rbx
  int v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    20,
    106,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v4 + 73) || *((_BYTE *)v4 + 75) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v3 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        19,
        107,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      for ( i = v4[51]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v6 = *(_DWORD *)(i + 184);
          if ( (v6 & 0x1000) == 0
            && (v6 & 1) == 0
            && (v6 & 2) == 0
            && (v6 & 4) == 0
            && (v6 & 8) == 0
            && (v6 & 0x200) == 0
            && (v6 & 0x4000) == 0 )
          {
            v7 = *(_QWORD *)(i + 472);
            if ( v7 )
            {
              if ( (unsigned int)RIMHidTLCActive(*(_QWORD *)(i + 472)) )
              {
                if ( !*(_QWORD *)(i + 224) )
                {
                  *(_DWORD *)(i + 184) |= 1u;
                  rimOnPnpArrived(v4, i, -1LL);
                  if ( *(_QWORD *)(i + 224) )
                  {
                    if ( (*(_DWORD *)(i + 184) & 0x200) != 0 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM();
                    *(_DWORD *)(i + 200) |= 0x20u;
                  }
                }
              }
              else
              {
                if ( *(_DWORD *)(v7 + 24) || *(_DWORD *)(v7 + 32) > (unsigned int)RIMHidValidExclusive(v7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                if ( *(_QWORD *)(i + 224) )
                {
                  v8 = *(_DWORD *)(i + 200);
                  if ( (v8 & 0x80u) == 0 && (v8 & 0x100) == 0 && (v8 & 0x200) == 0 )
                    rimFakePnpRemoveComplete(v4, i);
                }
              }
            }
          }
        }
      }
    }
    v4[13] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    20,
    108,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v3);
  return (unsigned int)v3;
}
