/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C00070B8
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007110 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C0007214 (UsbhSetHubRemoteWake.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
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
