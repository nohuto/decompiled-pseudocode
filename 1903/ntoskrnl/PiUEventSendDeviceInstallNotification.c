/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x140862EE0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     McTemplateK0z @ 0x14029EB1C (McTemplateK0z.c)
 */

NTSTATUS __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( result >= 0 && (byte_14042BDBA & 8) != 0 )
    return McTemplateK0z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
