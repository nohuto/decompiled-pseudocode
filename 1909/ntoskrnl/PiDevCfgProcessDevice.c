/*
 * XREFs of PiDevCfgProcessDevice @ 0x1406FB30C
 * Callers:
 *     PpDevCfgProcessDevice @ 0x1406FB1B0 (PpDevCfgProcessDevice.c)
 *     PiConfigureDevice @ 0x1408744E4 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x14013E0AC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14013E294 (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14067032C (_CmIsRootEnumeratedDevice.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406FB1D4 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406FB7C8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x1406FB80C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FF224 (PiDevCfgInitDeviceContext.c)
 *     PipClearDevNodeUserFlags @ 0x1407035C0 (PipClearDevNodeUserFlags.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x140707C0C (PiDevCfgSetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x14073CADC (PipSetDevNodeUserFlags.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408677E4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408687C0 (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v5; // r13
  __int64 v6; // r15
  int v7; // r14d
  bool v8; // di
  unsigned int v9; // r12d
  int inited; // esi
  char v11; // al
  __int64 v12; // rsi
  int DeviceDriver; // eax
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  __int64 v25; // rdx
  char v26; // di
  __int64 v27; // rdx
  int v28; // eax
  char v29; // al
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h]
  int v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v45[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[18]; // [rsp+100h] [rbp+0h] BYREF
  char v47; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  int v51; // [rsp+1B8h] [rbp+B8h] BYREF

  v5 = 0LL;
  memset(v45, 0, 0x48uLL);
  v6 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v38 = 1;
  v41 = 0LL;
  v51 = 0;
  v40 = 0;
  v47 = 0;
  v37 = 0;
  v36 = 0;
  v43 = 0LL;
  LOBYTE(v39) = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_50;
  }
  v5 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v45);
  if ( inited < 0 )
    goto LABEL_50;
  v11 = v45[0];
  if ( (a3 & 1) != 0 )
  {
    v11 = LOBYTE(v45[0]) | 1;
    LODWORD(v45[0]) |= 1u;
  }
  v12 = a2;
  if ( !a2 )
    v12 = v45[2];
  v49 = v12;
  if ( (v11 & 1) == 0 && !PnpBootMode )
  {
    memset(v46, 0, 0x50uLL);
    HIDWORD(v46[3]) = 6;
    LODWORD(v46[1]) = 8210;
    v46[0] = &DEVPKEY_Device_PendingConfigurationIds;
    LODWORD(v46[6]) = 8210;
    v25 = *(_QWORD *)(a1 + 48);
    v46[2] = &UnicodeString;
    v46[5] = &DEVPKEY_Device_RequestConfigurationIds;
    v46[7] = &DestinationString;
    HIDWORD(v46[8]) = 6;
    inited = PiDevCfgQueryObjectProperties(6, v25, 1, v12, (__int64)v46, 2);
    if ( inited < 0 )
      goto LABEL_50;
    if ( SLODWORD(v46[4]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    if ( SLODWORD(v46[9]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
    {
      v15 = 1LL;
      v9 = -1073740656;
      v8 = 1;
      goto LABEL_15;
    }
  }
  DeviceDriver = PiDevCfgFindDeviceDriver(v45, UnicodeString.Buffer, &v41);
  v6 = v41;
  inited = DeviceDriver;
  if ( DeviceDriver < 0 )
  {
LABEL_67:
    v15 = 1LL;
    goto LABEL_15;
  }
  if ( DestinationString.Buffer )
  {
    inited = PiDevCfgRequestDriverConfigurations(v45, v41);
    goto LABEL_67;
  }
  v14 = PiDevCfgConfigureDevice(a1, (unsigned int)v45, (__int64)&v40);
  inited = v14;
  v15 = 1LL;
  if ( v14 >= 0 )
  {
    v7 = v51;
    v47 = 1;
  }
  v16 = ((v14 + 1073740653) & 0xFFFFFFFD) == 0;
  v17 = (unsigned __int8)v39;
  if ( !v16 )
    v17 = 1;
  v39 = v17;
LABEL_15:
  if ( UnicodeString.Buffer && (v6 || v8) )
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      (unsigned int)v45,
      *(_QWORD *)(a1 + 48),
      1,
      v49,
      v32,
      (__int64)&DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0,
      0);
  if ( DestinationString.Buffer )
    goto LABEL_46;
  if ( UnicodeString.Buffer )
    goto LABEL_90;
  if ( v8 )
    goto LABEL_91;
  if ( !v6 )
  {
    if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
      goto LABEL_21;
    if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
    {
      v26 = 0;
      if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
      {
        v27 = *(_QWORD *)(a1 + 48);
        v36 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v27,
                    v49,
                    11,
                    (__int64)&v38,
                    (__int64)&v51,
                    (__int64)&v36,
                    0) >= 0
          && v38 == 4
          && v36 == 4 )
        {
          v26 = v51;
        }
        else
        {
          v51 = 0;
        }
        v8 = (v26 & 0x20) != 0;
      }
      else
      {
        v8 = 1;
      }
    }
    else
    {
      v7 = 32;
    }
    if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
    {
      if ( (int)PiDevCfgMigrateRootDevice(a1, v45, &v51) >= 0 )
      {
        v7 |= v51;
        if ( (v51 & 1) != 0 )
        {
          v8 = 0;
          v7 &= ~0x20u;
        }
      }
    }
    v9 = -1073740656;
LABEL_90:
    if ( !v8 )
      goto LABEL_21;
LABEL_91:
    v28 = PiDevCfgConfigureDevice(a1, (unsigned int)v45, (__int64)&v40);
    inited = v28;
    if ( v28 >= 0 )
    {
      v7 = v51;
      v47 = 1;
      switch ( v9 )
      {
        case 0xC0000490:
          v37 = -536870360;
          break;
        case 0xC0000491:
          v37 = -536870320;
          break;
        case 0xC0000492:
          v37 = -536870319;
          break;
        case 0xC0000493:
          v37 = -536870318;
          break;
        case 0xC0000494:
          v37 = -536870375;
          break;
      }
    }
    v16 = ((v28 + 1073740653) & 0xFFFFFFFD) == 0;
    v29 = v39;
    if ( !v16 )
      v29 = 1;
    LOBYTE(v39) = v29;
    goto LABEL_21;
  }
  if ( *(int *)(v6 + 412) < 0 )
  {
    v8 = 1;
    v9 = *(_DWORD *)(v6 + 412);
    goto LABEL_90;
  }
LABEL_21:
  if ( v47 )
  {
    if ( PnpBootMode || (a3 & 2) != 0 )
      v7 |= 0x40000u;
    v18 = *(_DWORD *)(a1 + 704);
    if ( (v7 & 0x40) != 0 )
      v19 = v18 & 0xFFFFFFFE;
    else
      v19 = v18 | 1;
    *(_DWORD *)(a1 + 704) = v19;
  }
  v20 = *(_QWORD *)(a1 + 48);
  v36 = 4;
  if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v20, v49, 11, (__int64)&v38, (__int64)&v51, (__int64)&v36, 0) < 0
    || v38 != 4
    || v36 != 4 )
  {
    v51 = 0;
  }
  v21 = *(_DWORD *)(a1 + 396) & 0x2000;
  if ( inited < 0 )
  {
    if ( v21 )
    {
      v15 = *(unsigned int *)(a1 + 404);
      if ( (_DWORD)v15 == 1 || (_DWORD)v15 == 18 )
        PipSetDevNodeProblem(a1, v15, (unsigned int)inited);
    }
  }
  else
  {
    v51 &= 0xFFF7FB9F;
    v7 &= ~0x20u;
    if ( v21 )
    {
      if ( *(_DWORD *)(a1 + 404) == 1
        || (v30 = *(unsigned int *)(a1 + 404), (unsigned int)v30 <= 0x38)
        && (v31 = 0x100000010040000LL, _bittest64(&v31, v30)) )
      {
        PipClearDevNodeProblem(a1);
      }
    }
    if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
    {
      v22 = *(_DWORD *)(a1 + 396);
      if ( (v22 & 0x6000) != 0 )
      {
        if ( (v22 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v40 & 2) == 0 )
        {
          PipClearDevNodeProblem(a1);
          PipClearDevNodeUserFlags(a1, 4LL);
        }
      }
      else if ( (v40 & 2) == 0 || PnpBootMode )
      {
        if ( (v7 & 0x40) != 0 )
          PipSetDevNodeProblem(a1, 28LL, v9);
      }
      else
      {
        PipSetDevNodeProblem(a1, 14LL, 3221226194LL);
        PipSetDevNodeUserFlags(a1, 4LL);
      }
    }
    if ( v37 && (v7 & 0x40) != 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        (unsigned int)v45,
        *(_QWORD *)(a1 + 48),
        1,
        v49,
        v33,
        (__int64)&DEVPKEY_Device_InstallError,
        23,
        (__int64)&v37,
        4,
        0);
    }
    else
    {
      v15 = 1LL;
      if ( (v45[0] & 1) == 0 )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (unsigned int)v45,
          *(_QWORD *)(a1 + 48),
          1,
          v49,
          v33,
          (__int64)&DEVPKEY_Device_InstallError,
          0,
          0LL,
          0,
          0);
    }
  }
  if ( v47 || v7 )
  {
    v51 |= v7;
    PiDevCfgSetDeviceRegProp(4LL, (__int64)v45, 0xBu, 4, (__int64)&v51, 4);
    if ( v47 )
    {
      v23 = *(_QWORD *)(a1 + 48);
      v43 = MEMORY[0xFFFFF78000000014];
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        (unsigned int)v45,
        v23,
        1,
        v49,
        v34,
        (__int64)&DEVPKEY_Device_InstallDate,
        16,
        (__int64)&v43,
        8,
        0);
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(a1 + 48),
                           1LL,
                           v49,
                           0LL,
                           (__int64)&DEVPKEY_Device_FirstInstallDate,
                           (__int64)&v38,
                           0LL,
                           0,
                           (__int64)&v36,
                           0) != -1073741789
        || v36 != 8 )
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (unsigned int)v45,
          *(_QWORD *)(a1 + 48),
          1,
          v49,
          v35,
          (__int64)&DEVPKEY_Device_FirstInstallDate,
          16,
          (__int64)&v43,
          8,
          0);
      }
      v6 = v41;
    }
  }
LABEL_46:
  if ( (_BYTE)v39 )
    PiDevCfgLogDeviceConfigured(a1, (unsigned int)v45, v6, v40, inited, (__int64)&v43);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6, v15);
LABEL_50:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  PiDevCfgFreeDeviceContext(v45);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v5, inited);
  return (unsigned int)inited;
}
