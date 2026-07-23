/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x1407618C8
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 * Callees:
 *     McTemplateK0z @ 0x140191DA4 (McTemplateK0z.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( result >= 0 && (byte_140406846 & 8) != 0 )
    return McTemplateK0z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
