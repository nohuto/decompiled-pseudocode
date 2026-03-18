/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C00166A4
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v8; // r9
  void *v9; // rcx
  int v10; // edx
  void *v11; // r10
  int v12; // r9d
  int v13; // esi
  __int64 v14; // r8
  void *v15; // rcx
  int v16; // edx
  void *v17; // r10
  __int64 v18; // r8
  void *v19; // rcx
  int v20; // edx
  void *v21; // r10
  NTSTATUS v22; // edi
  __int64 v23; // r8
  void *v24; // rcx
  int v25; // edx
  void *v26; // r10
  NTSTATUS v27; // eax
  int v28; // edi
  __int64 v29; // r9
  void *v30; // rcx
  void *v31; // r8
  char DataSize; // [rsp+28h] [rbp-41h]
  char v33; // [rsp+30h] [rbp-39h]
  __int64 v34; // [rsp+38h] [rbp-31h]
  __int64 v35; // [rsp+40h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v38; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v39[2]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v40; // [rsp+82h] [rbp+19h]
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 736), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = &unk_1C006E28A;
    v10 = 0;
    v11 = &unk_1C006E28A;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(void **)(a1 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v11 = *(void **)(a1 + 568);
    }
    v35 = (__int64)v11;
    v12 = 11;
    v34 = (__int64)v9;
    v33 = a1;
    DataSize = v2;
    goto LABEL_30;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v5 = (unsigned __int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 712), 1313096799LL, v3, v4);
  v6 = (__int64)v5;
  if ( !v5 )
  {
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  v13 = AMLIEvalNameSpaceObject(v5, v39, 0, 0LL);
  AMLIDereferenceHandleEx(v6);
  if ( v13 < 0 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = &unk_1C006E28A;
    v16 = 0;
    v17 = &unk_1C006E28A;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v15 = *(void **)(a1 + 560);
      if ( (v14 & 0x400000000000LL) != 0 )
        v17 = *(void **)(a1 + 568);
    }
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      1,
      12,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v13,
      a1,
      (__int64)v15,
      (__int64)v17);
    goto LABEL_3;
  }
  if ( v40 == 2 )
  {
    RtlInitAnsiString(&v38, SourceString);
    v22 = RtlAnsiStringToUnicodeString(&UnicodeString, &v38, 1u);
    if ( v22 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      v24 = &unk_1C006E28A;
      v25 = 0;
      v26 = &unk_1C006E28A;
      if ( (v23 & 0x200000000000LL) != 0 )
      {
        v24 = *(void **)(a1 + 560);
        if ( (v23 & 0x400000000000LL) != 0 )
          v26 = *(void **)(a1 + 568);
      }
      LOBYTE(v25) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v25,
        1,
        14,
        (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
        v22,
        a1,
        (__int64)v24,
        (__int64)v26);
      goto LABEL_24;
    }
    v27 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
    dword_1C0080868 = 0;
    pszDest = 0;
    v28 = v27;
    FreeDataBuffs((__int64)v39, 1u);
    ZwClose(DeviceRegKey);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v28 >= 0 )
      return 0LL;
    v29 = *(_QWORD *)(a1 + 8);
    v30 = &unk_1C006E28A;
    v10 = 0;
    v31 = &unk_1C006E28A;
    if ( (v29 & 0x200000000000LL) != 0 )
    {
      v30 = *(void **)(a1 + 560);
      if ( (v29 & 0x400000000000LL) != 0 )
        v31 = *(void **)(a1 + 568);
    }
    v35 = (__int64)v31;
    v12 = 15;
    v34 = (__int64)v30;
    v33 = a1;
    DataSize = v28;
LABEL_30:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1,
      v12,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      DataSize,
      v33,
      v34,
      v35);
    return 0LL;
  }
  v18 = *(_QWORD *)(a1 + 8);
  v19 = &unk_1C006E28A;
  v20 = 0;
  v21 = &unk_1C006E28A;
  if ( (v18 & 0x200000000000LL) != 0 )
  {
    v19 = *(void **)(a1 + 560);
    if ( (v18 & 0x400000000000LL) != 0 )
      v21 = *(void **)(a1 + 568);
  }
  LOBYTE(v20) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v20,
    1,
    13,
    (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
    v40,
    a1,
    (__int64)v19,
    (__int64)v21);
  v22 = 0;
LABEL_24:
  dword_1C0080868 = 0;
  pszDest = 0;
  FreeDataBuffs((__int64)v39, 1u);
  ZwClose(DeviceRegKey);
  return (unsigned int)v22;
}
