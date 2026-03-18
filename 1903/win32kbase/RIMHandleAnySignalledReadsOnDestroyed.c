/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1C006AAF4
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00697AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ULONG64 __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1, _QWORD *a2)
{
  ULONG64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 59, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  result = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(unsigned int *)(result + 272);
    if ( (v4 & 0x40000000) != 0 )
    {
      v5 = *(_QWORD *)(result + 424);
      if ( (v4 & 0x2000) != 0 )
      {
        v6 = *(_QWORD *)(result + 112);
      }
      else
      {
        v6 = *(_QWORD *)(result + 432);
        if ( !v6 )
          v6 = *(_QWORD *)(result + 104);
      }
      if ( *(_DWORD *)(v5 + 656) )
      {
        v7 = *(_QWORD **)(v5 + 672);
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (_QWORD *)MmUserProbeAddress;
        if ( *v7 != v6 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v7, v6);
        a2 = *(_QWORD **)(v5 + 672);
        result = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = -1LL;
      }
      else
      {
        result = *(_QWORD *)(v5 + 672);
        if ( *(_QWORD *)result != v6 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
          result = *(_QWORD *)(v5 + 672);
        }
        *(_QWORD *)result = -1LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_(
             (_DWORD)gRimLog,
             (_DWORD)a2,
             1,
             61,
             (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  return result;
}
