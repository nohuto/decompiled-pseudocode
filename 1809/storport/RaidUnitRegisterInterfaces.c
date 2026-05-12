/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x1C001C928
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortMapBuildLunEntry @ 0x1C001CA58 (PortMapBuildLunEntry.c)
 *     PortRegistryCreateKeyEx @ 0x1C001CFE8 (PortRegistryCreateKeyEx.c)
 *     PortGetDeviceType @ 0x1C006B318 (PortGetDeviceType.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C007549C (RaidUnitAddAclToVmDevices.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdx
  unsigned int v4; // r8d
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  ULONG v12; // r8d
  __int64 v13; // r10
  int v14; // r11d
  __int64 v15; // rax
  void *v16; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 96);
  v2 = (unsigned __int8)v1;
  v4 = v1 >> 8;
  v5 = HIWORD(v1);
  result = PortRegistryCreateKeyEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2 + 2224),
             1LL,
             &Handle,
             L"Target Id %d",
             (unsigned __int8)v4);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 136);
    if ( v9 )
    {
      v10 = (*(unsigned __int8 *)(v9 + 3) | (*(unsigned __int8 *)(v9 + 2) << 8)) + 4;
      if ( (unsigned int)v10 > 0xFFFF )
        v10 = 0xFFFFLL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v7, v10) + 16);
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v11 + 2 * v15) );
    PortMapBuildLunEntry((int)Handle, (unsigned __int8)v5, v14, a1 + 112, v13, v12, v11, v15, v16);
    ZwClose(Handle);
    if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
    {
      v8 = RaidUnitAddAclToVmDevices(a1);
      if ( v8 >= 0 )
        v8 = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(a1 + 8),
               &GUID_DEVINTERFACE_VMLUN,
               0LL,
               (PUNICODE_STRING)(a1 + 1832));
    }
    if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0xD )
    {
      v8 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_SES,
             0LL,
             (PUNICODE_STRING)(a1 + 1952));
      if ( v8 >= 0 )
      {
        v8 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1952), 1u);
        if ( v8 < 0 )
          RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1952));
      }
    }
    return (unsigned int)v8;
  }
  return result;
}
