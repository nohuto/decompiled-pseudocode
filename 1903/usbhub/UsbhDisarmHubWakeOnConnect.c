/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C00075D8
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0003E60 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007630 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C0007734 (UsbhSetHubRemoteWake.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 */

__int64 __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = FdoExt(a1);
  result = UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(v2 + 2560) & 0x80000) != 0 )
  {
    result = UsbhSetHubRemoteWake(a1);
    if ( (int)result >= 0 )
      *(_DWORD *)(v2 + 2560) &= ~0x80000u;
  }
  return result;
}
