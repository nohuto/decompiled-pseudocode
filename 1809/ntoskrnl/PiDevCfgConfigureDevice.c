/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1406E40D4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x14015DAB8 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C88E0 (RtlQueryRegistryValuesEx.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F5108 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F69F4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406FAC94 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1406FAD54 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1407028C4 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140703220 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140703314 (PiDevCfgConfigureDeviceLocation.c)
 *     PipHardwareConfigActivateService @ 0x1407065F0 (PipHardwareConfigActivateService.c)
 *     _PnpCtxRegDeleteTree @ 0x14073D2F4 (_PnpCtxRegDeleteTree.c)
 *     PnpDeleteDeviceInterfaces @ 0x140826CDC (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x14082C4C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082E880 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgVerifyFeatureScore @ 0x14083286C (PiDevCfgVerifyFeatureScore.c)
 *     _CmDeleteDeviceRegKey @ 0x1408F8274 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v6; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  int *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  NTSTATUS DriverConfiguration; // ebx
  __int64 v14; // r8
  __int64 *v15; // r14
  __int64 v16; // rdx
  const WCHAR *v17; // rdx
  wchar_t *Buffer; // rcx
  __int64 v19; // r14
  char v20; // cl
  char v21; // al
  char v22; // al
  __int64 v23; // r8
  wchar_t *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int v28; // ecx
  __int64 *i; // r14
  _DWORD *v30; // r14
  __int64 v31; // rbx
  UNICODE_STRING v32; // xmm0
  __int64 v33; // r8
  __int64 v34; // rcx
  wchar_t *v35; // r14
  wchar_t *v36; // r14
  int v38; // eax
  char v39; // cl
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  char v43; // al
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  __int64 v51; // [rsp+28h] [rbp-D8h]
  char v52; // [rsp+60h] [rbp-A0h] BYREF
  char v53; // [rsp+61h] [rbp-9Fh] BYREF
  int v54; // [rsp+64h] [rbp-9Ch] BYREF
  char v55; // [rsp+68h] [rbp-98h] BYREF
  char v56; // [rsp+69h] [rbp-97h]
  int v57[2]; // [rsp+70h] [rbp-90h]
  char v58[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+7Ch] [rbp-84h] BYREF
  int v60; // [rsp+84h] [rbp-7Ch]
  int v61; // [rsp+88h] [rbp-78h] BYREF
  int v62; // [rsp+8Ch] [rbp-74h] BYREF
  int v63; // [rsp+90h] [rbp-70h]
  unsigned int v64; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v66; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING v67; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v69; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v70; // [rsp+CCh] [rbp-34h]
  int v71; // [rsp+D0h] [rbp-30h] BYREF
  int v72; // [rsp+D4h] [rbp-2Ch] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v74; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v76; // [rsp+100h] [rbp+0h] BYREF
  int *v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  PVOID P; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v80; // [rsp+128h] [rbp+28h] BYREF
  int v81; // [rsp+138h] [rbp+38h] BYREF
  __int64 v82; // [rsp+140h] [rbp+40h]
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v84; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v85; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v86; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v87; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v88; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING String1; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v90; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v91; // [rsp+1C8h] [rbp+C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 Source2; // [rsp+208h] [rbp+108h] BYREF
  __int64 v94; // [rsp+210h] [rbp+110h]
  _QWORD v95[20]; // [rsp+220h] [rbp+120h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v6 = a1;
  *(_QWORD *)v57 = a1;
  v77 = a4;
  Handle = 0LL;
  *a4 = 1024;
  *a5 = 0;
  v8 = a1 + 40;
  v9 = *(_QWORD *)(a2 + 16);
  KeyHandle = 0LL;
  v10 = a4;
  *(_DWORD *)&v80.Length = 0;
  v80.Buffer = 0LL;
  *(_DWORD *)&v84.Length = 0;
  v84.Buffer = 0LL;
  *(_DWORD *)&v85.Length = 0;
  v85.Buffer = 0LL;
  *(_DWORD *)&v87.Length = 0;
  v87.Buffer = 0LL;
  *(_DWORD *)&v88.Length = 0;
  v88.Buffer = 0LL;
  *(_DWORD *)&v90.Length = 0;
  v90.Buffer = 0LL;
  *(_DWORD *)&v91.Length = 0;
  v91.Buffer = 0LL;
  v63 = 0;
  v60 = 0;
  v54 = 1024;
  v59 = 0LL;
  v71 = 0;
  v72 = 0;
  v78 = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v67.Length = 0;
  v67.Buffer = 0LL;
  *(_DWORD *)&v74.Length = 0;
  v74.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v81 = 0;
  v82 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v52 = 0;
  v64 = 0;
  v69 = 0;
  v53 = 0;
  v55 = 0;
  P = 0LL;
  v70 = 0;
  v56 = 0;
  *(_DWORD *)&v76.Length = 0;
  v76.Buffer = 0LL;
  v58[0] = 0;
  v66 = a5;
  *(_DWORD *)&v86.Length = 68157440;
  v86.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v86.Buffer )
    goto LABEL_159;
  if ( !a3 )
    goto LABEL_33;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3, v11, v12, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  if ( (v78 = *(_QWORD *)(a3 + 264), *(_QWORD *)(a3 + 296)) && !PnpDuplicateUnicodeString((__int64)&v80, a3 + 288)
    || *(_QWORD *)(a3 + 312) && !PnpDuplicateUnicodeString((__int64)&v84, a3 + 304)
    || *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v85, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v87, a3 + 336)
    || *(_QWORD *)(a3 + 360) && !PnpDuplicateUnicodeString((__int64)&v88, a3 + 352) )
  {
LABEL_159:
    DriverConfiguration = -1073741670;
LABEL_140:
    PiDevCfgLogDeviceConfigured(v6, a2, a3, *v66, DriverConfiguration);
    goto LABEL_141;
  }
  v15 = *(__int64 **)(a3 + 208);
  v16 = *(unsigned int *)(a3 + 184);
  v54 = *(_DWORD *)(a3 + 384);
  v63 = *(_DWORD *)(a3 + 388);
  v60 = v16;
  if ( v15 != (__int64 *)(a3 + 208) )
  {
    do
    {
      v38 = PiDevCfgQueryDriverConfiguration(v15, v16, v14, 0LL);
      DriverConfiguration = v38;
      if ( v38 >= 0 )
      {
        if ( v15[37] )
        {
          *((_DWORD *)v15 + 46) &= ~1u;
        }
        else
        {
          if ( v15[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v84);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v15[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v85);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v15[43] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v87);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v15[45] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v88);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          v54 |= *((_DWORD *)v15 + 96);
          v63 |= *((_DWORD *)v15 + 97);
          v60 |= *((_DWORD *)v15 + 46);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v90);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v91);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
        }
      }
      else
      {
        if ( v38 != -1073740653 )
          break;
        if ( !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
          goto LABEL_141;
        v54 |= 0x400u;
        DriverConfiguration = 0;
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != (__int64 *)(a3 + 208) );
    LOBYTE(v16) = v60;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v54 & 0x400) != 0
      && (*(_BYTE *)(a3 + 408) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_190;
    }
    if ( (v16 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_190;
      v54 |= 0x400u;
    }
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = L"Description";
  QueryTable[0].Flags = 288;
  QueryTable[0].DefaultType = 0x1000000;
  QueryTable[0].EntryContext = &v67;
  QueryTable[1].DefaultType = 0x1000000;
  v17 = *(const WCHAR **)(a3 + 24);
  QueryTable[1].Name = L"Manufacturer";
  QueryTable[1].EntryContext = &v74;
  QueryTable[1].Flags = 288;
  DriverConfiguration = RtlQueryRegistryValuesEx(0xC0000000, v17, QueryTable, 0LL, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  Buffer = v74.Buffer;
  if ( !v67.Buffer && !v74.Buffer && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
  {
    if ( !PnpBootMode )
      goto LABEL_190;
    v54 |= 0x400u;
  }
  if ( !v67.Length && v67.Buffer )
  {
    RtlFreeAnsiString(&v67);
    Buffer = v74.Buffer;
  }
  if ( !v74.Length && Buffer )
    RtlFreeAnsiString(&v74);
  v19 = v78;
  if ( v78 && (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v78, 2u, 131097, 0, (__int64)&Handle) >= 0 )
  {
    memset(v95, 0, sizeof(v95));
    v95[0] = &DEVPKEY_DeviceClass_Configurable;
    LODWORD(v95[3]) = 1;
    v95[2] = &v52;
    LODWORD(v95[8]) = 1;
    v95[5] = &DEVPKEY_DeviceClass_PolicyExempt;
    v95[7] = &v53;
    v95[10] = &DEVPKEY_DeviceClass_DefaultService;
    v95[12] = &DestinationString;
    v95[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
    v95[17] = &P;
    LODWORD(v95[1]) = 17;
    LODWORD(v95[6]) = 17;
    LODWORD(v95[11]) = 18;
    HIDWORD(v95[13]) = 6;
    LODWORD(v95[16]) = 4099;
    HIDWORD(v95[18]) = 2;
    DriverConfiguration = PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v19, 2, (_DWORD)Handle, (__int64)v95, 4);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    v20 = v52;
    v21 = v53;
    if ( SLODWORD(v95[4]) < 0 )
      v20 = 0;
    v52 = v20;
    if ( SLODWORD(v95[9]) < 0 )
      v21 = 0;
    v53 = v21;
    if ( SLODWORD(v95[14]) < 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      v20 = v52;
    }
    if ( SLODWORD(v95[19]) >= 0 )
      v70 = v95[18];
    else
      P = 0LL;
    if ( v20 )
      goto LABEL_31;
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v19,
                2u,
                (__int64)Handle,
                0LL,
                (__int64)&DEVPKEY_DeviceClass_ConfigurableClassVersion,
                (__int64)&v61,
                (__int64)&v64,
                4,
                (__int64)&v62,
                0) >= 0
      && v61 == 7
      && v62 == 4
      && v64
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a3 + 64),
                8u,
                *(_QWORD *)(a3 + 16),
                0LL,
                (__int64)&DEVPKEY_DriverPackage_ClassVersion,
                (__int64)&v61,
                (__int64)&v69,
                4,
                (__int64)&v62,
                0) >= 0
      && v61 == 7
      && v62 == 4 )
    {
      v39 = v52;
      if ( v69 >= v64 )
        v39 = -1;
      v52 = v39;
    }
  }
  if ( v52 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
  {
LABEL_31:
    if ( P )
    {
      DriverConfiguration = PiDevCfgVerifyFeatureScore(a3, P, v70, 0LL);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    v6 = *(_QWORD *)v57;
    v10 = v77;
LABEL_33:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset(v95, 0, sizeof(v95));
      v40 = *(_QWORD *)(v8 + 8);
      v95[2] = &Source2;
      v95[5] = &DEVPKEY_Device_InstallFlags;
      v95[7] = (char *)&v59 + 4;
      v95[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v95[12] = &v76;
      v95[0] = &DEVPKEY_Device_ClassGuid;
      LODWORD(v95[1]) = 13;
      LODWORD(v95[3]) = 16;
      LODWORD(v95[6]) = 7;
      LODWORD(v95[8]) = 4;
      LODWORD(v95[11]) = 18;
      HIDWORD(v95[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v40, 1, v9, (__int64)v95, 3);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
      if ( SLODWORD(v95[4]) >= 0 )
      {
        v56 = 1;
      }
      else
      {
        Source2 = 0LL;
        v94 = 0LL;
      }
      v41 = HIDWORD(v59);
      if ( SLODWORD(v95[9]) < 0 )
        v41 = 0;
      HIDWORD(v59) = v41;
      if ( SLODWORD(v95[14]) < 0 )
        RtlInitUnicodeString(&v76, 0LL);
    }
    if ( !v53 )
    {
      if ( (v59 & 0x400000000LL) == 0 )
        goto LABEL_36;
      if ( !a3 )
        goto LABEL_235;
      memset(v95, 0, sizeof(v95));
      v42 = *(_QWORD *)(v8 + 8);
      v95[2] = &String1;
      v95[0] = &DEVPKEY_Device_DriverInfPath;
      LODWORD(v95[1]) = 18;
      HIDWORD(v95[3]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v42, 1, v9, (__int64)v95, 1);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
      if ( SLODWORD(v95[4]) < 0 )
        RtlInitUnicodeString(&String1, 0LL);
      if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
      {
LABEL_235:
        v43 = -1;
        v53 = -1;
      }
      else
      {
        v43 = v53;
      }
      if ( !v43 )
      {
LABEL_36:
        DriverConfiguration = PiDevCfgEnforceDevicePolicy(v6, a2, v78, 0LL);
        if ( DriverConfiguration < 0 )
          goto LABEL_139;
      }
    }
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      String2.Buffer = L"Configuration";
      *(_DWORD *)&String2.Length = 1835034;
      KeyHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &String2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DriverConfiguration = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DriverConfiguration != -1073741772 )
      {
        if ( DriverConfiguration < 0
          || (DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v6, KeyHandle), DriverConfiguration < 0) )
        {
LABEL_139:
          if ( ((DriverConfiguration + 1073740653) & 0xFFFFFFFD) == 0 )
            goto LABEL_141;
          goto LABEL_140;
        }
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL) + 16LL) & 4) == 0
      || (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(v8 + 8),
                1u,
                v9,
                0LL,
                (__int64)&DEVPKEY_Device_Reported,
                (__int64)&v61,
                (__int64)&v55,
                1,
                (__int64)&v62,
                0) >= 0
      && v61 == 17
      && v62 == 1 )
    {
      v22 = v55;
    }
    else
    {
      v22 = 0;
      v55 = 0;
    }
    if ( a3 && !v80.Buffer && !DestinationString.Buffer && !v22 && (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
    {
      DriverConfiguration = -1073740652;
      goto LABEL_140;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
LABEL_44:
      if ( (int)PiDevCfgMigrateDevice(
                  v6,
                  a2,
                  a3 != 0 ? a3 + 256 : 0,
                  a3 != 0 ? a3 + 40 : 0,
                  (__int64)&v71,
                  (__int64)&v72) >= 0 )
      {
        v54 |= v71;
        LODWORD(v59) = v72 | v59;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgResetDeviceDriverSettings(
          v6,
          a2,
          a3 != 0 ? a3 + 240 : 0,
          (int)Handle,
          (PGUID)((unsigned __int64)&Source2 & -(__int64)(v56 != 0)));
        PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v9, L"Devices");
        PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v9, L"Filters");
      }
      if ( !a3 || PnpIsNullGuid((void *)(a3 + 240)) )
      {
        if ( (*(_DWORD *)a2 & 1) == 0 )
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v9,
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
                                v9,
                                0,
                                (__int64)&DEVPKEY_Device_ClassGuid,
                                13,
                                a3 + 240,
                                16,
                                0);
        if ( DriverConfiguration < 0 )
          goto LABEL_139;
      }
      v24 = v80.Buffer;
      if ( v80.Buffer )
      {
        if ( v80.Length )
        {
          v25 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v9,
                  0,
                  (__int64)&DEVPKEY_Device_Service,
                  18,
                  (__int64)v80.Buffer,
                  (unsigned int)v80.Length + 2,
                  0);
          goto LABEL_54;
        }
      }
      else if ( DestinationString.Buffer && DestinationString.Length )
      {
        v25 = PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
                0,
                (__int64)&DEVPKEY_Device_Service,
                18,
                (__int64)DestinationString.Buffer,
                (unsigned int)DestinationString.Length + 2,
                0);
