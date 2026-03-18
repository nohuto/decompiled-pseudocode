/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x14086C408
 * Callers:
 *     PiConfigureDevice @ 0x140874DE4 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F93F4 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F99E8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F9A2C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FB380 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FD444 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetObjectProperty @ 0x140705E2C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140715254 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x140865AC8 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  int v2; // r13d
  int inited; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // r15
  __int64 v10; // rdi
  int DriverConfiguration; // eax
  __int64 v12; // rcx
  char v13; // r9
  UNICODE_STRING *v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rdx
  DEVPROPKEY *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v27; // [rsp+30h] [rbp-D8h]
  int v28; // [rsp+30h] [rbp-D8h]
  int v29; // [rsp+30h] [rbp-D8h]
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v35; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v36; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v37; // [rsp+C0h] [rbp-48h] BYREF
  DEVPROPKEY *v38; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E8h] [rbp-20h]
  int v42; // [rsp+ECh] [rbp-1Ch]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING v44; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v45; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING v46; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING v47; // [rsp+128h] [rbp+20h] BYREF
  void *v48[10]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v49[4]; // [rsp+188h] [rbp+80h]

  memset(v48, 0, 0x48uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = 0;
  DestinationString.Buffer = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  *(_QWORD *)&v35.Length = 0LL;
  v35.Buffer = 0LL;
  *(_QWORD *)&v36.Length = 0LL;
  v36.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v30 = 0LL;
  v31 = 0x100000000LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_67;
  }
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v4 )
  {
    inited = -1073741808;
    goto LABEL_67;
  }
  inited = PiDevCfgInitDeviceContext(v4, 0LL, v48);
  if ( inited >= 0 )
  {
    v6 = v48[2];
    v7 = *(_QWORD *)(a1 + 48);
    v38 = (DEVPROPKEY *)&DEVPKEY_Device_PendingConfigurationIds;
    p_DestinationString = &DestinationString;
    v39 = 8210LL;
    v41 = 0;
    v43 = 0LL;
    v42 = 6;
    inited = PiDevCfgQueryObjectProperties(v5, v7, 1u, v48[2], (__int64)&v38, 1u);
    if ( inited >= 0 )
    {
      if ( (int)v43 < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      inited = PiDevCfgFindDeviceDriver((__int64)v48, DestinationString.Buffer, &v34);
      if ( inited < 0 )
        goto LABEL_65;
      v9 = (__int64 *)(v34 + 208);
      v10 = *(_QWORD *)(v34 + 208);
      if ( v10 == v34 + 208 )
        goto LABEL_49;
      while ( 1 )
      {
        DriverConfiguration = PiDevCfgQueryDriverConfiguration(v10);
        inited = DriverConfiguration;
        if ( DriverConfiguration == -1073740653 )
          break;
        if ( DriverConfiguration < 0 )
          goto LABEL_65;
        if ( !*(_QWORD *)(v10 + 296) )
        {
          if ( *(_QWORD *)(v10 + 312) )
          {
            inited = PiDevCfgAppendMultiSz(&v44, 0LL, (const void **)(v10 + 304), 0);
            if ( inited < 0 )
              goto LABEL_65;
          }
          if ( *(_QWORD *)(v10 + 328) )
          {
            inited = PiDevCfgAppendMultiSz(&v45, 0LL, (const void **)(v10 + 320), 0);
            if ( inited < 0 )
              goto LABEL_65;
          }
          if ( *(_QWORD *)(v10 + 344) )
          {
            inited = PiDevCfgAppendMultiSz(&v46, 0LL, (const void **)(v10 + 336), 0);
            if ( inited < 0 )
              goto LABEL_65;
          }
          if ( *(_QWORD *)(v10 + 360) )
          {
            inited = PiDevCfgAppendMultiSz(&v47, 0LL, (const void **)(v10 + 352), 0);
            if ( inited < 0 )
              goto LABEL_65;
          }
          v2 |= *(_DWORD *)(v10 + 384);
          HIDWORD(v30) = v2;
          inited = PiDevCfgAppendMultiSz(&v35, (const void **)(v10 + 40), 0LL, 0);
          if ( inited < 0 )
            goto LABEL_65;
          v13 = 0;
          v14 = &v36;
          goto LABEL_26;
        }
        *(_DWORD *)(v10 + 184) &= ~1u;
LABEL_27:
        v10 = *(_QWORD *)v10;
        if ( (__int64 *)v10 == v9 )
        {
          v15 = 0LL;
          if ( inited < 0 )
            goto LABEL_65;
          if ( v37.Buffer )
          {
            inited = PiDevCfgSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v48,
                       *(_QWORD *)(a1 + 48),
                       1u,
                       (__int64)v6,
                       v27,
                       (__int64)&DEVPKEY_Device_RequestConfigurationIds,
                       8210,
                       (__int64)v37.Buffer,
                       v37.Length,
                       0);
            if ( inited >= 0 )
              inited = -1073740653;
            goto LABEL_65;
          }
          v16 = 0;
          v49[0] = &v44;
          v49[1] = &v45;
          v49[2] = &v46;
          v49[3] = &v47;
          do
          {
            v17 = v49[v15];
            if ( *(_QWORD *)(v17 + 8) )
            {
              v18 = *(_QWORD *)(a1 + 48);
              v19 = off_1409AD6B8[v15];
              v41 = 0;
              v43 = 0LL;
              v38 = v19;
              p_DestinationString = &UnicodeString;
              v39 = 8210LL;
              v42 = 6;
              inited = PiDevCfgQueryObjectProperties(v12, v18, 1u, v6, (__int64)&v38, 1u);
              if ( inited < 0 )
                goto LABEL_65;
              if ( (int)v43 < 0 )
                RtlInitUnicodeString(&UnicodeString, 0LL);
              inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v17, 0);
              if ( inited < 0 )
                goto LABEL_65;
              inited = PiDevCfgSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         v48,
                         *(_QWORD *)(a1 + 48),
                         1u,
                         (__int64)v6,
                         v28,
                         (__int64)off_1409AD6B8[v15],
                         8210,
                         (__int64)UnicodeString.Buffer,
                         UnicodeString.Length,
                         0);
              if ( inited < 0 )
                goto LABEL_65;
              RtlFreeAnsiString(&UnicodeString);
            }
            ++v16;
            ++v15;
          }
          while ( v16 < 4 );
          v20 = *v9;
          if ( (__int64 *)*v9 == v9 )
          {
            v2 = HIDWORD(v30);
          }
          else
          {
            do
            {
              if ( (*(_DWORD *)(v20 + 184) & 1) != 0 )
              {
                inited = PiDevCfgConfigureDeviceDriver(a1, (int)v48, v20, &v30, 0LL);
                if ( inited < 0 )
                  goto LABEL_65;
                v2 = v30 | HIDWORD(v30);
                HIDWORD(v30) |= v30;
              }
              else
              {
                v2 = HIDWORD(v30);
              }
              v20 = *(_QWORD *)v20;
            }
            while ( (__int64 *)v20 != v9 );
          }
LABEL_49:
          if ( DestinationString.Buffer )
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v48,
              *(_QWORD *)(a1 + 48),
              1u,
              (__int64)v6,
              v27,
              (__int64)&DEVPKEY_Device_PendingConfigurationIds,
              0,
              0LL,
              0,
              0);
          v21 = *(_QWORD *)(a1 + 48);
          if ( v35.Buffer )
          {
            inited = PiDevCfgSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v48,
                       v21,
                       1u,
                       (__int64)v6,
                       v27,
                       (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                       8210,
                       (__int64)v35.Buffer,
                       v35.Length,
                       0);
            if ( inited < 0 )
              goto LABEL_65;
          }
          else
          {
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v48,
              v21,
              1u,
              (__int64)v6,
              v27,
              (__int64)&DEVPKEY_Device_DriverExtendedInfs,
              0,
              0LL,
              0,
              0);
          }
          v22 = *(_QWORD *)(a1 + 48);
          if ( v36.Buffer )
          {
            inited = PiDevCfgSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v48,
                       v22,
                       1u,
                       (__int64)v6,
                       v29,
                       (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                       8210,
                       (__int64)v36.Buffer,
                       v36.Length,
                       0);
            if ( inited < 0 )
              goto LABEL_65;
          }
          else
          {
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v48,
              v22,
              1u,
              (__int64)v6,
              v29,
              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
              0,
              0LL,
              0,
              0);
          }
          if ( v2 )
          {
            v23 = *(_QWORD *)(a1 + 48);
            LODWORD(v31) = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v23,
                        (__int64)v6,
                        11,
                        (__int64)&v31 + 4,
                        (__int64)&v30,
                        (__int64)&v31,
                        0) < 0
              || HIDWORD(v31) != 4
              || (v25 = v30, (_DWORD)v31 != 4) )
            {
              v25 = 0;
            }
            LODWORD(v30) = v2 | v25;
            PiDevCfgSetDeviceRegProp(v24, (__int64)v48, 0xBu, 4, (__int64)&v30, 4);
          }
LABEL_65:
          if ( v34 )
            PiDevCfgFreeDriverNode(v34, v8);
          goto LABEL_67;
        }
      }
      v13 = 1;
      v14 = &v37;
LABEL_26:
      inited = PiDevCfgAppendMultiSz(v14, (const void **)(v10 + 392), 0LL, v13);
      if ( inited < 0 )
        goto LABEL_65;
      goto LABEL_27;
    }
  }
LABEL_67:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v44);
  RtlFreeAnsiString(&v45);
  RtlFreeAnsiString(&v46);
  RtlFreeAnsiString(&v47);
  RtlFreeAnsiString(&v35);
  RtlFreeAnsiString(&v36);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v37);
  PiDevCfgFreeDeviceContext((__int64)v48);
  return (unsigned int)inited;
}
