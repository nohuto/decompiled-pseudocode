/*
 * XREFs of UsbhEtwGetHubInfo @ 0x1C001FF30
 * Callers:
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhDmTimerDpc @ 0x1C000D480 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0010640 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubInformation @ 0x1C001FA68 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005CC74 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005CD64 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005CE78 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetHubInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  if ( *(_WORD *)(a1 + 5208) )
    ++*(_DWORD *)(a2 + 4);
  v2 = *(unsigned __int16 *)(a1 + 5210);
  *(_DWORD *)(a2 + 12) = v2;
  if ( v2 )
    ++*(_DWORD *)(a2 + 4);
  v3 = *(unsigned __int16 *)(a1 + 5212);
  *(_DWORD *)(a2 + 16) = v3;
  if ( v3 )
    ++*(_DWORD *)(a2 + 4);
  v4 = *(unsigned __int16 *)(a1 + 5214);
  *(_DWORD *)(a2 + 20) = v4;
  if ( v4 )
    ++*(_DWORD *)(a2 + 4);
  v5 = *(unsigned __int16 *)(a1 + 5216);
  *(_DWORD *)(a2 + 24) = v5;
  if ( v5 )
    ++*(_DWORD *)(a2 + 4);
  v6 = *(unsigned __int16 *)(a1 + 5218);
  *(_DWORD *)(a2 + 28) = v6;
  if ( v6 )
    ++*(_DWORD *)(a2 + 4);
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
