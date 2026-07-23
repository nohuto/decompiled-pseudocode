/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x140832CA4
 * Callers:
 *     PiConfigureDevice @ 0x14083B4E4 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F5C74 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F5CB8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F7A40 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F7BA0 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1406FAD54 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x14082C4C8 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  int inited; // ebx
  __int64 v3; // rcx
  void *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 v8; // rdi
  int DriverConfiguration; // eax
  char v10; // r9
  UNICODE_STRING *v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 i; // rdi
  __int64 v17; // r8
  __int64 v18; // r8
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v24; // [rsp+30h] [rbp-D8h]
  int v25; // [rsp+30h] [rbp-D8h]
  int v26; // [rsp+30h] [rbp-D8h]
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+70h] [rbp-98h] BYREF
  int v29; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v33; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v34; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v35; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING v36; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v37; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING v38; // [rsp+F0h] [rbp-18h] BYREF
  UNICODE_STRING v39; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v40[5]; // [rsp+110h] [rbp+8h] BYREF
  void *v41[10]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v42[4]; // [rsp+188h] [rbp+80h]

  memset(v41, 0, 0x48uLL);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v31 = 0LL;
  v29 = 1;
  *(_DWORD *)&v35.Length = 0;
  v35.Buffer = 0LL;
  *(_DWORD *)&v36.Length = 0;
  v36.Buffer = 0LL;
  *(_DWORD *)&v37.Length = 0;
  v37.Buffer = 0LL;
  *(_DWORD *)&v38.Length = 0;
  v38.Buffer = 0LL;
  *(_DWORD *)&v39.Length = 0;
  v39.Buffer = 0LL;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v27 = 0LL;
  v28 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_66;
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    inited = -1073741808;
    goto LABEL_66;
  }
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v41);
  if ( inited >= 0 )
  {
    v4 = v41[2];
    memset(v40, 0, sizeof(v40));
    v5 = *(_QWORD *)(a1 + 48);
    v40[0] = &DEVPKEY_Device_PendingConfigurationIds;
    v40[2] = &DestinationString;
    LODWORD(v40[1]) = 8210;
    HIDWORD(v40[3]) = 6;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1u, v41[2], (__int64)v40, 1u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v40[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      inited = PiDevCfgFindDeviceDriver((__int64)v41, DestinationString.Buffer, &v31);
      if ( inited < 0 )
        goto LABEL_64;
      v7 = (__int64 *)(v31 + 208);
      v8 = *(_QWORD *)(v31 + 208);
      if ( v8 == v31 + 208 )
        goto LABEL_47;
      while ( 1 )
      {
        DriverConfiguration = PiDevCfgQueryDriverConfiguration(v8);
        inited = DriverConfiguration;
        if ( DriverConfiguration == -1073740653 )
          break;
        if ( DriverConfiguration < 0 )
          goto LABEL_64;
        if ( !*(_QWORD *)(v8 + 296) )
        {
          if ( *(_QWORD *)(v8 + 312) )
          {
            inited = PiDevCfgAppendMultiSz(&v36, 0LL, (const void **)(v8 + 304), 0);
            if ( inited < 0 )
              goto LABEL_64;
          }
          if ( *(_QWORD *)(v8 + 328) )
          {
            inited = PiDevCfgAppendMultiSz(&v37, 0LL, (const void **)(v8 + 320), 0);
            if ( inited < 0 )
              goto LABEL_64;
          }
          if ( *(_QWORD *)(v8 + 344) )
          {
            inited = PiDevCfgAppendMultiSz(&v38, 0LL, (const void **)(v8 + 336), 0);
            if ( inited < 0 )
              goto LABEL_64;
          }
          if ( *(_QWORD *)(v8 + 360) )
          {
            inited = PiDevCfgAppendMultiSz(&v39, 0LL, (const void **)(v8 + 352), 0);
            if ( inited < 0 )
              goto LABEL_64;
          }
          HIDWORD(v27) |= *(_DWORD *)(v8 + 384);
          inited = PiDevCfgAppendMultiSz(&v33, (const void **)(v8 + 40), 0LL, 0);
          if ( inited < 0 )
            goto LABEL_64;
          v10 = 0;
          v11 = &v34;
          goto LABEL_26;
        }
        *(_DWORD *)(v8 + 184) &= ~1u;
LABEL_27:
        v8 = *(_QWORD *)v8;
        if ( (__int64 *)v8 == v7 )
        {
          v12 = 0LL;
          if ( inited < 0 )
            goto LABEL_64;
          if ( v35.Buffer )
          {
            inited = PiDevCfgSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v41,
                       *(_QWORD *)(a1 + 48),
                       1u,
                       (__int64)v4,
                       v24,
                       (__int64)&DEVPKEY_Device_RequestConfigurationIds,
                       8210,
                       (__int64)v35.Buffer,
                       v35.Length,
                       0);
            if ( inited >= 0 )
              inited = -1073740653;
            goto LABEL_64;
          }
          v13 = 0;
          v42[0] = &v36;
          v42[1] = &v37;
          v42[2] = &v38;
          v42[3] = &v39;
          do
          {
            v14 = v42[v12];
            if ( *(_QWORD *)(v14 + 8) )
            {
              memset(v40, 0, sizeof(v40));
              v15 = *(_QWORD *)(a1 + 48);
              v40[0] = off_14096E628[v12];
              v40[2] = &UnicodeString;
              LODWORD(v40[1]) = 8210;
              HIDWORD(v40[3]) = 6;
              inited = PiDevCfgQueryObjectProperties(1LL, v15, 1u, v4, (__int64)v40, 1u);
              if ( inited < 0 )
                goto LABEL_64;
              if ( SLODWORD(v40[4]) < 0 )
                RtlInitUnicodeString(&UnicodeString, 0LL);
              inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v14, 0);
              if ( inited < 0 )
                goto LABEL_64;
              inited = PiDevCfgSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         v41,
                         *(_QWORD *)(a1 + 48),
                         1u,
                         (__int64)v4,
                         v25,
                         (__int64)off_14096E628[v12],
                         8210,
                         (__int64)UnicodeString.Buffer,
                         UnicodeString.Length,
                         0);
              if ( inited < 0 )
                goto LABEL_64;
              RtlFreeAnsiString(&UnicodeString);
            }
            ++v13;
            ++v12;
          }
          while ( v13 < 4 );
          for ( i = *v7; (__int64 *)i != v7; i = *(_QWORD *)i )
          {
            if ( (*(_DWORD *)(i + 184) & 1) != 0 )
            {
              inited = PiDevCfgConfigureDeviceDriver(a1, (int)v41, i, &v27, 0LL);
              if ( inited < 0 )
                goto LABEL_64;
              HIDWORD(v27) |= v27;
            }
          }
LABEL_47:
          if ( DestinationString.Buffer )
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v41,
              *(_QWORD *)(a1 + 48),
              1u,
              (__int64)v4,
              v24,
              (__int64)&DEVPKEY_Device_PendingConfigurationIds,
              0,
              0LL,
              0,
              0);
          v17 = *(_QWORD *)(a1 + 48);
          if ( v33.Buffer )
          {
            inited = PiDevCfgSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v41,
                       v17,
                       1u,
                       (__int64)v4,
                       v24,
                       (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                       8210,
                       (__int64)v33.Buffer,
                       v33.Length,
                       0);
            if ( inited < 0 )
              goto LABEL_64;
          }
          else
          {
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v41,
              v17,
              1u,
              (__int64)v4,
              v24,
              (__int64)&DEVPKEY_Device_DriverExtendedInfs,
              0,
              0LL,
              0,
              0);
          }
          v18 = *(_QWORD *)(a1 + 48);
          if ( v34.Buffer )
          {
            inited = PiDevCfgSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v41,
                       v18,
                       1u,
                       (__int64)v4,
                       v26,
                       (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                       8210,
                       (__int64)v34.Buffer,
                       v34.Length,
                       0);
            if ( inited < 0 )
              goto LABEL_64;
          }
          else
          {
            PiDevCfgSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v41,
              v18,
              1u,
              (__int64)v4,
              v26,
              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
              0,
              0LL,
              0,
              0);
          }
          v19 = HIDWORD(v27);
          if ( HIDWORD(v27) )
          {
            v20 = *(_QWORD *)(a1 + 48);
            v28 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v20,
                        (__int64)v4,
                        11,
                        (__int64)&v29,
                        (__int64)&v27,
                        (__int64)&v28,
                        0) >= 0
              && v29 == 4
              && v28 == 4 )
            {
              v22 = v27;
            }
            else
            {
              v22 = 0;
            }
            LODWORD(v27) = v19 | v22;
            PiDevCfgSetDeviceRegProp(v21, (__int64)v41, 0xBu, 4, (__int64)&v27, 4);
          }
LABEL_64:
          if ( v31 )
            PiDevCfgFreeDriverNode(v31);
          goto LABEL_66;
        }
      }
      v10 = 1;
      v11 = &v35;
LABEL_26:
      inited = PiDevCfgAppendMultiSz(v11, (const void **)(v8 + 392), 0LL, v10);
      if ( inited < 0 )
        goto LABEL_64;
      goto LABEL_27;
    }
  }
LABEL_66:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v36);
  RtlFreeAnsiString(&v37);
  RtlFreeAnsiString(&v38);
  RtlFreeAnsiString(&v39);
  RtlFreeAnsiString(&v33);
  RtlFreeAnsiString(&v34);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v35);
  PiDevCfgFreeDeviceContext((__int64)v41);
  return (unsigned int)inited;
}
