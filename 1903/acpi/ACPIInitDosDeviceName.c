/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C000B17C
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00940E0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // r8
  void *v7; // rcx
  int v8; // edx
  void *v9; // r10
  int v10; // r9d
  int v11; // esi
  __int64 v12; // r8
  void *v13; // rcx
  int v14; // edx
  void *v15; // r10
  __int64 v16; // r8
  void *v17; // rcx
  int v18; // edx
  void *v19; // r10
  NTSTATUS v20; // edi
  __int64 v21; // r8
  void *v22; // rcx
  int v23; // edx
  void *v24; // r10
  NTSTATUS v25; // eax
  int v26; // edi
  __int64 v27; // r8
  void *v28; // rcx
  void *v29; // r10
  char DataSize; // [rsp+28h] [rbp-41h]
  char v31; // [rsp+30h] [rbp-39h]
  __int64 v32; // [rsp+38h] [rbp-31h]
  __int64 v33; // [rsp+40h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v36; // [rsp+70h] [rbp+7h] BYREF
  PCSZ v37[6]; // [rsp+80h] [rbp+17h] BYREF
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  *(_QWORD *)&v36.Length = 0LL;
  v36.Buffer = 0LL;
  memset(v37, 0, 0x28uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  Data = 1;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 736), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = &unk_1C006FE7D;
    v8 = 0;
    v9 = &unk_1C006FE7D;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(a1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v33 = (__int64)v9;
    v10 = 11;
    v32 = (__int64)v7;
    v31 = a1;
    DataSize = v2;
    goto LABEL_36;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v3 = AMLIGetNamedChild(*(_QWORD *)(a1 + 712), 1313096799LL);
  v4 = v3;
  if ( !v3 )
  {
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  v11 = AMLIEvalNameSpaceObject(v3, v37, 0LL, 0LL);
  AMLIDereferenceHandleEx(v4);
  if ( v11 < 0 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = &unk_1C006FE7D;
    v14 = 0;
    v15 = &unk_1C006FE7D;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(void **)(a1 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v15 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        1,
        12,
        (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
        v11,
        a1,
        (__int64)v13,
        (__int64)v15);
    }
    goto LABEL_3;
  }
  if ( WORD1(v37[0]) == 2 )
  {
    RtlInitAnsiString(&v36, v37[4]);
    v20 = RtlAnsiStringToUnicodeString(&UnicodeString, &v36, 1u);
    if ( v20 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v22 = &unk_1C006FE7D;
      v23 = 0;
      v24 = &unk_1C006FE7D;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v22 = *(void **)(a1 + 560);
        if ( (v21 & 0x400000000000LL) != 0 )
          v24 = *(void **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          1,
          14,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          v20,
          a1,
          (__int64)v22,
          (__int64)v24);
      }
      goto LABEL_29;
    }
    v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
    dword_1C0082858 = 0;
    pszDest = 0;
    v26 = v25;
    FreeDataBuffs(v37, 1LL);
    ZwClose(DeviceRegKey);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v26 >= 0 )
      return 0LL;
    v27 = *(_QWORD *)(a1 + 8);
    v28 = &unk_1C006FE7D;
    v8 = 0;
    v29 = &unk_1C006FE7D;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v28 = *(void **)(a1 + 560);
      if ( (v27 & 0x400000000000LL) != 0 )
        v29 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v33 = (__int64)v29;
    v10 = 15;
    v32 = (__int64)v28;
    v31 = a1;
    DataSize = v26;
LABEL_36:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1,
      v10,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      DataSize,
      v31,
      v32,
      v33);
    return 0LL;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = &unk_1C006FE7D;
  v18 = 0;
  v19 = &unk_1C006FE7D;
  if ( (v16 & 0x200000000000LL) != 0 )
  {
    v17 = *(void **)(a1 + 560);
    if ( (v16 & 0x400000000000LL) != 0 )
      v19 = *(void **)(a1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      1,
      13,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      SBYTE2(v37[0]),
      a1,
      (__int64)v17,
      (__int64)v19);
  }
  v20 = 0;
LABEL_29:
  dword_1C0082858 = 0;
  pszDest = 0;
  FreeDataBuffs(v37, 1LL);
  ZwClose(DeviceRegKey);
  return (unsigned int)v20;
}
