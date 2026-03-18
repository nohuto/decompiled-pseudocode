/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0050200
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0050190 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     ApiSetIsRemoteConnection @ 0x1C00503D8 (ApiSetIsRemoteConnection.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMHidTLCActive @ 0x1C0051510 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     RIMHidValidExclusive @ 0x1C00949F4 (RIMHidValidExclusive.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     rimFakePnpRemoveComplete @ 0x1C01259D0 (rimFakePnpRemoveComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  int v2; // r14d
  _QWORD *v3; // rdi
  __int64 i; // rbx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x69u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v3 + 81) || *((_BYTE *)v3 + 82) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x6Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      for ( i = v3[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v6 = *(_DWORD *)(i + 184);
          if ( (v6 & 0x2000) == 0
            && (v6 & 1) == 0
            && (v6 & 2) == 0
            && (v6 & 4) == 0
            && (v6 & 8) == 0
            && (v6 & 0x400) == 0
            && (v6 & 0x4000) == 0 )
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(
              (unsigned int)&Feature_InputVirtualization__private_propertyCache,
              16291462,
              (unsigned int)&unk_1C01933C8,
              0,
              3);
            v7 = *(_QWORD *)(i + 472);
            if ( v7 )
            {
              if ( (unsigned int)RIMHidTLCActive(*(_QWORD *)(i + 472)) )
              {
                if ( !*(_QWORD *)(i + 224) )
                {
                  *(_DWORD *)(i + 184) |= 1u;
                  rimOnPnpArrived(v3, i, (void *)0xFFFFFFFFFFFFFFFFLL);
                  if ( *(_QWORD *)(i + 224) )
                  {
                    if ( (*(_DWORD *)(i + 184) & 0x400) != 0 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
                    *(_DWORD *)(i + 200) |= 0x20u;
                  }
                }
              }
              else
              {
                if ( *(_DWORD *)(v7 + 24) || *(_DWORD *)(v7 + 32) > (unsigned int)RIMHidValidExclusive(v7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
                if ( *(_QWORD *)(i + 224) )
                {
                  v14 = *(_DWORD *)(i + 200);
                  if ( (v14 & 0x80u) == 0 && (v14 & 0x100) == 0 && (v14 & 0x200) == 0 )
                    rimFakePnpRemoveComplete(v3, i);
                }
              }
            }
          }
        }
      }
    }
    v3[14] = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x6Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v2);
  return (unsigned int)v2;
}