LABEL_54:
        DriverConfiguration = v25;
        if ( v25 < 0 )
          goto LABEL_139;
LABEL_55:
        if ( v84.Buffer )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(v8 + 8),
                                  1,
                                  v9,
                                  0,
                                  (__int64)&DEVPKEY_Device_LowerFilters,
                                  8210,
                                  (__int64)v84.Buffer,
                                  v84.Length,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v9,
            0,
            (__int64)&DEVPKEY_Device_LowerFilters,
            0,
            0LL,
            0,
            0);
        }
        if ( v85.Buffer )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(v8 + 8),
                                  1,
                                  v9,
                                  0,
                                  (__int64)&DEVPKEY_Device_UpperFilters,
                                  8210,
                                  (__int64)v85.Buffer,
                                  v85.Length,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v9,
            0,
            (__int64)&DEVPKEY_Device_UpperFilters,
            0,
            0LL,
            0,
            0);
        }
        if ( a3 && v67.Buffer )
        {
          DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v67, &UnicodeString, &v81);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
          if ( (v54 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    *(_QWORD *)(v8 + 8),
                                    1,
                                    v9,
                                    0,
                                    (__int64)&DEVPKEY_Device_DeviceDesc,
                                    18,
                                    (__int64)UnicodeString.Buffer,
                                    (unsigned int)UnicodeString.Length + 2,
                                    0);
            if ( DriverConfiguration < 0 )
              goto LABEL_139;
          }
          if ( v82 )
          {
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    *(_QWORD *)(v8 + 8),
                                    1,
                                    v9,
                                    0,
                                    (__int64)&DEVPKEY_Device_DriverDesc,
                                    18,
                                    v82,
                                    (unsigned int)(unsigned __int16)v81 + 2,
                                    0);
            if ( DriverConfiguration < 0 )
              goto LABEL_139;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(v8 + 8),
              1,
              v9,
              0,
              (__int64)&DEVPKEY_Device_DriverDesc,
              0,
              0LL,
              0,
              0);
          }
          RtlFreeAnsiString(&UnicodeString);
          v81 = 0;
          v82 = 0LL;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            a2,
            *(_QWORD *)(v8 + 8),
            1,
            v9,
            0,
            (__int64)&DEVPKEY_Device_DriverDesc,
            0,
            0LL,
            0,
            0);
          if ( a3 )
          {
LABEL_70:
            if ( v74.Buffer )
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v74, &UnicodeString, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_Manufacturer,
                                      18,
                                      (__int64)UnicodeString.Buffer,
                                      (unsigned int)UnicodeString.Length + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              goto LABEL_73;
            }
