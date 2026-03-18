/*
 * XREFs of PiUpdateGuestAssignedState @ 0x140703370
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140703450 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140732204 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PipSendGuestAssignedNotification @ 0x1408775AC (PipSendGuestAssignedNotification.c)
 *     PipSetGuestAssignedProperty @ 0x14087764C (PipSetGuestAssignedProperty.c)
 */

__int64 __fastcall PiUpdateGuestAssignedState(__int64 a1, __int64 a2)
{
  int v2; // r9d
  char v3; // si
  unsigned int v4; // eax
  int v6; // ebx
  __int64 v8; // rdx

  v2 = *(_DWORD *)(a1 + 704);
  v3 = a2;
  v4 = v2 | 0x2000;
  if ( !(_BYTE)a2 )
    v4 = v2 & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 704) = v4;
  if ( ((v2 & 0x2000) != 0) == (_BYTE)a2 )
  {
    return 0;
  }
  else
  {
    v6 = PipSetGuestAssignedProperty(a1, a2);
    if ( v6 < 0 || (LOBYTE(v8) = v3, v6 = PipSendGuestAssignedNotification(a1, v8), v6 < 0) )
      PnpRequestDeviceRemoval(a1, 0LL, 43LL, (unsigned int)v6);
  }
  return (unsigned int)v6;
}
