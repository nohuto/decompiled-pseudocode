/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x140779700 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140867100 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14086B718 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     swscanf_s @ 0x1401A6B50 (swscanf_s.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1405BC2A0 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14067032C (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x1406FB80C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FD5F4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086B498 (PiDevCfgSplitDriverConfigurationId.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // r13
  unsigned int v4; // ebx
  int DeviceDriver; // eax
  __int64 v6; // rdi
  int ObjectProperties; // r15d
  __int64 v8; // r8
  __int64 v9; // rdx
  void *v10; // r9
  __int64 v11; // rdx
  LARGE_INTEGER v12; // rax
  void *v13; // r9
  __int64 v14; // rdx
  wchar_t *Buffer; // rsi
  __int64 v16; // rax
  wchar_t *v17; // rsi
  wchar_t *v18; // r12
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  _QWORD *v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *i; // rsi
  __int64 v30; // rdx
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD **v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v42; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v43; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v45; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v46; // [rsp+D0h] [rbp-30h]
  _QWORD v47[20]; // [rsp+E0h] [rbp-20h] BYREF

  v46 = a2;
  *a2 = 0;
  v2 = a2;
  v36 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Time.QuadPart = 0LL;
  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v32 = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  v42.Buffer = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  Handle = 0LL;
  v40 = 0LL;
  v38 = 1;
  v35 = 0;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v40);
  v6 = v40;
  ObjectProperties = DeviceDriver;
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v35 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v9, v8, 11, (__int64)&v38, (__int64)&v36, (__int64)&v35, 0) < 0
      || v38 != 4
      || v35 != 4 )
    {
      v36 = 0;
    }
    memset(v47, 0, sizeof(v47));
    v10 = *(void **)(a1 + 16);
    v47[0] = &DEVPKEY_Device_DriverInfPath;
    v47[2] = &DestinationString;
    v47[5] = &DEVPKEY_Device_DriverDate;
    v47[7] = &Time;
    HIDWORD(v47[3]) = 6;
    v47[10] = &DEVPKEY_Device_DriverVersion;
    HIDWORD(v47[13]) = 6;
    v47[12] = &UnicodeString;
    v47[15] = &DEVPKEY_Device_ExtendedConfigurationIds;
    v47[17] = &v42;
    HIDWORD(v47[18]) = 6;
    v11 = *(_QWORD *)(a1 + 8);
    LODWORD(v47[1]) = 18;
    LODWORD(v47[6]) = 16;
    LODWORD(v47[8]) = 8;
    LODWORD(v47[11]) = 18;
    LODWORD(v47[16]) = 8210;
    ObjectProperties = PiDevCfgQueryObjectProperties(18LL, v11, 1u, v10, (__int64)v47, 4u);
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v47[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v12 = Time;
      if ( SLODWORD(v47[9]) < 0 )
        v12.QuadPart = 0LL;
      Time = v12;
      if ( SLODWORD(v47[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v47[19]) < 0 )
        RtlInitUnicodeString(&v42, 0LL);
      if ( !UnicodeString.Buffer
        || swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v32 + 6,
             (char *)&v32 + 4,
             (char *)&v32 + 2,
             &v32) != 4 )
      {
        v32 = 0LL;
      }
      if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 8)) )
      {
        memset(v47, 0, sizeof(v47));
        v13 = *(void **)(a1 + 16);
        v14 = *(_QWORD *)(a1 + 8);
        v47[0] = &DEVPKEY_Device_Owners;
        v47[2] = &v43;
        LODWORD(v47[1]) = 8210;
        HIDWORD(v47[3]) = 6;
        ObjectProperties = PiDevCfgQueryObjectProperties(1LL, v14, 1u, v13, (__int64)v47, 1u);
        if ( ObjectProperties < 0 )
          goto LABEL_89;
        if ( SLODWORD(v47[4]) >= 0 )
        {
          Buffer = v43.Buffer;
          if ( v43.Buffer )
          {
            if ( v43.Length > 2u )
            {
              if ( !*v43.Buffer )
                goto LABEL_31;
              while ( 1 )
              {
                ObjectProperties = PnpOpenObjectRegKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     (__int64)Buffer,
                                     9u,
                                     131097,
                                     0,
                                     (__int64)&Handle);
                if ( ObjectProperties >= 0 )
                  break;
                ObjectProperties = 0;
                v16 = -1LL;
                do
                  ++v16;
                while ( Buffer[v16] );
                Buffer += v16 + 1;
                if ( !*Buffer )
                  goto LABEL_31;
              }
              ZwClose(Handle);
              if ( !*Buffer )
              {
LABEL_31:
                if ( !v6 )
                  v4 = PnpBootMode != 0 ? 0x40000 : 2;
              }
            }
          }
        }
      }
      if ( (v36 & 0x40) == 0 && (v17 = DestinationString.Buffer) != 0LL )
      {
        if ( v6 && RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) )
        {
          if ( *(_QWORD *)(v6 + 112) != Time.QuadPart || *(_QWORD *)(v6 + 120) != v32 )
            goto LABEL_75;
          v18 = v42.Buffer;
          if ( v42.Buffer )
          {
            v19 = (_QWORD *)(v6 + 208);
            if ( (_QWORD *)*v19 != v19 )
            {
              v34 = &v33;
              v20 = &v33;
              v33 = &v33;
              if ( !*v42.Buffer )
                goto LABEL_60;
              while ( (_QWORD *)*v19 != v19 )
              {
                RtlFreeAnsiString(&DestinationString);
                if ( (int)PiDevCfgSplitDriverConfigurationId(v18, &Time, (__int64)&v32) < 0 )
                  break;
                v21 = (_QWORD *)*v19;
                if ( (_QWORD *)*v19 == v19 )
                  break;
                do
                {
                  v22 = v21;
                  if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v21 + 5), &DestinationString, 1u) )
                    break;
                  v21 = (_QWORD *)*v21;
                  v22 = 0LL;
                }
                while ( v21 != v19 );
                v6 = v40;
                if ( !v22 || v22[14] != Time.QuadPart || v22[15] != v32 )
                  break;
                v23 = *v22;
                if ( *(_QWORD **)(*v22 + 8LL) != v22
                  || (v24 = (_QWORD *)v22[1], (_QWORD *)*v24 != v22)
                  || (*v24 = v23, *(_QWORD *)(v23 + 8) = v24, v25 = v34, *v34 != &v33) )
                {
LABEL_67:
                  __fastfail(3u);
                }
                v22[1] = v34;
                *v22 = &v33;
                *v25 = v22;
                v26 = -1LL;
                v34 = (_QWORD **)v22;
                do
                  ++v26;
                while ( v18[v26] );
                v18 += v26 + 1;
                if ( !*v18 )
                {
                  v20 = v33;
                  goto LABEL_60;
                }
              }
              v20 = v33;
              if ( !*v18 )
              {
LABEL_60:
                if ( (_QWORD *)*v19 == v19 )
                  goto LABEL_62;
              }
              v4 |= 0x20u;
