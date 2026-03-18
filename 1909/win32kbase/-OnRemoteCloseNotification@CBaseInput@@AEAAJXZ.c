/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0054ED0
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C0054E9C (RimInputTypeToDeviceInputType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0056150 (RIMDirectPnpRemoveDevicesOfType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v1; // eax
  __int64 v2; // r8

  v1 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v2 + 8), v1);
}
