/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x1406F6E50
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpRegistryValueExists @ 0x14015D0CC (PnpRegistryValueExists.c)
 *     PnpDuplicateUnicodeString @ 0x14015DAB8 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406F6914 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1406F795C (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F7A40 (PiDevCfgFreeDriverNode.c)
 *     PipCheckComputerSupported @ 0x140823D78 (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, _QWORD *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  char *PoolWithTag; // rax
  char *v12; // rdi
  PVOID *v13; // rsi
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  char v17; // al
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v23; // rax
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE v26; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+7Ch] [rbp-84h]
  UNICODE_STRING v33; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v35; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v37[28]; // [rsp+E0h] [rbp-20h] BYREF

  v35 = a6;
  v31 = a4;
  v25 = -16777216;
  v32 = a3;
  *(_DWORD *)&UnicodeString.Length = 0;
  i = 0LL;
  UnicodeString.Buffer = 0LL;
  v26 = 0LL;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  v24 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId((__int64)SourceString, (__int64)&UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_47;
  DriverPackageId = PnpOpenObjectRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)UnicodeString.Buffer,
                      8u,
                      131097,
                      0,
                      (__int64)&v26);
  if ( DriverPackageId < 0 )
    goto LABEL_47;
  v37[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v37[2] = &v34;
  LODWORD(v37[1]) = 8210;
  HIDWORD(v37[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 8, (_DWORD)v26, (__int64)v37, 1);
  if ( DriverPackageId < 0 )
    goto LABEL_47;
  if ( SLODWORD(v37[4]) >= 0 && v34.Buffer && v34.Length > 2u )
  {
    for ( i = v34.Buffer; *i; i += v23 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v23 = -1LL;
      do
        ++v23;
      while ( i[v23] );
    }
    if ( !*i )
      goto LABEL_66;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_66:
    DriverPackageId = -1073740764;
    goto LABEL_47;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x63647050u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_47;
  }
  memset(PoolWithTag, 0, 0x1A0uLL);
  *((_QWORD *)v12 + 29) = v12 + 224;
  *((_QWORD *)v12 + 28) = v12 + 224;
  *((_QWORD *)v12 + 27) = v12 + 208;
  *((_QWORD *)v12 + 26) = v12 + 208;
  *((_QWORD *)v12 + 47) = v12 + 368;
  *((_QWORD *)v12 + 46) = v12 + 368;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString((__int64)(v12 + 56), (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)v12 + 8, i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_45;
  }
  memset(v37, 0, 0xC8uLL);
  v37[0] = &DEVPKEY_DriverPackage_DriverDate;
  LODWORD(v37[1]) = 16;
  v37[5] = &DEVPKEY_DriverPackage_DriverVersion;
  v37[2] = v12 + 112;
  v37[7] = v12 + 120;
  LODWORD(v37[3]) = 8;
  v37[10] = &DEVPKEY_DriverPackage_SignerScore;
  v13 = (PVOID *)(v12 + 144);
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
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 8, (_DWORD)v26, (__int64)v37, 5);
  if ( DriverPackageId < 0 )
    goto LABEL_45;
  if ( SLODWORD(v37[4]) < 0 )
    *((_QWORD *)v12 + 14) = 0LL;
  if ( SLODWORD(v37[9]) < 0 )
    *((_QWORD *)v12 + 15) = 0LL;
  v14 = v25;
  if ( SLODWORD(v37[14]) < 0 )
    v14 = -16777216;
  v25 = v14;
  if ( SLODWORD(v37[19]) < 0 )
  {
    *(_QWORD *)(v12 + 188) = 0LL;
    *(_QWORD *)(v12 + 196) = 0LL;
  }
  if ( SLODWORD(v37[24]) >= 0 )
  {
    if ( (v37[23] & 0xF) != 0 )
    {
      ExFreePoolWithTag(*v13, 0);
      *v13 = 0LL;
    }
    else
    {
      *((_DWORD *)v12 + 38) = LODWORD(v37[23]) >> 4;
    }
  }
  else
  {
    *v13 = 0LL;
  }
  if ( (a5 & 4) != 0 )
    v15 = -1;
  else
    v15 = (unsigned __int16)v32 | v31 & 0xFF0000 | v25 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *((_DWORD *)v12 + 27) = v15;
  if ( (a5 & 2) != 0 )
  {
    memset(v37, 0, 0xC8uLL);
    v37[0] = &DEVPKEY_DriverPackage_F6;
    v37[2] = &v24;
    LODWORD(v37[1]) = 17;
    LODWORD(v37[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v16, UnicodeString.Buffer, 8, (_DWORD)v26, (__int64)v37, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_45;
    v17 = v24;
    if ( SLODWORD(v37[4]) < 0 )
      v17 = 0;
    v24 = v17;
    if ( v17 == -1 )
      *((_DWORD *)v12 + 46) |= 2u;
  }
  *(_DWORD *)&v33.Length = 1572886;
  v33.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = v26;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v33;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v18;
  if ( v18 == -1073741772 )
    goto LABEL_57;
  if ( v18 < 0 )
    goto LABEL_45;
  ObjectAttributes.RootDirectory = KeyHandle;
  Handle = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v19 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v19;
  if ( v19 == -1073741772 )
  {
LABEL_57:
    DriverPackageId = 0;
  }
  else
  {
    if ( v19 < 0 )
      goto LABEL_45;
    memset(v37, 0, sizeof(v37));
    v37[2] = L"Configuration";
    LODWORD(v37[4]) = 0x1000000;
    v37[3] = v12 + 88;
    LODWORD(v37[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v37, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_45;
    if ( !*((_WORD *)v12 + 44) && *((_QWORD *)v12 + 12) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v20 = *((_QWORD *)v12 + 12);
  if ( !v20 )
  {
LABEL_43:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v33.Length = 1572886;
      v33.Buffer = L"ConfigFlags";
      if ( !v28 || !PnpRegistryValueExists(v28, &v33) )
        *((_DWORD *)v12 + 46) |= 4u;
    }
    *((_QWORD *)v12 + 2) = v26;
    *((_QWORD *)v12 + 3) = Handle;
    *((_QWORD *)v12 + 4) = v28;
    v26 = 0LL;
    Handle = 0LL;
    v28 = 0LL;
    *v35 = v12;
    v12 = 0LL;
    goto LABEL_45;
  }
  v21 = PiDevCfgOpenDriverConfiguration(v26, v20, &v28);
  DriverPackageId = v21;
  if ( v21 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_43;
  }
  if ( v21 >= 0 )
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
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v28, (__int64)v37, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *((_WORD *)v12 + 80) <= 2u && *((_QWORD *)v12 + 21) )
        RtlFreeAnsiString((PUNICODE_STRING)v12 + 10);
      goto LABEL_43;
    }
  }
LABEL_45:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12);
LABEL_47:
  if ( v26 )
    ZwClose(v26);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    ZwClose(v28);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v34);
  return (unsigned int)DriverPackageId;
}
