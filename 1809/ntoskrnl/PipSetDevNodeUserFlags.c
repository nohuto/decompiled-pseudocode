/*
 * XREFs of PipSetDevNodeUserFlags @ 0x14070E260
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C64 (PiProcessQueryDeviceState.c)
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     PnpShutdownDevices @ 0x140823020 (PnpShutdownDevices.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408283FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x140833718 (PnpTrackQueryRemoveDevices.c)
 *     PiProcessSetDeviceProblem @ 0x14083A53C (PiProcessSetDeviceProblem.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 400) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (((unsigned __int16)v2 ^ (unsigned __int16)(a2 | v2)) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v6 = *(unsigned int *)(a1 + 400);
      result = v2 ^ *(_DWORD *)(a1 + 400);
      if ( (((unsigned __int8)v2 ^ *(_BYTE *)(a1 + 400)) & 0x40) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29);
        LODWORD(v6) = *(_DWORD *)(a1 + 400);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return result;
}
