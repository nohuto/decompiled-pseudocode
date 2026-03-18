/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00FE790
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     EnterSharedCrit @ 0x1C0028600 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(ULONG64 a1)
{
  ULONG64 v2; // rax
  unsigned int v3; // ebx
  wchar_t *DeviceFromName; // rax
  _DWORD *v5; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+40h] [rbp-58h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  __int128 v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+70h] [rbp-28h]

  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v2;
  v9 = *(_OWORD *)(v2 + 16);
  v10 = *(_OWORD *)(v2 + 32);
  v11 = *(_OWORD *)(v2 + 48);
  v12 = *(_DWORD *)(v2 + 64);
  v3 = 0;
  HIWORD(v11) = 0;
  EnterSharedCrit(0, 1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v5 = (_DWORD *)(a1 + 64);
    if ( a1 + 64 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *((_DWORD *)DeviceFromName + 64);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
