/*
 * XREFs of RaGetBusInterface @ 0x1C001CD10
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006D634 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

__int64 __fastcall RaGetBusInterface(struct _DEVICE_OBJECT *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  if ( IoGetDeviceProperty(a1, DevicePropertyBusTypeGuid, 0x10u, &v8, &v7) < 0 )
    return 0xFFFFFFFFLL;
  v1 = v8 - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( v8 == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v1 = v9 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v1 )
    return 1LL;
  v2 = v8 - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( v8 == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v2 = v9 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v2 )
    return 5LL;
  v4 = v8 - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
  if ( v8 == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
    v4 = v9 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
  if ( !v4 )
    return 1LL;
  v5 = v8 - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
  if ( v8 == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
    v5 = v9 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
  if ( !v5 )
    return 2LL;
  v6 = v8 - *(_QWORD *)&GUID_BUS_TYPE_ACPI.Data1;
  if ( v8 == *(_QWORD *)&GUID_BUS_TYPE_ACPI.Data1 )
    v6 = v9 - *(_QWORD *)GUID_BUS_TYPE_ACPI.Data4;
  if ( v6 )
    return 0xFFFFFFFFLL;
  return 17LL;
}
