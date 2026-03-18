/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x1407606F8
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14058EF60 (PiUEventNotifyUserMode.c)
 * Callees:
 *     McTemplateK0z @ 0x140191C44 (McTemplateK0z.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 */

signed int __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  signed int result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0LL);
  if ( result >= 0 && (byte_140405846 & 8) != 0 )
    return McTemplateK0z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
