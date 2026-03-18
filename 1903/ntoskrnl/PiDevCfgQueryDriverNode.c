/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x1406FC2A0
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14014506C (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x14015C9D0 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x1405BBEC0 (_PnpOpenObjectRegKey.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F9A2C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FB814 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1406FD34C (PiDevCfgOpenDriverConfiguration.c)
 *     PipCheckComputerSupported @ 0x14085CE98 (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  PVOID PoolWithTag; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  PVOID *v14; // rsi
  int v15; // eax
  int v16; // ecx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  int v19; // eax
  __int64 v21; // rax
  int v22; // ecx
  char v23; // al
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v27; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v31; // [rsp+78h] [rbp-88h] BYREF
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  UNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  _QWORD v37[28]; // [rsp+E0h] [rbp-20h] BYREF

  v36 = a6;
  v32 = a4;
  v25 = -16777216;
  v33 = a3;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  i = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v34.Length = 0LL;
  v34.Buffer = 0LL;
  v24 = 0;
  KeyHandle = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId((__int64)SourceString, (__int64)&UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_42;
  DriverPackageId = PnpOpenObjectRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)UnicodeString.Buffer,
                      8u,
                      131097,
                      0,
                      (__int64)&Handle);
  if ( DriverPackageId < 0 )
    goto LABEL_42;
  v37[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v37[2] = &v34;
  LODWORD(v37[1]) = 8210;
  HIDWORD(v37[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v37, 1);
  if ( DriverPackageId < 0 )
    goto LABEL_42;
  if ( SLODWORD(v37[4]) >= 0 && v34.Buffer && v34.Length > 2u )
  {
    for ( i = v34.Buffer; *i; i += v21 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v21 = -1LL;
      do
        ++v21;
      while ( i[v21] );
    }
    if ( !*i )
      goto LABEL_59;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_59:
    DriverPackageId = -1073740764;
    goto LABEL_42;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x63647050u);
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_42;
  }
  memset(PoolWithTag, 0, 0x1A0uLL);
  *(_QWORD *)(v12 + 232) = v12 + 224;
  *(_QWORD *)(v12 + 224) = v12 + 224;
  *(_QWORD *)(v12 + 216) = v12 + 208;
  *(_QWORD *)(v12 + 208) = v12 + 208;
  *(_QWORD *)(v12 + 376) = v12 + 368;
  *(_QWORD *)(v12 + 368) = v12 + 368;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString(v12 + 56, (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 128), i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_40;
  }
  memset(v37, 0, 0xC8uLL);
  v37[0] = &DEVPKEY_DriverPackage_DriverDate;
  LODWORD(v37[1]) = 16;
  v37[5] = &DEVPKEY_DriverPackage_DriverVersion;
  v37[2] = v12 + 112;
  v37[7] = v12 + 120;
  LODWORD(v37[3]) = 8;
  v37[10] = &DEVPKEY_DriverPackage_SignerScore;
  v14 = (PVOID *)(v12 + 144);
  LODWORD(v37[8]) = 8;
  v37[12] = &v25;
  v37[15] = &DEVPKEY_DriverPackage_ExtensionId;
  v37[20] = &DEVPKEY_DriverPackage_ExtensionContractIds;
  HIDWORD(v37[23]) = 2;
  LODWORD(v37[6]) = 9;
  LODWORD(v37[11]) = 7;
  LODWORD(v37[13]) = 4;
  LODWORD(v37[16]) = 13;
  v37[17] = v12 + 188;
  LODWORD(v37[18]) = 16;
  LODWORD(v37[21]) = 4109;
  v37[22] = v12 + 144;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v37, 5);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  if ( SLODWORD(v37[4]) < 0 )
    *(_QWORD *)(v12 + 112) = 0LL;
  if ( SLODWORD(v37[9]) < 0 )
    *(_QWORD *)(v12 + 120) = 0LL;
  v15 = v25;
  if ( SLODWORD(v37[14]) < 0 )
    v15 = -16777216;
  v25 = v15;
  if ( SLODWORD(v37[19]) < 0 )
  {
    *(_QWORD *)(v12 + 188) = 0LL;
    *(_QWORD *)(v12 + 196) = 0LL;
  }
  if ( SLODWORD(v37[24]) >= 0 )
  {
    if ( (v37[23] & 0xF) != 0 )
    {
      ExFreePoolWithTag(*v14, 0);
      *v14 = 0LL;
    }
    else
    {
      *(_DWORD *)(v12 + 152) = LODWORD(v37[23]) >> 4;
    }
  }
  else
  {
    *v14 = 0LL;
  }
  if ( (a5 & 4) != 0 )
    v16 = -1;
  else
    v16 = (unsigned __int16)v33 | v32 & 0xFF0000 | v25 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *(_DWORD *)(v12 + 108) = v16;
  if ( (a5 & 2) != 0 )
  {
    memset(v37, 0, 0xC8uLL);
    v37[0] = &DEVPKEY_DriverPackage_F6;
    v37[2] = &v24;
    LODWORD(v37[1]) = 17;
    LODWORD(v37[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v22, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v37, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_40;
    v23 = v24;
    if ( SLODWORD(v37[4]) < 0 )
      v23 = 0;
    v24 = v23;
    if ( v23 == -1 )
      *(_DWORD *)(v12 + 184) |= 2u;
  }
  *(_DWORD *)&v31.Length = 1572886;
  v31.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v31;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v17;
  if ( v17 == -1073741772 )
    goto LABEL_75;
  if ( v17 < 0 )
    goto LABEL_40;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v27 = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v18 = ZwOpenKey(&v27, 0x20019u, &ObjectAttributes);
  DriverPackageId = v18;
  if ( v18 == -1073741772 )
  {
LABEL_75:
    DriverPackageId = 0;
  }
  else
  {
    if ( v18 < 0 )
      goto LABEL_40;
    memset(v37, 0, sizeof(v37));
    v37[2] = L"Configuration";
    LODWORD(v37[4]) = 0x1000000;
    v37[3] = v12 + 88;
    LODWORD(v37[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(0xC0000000, (const WCHAR *)v27, (__int64)v37, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_40;
    if ( !*(_WORD *)(v12 + 88) && *(_QWORD *)(v12 + 96) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v13 = *(_QWORD *)(v12 + 96);
  if ( !v13 )
  {
LABEL_38:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v31.Length = 1572886;
      v31.Buffer = L"ConfigFlags";
      if ( !v28 || !PnpRegistryValueExists(v28, &v31) )
        *(_DWORD *)(v12 + 184) |= 4u;
    }
    *(_QWORD *)(v12 + 16) = Handle;
    *(_QWORD *)(v12 + 24) = v27;
    *(_QWORD *)(v12 + 32) = v28;
    Handle = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    *v36 = v12;
    v12 = 0LL;
    goto LABEL_40;
  }
  v19 = PiDevCfgOpenDriverConfiguration(Handle, v13, &v28);
  DriverPackageId = v19;
  if ( v19 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_38;
  }
  if ( v19 >= 0 )
  {
    memset(v37, 0, sizeof(v37));
    v37[0] = PiDevCfgQueryDriverVersionValueCallback;
    v37[2] = L"DriverDate";
    v37[7] = PiDevCfgQueryDriverVersionValueCallback;
    v37[9] = L"DriverVersion";
    v37[3] = v12 + 112;
    v37[10] = v12 + 120;
    LODWORD(v37[18]) = 117440512;
    v37[16] = L"ExcludeIds";
    v37[17] = v12 + 160;
    LODWORD(v37[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(0xC0000000, (const WCHAR *)v28, (__int64)v37, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *(_WORD *)(v12 + 160) <= 2u && *(_QWORD *)(v12 + 168) )
        RtlFreeAnsiString((PUNICODE_STRING)(v12 + 160));
      goto LABEL_38;
    }
  }
LABEL_40:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12, v13);
LABEL_42:
  if ( Handle )
    ZwClose(Handle);
  if ( v27 )
    ZwClose(v27);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    ZwClose(v28);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v34);
  return (unsigned int)DriverPackageId;
}
