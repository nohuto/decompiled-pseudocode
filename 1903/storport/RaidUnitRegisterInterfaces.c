/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x1C001BA78
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortMapBuildLunEntry @ 0x1C001BD70 (PortMapBuildLunEntry.c)
 *     PortRegistryCreateKeyEx @ 0x1C001C324 (PortRegistryCreateKeyEx.c)
 *     PortGetDeviceType @ 0x1C006BC7C (PortGetDeviceType.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0074734 (RaidUnitAddAclToVmDevices.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  ULONG v6; // r8d
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rax
  void *v10; // [rsp+40h] [rbp-28h]
  unsigned __int8 v11; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 96);
  v11 = BYTE2(v1);
  result = PortRegistryCreateKeyEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned __int8)v1 + 2160),
             1LL,
             &Handle,
             L"Target Id %d",
             BYTE1(v1));
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F) + 16);
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(v5 + 2 * v9) );
    PortMapBuildLunEntry((int)Handle, v11, v8, a1 + 112, v7, v6, v5, v9, v10);
    ZwClose(Handle);
    if ( (*(_DWORD *)(a1 + 1568) & 1) != 0 )
    {
      v4 = RaidUnitAddAclToVmDevices(a1);
      if ( v4 >= 0 )
        v4 = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(a1 + 8),
               &GUID_DEVINTERFACE_VMLUN,
               0LL,
               (PUNICODE_STRING)(a1 + 1576));
    }
    if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0xD )
    {
      v4 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_SES,
             0LL,
             (PUNICODE_STRING)(a1 + 1696));
      if ( v4 >= 0 )
      {
        v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1696), 1u);
        if ( v4 < 0 )
          RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1696));
      }
    }
    return (unsigned int)v4;
  }
  return result;
}