LABEL_62:
              while ( v20 != &v33 )
              {
                if ( (_QWORD **)v20[1] != &v33 )
                  goto LABEL_67;
                v27 = *v20;
                if ( *(_QWORD **)(*v20 + 8LL) != v20 )
                  goto LABEL_67;
                v33 = (_QWORD *)*v20;
                *(_QWORD *)(v27 + 8) = &v33;
                v28 = (_QWORD *)v19[1];
                if ( (_QWORD *)*v28 != v19 )
                  goto LABEL_67;
                *v20 = v19;
                v20[1] = v28;
                *v28 = v20;
                v19[1] = v20;
                v20 = v33;
              }
              v2 = v46;
              goto LABEL_77;
            }
          }
          else if ( *(_QWORD *)(v6 + 208) == v6 + 208 )
          {
            if ( !PnpBootMode )
            {
LABEL_88:
              *v2 = v4;
              goto LABEL_89;
            }
            v4 |= 0x40000u;
            goto LABEL_77;
          }
LABEL_75:
          v4 |= 0x20u;
          goto LABEL_77;
        }
        if ( !PnpBootMode )
          goto LABEL_75;
        if ( (PiDevCfgFlags & 2) == 0 )
          goto LABEL_75;
        v4 |= 0x40000u;
        if ( v6 )
        {
          if ( (int)PiDevCfgGetDriverPackageId((__int64)v17, (__int64)&v45) < 0 )
            goto LABEL_75;
        }
      }
      else if ( v6 )
      {
        goto LABEL_75;
      }
LABEL_77:
      if ( PnpBootMode && v6 && (v4 & 0x20) != 0 )
      {
        ObjectProperties = PiDevCfgQueryDriverConfiguration(v6);
        if ( ObjectProperties >= 0 )
        {
          for ( i = *(_QWORD **)(v6 + 208); i != (_QWORD *)(v6 + 208); i = (_QWORD *)*i )
          {
            ObjectProperties = PiDevCfgQueryDriverConfiguration(v6);
            if ( ObjectProperties < 0 )
              break;
          }
        }
        if ( ObjectProperties == -1073740653 )
        {
          ObjectProperties = 0;
          v4 = v4 & 0xFFFBFFDF | 0x40000;
        }
        else if ( ObjectProperties < 0 )
        {
          goto LABEL_89;
        }
      }
      goto LABEL_88;
    }
  }
LABEL_89:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v42);
  RtlFreeAnsiString(&v45);
  RtlFreeAnsiString(&v43);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6, v30);
  return (unsigned int)ObjectProperties;
}