LABEL_280:
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
                0,
                (__int64)&DEVPKEY_Device_Manufacturer,
                0,
                0LL,
                0,
                0);
LABEL_73:
            if ( a3 && (v26 = *(_QWORD *)(a3 + 280)) != 0 )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverProvider,
                                      18,
                                      v26,
                                      (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
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
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverDate,
                                      16,
                                      a3 + 112,
                                      8,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              LODWORD(v51) = *(unsigned __int16 *)(a3 + 120);
              v27 = (unsigned __int64)*(unsigned int *)(a3 + 124) >> 16;
              LODWORD(Environment) = *(unsigned __int16 *)(a3 + 122);
              v86.Length = 0;
              DriverConfiguration = RtlUnicodeStringPrintf(
                                      &v86,
                                      L"%u.%u.%u.%u",
                                      (unsigned __int16)v27,
                                      *(unsigned __int16 *)(a3 + 124),
                                      Environment,
                                      v51);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverVersion,
                                      18,
                                      (__int64)v86.Buffer,
                                      (unsigned int)v86.Length + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverInfPath,
                                      18,
                                      *(_QWORD *)(a3 + 48),
                                      (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverInfSection,
                                      18,
                                      *(_QWORD *)(a3 + 96),
                                      (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v74, &v67, &String2);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              if ( v76.Buffer && !RtlCompareUnicodeString(&v76, &String2, 1u) )
                RtlFreeAnsiString(&v76);
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                                      18,
                                      (__int64)String2.Buffer,
                                      (unsigned int)String2.Length + 2,
                                      0);
              RtlFreeAnsiString(&String2);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
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
                v9,
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
                v9,
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
                v9,
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
                v9,
                0,
                (__int64)&DEVPKEY_Device_DriverNodeStrongName,
                0,
                0LL,
                0,
                0);
            }
            if ( !v76.Buffer || (v59 & 0x800000000LL) != 0 || (*(_DWORD *)(v6 + 396) & 0x6000) != 0 )
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v9,
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
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_RollbackDriverNode,
                                      18,
                                      (__int64)v76.Buffer,
                                      (unsigned int)v76.Length + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
            }
            if ( v87.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                                      8210,
                                      (__int64)v87.Buffer,
                                      v87.Length,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
                0,
                (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                0,
                0LL,
                0,
                0);
            }
            if ( v88.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                                      8210,
                                      (__int64)v88.Buffer,
                                      v88.Length,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
                0,
                (__int64)&DEVPKEY_Device_DriverIncludedConfigs,
                0,
                0LL,
                0,
                0);
            }
            if ( v90.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                                      8210,
                                      (__int64)v90.Buffer,
                                      v90.Length,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
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
                  v9,
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
                  v9,
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
                                      v9,
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
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_DriverRank,
                                      7,
                                      a3 + 108,
                                      4,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
            }
            if ( HIDWORD(v59) )
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                a2,
                *(_QWORD *)(v8 + 8),
                1,
                v9,
                0,
                (__int64)&DEVPKEY_Device_InstallFlags,
                0,
                0LL,
                0,
                0);
            if ( a3 )
            {
              v28 = v54;
              *v10 = v54;
              if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                *v10 = v28 | 0x400;
              LODWORD(v6) = v57[0];
              DriverConfiguration = PiDevCfgConfigureDeviceDriver(v57[0], a2, a3, (unsigned int)&v54, (__int64)&v59);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              *v10 |= v54;
              *v66 |= v59;
              for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
              {
                if ( (i[23] & 1) != 0 )
                {
                  DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                          v57[0],
                                          a2,
                                          (_DWORD)i,
                                          (unsigned int)&v54,
                                          (__int64)&v59);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_138;
                  *v77 |= v54;
                  *v66 |= v59;
                }
              }
              LODWORD(v6) = v57[0];
              DriverConfiguration = PiDevCfgConfigureDeviceLocation(*(_QWORD *)v57, a2, &v54, &v59);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              v10 = v77;
              v30 = v66;
              v31 = *(_QWORD *)v57;
              *v77 |= v54;
              *v30 |= v59;
            }
            else
            {
              v31 = *(_QWORD *)v57;
              if ( (*(_DWORD *)(*(_QWORD *)v57 + 560LL) & 0x100) != 0 )
              {
                *v10 = 0;
              }
              else
              {
                *v10 = 64;
                PnpDeleteDeviceInterfaces(v8, v24, v23, 0LL);
              }
              v30 = v66;
            }
            if ( v63 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v31) || (v59 & 0x200000000LL) != 0 )
              *v30 |= 2u;
            if ( v56 )
              *v30 |= 1u;
            if ( KeyHandle )
            {
              DriverConfiguration = PiDevCfgConfigureDeviceKeys(v31, a2, (int)KeyHandle, -1, &v54, (__int64)&v59);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
              *v10 |= v54;
              *v30 |= v59;
            }
            if ( (*v30 & 4) == 0 && v78 && Handle )
            {
              DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v78, Handle, &v54, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
              *v10 |= v54;
            }
            if ( a3 )
              v32 = *(UNICODE_STRING *)(a3 + 392);
            else
              v32 = *(UNICODE_STRING *)PiDevCfgEmptyString;
            v33 = *(_QWORD *)(v8 + 8);
            String2 = v32;
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    v33,
                                    1,
                                    v9,
                                    0,
                                    (__int64)&DEVPKEY_Device_ConfigurationId,
                                    18,
                                    (__int64)v32.Buffer,
                                    (unsigned int)v32.Length + 2,
                                    0);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
            if ( v91.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                                      8210,
                                      (__int64)v91.Buffer,
                                      v91.Length,
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
                v9,
                0,
                (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                0,
                0LL,
                0,
                0);
            }
            if ( a3 && (v34 = *(_QWORD *)(a3 + 136)) != 0 )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(
                                      PiPnpRtlCtx,
                                      a2,
                                      *(_QWORD *)(v8 + 8),
                                      1,
                                      v9,
                                      0,
                                      (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                                      18,
                                      v34,
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
                v9,
                0,
                (__int64)&DEVPKEY_Device_MatchingTargetComputerId,
                0,
                0LL,
                0,
                0);
            }
            if ( (v60 & 0x80u) == 0 )
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  a2,
                  *(_QWORD *)(v8 + 8),
                  1,
                  v9,
                  0,
                  (__int64)&DEVPKEY_Device_DriverInGroup,
                  0,
                  0LL,
                  0,
                  0);
              goto LABEL_133;
            }
            v47 = *(_QWORD *)(v8 + 8);
            v58[0] = -1;
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    v47,
                                    1,
                                    v9,
                                    0,
                                    (__int64)&DEVPKEY_Device_DriverInGroup,
                                    17,
                                    (__int64)v58,
                                    1,
                                    0);
            if ( DriverConfiguration >= 0 )
            {
LABEL_133:
              if ( v80.Buffer && v80.Length )
                PipHardwareConfigActivateService(v80.Buffer);
              v35 = v84.Buffer;
              if ( v84.Buffer )
              {
                while ( *v35 )
                {
                  PipHardwareConfigActivateService(v35);
                  if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
                    PiDevCfgMakeServiceBootStart(v35);
                  v48 = -1LL;
                  do
                    ++v48;
                  while ( v35[v48] );
                  v35 += v48 + 1;
                }
              }
              v36 = v85.Buffer;
              if ( v85.Buffer )
              {
                while ( *v36 )
                {
                  PipHardwareConfigActivateService(v36);
                  if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
                    PiDevCfgMakeServiceBootStart(v36);
                  v49 = -1LL;
                  do
                    ++v49;
                  while ( v36[v49] );
                  v36 += v49 + 1;
                }
              }
            }
