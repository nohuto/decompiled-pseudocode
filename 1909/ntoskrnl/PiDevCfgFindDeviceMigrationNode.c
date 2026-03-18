/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x1408665C0
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x14016F994 (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     ZwEnumerateValueKey @ 0x1401C0EB0 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14029F0AC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 *     NtQueryKey @ 0x1406010E0 (NtQueryKey.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x140666EF0 (RtlCompareUnicodeString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14067032C (_CmIsRootEnumeratedDevice.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FD5F4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140865B0C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140866F9C (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140867B68 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // r13d
  int v8; // r14d
  PVOID *v9; // rsi
  NTSTATUS v10; // ebx
  ULONG v11; // r12d
  WCHAR *v12; // r15
  const UNICODE_STRING *v13; // rcx
  ULONG i; // edx
  int v15; // eax
  wchar_t **v16; // rdi
  PVOID *v17; // rax
  __int64 v18; // r13
  const wchar_t *v19; // rdx
  int v20; // r14d
  wchar_t **v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 *v24; // r15
  int *v25; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v27; // rdi
  bool v28; // cl
  bool v29; // al
  const WCHAR *v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rax
  int v33; // r12d
  void *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  UNICODE_STRING *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  bool v47; // zf
  PVOID *v48; // rax
  PVOID v49; // rcx
  PVOID *v50; // rdi
  PVOID v51; // rcx
  PVOID *v52; // rax
  PVOID **v53; // rcx
  PVOID v54; // rcx
  __int64 v55; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  PVOID v60; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v61; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+58h] [rbp-A8h] BYREF
  int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v65; // [rsp+60h] [rbp-A0h]
  ULONG v66; // [rsp+64h] [rbp-9Ch]
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v72; // [rsp+A0h] [rbp-60h] BYREF
  int Data; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v75; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING ValueName; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v79[10]; // [rsp+100h] [rbp+0h] BYREF
  PVOID **v80; // [rsp+150h] [rbp+50h]
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  _DWORD KeyInformation[10]; // [rsp+168h] [rbp+68h] BYREF

  v5 = 0;
  v74 = a2;
  v68 = a1;
  KeyHandle = a3;
  v80 = a5;
  v69 = 0LL;
  v8 = a4;
  v9 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v58 = 0;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v64 = 0;
  v61 = &v60;
  v60 = &v60;
  v63 = 0;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v75.Length = 0LL;
  v75.Buffer = 0LL;
  *(_QWORD *)&v72.Length = 0LL;
  v72.Buffer = 0LL;
  v10 = NtQueryKey(a3, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v10 >= 0 )
  {
    if ( !KeyInformation[5] )
      goto LABEL_147;
    v11 = KeyInformation[7] + 2 * (KeyInformation[6] + 13);
    v65 = v11;
    P = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
    v12 = (WCHAR *)P;
    if ( !P )
    {
LABEL_4:
      v10 = -1073741670;
      goto LABEL_148;
    }
    v13 = (const UNICODE_STRING *)a1[5];
    if ( !v13 || (v10 = RtlGUIDFromString(v13, &Guid), v10 >= 0) )
    {
      for ( i = 0; ; i = v5 )
      {
        v66 = v5;
        ObjectProperties = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v12, v11, &ResultLength);
        v10 = ObjectProperties;
        if ( ObjectProperties == -2147483622 )
        {
          v10 = 0;
          ObjectProperties = 0;
LABEL_118:
          ExFreePoolWithTag(v12, 0);
          if ( v10 < 0 )
            break;
          v48 = (PVOID *)v60;
          if ( v60 == &v60 )
            goto LABEL_147;
LABEL_120:
          v49 = v48[23];
          if ( v49 != (PVOID)-1LL )
          {
            if ( !v9 || v9[23] > v49 )
              goto LABEL_128;
            if ( v9[23] != v49 )
              goto LABEL_129;
            if ( PnpSetupInProgress && *((_DWORD *)v48 + 44) && !*((_DWORD *)v9 + 44) )
            {
LABEL_128:
              v9 = v48;
            }
            else
            {
              *((_DWORD *)v9 + 4) |= 2u;
              *((_DWORD *)v48 + 4) |= 2u;
            }
          }
LABEL_129:
          v48 = (PVOID *)*v48;
          if ( v48 == &v60 )
          {
            if ( v9 )
            {
              if ( ((_DWORD)v9[2] & 2) != 0 )
              {
                v50 = (PVOID *)v60;
                Data = 1;
                if ( v60 != &v60 )
                {
                  do
                  {
                    if ( ((_DWORD)v50[2] & 2) != 0 && v50[23] == v9[23] )
                    {
                      *(_DWORD *)&ValueName.Length = 1310738;
                      ValueName.Buffer = L"Duplicate";
                      ZwSetValueKey(v50[5], &ValueName, 0, 4u, &Data, 4u);
                    }
                    v50 = (PVOID *)*v50;
                  }
                  while ( v50 != &v60 );
                  v10 = ObjectProperties;
                }
              }
              else if ( IopGetRegistryValue(v9[5], L"Duplicate", 0, &P) >= 0 )
              {
                v51 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) == 4
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  *((_DWORD *)v9 + 4) |= 2u;
                }
                ExFreePoolWithTag(v51, 0);
              }
              v52 = (PVOID *)*v9;
              if ( *((PVOID **)*v9 + 1) == v9 )
              {
                v53 = (PVOID **)v9[1];
                if ( *v53 == v9 )
                {
                  *v53 = v52;
                  v52[1] = v53;
                  *v80 = v9;
                  break;
                }
              }
LABEL_152:
              __fastfail(3u);
            }
LABEL_147:
            v10 = -1073741275;
            break;
          }
          goto LABEL_120;
        }
        if ( ObjectProperties == -2147483643 )
        {
          ExFreePoolWithTag(v12, 0);
          v11 = ResultLength + 2;
          v65 = ResultLength + 2;
          P = ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
          v12 = (WCHAR *)P;
          if ( !P )
            goto LABEL_4;
          --v5;
          goto LABEL_19;
        }
        if ( ObjectProperties < 0 )
          goto LABEL_118;
        if ( *((_DWORD *)v12 + 1) == 4 && *((_DWORD *)v12 + 3) == 4 )
          v8 = *(_DWORD *)((char *)v12 + *((unsigned int *)v12 + 2));
        v12[((unsigned __int64)*((unsigned int *)v12 + 4) >> 1) + 10] = 0;
        if ( CmIsRootEnumeratedDevice(v12 + 10) )
          goto LABEL_18;
        v15 = PiDevCfgQueryDeviceMigrationNode(v68, v12 + 10, &v69);
        ObjectProperties = v15;
        v10 = v15;
        if ( v15 == -1073741772 )
        {
          v69 = 0LL;
          PiDevCfgClearDeviceMigrationNode(v68, v12 + 10);
LABEL_18:
          v8 = a4;
          goto LABEL_19;
        }
        if ( v15 < 0 )
          goto LABEL_118;
        v16 = (wchar_t **)v69;
        *(_DWORD *)(v69 + 180) = v8;
        v17 = v61;
        if ( *v61 != &v60 )
          goto LABEL_152;
        v18 = v74;
        *v16 = (wchar_t *)&v60;
        v16[1] = (wchar_t *)v17;
        *v17 = v16;
        v19 = *(const wchar_t **)(v18 + 8);
        v61 = (PVOID *)v16;
        v20 = 0;
        if ( !wcsicmp(v16[4], v19) )
          v20 = 0x10000000;
        if ( (*((_DWORD *)v16 + 45) & 0x10000000) != 0 && (v20 & 0x10000000) == 0 )
          *((_DWORD *)v16 + 4) |= 1u;
        v21 = v16 + 7;
        v22 = v18 - (_QWORD)v16;
        v23 = 2LL;
        v24 = &qword_140946E58;
        v25 = &v64;
        do
        {
          MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v21, *(wchar_t **)((char *)v21 + v22 - 24));
          *(_WORD *)v25 = MigrationDeviceIdScore;
          if ( MigrationDeviceIdScore != -1 )
            v20 |= *(_DWORD *)v24;
          v21 += 2;
          v25 = (int *)((char *)v25 + 2);
          v24 = (__int64 *)((char *)v24 + 4);
          --v23;
        }
        while ( v23 );
        v27 = v69;
        if ( (*(_DWORD *)(v69 + 180) & 0x10000) != 0 )
        {
          if ( (v20 & 0x10000) == 0 )
            goto LABEL_37;
          v28 = (v20 & 0x11000) == 0;
          v29 = (*(_DWORD *)(v69 + 180) & 0x1000) != 0;
        }
        else
        {
          v28 = (*(_DWORD *)(v69 + 180) & 0x1000) != 0;
          v29 = (v20 & 0x1000) == 0;
        }
        if ( v28 && v29 )
LABEL_37:
          *(_DWORD *)(v69 + 16) |= 1u;
        v30 = *(const WCHAR **)(v27 + 144);
        v31 = v74;
        if ( v30 && *(_QWORD *)(v74 + 64) )
        {
          while ( 1 )
          {
            if ( !*v30 )
              goto LABEL_48;
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v31 + 64), v30) )
              break;
            v32 = -1LL;
            do
              ++v32;
            while ( v30[v32] );
            v30 += v32 + 1;
          }
          v20 |= 0x200u;
          *(_QWORD *)(v27 + 152) = v30;
        }
