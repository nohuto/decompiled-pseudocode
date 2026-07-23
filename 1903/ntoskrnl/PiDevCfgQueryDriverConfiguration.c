/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x1406FB380
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865D60 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408690C0 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086C408 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FCB88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgVerifyService @ 0x14072C4F0 (PiDevCfgVerifyService.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  NTSTATUS ObjectProperties; // edi
  const WCHAR *v4; // rdi
  int RegistryValues; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  char v11; // al
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[56]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = *(_DWORD *)(a1 + 184);
  LOWORD(v16) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v4 = *(const WCHAR **)(a1 + 32);
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, a1 + 392);
    if ( ObjectProperties < 0 )
      goto LABEL_41;
    if ( !*(_QWORD *)(a1 + 24) )
    {
LABEL_42:
      ObjectProperties = -1073740653;
      goto LABEL_41;
    }
    v4 = *(const WCHAR **)(a1 + 32);
  }
  if ( !v4 )
    goto LABEL_42;
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[4]) = 0x1000000;
  LODWORD(v18[11]) = 117440512;
  LODWORD(v18[1]) = 288;
  LODWORD(v18[18]) = 117440512;
  v18[2] = L"Service";
  LODWORD(v18[25]) = 0x4000000;
  LODWORD(v18[8]) = 304;
  v18[9] = L"LowerFilters";
  LODWORD(v18[15]) = 304;
  v18[16] = L"UpperFilters";
  LODWORD(v18[32]) = 117440512;
  v18[23] = L"ConfigFlags";
  LODWORD(v18[29]) = 304;
  v18[24] = a1 + 384;
  LODWORD(v18[39]) = 117440512;
  v18[30] = L"IncludedInfs";
  LODWORD(v18[36]) = 304;
  v18[37] = L"IncludedConfigs";
  LODWORD(v18[46]) = 0x4000000;
  v18[44] = L"Reboot";
  LODWORD(v18[43]) = 288;
  v18[45] = a1 + 388;
  v18[3] = a1 + 288;
  v18[10] = a1 + 304;
  v18[17] = a1 + 320;
  LODWORD(v18[22]) = 292;
  v18[31] = a1 + 336;
  v18[38] = a1 + 352;
  RegistryValues = RtlpQueryRegistryValues(0xC0000000, v4, (__int64)v18, 0LL);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    goto LABEL_42;
  if ( RegistryValues < 0 )
    goto LABEL_41;
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  if ( *(_WORD *)(a1 + 352) <= 2u && *(_QWORD *)(a1 + 360) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 352));
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 104);
    if ( (v13 & 4) == 0 && *(_QWORD *)(a1 + 296) )
    {
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
      v13 = *(_DWORD *)(a1 + 104);
    }
    if ( (v13 & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
      if ( *(_QWORD *)(a1 + 328) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
    }
  }
  v6 = *(const WCHAR **)(a1 + 296);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 288) )
    {
      ObjectProperties = PiDevCfgVerifyService(v6);
      if ( ObjectProperties < 0 )
        goto LABEL_42;
    }
  }
  v7 = *(const WCHAR **)(a1 + 312);
  if ( !v7 )
    goto LABEL_75;
  while ( *v7 )
  {
    ObjectProperties = PiDevCfgVerifyService(v7);
    if ( ObjectProperties < 0 )
    {
      ObjectProperties = -1073740653;
      break;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v7[v14] );
    v7 += v14 + 1;
  }
  if ( ObjectProperties >= 0 )
  {
LABEL_75:
    v8 = *(const WCHAR **)(a1 + 328);
    if ( !v8 )
      goto LABEL_26;
    while ( *v8 )
    {
      ObjectProperties = PiDevCfgVerifyService(v8);
      if ( ObjectProperties < 0 )
      {
        ObjectProperties = -1073740653;
        break;
      }
      v15 = -1LL;
      do
        ++v15;
      while ( v8[v15] );
      v8 += v15 + 1;
    }
    if ( ObjectProperties >= 0 )
    {
LABEL_26:
      if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
      {
LABEL_40:
        *(_DWORD *)(a1 + 184) |= 1u;
        goto LABEL_41;
      }
      memset(v18, 0, 0xA0uLL);
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 64);
      v18[0] = &DEVPKEY_DriverPackage_ClassGuid;
      LODWORD(v18[1]) = 13;
      v18[5] = &DEVPKEY_DriverPackage_ProviderName;
      v18[10] = &DEVPKEY_DriverPackage_NeedsReconfig;
      v18[12] = &v16;
      v18[2] = a1 + 240;
      v18[15] = &DEVPKEY_DriverPackage_GroupIds;
      v18[17] = &DestinationString;
      LODWORD(v18[3]) = 16;
      LODWORD(v18[6]) = 18;
      v18[7] = a1 + 272;
      HIDWORD(v18[8]) = 6;
      LODWORD(v18[11]) = 17;
      LODWORD(v18[13]) = 1;
      LODWORD(v18[16]) = 8210;
      HIDWORD(v18[18]) = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(6, v10, 8, v9, (__int64)v18, 4);
      if ( ObjectProperties >= 0 )
      {
        if ( SLODWORD(v18[4]) < 0 )
        {
          *(_QWORD *)(a1 + 240) = 0LL;
          *(_QWORD *)(a1 + 248) = 0LL;
        }
        else
        {
          ObjectProperties = RtlStringFromGUIDEx((PGUID)(a1 + 240), (PUNICODE_STRING)(a1 + 256), 1u);
          if ( ObjectProperties < 0 )
            goto LABEL_41;
        }
        if ( SLODWORD(v18[9]) < 0 )
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 272), 0LL);
        v11 = v16;
        if ( SLODWORD(v18[14]) < 0 )
          v11 = 0;
        LOBYTE(v16) = v11;
        if ( v11 == -1 )
          *(_DWORD *)(a1 + 184) |= 0x40u;
        if ( SLODWORD(v18[19]) < 0 )
          RtlInitUnicodeString(&DestinationString, 0LL);
        if ( DestinationString.Buffer && DestinationString.Length > 2u )
          *(_DWORD *)(a1 + 184) |= 0x80u;
        ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
        if ( ObjectProperties >= 0 )
          goto LABEL_40;
      }
    }
  }
LABEL_41:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
