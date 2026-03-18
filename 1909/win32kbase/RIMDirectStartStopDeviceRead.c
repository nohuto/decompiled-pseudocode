/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0057780
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0057620 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     ApiSetIsRemoteConnection @ 0x1C00579BC (ApiSetIsRemoteConnection.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMHidTLCActive @ 0x1C00589D8 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0058A58 (RIMChildInputTypeIsVirtualized.c)
 *     RIMHidValidExclusive @ 0x1C005AFA0 (RIMHidValidExclusive.c)
 *     rimFakePnpRemoveComplete @ 0x1C00A792C (rimFakePnpRemoveComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  int v2; // edx
  int v3; // ebp
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // r14
  unsigned int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 103, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v4 + 81) || *((_BYTE *)v4 + 82) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v3 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 104, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    }
    else
    {
      v5 = v4[53];
      if ( v5 )
      {
        do
        {
          v7 = *(_QWORD *)(v5 + 40);
          v8 = RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48));
          if ( (v8 & 0x3C) != 0 )
          {
            v9 = *(_DWORD *)(v5 + 184);
            if ( (v9 & 0x2000) == 0
              && (v9 & 1) == 0
              && (v9 & 2) == 0
              && (v9 & 4) == 0
              && (v9 & 8) == 0
              && (v9 & 0x400) == 0
              && (v9 & 0x4000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v5 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v8)) )
            {
              v10 = *(_QWORD *)(v5 + 472);
              if ( v10 )
              {
                if ( (unsigned int)RIMHidTLCActive(*(_QWORD *)(v5 + 472)) )
                {
                  if ( !*(_QWORD *)(v5 + 224) )
                  {
                    *(_DWORD *)(v5 + 184) |= 1u;
                    rimOnPnpArrived(v4, v5, (void *)0xFFFFFFFFFFFFFFFFLL);
                    if ( *(_QWORD *)(v5 + 224) )
                    {
                      if ( (*(_DWORD *)(v5 + 184) & 0x400) != 0 )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
                      *(_DWORD *)(v5 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( *(_DWORD *)(v10 + 24) || *(_DWORD *)(v10 + 32) > (unsigned int)RIMHidValidExclusive(v10) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
                  if ( *(_QWORD *)(v5 + 224) )
                  {
                    v17 = *(_DWORD *)(v5 + 200);
                    if ( (v17 & 0x80u) == 0 && (v17 & 0x100) == 0 && (v17 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v4, v5);
                  }
                }
              }
            }
          }
          v5 = v7;
        }
        while ( v7 );
      }
    }
    v4[14] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v2, 1, 105, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v3);
  }
  return (unsigned int)v3;
}
