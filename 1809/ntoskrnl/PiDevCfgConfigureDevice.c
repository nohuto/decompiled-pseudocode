/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1406E2E34
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F4424 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14015D71C (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x14015D9B8 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405901B0 (PnpIsNullGuid.c)
 *     _PnpOpenObjectRegKey @ 0x140597118 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14059A008 (_PnpGetObjectProperty.c)
 *     RtlCompareUnicodeString @ 0x1405BFF20 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7640 (RtlQueryRegistryValuesEx.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E4D7C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3960 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F3E68 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F3FE4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5754 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6240 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406F99F4 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1406F9AB4 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406F9C08 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x140700D10 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140701624 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140701F80 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140702074 (PiDevCfgConfigureDeviceLocation.c)
 *     PipHardwareConfigActivateService @ 0x140705350 (PipHardwareConfigActivateService.c)
 *     _PnpCtxRegDeleteTree @ 0x14073C104 (_PnpCtxRegDeleteTree.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825ADC (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgAppendMultiSz @ 0x14082B2C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082D650 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082E968 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgVerifyFeatureScore @ 0x14083160C (PiDevCfgVerifyFeatureScore.c)
 *     _CmDeleteDeviceRegKey @ 0x1408F6FB4 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v6; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  int *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  int DriverConfiguration; // ebx
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
  PVOID v50; // [rsp+20h] [rbp-E0h]
  PVOID v51; // [rsp+20h] [rbp-E0h]
  __int64 v52; // [rsp+28h] [rbp-D8h]
  char v53; // [rsp+60h] [rbp-A0h] BYREF
  char v54; // [rsp+61h] [rbp-9Fh] BYREF
  int v55; // [rsp+64h] [rbp-9Ch] BYREF
  char v56; // [rsp+68h] [rbp-98h] BYREF
  char v57; // [rsp+69h] [rbp-97h]
  int v58[2]; // [rsp+70h] [rbp-90h]
  char v59[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+7Ch] [rbp-84h] BYREF
  int v61; // [rsp+84h] [rbp-7Ch]
  int v62; // [rsp+88h] [rbp-78h] BYREF
  int v63; // [rsp+8Ch] [rbp-74h] BYREF
  int v64; // [rsp+90h] [rbp-70h]
  unsigned int v65; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v67; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING v68; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v70; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v71; // [rsp+CCh] [rbp-34h]
  int v72; // [rsp+D0h] [rbp-30h] BYREF
  int v73; // [rsp+D4h] [rbp-2Ch] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v75; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v77; // [rsp+100h] [rbp+0h] BYREF
  int *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  PVOID P; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v81; // [rsp+128h] [rbp+28h] BYREF
  int v82; // [rsp+138h] [rbp+38h] BYREF
  __int64 v83; // [rsp+140h] [rbp+40h]
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v85; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v86; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v87; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v88; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v89; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING String1; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v91; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v92; // [rsp+1C8h] [rbp+C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 Source2; // [rsp+208h] [rbp+108h] BYREF
  __int64 v95; // [rsp+210h] [rbp+110h]
  _QWORD v96[20]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v97[22]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v6 = a1;
  *(_QWORD *)v58 = a1;
  v78 = a4;
  Handle = 0LL;
  *a4 = 1024;
  *a5 = 0;
  v8 = a1 + 40;
  v9 = *(_QWORD *)(a2 + 16);
  KeyHandle = 0LL;
  v10 = a4;
  *(_DWORD *)&v81.Length = 0;
  v81.Buffer = 0LL;
  *(_DWORD *)&v85.Length = 0;
  v85.Buffer = 0LL;
  *(_DWORD *)&v86.Length = 0;
  v86.Buffer = 0LL;
  *(_DWORD *)&v88.Length = 0;
  v88.Buffer = 0LL;
  *(_DWORD *)&v89.Length = 0;
  v89.Buffer = 0LL;
  *(_DWORD *)&v91.Length = 0;
  v91.Buffer = 0LL;
  *(_DWORD *)&v92.Length = 0;
  v92.Buffer = 0LL;
  v64 = 0;
  v61 = 0;
  v55 = 1024;
  v60 = 0LL;
  v72 = 0;
  v73 = 0;
  v79 = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v68.Length = 0;
  v68.Buffer = 0LL;
  *(_DWORD *)&v75.Length = 0;
  v75.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v82 = 0;
  v83 = 0LL;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0LL;
  v53 = 0;
  v65 = 0;
  v70 = 0;
  v54 = 0;
  v56 = 0;
  P = 0LL;
  v71 = 0;
  v57 = 0;
  *(_DWORD *)&v77.Length = 0;
  v77.Buffer = 0LL;
  v59[0] = 0;
  v67 = a5;
  *(_DWORD *)&v87.Length = 68157440;
  v87.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x410uLL, 0x63647050u);
  if ( !v87.Buffer )
    goto LABEL_159;
  if ( !a3 )
    goto LABEL_33;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3, v11, v12, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_139;
  if ( (v79 = *(_QWORD *)(a3 + 264), *(_QWORD *)(a3 + 296)) && !PnpDuplicateUnicodeString((__int64)&v81, a3 + 288)
    || *(_QWORD *)(a3 + 312) && !PnpDuplicateUnicodeString((__int64)&v85, a3 + 304)
    || *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v86, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v88, a3 + 336)
    || *(_QWORD *)(a3 + 360) && !PnpDuplicateUnicodeString((__int64)&v89, a3 + 352) )
  {
LABEL_159:
    DriverConfiguration = -1073741670;
LABEL_140:
    PiDevCfgLogDeviceConfigured(v6, a2, a3, *v67, DriverConfiguration);
    goto LABEL_141;
  }
  v15 = *(__int64 **)(a3 + 208);
  v16 = *(unsigned int *)(a3 + 184);
  v55 = *(_DWORD *)(a3 + 384);
  v64 = *(_DWORD *)(a3 + 388);
  v61 = v16;
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
            DriverConfiguration = PiDevCfgAppendMultiSz(&v85);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v15[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v86);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v15[43] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v88);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          if ( v15[45] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v89);
            if ( DriverConfiguration < 0 )
              goto LABEL_138;
          }
          v55 |= *((_DWORD *)v15 + 96);
          v64 |= *((_DWORD *)v15 + 97);
          v61 |= *((_DWORD *)v15 + 46);
          DriverConfiguration = PiDevCfgAppendMultiSz(&v91);
          if ( DriverConfiguration < 0 )
            goto LABEL_138;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v92);
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
        v55 |= 0x400u;
        DriverConfiguration = 0;
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != (__int64 *)(a3 + 208) );
    LOBYTE(v16) = v61;
  }
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v55 & 0x400) != 0
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
      v55 |= 0x400u;
    }
  }
  memset(v97, 0, 0xA8uLL);
  v97[2] = L"Description";
  LODWORD(v97[1]) = 288;
  LODWORD(v97[4]) = 0x1000000;
  v97[3] = &v68;
  LODWORD(v97[11]) = 0x1000000;
  v17 = *(const WCHAR **)(a3 + 24);
  v97[9] = L"Manufacturer";
  v97[10] = &v75;
  LODWORD(v97[8]) = 288;
  v50 = 0LL;
  DriverConfiguration = RtlQueryRegistryValuesEx(3221225472LL, v17, (__int64)v97, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_138;
  Buffer = v75.Buffer;
  if ( !v68.Buffer && !v75.Buffer && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
  {
    if ( !PnpBootMode )
      goto LABEL_190;
    v55 |= 0x400u;
  }
  if ( !v68.Length && v68.Buffer )
  {
    RtlFreeAnsiString(&v68);
    Buffer = v75.Buffer;
  }
  if ( !v75.Length && Buffer )
    RtlFreeAnsiString(&v75);
  v19 = v79;
  if ( v79 && (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v79, 2u, 131097, 0, (__int64)&Handle) >= 0 )
  {
    memset(v96, 0, sizeof(v96));
    v96[0] = &DEVPKEY_DeviceClass_Configurable;
    LODWORD(v96[3]) = 1;
    v96[2] = &v53;
    LODWORD(v96[8]) = 1;
    v96[5] = &DEVPKEY_DeviceClass_PolicyExempt;
    v96[7] = &v54;
    v96[10] = &DEVPKEY_DeviceClass_DefaultService;
    v96[12] = &DestinationString;
    v96[15] = &DEVPKEY_DeviceClass_CompatibleFeatureScores;
    v96[17] = &P;
    LODWORD(v96[1]) = 17;
    LODWORD(v96[6]) = 17;
    LODWORD(v96[11]) = 18;
    HIDWORD(v96[13]) = 6;
    LODWORD(v96[16]) = 4099;
    HIDWORD(v96[18]) = 2;
    DriverConfiguration = PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v19, 2, (_DWORD)Handle, (__int64)v96, 4);
    if ( DriverConfiguration < 0 )
      goto LABEL_138;
    v20 = v53;
    v21 = v54;
    if ( SLODWORD(v96[4]) < 0 )
      v20 = 0;
    v53 = v20;
    if ( SLODWORD(v96[9]) < 0 )
      v21 = 0;
    v54 = v21;
    if ( SLODWORD(v96[14]) < 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      v20 = v53;
    }
    if ( SLODWORD(v96[19]) >= 0 )
      v71 = v96[18];
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
                (__int64)&v62,
                (__int64)&v65,
                4,
                (__int64)&v63,
                0) >= 0
      && v62 == 7
      && v63 == 4
      && v65
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a3 + 64),
                8u,
                *(_QWORD *)(a3 + 16),
                0LL,
                (__int64)&DEVPKEY_DriverPackage_ClassVersion,
                (__int64)&v62,
                (__int64)&v70,
                4,
                (__int64)&v63,
                0) >= 0
      && v62 == 7
      && v63 == 4 )
    {
      v39 = v53;
      if ( v70 >= v65 )
        v39 = -1;
      v53 = v39;
    }
  }
  if ( v53 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
  {
LABEL_31:
    if ( P )
    {
      DriverConfiguration = PiDevCfgVerifyFeatureScore(a3, P, v71, 0LL, v50);
      if ( DriverConfiguration < 0 )
        goto LABEL_138;
    }
    v6 = *(_QWORD *)v58;
    v10 = v78;
LABEL_33:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset(v96, 0, sizeof(v96));
      v40 = *(_QWORD *)(v8 + 8);
      v96[2] = &Source2;
      v96[5] = &DEVPKEY_Device_InstallFlags;
      v96[7] = (char *)&v60 + 4;
      v96[10] = &DEVPKEY_Device_DriverNodeStrongName;
      v96[12] = &v77;
      v96[0] = &DEVPKEY_Device_ClassGuid;
      LODWORD(v96[1]) = 13;
      LODWORD(v96[3]) = 16;
      LODWORD(v96[6]) = 7;
      LODWORD(v96[8]) = 4;
      LODWORD(v96[11]) = 18;
      HIDWORD(v96[13]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v40, 1, v9, (__int64)v96, 3);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
      if ( SLODWORD(v96[4]) >= 0 )
      {
        v57 = 1;
      }
      else
      {
        Source2 = 0LL;
        v95 = 0LL;
      }
      v41 = HIDWORD(v60);
      if ( SLODWORD(v96[9]) < 0 )
        v41 = 0;
      HIDWORD(v60) = v41;
      if ( SLODWORD(v96[14]) < 0 )
        RtlInitUnicodeString(&v77, 0LL);
    }
    if ( !v54 )
    {
      if ( (v60 & 0x400000000LL) == 0 )
        goto LABEL_36;
      if ( !a3 )
        goto LABEL_235;
      memset(v96, 0, sizeof(v96));
      v42 = *(_QWORD *)(v8 + 8);
      v96[2] = &String1;
      v96[0] = &DEVPKEY_Device_DriverInfPath;
      LODWORD(v96[1]) = 18;
      HIDWORD(v96[3]) = 6;
      DriverConfiguration = PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v42, 1, v9, (__int64)v96, 1);
      if ( DriverConfiguration < 0 )
        goto LABEL_139;
      if ( SLODWORD(v96[4]) < 0 )
        RtlInitUnicodeString(&String1, 0LL);
      if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
      {
LABEL_235:
        v43 = -1;
        v54 = -1;
      }
      else
      {
        v43 = v54;
      }
      if ( !v43 )
      {
LABEL_36:
        DriverConfiguration = PiDevCfgEnforceDevicePolicy(v6, a2, v79, 0LL);
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
                (__int64)&v62,
                (__int64)&v56,
                1,
                (__int64)&v63,
                0) >= 0
      && v62 == 17
      && v63 == 1 )
    {
      v22 = v56;
    }
    else
    {
      v22 = 0;
      v56 = 0;
    }
    if ( a3 && !v81.Buffer && !DestinationString.Buffer && !v22 && (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
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
                  (__int64)&v72,
                  (__int64)&v73) >= 0 )
      {
        v55 |= v72;
        LODWORD(v60) = v73 | v60;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgResetDeviceDriverSettings(
          v6,
          a2,
          a3 != 0 ? a3 + 240 : 0,
          (_DWORD)Handle,
          (unsigned __int64)&Source2 & -(__int64)(v57 != 0));
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
      v24 = v81.Buffer;
      if ( v81.Buffer )
      {
        if ( v81.Length )
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
                  (__int64)v81.Buffer,
                  (unsigned int)v81.Length + 2,
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
        if ( v85.Buffer )
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
            (__int64)&DEVPKEY_Device_LowerFilters,
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
                                  v9,
                                  0,
                                  (__int64)&DEVPKEY_Device_UpperFilters,
                                  8210,
                                  (__int64)v86.Buffer,
                                  v86.Length,
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
        if ( a3 && v68.Buffer )
        {
          DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v68, &UnicodeString, &v82);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
          if ( (v55 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
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
          if ( v83 )
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
                                    v83,
                                    (unsigned int)(unsigned __int16)v82 + 2,
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
          v82 = 0;
          v83 = 0LL;
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
            if ( v75.Buffer )
            {
              DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v75, &UnicodeString, 0LL);
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
              LODWORD(v52) = *(unsigned __int16 *)(a3 + 120);
              v27 = (unsigned __int64)*(unsigned int *)(a3 + 124) >> 16;
              LODWORD(v51) = *(unsigned __int16 *)(a3 + 122);
              v87.Length = 0;
              DriverConfiguration = RtlUnicodeStringPrintf(
                                      &v87,
                                      L"%u.%u.%u.%u",
                                      (unsigned __int16)v27,
                                      *(unsigned __int16 *)(a3 + 124),
                                      v51,
                                      v52);
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
                                      (__int64)v87.Buffer,
                                      (unsigned int)v87.Length + 2,
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
              DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v75, &v68, &String2);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              if ( v77.Buffer && !RtlCompareUnicodeString(&v77, &String2, 1u) )
                RtlFreeAnsiString(&v77);
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
            if ( !v77.Buffer || (v60 & 0x800000000LL) != 0 || (*(_DWORD *)(v6 + 396) & 0x6000) != 0 )
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
                                      (__int64)v77.Buffer,
                                      (unsigned int)v77.Length + 2,
                                      0);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
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
                                      (__int64)&DEVPKEY_Device_DriverIncludedInfs,
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
                (__int64)&DEVPKEY_Device_DriverIncludedInfs,
                0,
                0LL,
                0,
                0);
            }
            if ( v89.Buffer )
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
                                      (__int64)v89.Buffer,
                                      v89.Length,
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
            if ( v91.Buffer )
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
                                      (__int64)v91.Buffer,
                                      v91.Length,
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
            if ( HIDWORD(v60) )
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
              v28 = v55;
              *v10 = v55;
              if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                *v10 = v28 | 0x400;
              LODWORD(v6) = v58[0];
              DriverConfiguration = PiDevCfgConfigureDeviceDriver(v58[0], a2, a3, (unsigned int)&v55, (__int64)&v60);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              *v10 |= v55;
              *v67 |= v60;
              for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
              {
                if ( (i[23] & 1) != 0 )
                {
                  DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                          v58[0],
                                          a2,
                                          (_DWORD)i,
                                          (unsigned int)&v55,
                                          (__int64)&v60);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_138;
                  *v78 |= v55;
                  *v67 |= v60;
                }
              }
              LODWORD(v6) = v58[0];
              DriverConfiguration = PiDevCfgConfigureDeviceLocation(*(_QWORD *)v58, a2, &v55, &v60);
              if ( DriverConfiguration < 0 )
                goto LABEL_139;
              v10 = v78;
              v30 = v67;
              v31 = *(_QWORD *)v58;
              *v78 |= v55;
              *v30 |= v60;
            }
            else
            {
              v31 = *(_QWORD *)v58;
              if ( (*(_DWORD *)(*(_QWORD *)v58 + 560LL) & 0x100) != 0 )
              {
                *v10 = 0;
              }
              else
              {
                *v10 = 64;
                PnpDeleteDeviceInterfaces(v8, v24, v23, 0LL);
              }
              v30 = v67;
            }
            if ( v64 && !InitIsWinPEMode && PipIsDevNodeDNStarted(v31) || (v60 & 0x200000000LL) != 0 )
              *v30 |= 2u;
            if ( v57 )
              *v30 |= 1u;
            if ( KeyHandle )
            {
              DriverConfiguration = PiDevCfgConfigureDeviceKeys(v31, a2, (int)KeyHandle, -1, &v55, (__int64)&v60);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
              *v10 |= v55;
              *v30 |= v60;
            }
            if ( (*v30 & 4) == 0 && v79 && Handle )
            {
              DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v79, Handle, &v55, 0LL);
              if ( DriverConfiguration < 0 )
                goto LABEL_138;
              *v10 |= v55;
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
            if ( v92.Buffer )
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
                                      (__int64)v92.Buffer,
                                      v92.Length,
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
            if ( (v61 & 0x80u) == 0 )
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
            v59[0] = -1;
            DriverConfiguration = PiDevCfgSetObjectProperty(
                                    PiPnpRtlCtx,
                                    a2,
                                    v47,
                                    1,
                                    v9,
                                    0,
                                    (__int64)&DEVPKEY_Device_DriverInGroup,
                                    17,
                                    (__int64)v59,
                                    1,
                                    0);
            if ( DriverConfiguration >= 0 )
            {
LABEL_133:
              if ( v81.Buffer && v81.Length )
                PipHardwareConfigActivateService(v81.Buffer);
              v35 = v85.Buffer;
              if ( v85.Buffer )
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
              v36 = v86.Buffer;
              if ( v86.Buffer )
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
            LODWORD(v6) = v58[0];
            goto LABEL_139;
          }
          memset(v96, 0, sizeof(v96));
          v46 = *(_QWORD *)(v8 + 8);
          v96[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v96[2] = &v68;
          LODWORD(v96[1]) = 18;
          HIDWORD(v96[3]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(PiPnpRtlCtx, v46, 1, v9, (__int64)v96, 1) < 0
            || SLODWORD(v96[4]) < 0
            || !v68.Buffer )
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
                                  (__int64)v68.Buffer,
                                  (unsigned int)v68.Length + 2,
                                  0);
          if ( DriverConfiguration < 0 )
            goto LABEL_139;
        }
        if ( !a3 )
          goto LABEL_280;
        goto LABEL_70;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 && (v81.Buffer && DestinationString.Buffer || !v56) )
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
        v45 = v95 - *(_QWORD *)(a3 + 248);
      if ( !v45 )
        goto LABEL_44;
    }
    else if ( !v57 || (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 17LL);
    }
    CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18LL);
    goto LABEL_44;
  }
  if ( PnpBootMode )
  {
    v55 |= 0x400u;
    goto LABEL_31;
  }
LABEL_190:
  DriverConfiguration = -1073740651;
LABEL_141:
  RtlFreeAnsiString(&v68);
  RtlFreeAnsiString(&v75);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v81);
  RtlFreeAnsiString(&v85);
  RtlFreeAnsiString(&v86);
  RtlFreeAnsiString(&v88);
  RtlFreeAnsiString(&v89);
  RtlFreeAnsiString(&v91);
  RtlFreeAnsiString(&v92);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&String1);
  RtlFreeAnsiString(&v77);
  if ( v87.Buffer )
    ExFreePoolWithTag(v87.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
