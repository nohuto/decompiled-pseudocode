/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x14082C75C
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x140751DB0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14082E3D0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14083289C (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     swscanf_s @ 0x14019BD00 (swscanf_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059D4CC (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406F6914 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F7A40 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x140832618 (PiDevCfgSplitDriverConfigurationId.c)
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
  void *v12; // r9
  __int64 v13; // rdx
  wchar_t *Buffer; // rsi
  __int64 v15; // rax
  wchar_t *v16; // rsi
  wchar_t *v17; // r12
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // r13
  _QWORD *v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *i; // rsi
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v33; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD **v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER Time; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v40; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v41; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v43; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v44; // [rsp+D0h] [rbp-30h]
  _QWORD v45[20]; // [rsp+E0h] [rbp-20h] BYREF

  v44 = a2;
  *a2 = 0;
  v2 = a2;
  v31 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v40.Length = 0;
  v40.Buffer = 0LL;
  *(_DWORD *)&v41.Length = 0;
  v41.Buffer = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v35 = 1;
  v30 = 0;
  *(_DWORD *)&v43.Length = 0;
  v43.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v38);
  v6 = v38;
  ObjectProperties = DeviceDriver;
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v30 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v9, v8, 11, (__int64)&v35, (__int64)&v31, (__int64)&v30, 0) < 0
      || v35 != 4
      || v30 != 4 )
    {
      v31 = 0;
    }
    memset(v45, 0, sizeof(v45));
    v10 = *(void **)(a1 + 16);
    v45[0] = &DEVPKEY_Device_DriverInfPath;
    v45[2] = &DestinationString;
    v45[5] = &DEVPKEY_Device_DriverDate;
    v45[7] = &Time;
    HIDWORD(v45[3]) = 6;
    v45[10] = &DEVPKEY_Device_DriverVersion;
    HIDWORD(v45[13]) = 6;
    v45[12] = &UnicodeString;
    v45[15] = &DEVPKEY_Device_ExtendedConfigurationIds;
    v45[17] = &v40;
    HIDWORD(v45[18]) = 6;
    v11 = *(_QWORD *)(a1 + 8);
    LODWORD(v45[1]) = 18;
    LODWORD(v45[6]) = 16;
    LODWORD(v45[8]) = 8;
    LODWORD(v45[11]) = 18;
    LODWORD(v45[16]) = 8210;
    ObjectProperties = PiDevCfgQueryObjectProperties(18LL, v11, 1u, v10, (__int64)v45, 4u);
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v45[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v45[9]) < 0 )
        Time.QuadPart = 0LL;
      if ( SLODWORD(v45[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v45[19]) < 0 )
        RtlInitUnicodeString(&v40, 0LL);
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
        memset(v45, 0, sizeof(v45));
        v12 = *(void **)(a1 + 16);
        v13 = *(_QWORD *)(a1 + 8);
        v45[0] = &DEVPKEY_Device_Owners;
        v45[2] = &v41;
        LODWORD(v45[1]) = 8210;
        HIDWORD(v45[3]) = 6;
        ObjectProperties = PiDevCfgQueryObjectProperties(1LL, v13, 1u, v12, (__int64)v45, 1u);
        if ( ObjectProperties < 0 )
          goto LABEL_89;
        if ( SLODWORD(v45[4]) >= 0 )
        {
          Buffer = v41.Buffer;
          if ( v41.Buffer )
          {
            if ( v41.Length > 2u )
            {
              if ( !*v41.Buffer )
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
                v15 = -1LL;
                do
                  ++v15;
                while ( Buffer[v15] );
                Buffer += v15 + 1;
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
      if ( (v31 & 0x40) == 0 && (v16 = DestinationString.Buffer) != 0LL )
      {
        if ( v6 && RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) )
        {
          if ( *(_QWORD *)(v6 + 112) != Time.QuadPart || *(_QWORD *)(v6 + 120) != v32 )
            goto LABEL_75;
          v17 = v40.Buffer;
          if ( v40.Buffer )
          {
            v18 = (_QWORD *)(v6 + 208);
            if ( (_QWORD *)*v18 != v18 )
            {
              v34 = &v33;
              v19 = &v33;
              v33 = &v33;
              if ( !*v40.Buffer )
                goto LABEL_60;
              while ( (_QWORD *)*v18 != v18 )
              {
                RtlFreeAnsiString(&DestinationString);
                if ( (int)PiDevCfgSplitDriverConfigurationId(v17, &Time, (__int64)&v32) < 0 )
                  break;
                v20 = (_QWORD *)*v18;
                if ( (_QWORD *)*v18 == v18 )
                  break;
                do
                {
                  v21 = v20;
                  if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v20 + 5), &DestinationString, 1u) )
                    break;
                  v20 = (_QWORD *)*v20;
                  v21 = 0LL;
                }
                while ( v20 != v18 );
                v6 = v38;
                if ( !v21 || v21[14] != Time.QuadPart || v21[15] != v32 )
                  break;
                v22 = *v21;
                if ( *(_QWORD **)(*v21 + 8LL) != v21
                  || (v23 = (_QWORD *)v21[1], (_QWORD *)*v23 != v21)
                  || (*v23 = v22, *(_QWORD *)(v22 + 8) = v23, v24 = v34, *v34 != &v33) )
                {
LABEL_67:
                  __fastfail(3u);
                }
                v21[1] = v34;
                *v21 = &v33;
                *v24 = v21;
                v25 = -1LL;
                v34 = (_QWORD **)v21;
                do
                  ++v25;
                while ( v17[v25] );
                v17 += v25 + 1;
                if ( !*v17 )
                {
                  v19 = v33;
                  goto LABEL_60;
                }
              }
              v19 = v33;
              if ( !*v17 )
              {
LABEL_60:
                if ( (_QWORD *)*v18 == v18 )
                  goto LABEL_62;
              }
              v4 |= 0x20u;
LABEL_62:
              while ( v19 != &v33 )
              {
                if ( (_QWORD **)v19[1] != &v33 )
                  goto LABEL_67;
                v26 = *v19;
                if ( *(_QWORD **)(*v19 + 8LL) != v19 )
                  goto LABEL_67;
                v33 = (_QWORD *)*v19;
                *(_QWORD *)(v26 + 8) = &v33;
                v27 = (_QWORD *)v18[1];
                if ( (_QWORD *)*v27 != v18 )
                  goto LABEL_67;
                *v19 = v18;
                v19[1] = v27;
                *v27 = v19;
                v18[1] = v19;
                v19 = v33;
              }
              v2 = v44;
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
          if ( (int)PiDevCfgGetDriverPackageId((__int64)v16, (__int64)&v43) < 0 )
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
  RtlFreeAnsiString(&v40);
  RtlFreeAnsiString(&v43);
  RtlFreeAnsiString(&v41);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  return (unsigned int)ObjectProperties;
}