LABEL_48:
        if ( (*(_DWORD *)(v27 + 180) & 0x200) != 0 && (v20 & 0x200) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        v33 = v58;
        if ( *(_QWORD *)(v27 + 128) )
        {
          if ( (v58 & 0x100) == 0 )
          {
            memset(v79, 0, sizeof(v79));
            v34 = *(void **)(v31 + 16);
            v35 = *(_QWORD *)(v31 + 8);
            v79[0] = &DEVPKEY_Device_LocationInfo;
            v79[2] = &DestinationString;
            LODWORD(v79[1]) = 18;
            HIDWORD(v79[3]) = 6;
            ObjectProperties = PiDevCfgQueryObjectProperties(v36, v35, 1u, v34, (__int64)v79, 1u);
            v10 = ObjectProperties;
            if ( ObjectProperties < 0 )
              goto LABEL_117;
            if ( SLODWORD(v79[4]) < 0 )
              RtlInitUnicodeString(&DestinationString, 0LL);
            v33 = v58 | 0x100;
            v58 |= 0x100u;
          }
          if ( DestinationString.Buffer
            && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 120), &DestinationString, 1u) )
          {
            v20 |= 0x100u;
          }
        }
        if ( (v20 & 0x300) == 0 && (*(_DWORD *)(v27 + 180) & 0x100) != 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        if ( (v33 & 0x30) == 0 )
        {
          memset(v79, 0, sizeof(v79));
          v37 = *(void **)(v31 + 16);
          v38 = *(_QWORD *)(v31 + 8);
          v79[0] = &DEVPKEY_Device_Capabilities;
          v79[2] = &v63;
          v79[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
          v79[7] = &String2;
          LODWORD(v79[1]) = 7;
          LODWORD(v79[3]) = 4;
          LODWORD(v79[6]) = 18;
          HIDWORD(v79[8]) = 6;
          ObjectProperties = PiDevCfgQueryObjectProperties(v39, v38, 1u, v37, (__int64)v79, 2u);
          v10 = ObjectProperties;
          if ( ObjectProperties < 0 )
            goto LABEL_117;
          if ( SLODWORD(v79[9]) < 0 )
            RtlInitUnicodeString(&String2, 0LL);
          v33 |= 0x30u;
          v58 = v33;
        }
        if ( (((unsigned __int8)v63 ^ *(_BYTE *)(v27 + 96)) & 0x10) != 0 )
        {
          if ( (*(_DWORD *)(v27 + 180) & 0x10) != 0 || (v63 & 0x10) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
        }
        else
        {
          v20 |= 0x10u;
        }
        if ( *(_QWORD *)(v27 + 112) )
        {
          if ( !String2.Buffer || RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 104), &String2, 1u) )
            goto LABEL_77;
LABEL_76:
          v20 |= 0x20u;
          goto LABEL_77;
        }
        if ( !String2.Buffer )
          goto LABEL_76;
LABEL_77:
        if ( (*(_BYTE *)(v27 + 180) & 0x20) != 0 && (v20 & 0x20) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        if ( *(_QWORD *)(v27 + 168) )
        {
          if ( (v33 & 2) == 0 )
          {
            v40 = v68;
            v41 = v68[6];
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 8);
              if ( v42 )
              {
                if ( (int)PiDevCfgGetDriverPackageId(v42, (__int64)&UnicodeString) >= 0 )
                {
                  memset(v79, 0, sizeof(v79));
                  v79[0] = &DEVPKEY_DriverPackage_OriginalInfName;
                  v79[2] = &v72;
                  LODWORD(v79[1]) = 18;
                  HIDWORD(v79[3]) = 6;
                  ObjectProperties = PiDevCfgQueryObjectProperties(
                                       v43,
                                       (__int64)UnicodeString.Buffer,
                                       8u,
                                       0LL,
                                       (__int64)v79,
                                       1u);
                  v10 = ObjectProperties;
                  if ( ObjectProperties < 0 )
                  {
LABEL_117:
                    v12 = (WCHAR *)P;
                    goto LABEL_118;
                  }
                  if ( SLODWORD(v79[4]) < 0 )
                    RtlInitUnicodeString(&v72, 0LL);
                  v40 = v68;
                }
                v44 = &v72;
                if ( !v72.Buffer )
                  v44 = (UNICODE_STRING *)v40[6];
                v75 = *v44;
              }
            }
            v58 = v33 | 2;
          }
          if ( v75.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 160), &v75, 1u) )
            v20 |= 2u;
        }
        if ( (*(_BYTE *)(v27 + 180) & 2) != 0 && (v20 & 2) == 0 )
          *(_DWORD *)(v27 + 16) |= 1u;
        v45 = *(_QWORD *)(v27 + 80) - *(_QWORD *)&Guid.Data1;
        if ( !v45 )
          v45 = *(_QWORD *)(v27 + 88) - *(_QWORD *)Guid.Data4;
        if ( v45 )
        {
          if ( (*(_DWORD *)(v27 + 180) & 1) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
        }
        else
        {
          v20 |= 1u;
        }
        v46 = (HIWORD(v64) | ((unsigned __int64)(unsigned __int16)v64 << 16)) << 16;
        *(_QWORD *)(v27 + 184) = v46;
        if ( (v20 & 0x10000000) == 0 )
        {
          v46 |= 0xF000000000000000uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x200) == 0 )
        {
          v46 |= 0xF000uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x100) == 0 )
        {
          v46 |= 0x100uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x20) == 0 )
        {
          v46 |= 0x20uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 0x10) == 0 )
        {
          v46 |= 0x10uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        if ( (v20 & 2) == 0 )
        {
          v46 |= 2uLL;
          *(_QWORD *)(v27 + 184) = v46;
        }
        v12 = (WCHAR *)P;
        v47 = (v20 & 1) == 0;
        v8 = a4;
        v11 = v65;
        v5 = v66;
        if ( v47 )
          *(_QWORD *)(v27 + 184) = v46 | 1;
LABEL_19:
        ++v5;
      }
    }
  }
LABEL_148:
  while ( 1 )
  {
    v54 = v60;
    if ( v60 == &v60 )
      break;
    if ( *((PVOID **)v60 + 1) != &v60 )
      goto LABEL_152;
    v55 = *(_QWORD *)v60;
    if ( *(PVOID *)(*(_QWORD *)v60 + 8LL) != v60 )
      goto LABEL_152;
    v60 = *(PVOID *)v60;
    *(_QWORD *)(v55 + 8) = &v60;
    PiDevCfgFreeDeviceMigrationNode(v54);
  }
  RtlFreeAnsiString(&String2);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v72);
  return (unsigned int)v10;
}
