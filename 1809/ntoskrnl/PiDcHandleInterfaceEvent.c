/*
 * XREFs of PiDcHandleInterfaceEvent @ 0x1406ED310
 * Callers:
 *     PiDcHandleObjectEvent @ 0x1406ED0F4 (PiDcHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EC624 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleInterfaceEvent(__int64 a1)
{
  int ObjectProperty; // edx
  int v3; // [rsp+60h] [rbp-88h] BYREF
  int v4; // [rsp+64h] [rbp-84h] BYREF
  int v5[6]; // [rsp+68h] [rbp-80h] BYREF
  wchar_t Str2[40]; // [rsp+80h] [rbp-68h] BYREF

  ObjectProperty = 0;
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                       3u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v3,
                       (__int64)v5,
                       16,
                       (__int64)&v4,
                       0);
    if ( ObjectProperty >= 0 && v3 == 13 && v4 == 16 )
    {
      ObjectProperty = PnpStringFromGuid(v5, Str2);
      if ( ObjectProperty >= 0 )
        return (unsigned int)PiDcContainerRequiresConfiguration(Str2);
    }
  }
  return (unsigned int)ObjectProperty;
}
