/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C010593C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00F2218 (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C0104A1C (rimObsAddInputObserver.c)
 * Callees:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C000EF50 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     RIMHidTLCActive @ 0x1C000F2B8 (RIMHidTLCActive.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00F136C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00F14D0 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00F15C0 (RIMSearchHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v9; // eax
  int v10; // eax

  if ( *(_DWORD *)(a1 + 100) != 2 )
    return 0LL;
  v4 = RIMSearchHidTLCInfo(*(_WORD *)(a1 + 104), *(_WORD *)(a1 + 108));
  v7 = v4;
  if ( a2 )
  {
    if ( v4 )
    {
LABEL_9:
      v9 = v7[7];
      if ( a2 )
      {
        v10 = v9 + 1;
      }
      else
      {
        if ( !v9 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
          v9 = v7[7];
        }
        v10 = v9 - 1;
      }
      v7[7] = v10;
      CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
      if ( !v7[5] && !(unsigned int)RIMHidTLCActive(v7) )
        RIMFreeHidTLCInfo((__int64)v7);
      return 0LL;
    }
    v7 = RIMAllocateAndLinkHidTLCInfo(*(_WORD *)(a1 + 104), *(_WORD *)(a1 + 108));
  }
  if ( v7 )
    goto LABEL_9;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  return 3221225626LL;
}