LABEL_138:
            LODWORD(v6) = v57[0];
            goto LABEL_139;
          }
          memset(v95, 0, sizeof(v95));
          v46 = *(_QWORD *)(v8 + 8);
          v95[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v95[2] = &v67;
          LODWORD(v95[1]) = 18;
          HIDWORD(v95[3]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v46, 1, v9, (__int64)v95, 1) < 0
            || SLODWORD(v95[4]) < 0
            || !v67.Buffer )
          {
            goto LABEL_280;
          }
          DriverConfiguration = PiDevCfgSetObjectProperty(
                                  PiPnpRtlCtx,
                                  a2,
                                  *(_QWORD *)(v8 + 8),
                                  1,
                                  v9,
                                  0,
                                  (__int64)&DEVPKEY_Device_DeviceDesc,
                                  18,
                                  (__int64)v67.Buffer,
                                  (unsigned int)v67.Length + 2,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
        }
        if ( !a3 )
          goto LABEL_280;
        goto LABEL_70;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 && (v80.Buffer && DestinationString.Buffer || !v55) )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v8 + 8),
          1,
          v9,
          0,
          (__int64)&DEVPKEY_Device_Service,
          0,
          0LL,
          0,
          0);
      goto LABEL_55;
    }
    if ( a3 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_44;
      v44 = (_QWORD *)(a3 + 240);
      if ( PnpIsNullGuid((void *)(a3 + 240)) )
        goto LABEL_44;
      v45 = Source2 - *v44;
      if ( Source2 == *v44 )
        v45 = v94 - *(_QWORD *)(a3 + 248);
      if ( !v45 )
        goto LABEL_44;
    }
    else if ( !v56 || (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 17LL);
    }
    CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18LL);
    goto LABEL_44;
  }
  if ( PnpBootMode )
  {
    v54 |= 0x400u;
    goto LABEL_31;
  }
LABEL_190:
  DriverConfiguration = -1073740651;
LABEL_141:
  RtlFreeAnsiString(&v67);
  RtlFreeAnsiString(&v74);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v80);
  RtlFreeAnsiString(&v84);
  RtlFreeAnsiString(&v85);
  RtlFreeAnsiString(&v87);
  RtlFreeAnsiString(&v88);
  RtlFreeAnsiString(&v90);
  RtlFreeAnsiString(&v91);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v76);
  if ( v86.Buffer )
    ExFreePoolWithTag(v86.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
