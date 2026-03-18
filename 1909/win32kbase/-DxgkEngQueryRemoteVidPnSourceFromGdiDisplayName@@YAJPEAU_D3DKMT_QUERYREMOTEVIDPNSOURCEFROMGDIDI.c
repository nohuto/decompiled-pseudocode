/*
 * XREFs of ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C011FCB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     DrvGetDeviceFromName @ 0x1C003A300 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName(
        struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *a1)
{
  struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *v2; // rax
  unsigned int v3; // ebx
  wchar_t *DeviceFromName; // rax
  _DWORD *p_VidPnSourceId; // rdx
  ULONG64 v6; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(SourceString, 0, 0x44uLL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *)MmUserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v2->DeviceName;
  *(_OWORD *)&SourceString[8] = *(_OWORD *)&v2->DeviceName[8];
  *(_OWORD *)&SourceString[16] = *(_OWORD *)&v2->DeviceName[16];
  *(_OWORD *)&SourceString[24] = *(_OWORD *)&v2->DeviceName[24];
  *(_DWORD *)&SourceString[32] = v2->VidPnSourceId;
  v3 = 0;
  SourceString[31] = 0;
  EnterSharedCrit(0, 1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    p_VidPnSourceId = &a1->VidPnSourceId;
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
      p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
    *p_VidPnSourceId = *((_DWORD *)DeviceFromName + 64);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, (__int64)p_VidPnSourceId);
  return v3;
}
