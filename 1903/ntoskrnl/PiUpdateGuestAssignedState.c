/*
 * XREFs of PiUpdateGuestAssignedState @ 0x140701590
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140701670 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14072FFA4 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x1407315D0 (PnpRequestDeviceRemoval.c)
 *     PipSendGuestAssignedNotification @ 0x140877EAC (PipSendGuestAssignedNotification.c)
 *     PipSetGuestAssignedProperty @ 0x140877F4C (PipSetGuestAssignedProperty.c)
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
