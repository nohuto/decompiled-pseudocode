/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C0158408
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00597C8 (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C015735C (rimObsAddInputObserver.c)
 * Callees:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0054650 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     RIMHidTLCActive @ 0x1C00589D8 (RIMHidTLCActive.c)
 *     RIMSearchHidTLCInfo @ 0x1C005AFD4 (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C005B5F0 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C005B68C (RIMAllocateAndLinkHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
