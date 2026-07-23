/*
 * XREFs of PiDcHandleDeviceEvent @ 0x1406ED140
 * Callers:
 *     PiDcHandleObjectEvent @ 0x1406ED0F4 (PiDcHandleObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EC624 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleDeviceEvent(__int64 a1)
{
  int ObjectProperty; // ebx
  unsigned int v2; // esi
  __int64 v4; // r14
  __int128 v5; // xmm0
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  char v9[4]; // [rsp+68h] [rbp-59h] BYREF
  int v10; // [rsp+6Ch] [rbp-55h] BYREF
  int v11; // [rsp+70h] [rbp-51h] BYREF
  __int128 Buffer; // [rsp+78h] [rbp-49h] BYREF
  __int64 v13; // [rsp+88h] [rbp-39h]
  int v14[6]; // [rsp+90h] [rbp-31h] BYREF
  wchar_t Str2[40]; // [rsp+A8h] [rbp-19h] BYREF

  ObjectProperty = 0;
  v2 = 0;
  Buffer = 0uLL;
  v13 = 0LL;
  if ( *(_DWORD *)(a1 + 76) )
  {
    while ( 1 )
    {
      v4 = 32LL * v2;
      v5 = *(_OWORD *)(v4 + a1 + 80);
      LODWORD(v13) = *(_DWORD *)(v4 + a1 + 96);
      Buffer = v5;
      v6 = RtlLookupElementGenericTableAvl(&PiDcUpdateProperties, &Buffer);
      v7 = v6;
      if ( !*(_DWORD *)(v4 + a1 + 100) && !*(_QWORD *)(v4 + a1 + 104) && v6 )
        break;
      if ( ++v2 >= *(_DWORD *)(a1 + 76) )
        return (unsigned int)ObjectProperty;
    }
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v10,
                       (__int64)v14,
                       16,
                       (__int64)&v11,
                       0);
    if ( ObjectProperty >= 0 && v10 == 13 && v11 == 16 )
    {
      ObjectProperty = PnpStringFromGuid(v14, Str2);
      if ( ObjectProperty >= 0 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)Str2,
                           5u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceContainer_IsLocalMachine,
                           (__int64)&v10,
                           (__int64)v9,
                           1,
                           (__int64)&v11,
                           0);
        if ( ObjectProperty >= 0 && v10 == 17 && v11 == 1 && (v9[0] != -1 || (v7[5] & 1) != 0) )
          return (unsigned int)PiDcContainerRequiresConfiguration(Str2);
      }
    }
  }
  return (unsigned int)ObjectProperty;
}
