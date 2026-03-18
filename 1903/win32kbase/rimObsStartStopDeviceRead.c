/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C015A600
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C006D06C (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C0159554 (rimObsAddInputObserver.c)
 * Callees:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0068CA0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     RIMHidTLCActive @ 0x1C006C938 (RIMHidTLCActive.c)
 *     RIMSearchHidTLCInfo @ 0x1C006EC1C (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0071A30 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0071AD0 (RIMAllocateAndLinkHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // rbx
  int v10; // eax
  int v11; // eax

  if ( *(_DWORD *)(a1 + 108) != 2 )
    return 0LL;
  v4 = RIMSearchHidTLCInfo(*(_WORD *)(a1 + 112), *(_WORD *)(a1 + 116));
  v8 = v4;
  if ( a2 )
  {
    if ( v4 )
    {
LABEL_9:
      v10 = v8[7];
      if ( a2 )
      {
        v11 = v10 + 1;
      }
      else
      {
        if ( !v10 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
          v10 = v8[7];
        }
        v11 = v10 - 1;
      }
      v8[7] = v11;
      CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
      if ( !v8[5] && !(unsigned int)RIMHidTLCActive(v8) )
        RIMFreeHidTLCInfo((__int64)v8);
      return 0LL;
    }
    v8 = RIMAllocateAndLinkHidTLCInfo(*(_WORD *)(a1 + 112), *(_WORD *)(a1 + 116));
  }
  if ( v8 )
    goto LABEL_9;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  return 3221225626LL;
}
