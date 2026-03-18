/*
 * XREFs of PipSetDevNodeUserFlags @ 0x14073AB78
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 *     PiProcessQueryDeviceState @ 0x140701670 (PiProcessQueryDeviceState.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408628C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x14086E040 (PnpTrackQueryRemoveDevices.c)
 *     PiProcessSetDeviceProblem @ 0x140875198 (PiProcessSetDeviceProblem.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
