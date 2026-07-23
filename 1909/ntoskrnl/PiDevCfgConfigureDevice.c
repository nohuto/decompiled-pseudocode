/*
 * XREFs of PiDevCfgConfigureDevice @ 0x140705DE4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400D4DF4 (PipIsDevNodeDNStarted.c)
 *     RtlUnicodeStringPrintf @ 0x14014512C (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x14014570C (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405B6474 (PnpIsNullGuid.c)
 *     _PnpOpenObjectRegKey @ 0x1405BC2A0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140666EF0 (RtlCompareUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x1406E9590 (RtlQueryRegistryValuesEx.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406FDF04 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FE698 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x140707C0C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140717448 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140717514 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140717668 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     IopOpenRegistryKeyEx @ 0x14071DBA0 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14071E358 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071EE88 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14071EFE4 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PipHardwareConfigActivateService @ 0x14072E1CC (PipHardwareConfigActivateService.c)
 *     _PnpCtxRegDeleteTree @ 0x140754FAC (_PnpCtxRegDeleteTree.c)
 *     PnpDeleteDeviceInterfaces @ 0x14085F614 (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x1408651C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408675A0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgVerifyFeatureScore @ 0x14086B6E8 (PiDevCfgVerifyFeatureScore.c)
 *     _CmDeleteDeviceRegKey @ 0x1409346CC (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v6; // r12
  __int64 v8; // r14
  int *v9; // r13
  void *v10; // r15
  int DriverConfiguration; // ebx
  __int64 v12; // r12
  int v13; // edx
  const WCHAR *v14; // rdx
  wchar_t *Buffer; // rcx
  __int64 v16; // r12
  char v17; // cl
  char v18; // al
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // edx
  __int64 v24; // r9
  int v25; // ecx
  __int64 *i; // r12
  _DWORD *v27; // r12
  __int64 v28; // rbx
  UNICODE_STRING v29; // xmm0
  __int64 v30; // r8
  __int64 v31; // rcx
  wchar_t *v32; // rdi
  wchar_t *v33; // rdi
  int v35; // eax
  char v36; // cl
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  char v40; // al
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  __int64 v48; // [rsp+28h] [rbp-D8h]
  char v49; // [rsp+60h] [rbp-A0h] BYREF
  char v50; // [rsp+61h] [rbp-9Fh] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  char v52; // [rsp+68h] [rbp-98h] BYREF
  char v53; // [rsp+69h] [rbp-97h]
  char v54[2]; // [rsp+6Ah] [rbp-96h] BYREF
  __int64 v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+74h] [rbp-8Ch]
  int v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+7Ch] [rbp-84h] BYREF
  int v59; // [rsp+80h] [rbp-80h]
  unsigned int v60; // [rsp+84h] [rbp-7Ch] BYREF
  int v61[2]; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String2; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v64; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v65; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h] BYREF
  _DWORD *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v70; // [rsp+DCh] [rbp-24h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v72; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v73; // [rsp+100h] [rbp+0h] BYREF
  PVOID P; // [rsp+110h] [rbp+10h] BYREF
  __int64 v75; // [rsp+118h] [rbp+18h]
  HANDLE v76; // [rsp+120h] [rbp+20h] BYREF
  int *v77; // [rsp+128h] [rbp+28h]
  UNICODE_STRING v78; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v80; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v81; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v82; // [rsp+170h] [rbp+70h] BYREF
  UNICODE_STRING v83; // [rsp+180h] [rbp+80h] BYREF
  UNICODE_STRING v84; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING String1; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v86; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v87; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 Source2; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v89; // [rsp+1D8h] [rbp+D8h]
  _QWORD v90[20]; // [rsp+1E0h] [rbp+E0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+280h] [rbp+180h] BYREF

  *(_QWORD *)v61 = a1;
  v6 = a1;
  v77 = a4;
  v68 = a5;
  *(_QWORD *)&String2.Length = 0LL;
  *a4 = 1024;
  String2.Buffer = 0LL;
  v8 = a1 + 40;
  *(_DWORD *)(&v82.MaximumLength + 1) = 0;
  v51 = 1024;
  v9 = a4;
  Source2 = 0LL;
  v89 = 0LL;
  *a5 = 0;
  v10 = *(void **)(a2 + 16);
  Handle = 0LL;
  v76 = 0LL;
  *(_QWORD *)&v73.Length = 0LL;
  v73.Buffer = 0LL;
  *(_QWORD *)&v80.Length = 0LL;
  v80.Buffer = 0LL;
  *(_QWORD *)&v81.Length = 0LL;
  v81.Buffer = 0LL;
  *(_QWORD *)&v83.Length = 0LL;
  v83.Buffer = 0LL;
  *(_QWORD *)&v84.Length = 0LL;
  v84.Buffer = 0LL;
  *(_QWORD *)&v86.Length = 0LL;
  v86.Buffer = 0LL;
  *(_QWORD *)&v87.Length = 0LL;
  v87.Buffer = 0LL;
  v59 = 0;
  v56 = 0;
  v55 = 0LL;
  v67 = 0;
  v69 = 0;
  v75 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v64.Length = 0LL;
  v64.Buffer = 0LL;
  *(_QWORD *)&v65.Length = 0LL;
  v65.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v78.Length = 0LL;
  v78.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v49 = 0;
  v60 = 0;
  v70 = 0;
  v50 = 0;
  v52 = 0;
  P = 0LL;
  v66 = 0;
  v53 = 0;
  *(_QWORD *)&v72.Length = 0LL;
  v72.Buffer = 0LL;
  v54[0] = 0;
  *(_DWORD *)&v82.Length = 68157440;
  v82.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v82.Buffer )
    goto LABEL_156;
  if ( !a3 )
    goto LABEL_33;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  if ( (v75 = *(_QWORD *)(a3 + 264), *(_QWORD *)(a3 + 296)) && !PnpDuplicateUnicodeString((__int64)&v73, a3 + 288)
    || *(_QWORD *)(a3 + 312) && !PnpDuplicateUnicodeString((__int64)&v80, a3 + 304)
    || *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v81, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v83, a3 + 336)
    || *(_QWORD *)(a3 + 360) && !PnpDuplicateUnicodeString((__int64)&v84, a3 + 352) )
  {
LABEL_156:
    DriverConfiguration = -1073741670;
    goto LABEL_138;
  }
  v12 = *(_QWORD *)(a3 + 208);
  v13 = *(_DWORD *)(a3 + 184);
  v51 = *(_DWORD *)(a3 + 384);
  v59 = *(_DWORD *)(a3 + 388);
  v56 = v13;
  if ( v12 != a3 + 208 )
  {
    do
    {
      v35 = PiDevCfgQueryDriverConfiguration(v12);
      DriverConfiguration = v35;
      if ( v35 >= 0 )
      {
        if ( *(_QWORD *)(v12 + 296) )
        {
          *(_DWORD *)(v12 + 184) &= ~1u;
        }
        else
        {
          if ( *(_QWORD *)(v12 + 312) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v80);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( *(_QWORD *)(v12 + 328) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v81);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( *(_QWORD *)(v12 + 344) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v83);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( *(_QWORD *)(v12 + 360) )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v84);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          v51 |= *(_DWORD *)(v12 + 384);
          v59 |= *(_DWORD *)(v12 + 388);
          v56 |= *(_DWORD *)(v12 + 184);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v86);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v87);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
        }
      }
      else
      {
        if ( v35 != -1073740653 )
          break;
        if ( !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
          goto LABEL_138;
        v51 |= 0x400u;
        DriverConfiguration = 0;
      }
      v12 = *(_QWORD *)v12;
    }
    while ( v12 != a3 + 208 );
    LOBYTE(v13) = v56;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v51 & 0x400) != 0
      && (*(_BYTE *)(a3 + 408) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_187;
    }
    if ( (v13 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_187;
      v51 |= 0x400u;
    }
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = L"Description";
  QueryTable[0].Flags = 288;
  QueryTable[0].DefaultType = 0x1000000;
  QueryTable[0].EntryContext = &v64;
  QueryTable[1].DefaultType = 0x1000000;
  v14 = *(const WCHAR **)(a3 + 24);
  QueryTable[1].Name = L"Manufacturer";
  QueryTable[1].Flags = 288;
  QueryTable[1].EntryContext = &v65;
  DriverConfiguration = RtlQueryRegistryValuesEx(0xC0000000, v14, QueryTable, 0LL, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  Buffer = v65.Buffer;
  if ( !v64.Buffer && !v65.Buffer && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
  {
    if ( !PnpBootMode )
      goto LABEL_187;
    v51 |= 0x400u;
  }
  if ( !v64.Length && v64.Buffer )
  {
    RtlFreeAnsiString(&v64);
    Buffer = v65.Buffer;
  }
  if ( !v65.Length && Buffer )
    RtlFreeAnsiString(&v65);
  v16 = v75;
  if ( v75 && (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v75, 2u, 131097, 0, (__int64)&Handle) >= 0 )
  {
    memset(v90, 0, sizeof(v90));
    v90[0] = &DEVPKEY_DeviceClass_Configurable;
    LODWORD(v90[1]) = 17;
    v90[2] = &v49;
    LODWORD(v90[6]) = 17;
    v90[5] = &DEVPKEY_DeviceClass_PolicyExempt;
    v90[7] = &v50;
    v90[10] = &DEVPKEY_DeviceClass_DefaultService;
    v90[12] = &DestinationString;
    v90[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
    v90[17] = &P;
    LODWORD(v90[3]) = 1;
    LODWORD(v90[8]) = 1;
    LODWORD(v90[11]) = 18;
    HIDWORD(v90[13]) = 6;
    LODWORD(v90[16]) = 4099;
    HIDWORD(v90[18]) = 2;
    DriverConfiguration = PiDevCfgQueryObjectProperties(*(__int64 *)&PiPnpRtlCtx, v16, 2u, Handle, (__int64)v90, 4u);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    v17 = v49;
    v18 = v50;
    if ( SLODWORD(v90[4]) < 0 )
      v17 = 0;
    v49 = v17;
    if ( SLODWORD(v90[9]) < 0 )
      v18 = 0;
    v50 = v18;
    if ( SLODWORD(v90[14]) < 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      v17 = v49;
    }
    if ( SLODWORD(v90[19]) >= 0 )
      v66 = v90[18];
    else
      P = 0LL;
    if ( v17 )
      goto LABEL_31;
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v16,
                2LL,
                (__int64)Handle,
                0LL,
                (__int64)&DEVPKEY_DeviceClass_ConfigurableClassVersion,
                (__int64)&v57,
                (__int64)&v60,
                4,
                (__int64)&v58,
                0) >= 0
      && v57 == 7
      && v58 == 4
      && v60
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a3 + 64),
                8LL,
                *(_QWORD *)(a3 + 16),
                0LL,
                (__int64)&DEVPKEY_DriverPackage_ClassVersion,
                (__int64)&v57,
                (__int64)&v70,
                4,
                (__int64)&v58,
                0) >= 0
      && v57 == 7
      && v58 == 4 )
    {
      v36 = v49;
      if ( v70 >= v60 )
        v36 = -1;
      v49 = v36;
    }
  }
  if ( !v49 && (PiDevCfgOptions & 1) == 0 && (PiDevCfgFlags & 2) != 0 )
  {
    if ( PnpBootMode )
    {
      v51 |= 0x400u;
      goto LABEL_31;
    }
LABEL_187:
    DriverConfiguration = -1073740651;
    goto LABEL_138;
  }
LABEL_31:
  if ( P )
  {
    DriverConfiguration = PiDevCfgVerifyFeatureScore(a3, P, v66);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  v6 = *(_QWORD *)v61;
  v9 = v77;
LABEL_33:
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    memset(v90, 0, sizeof(v90));
    v37 = *(_QWORD *)(v8 + 8);
    v90[0] = &DEVPKEY_Device_ClassGuid;
    v90[2] = &Source2;
    v90[5] = &DEVPKEY_Device_InstallFlags;
    v90[7] = (char *)&v55 + 4;
    v90[10] = &DEVPKEY_Device_DriverNodeStrongName;
    v90[12] = &v72;
    LODWORD(v90[1]) = 13;
    LODWORD(v90[3]) = 16;
    LODWORD(v90[6]) = 7;
    LODWORD(v90[8]) = 4;
    LODWORD(v90[11]) = 18;
    HIDWORD(v90[13]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(*(__int64 *)&PiPnpRtlCtx, v37, 1u, v10, (__int64)v90, 3u);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    if ( SLODWORD(v90[4]) >= 0 )
    {
      v53 = 1;
    }
    else
    {
      Source2 = 0LL;
      v89 = 0LL;
    }
    v38 = HIDWORD(v55);
    if ( SLODWORD(v90[9]) < 0 )
      v38 = 0;
    HIDWORD(v55) = v38;
    if ( SLODWORD(v90[14]) < 0 )
      RtlInitUnicodeString(&v72, 0LL);
  }
  if ( !v50 )
  {
    if ( (v55 & 0x400000000LL) == 0 )
      goto LABEL_36;
    if ( !a3 )
      goto LABEL_232;
    memset(v90, 0, sizeof(v90));
    v39 = *(_QWORD *)(v8 + 8);
    v90[0] = &DEVPKEY_Device_DriverInfPath;
    v90[2] = &String1;
    LODWORD(v90[1]) = 18;
    HIDWORD(v90[3]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(*(__int64 *)&PiPnpRtlCtx, v39, 1u, v10, (__int64)v90, 1u);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    if ( SLODWORD(v90[4]) < 0 )
      RtlInitUnicodeString(&String1, 0LL);
    if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
    {
LABEL_232:
      v40 = -1;
      v50 = -1;
    }
    else
    {
      v40 = v50;
    }
    if ( !v40 )
    {
LABEL_36:
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(v6, a2, v75);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
  }
  if ( Handle )
  {
    *(_DWORD *)&String2.Length = 1835034;
    String2.Buffer = L"Configuration";
    DriverConfiguration = IopOpenRegistryKeyEx(&v76, Handle, &String2, 131097LL);
    if ( DriverConfiguration != -1073741772 )
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
      DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v6, v76);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL) + 16LL) & 4) == 0
    || (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v8 + 8),
              1LL,
              (__int64)v10,
              0LL,
              (__int64)&DEVPKEY_Device_Reported,
              (__int64)&v57,
              (__int64)&v52,
              1,
              (__int64)&v58,
              0) >= 0
    && v57 == 17
    && v58 == 1 )
  {
    v19 = v52;
  }
  else
  {
    v19 = 0;
    v52 = 0;
  }
  if ( a3 && !v73.Buffer && !DestinationString.Buffer && !v19 && (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
  {
    DriverConfiguration = -1073740652;
    goto LABEL_138;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    if ( a3 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_44;
      v41 = (_QWORD *)(a3 + 240);
      if ( PnpIsNullGuid((void *)(a3 + 240)) )
        goto LABEL_44;
      v42 = Source2 - *v41;
      if ( Source2 == *v41 )
        v42 = v89 - *(_QWORD *)(a3 + 248);
      if ( !v42 )
        goto LABEL_44;
    }
    else if ( !v53 || (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 17LL);
    }
    CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18LL);
  }
LABEL_44:
  if ( (int)PiDevCfgMigrateDevice(v6, a2, a3 != 0 ? a3 + 256 : 0, a3 != 0 ? a3 + 40 : 0, (__int64)&v67, (__int64)&v69) >= 0 )
  {
    v51 |= v67;
    LODWORD(v55) = v69 | v55;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgResetDeviceDriverSettings(
      v6,
      a2,
      a3 != 0 ? a3 + 240 : 0,
      (int)Handle,
      (PGUID)((unsigned __int64)&Source2 & -(__int64)(v53 != 0)));
    PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v10, L"Devices");
    PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v10, L"Filters");
  }
  if ( !a3 || PnpIsNullGuid((void *)(a3 + 240)) )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_ClassGuid,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_ClassGuid,
                            13,
                            a3 + 240,
                            16,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  if ( v73.Buffer )
  {
    if ( v73.Length )
    {
      v20 = PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(v8 + 8),
              1,
              (__int64)v10,
              0,
              (__int64)&DEVPKEY_Device_Service,
              18,
              (__int64)v73.Buffer,
              (unsigned int)v73.Length + 2,
              0);
      goto LABEL_54;
    }
LABEL_154:
    if ( (*(_DWORD *)a2 & 1) == 0 && (v73.Buffer && DestinationString.Buffer || !v52) )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_Service,
        0,
        0LL,
        0,
        0);
    goto LABEL_55;
  }
  if ( !DestinationString.Buffer || !DestinationString.Length )
    goto LABEL_154;
  v20 = PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v8 + 8),
          1,
          (__int64)v10,
          0,
          (__int64)&DEVPKEY_Device_Service,
          18,
          (__int64)DestinationString.Buffer,
          (unsigned int)DestinationString.Length + 2,
          0);
LABEL_54:
  DriverConfiguration = v20;
  if ( v20 < 0 )
    goto LABEL_138;
LABEL_55:
  if ( v80.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_LowerFilters,
                            8210,
                            (__int64)v80.Buffer,
                            v80.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_LowerFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( v81.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_UpperFilters,
                            8210,
                            (__int64)v81.Buffer,
                            v81.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_UpperFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( a3 && v64.Buffer )
  {
    DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v64.Length, (__int64)&UnicodeString, &v78);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    if ( (v51 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v8 + 8),
                              1,
                              (__int64)v10,
                              0,
                              (__int64)&DEVPKEY_Device_DeviceDesc,
                              18,
                              (__int64)UnicodeString.Buffer,
                              (unsigned int)UnicodeString.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    if ( v78.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v8 + 8),
                              1,
                              (__int64)v10,
                              0,
                              (__int64)&DEVPKEY_Device_DriverDesc,
                              18,
                              (__int64)v78.Buffer,
                              (unsigned int)v78.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_DriverDesc,
        0,
        0LL,
        0,
        0);
    }
    RtlFreeAnsiString(&UnicodeString);
    *(_DWORD *)&v78.Length = 0;
    v78.Buffer = 0LL;
LABEL_69:
    if ( !a3 )
      goto LABEL_276;
    goto LABEL_70;
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
    goto LABEL_69;
  PiDevCfgSetObjectProperty(
    PiPnpRtlCtx,
    a2,
    *(_QWORD *)(v8 + 8),
    1,
    (__int64)v10,
    0,
    (__int64)&DEVPKEY_Device_DriverDesc,
    0,
    0LL,
    0,
    0);
  if ( !a3 )
  {
    memset(v90, 0, sizeof(v90));
    v43 = *(_QWORD *)(v8 + 8);
    v90[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
    v90[2] = &v64;
    LODWORD(v90[1]) = 18;
    HIDWORD(v90[3]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(*(__int64 *)&PiPnpRtlCtx, v43, 1u, v10, (__int64)v90, 1u) < 0
      || SLODWORD(v90[4]) < 0
      || !v64.Buffer )
    {
      goto LABEL_276;
    }
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DeviceDesc,
                            18,
                            (__int64)v64.Buffer,
                            (unsigned int)v64.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    goto LABEL_69;
  }
LABEL_70:
  if ( v65.Buffer )
  {
    DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v65.Length, (__int64)&UnicodeString, 0LL);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_Manufacturer,
                            18,
                            (__int64)UnicodeString.Buffer,
                            (unsigned int)UnicodeString.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    goto LABEL_73;
  }
LABEL_276:
  if ( (*(_DWORD *)a2 & 1) == 0 )
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_Manufacturer,
      0,
      0LL,
      0,
      0);
LABEL_73:
  if ( a3 && (v21 = *(_QWORD *)(a3 + 280)) != 0 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverProvider,
                            18,
                            v21,
                            (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverProvider,
      0,
      0LL,
      0,
      0);
  }
  if ( a3 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverDate,
                            16,
                            a3 + 112,
                            8,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    v22 = *(unsigned __int16 *)(a3 + 120);
    v23 = *(unsigned __int16 *)(a3 + 122);
    v24 = *(unsigned __int16 *)(a3 + 124);
    v82.Length = 0;
    LODWORD(v48) = v22;
    LODWORD(Environment) = v23;
    DriverConfiguration = RtlUnicodeStringPrintf(
                            &v82,
                            L"%u.%u.%u.%u",
                            (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
                            v24,
                            Environment,
                            v48);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverVersion,
                            18,
                            (__int64)v82.Buffer,
                            (unsigned int)v82.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverInfPath,
                            18,
                            *(_QWORD *)(a3 + 48),
                            (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverInfSection,
                            18,
                            *(_QWORD *)(a3 + 96),
                            (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v65, &v64, &String2);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    if ( v72.Buffer && !RtlCompareUnicodeString(&v72, &String2, 1u) )
      RtlFreeAnsiString(&v72);
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                            18,
                            (__int64)String2.Buffer,
                            (unsigned int)String2.Length + 2,
                            0);
    RtlFreeAnsiString(&String2);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverDate,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverVersion,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverInfPath,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverInfSection,
      0,
      0LL,
      0,
      0);
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverNodeStrongName,
      0,
      0LL,
      0,
      0);
  }
  if ( !v72.Buffer || (v55 & 0x800000000LL) != 0 || (*(_DWORD *)(v6 + 396) & 0x6000) != 0 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_RollbackDriverNode,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_RollbackDriverNode,
                            18,
                            (__int64)v72.Buffer,
                            (unsigned int)v72.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  if ( v83.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                            8210,
                            (__int64)v83.Buffer,
                            v83.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverIncludedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( v84.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                            8210,
                            (__int64)v84.Buffer,
                            v84.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
      0,
      0LL,
      0,
      0);
  }
  if ( v86.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                            8210,
                            (__int64)v86.Buffer,
                            v86.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_MatchingDeviceId,
        0,
        0LL,
        0,
        0);
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_DriverRank,
        0,
        0LL,
        0,
        0);
    }
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_MatchingDeviceId,
                            18,
                            *(_QWORD *)(a3 + 80),
                            (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v8 + 8),
                            1,
                            (__int64)v10,
                            0,
                            (__int64)&DEVPKEY_Device_DriverRank,
                            7,
                            a3 + 108,
                            4,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
  }
  if ( HIDWORD(v55) )
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v8 + 8),
      1,
      (__int64)v10,
      0,
      (__int64)&DEVPKEY_Device_InstallFlags,
      0,
      0LL,
      0,
      0);
  if ( a3 )
  {
    v25 = v51;
    *v9 = v51;
    if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
      *v9 = v25 | 0x400;
    DriverConfiguration = PiDevCfgConfigureDeviceDriver(v61[0], a2, a3, (unsigned int)&v51, (__int64)&v55);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    *v9 |= v51;
    *v68 |= v55;
    for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
    {
      if ( (i[23] & 1) != 0 )
      {
        DriverConfiguration = PiDevCfgConfigureDeviceDriver(v61[0], a2, (_DWORD)i, (unsigned int)&v51, (__int64)&v55);
        if ( DriverConfiguration < 0 )
          goto LABEL_138;
        *v77 |= v51;
        *v68 |= v55;
      }
    }
    DriverConfiguration = PiDevCfgConfigureDeviceLocation(*(_QWORD *)v61, a2, &v51, &v55);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    v9 = v77;
    v27 = v68;
    v28 = *(_QWORD *)v61;
    *v77 |= v51;
    *v27 |= v55;
  }
  else
  {
    v28 = *(_QWORD *)v61;
    if ( (*(_DWORD *)(*(_QWORD *)v61 + 560LL) & 0x100) != 0 )
    {
      *v9 = 0;
    }
    else
    {
      *v9 = 64;
      PnpDeleteDeviceInterfaces(v8);
    }
    v27 = v68;
  }
  if ( v59 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v28) || (v55 & 0x200000000LL) != 0 )
    *v27 |= 2u;
  if ( v53 )
    *v27 |= 1u;
  if ( v76 )
  {
    DriverConfiguration = PiDevCfgConfigureDeviceKeys(v28, a2, (int)v76, -1, &v51, (__int64)&v55);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    *v9 |= v51;
    *v27 |= v55;
  }
  if ( (*v27 & 4) == 0 && v75 && Handle )
  {
    DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v75, Handle, &v51);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    *v9 |= v51;
  }
  if ( a3 )
    v29 = *(UNICODE_STRING *)(a3 + 392);
  else
    v29 = *(UNICODE_STRING *)PiDevCfgEmptyString;
  v30 = *(_QWORD *)(v8 + 8);
  String2 = v29;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          v30,
                          1,
                          (__int64)v10,
                          0,
                          (__int64)&DEVPKEY_Device_ConfigurationId,
                          18,
                          (__int64)v29.Buffer,
                          (unsigned int)v29.Length + 2,
                          0);
  if ( DriverConfiguration >= 0 )
  {
    if ( v87.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v8 + 8),
                              1,
                              (__int64)v10,
                              0,
                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                              8210,
                              (__int64)v87.Buffer,
                              v87.Length,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
        0,
        0LL,
        0,
        0);
    }
    if ( a3 && (v31 = *(_QWORD *)(a3 + 136)) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v8 + 8),
                              1,
                              (__int64)v10,
                              0,
                              (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                              18,
                              v31,
                              (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
        0,
        0LL,
        0,
        0);
    }
    if ( (v56 & 0x80u) != 0 )
    {
      v44 = *(_QWORD *)(v8 + 8);
      v54[0] = -1;
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              v44,
                              1,
                              (__int64)v10,
                              0,
                              (__int64)&DEVPKEY_Device_DriverInGroup,
                              17,
                              (__int64)v54,
                              1,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v8 + 8),
        1,
        (__int64)v10,
        0,
        (__int64)&DEVPKEY_Device_DriverInGroup,
        0,
        0LL,
        0,
        0);
    }
    if ( v73.Buffer && v73.Length )
      PipHardwareConfigActivateService(v73.Buffer);
    v32 = v80.Buffer;
    if ( v80.Buffer )
    {
      while ( *v32 )
      {
        PipHardwareConfigActivateService(v32);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v32);
        v45 = -1LL;
        do
          ++v45;
        while ( v32[v45] );
        v32 += v45 + 1;
      }
    }
    v33 = v81.Buffer;
    if ( v81.Buffer )
    {
      while ( *v33 )
      {
        PipHardwareConfigActivateService(v33);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v33);
        v46 = -1LL;
        do
          ++v46;
        while ( v33[v46] );
        v33 += v46 + 1;
      }
    }
  }
LABEL_138:
  RtlFreeAnsiString(&v64);
  RtlFreeAnsiString(&v65);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v73);
  RtlFreeAnsiString(&v80);
  RtlFreeAnsiString(&v81);
  RtlFreeAnsiString(&v83);
  RtlFreeAnsiString(&v84);
  RtlFreeAnsiString(&v86);
  RtlFreeAnsiString(&v87);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v72);
  if ( v82.Buffer )
    ExFreePoolWithTag(v82.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v76 )
    ZwClose(v76);
  return (unsigned int)DriverConfiguration;
}
