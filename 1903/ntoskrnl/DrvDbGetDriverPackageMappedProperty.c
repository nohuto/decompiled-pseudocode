/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406F1B20 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14093FF84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1409402A0 (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013DE38 (RtlStringCchCopyExW.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxRegOpenKey @ 0x14062572C (_PnpCtxRegOpenKey.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406F1DFC (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406F2FB8 (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1406F30B4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140768CF4 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1409402A0 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x1409402F4 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 *a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v10; // r12
  unsigned int v11; // r8d
  __int64 *v12; // r10
  int v15; // ecx
  int DriverPackageMappedProperty; // ebx
  int **j; // r11
  int *v18; // r9
  __int64 v19; // rdx
  int **v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  int RegValueMappedProperty; // eax
  _DWORD *v25; // r13
  __int64 v27; // rax
  char *v28; // r14
  __int64 v29; // rdx
  int v30; // eax
  int **v31; // rdx
  unsigned int v32; // eax
  _WORD *v33; // r14
  NTSTRSAFE_PWSTR v34; // r9
  int ObjectDatabaseNodeName; // eax
  __int64 v36; // rax
  int v37; // r8d
  int v38; // r8d
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  PVOID PoolWithTag; // rax
  int v43; // r8d
  int v44; // r8d
  int v45; // edx
  _DWORD *v46; // r13
  int v47; // r8d
  __int64 v48; // r8
  _WORD *v49; // rdx
  unsigned __int64 i; // rcx
  __int64 v51; // r9
  int v52; // ecx
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  bool v56; // zf
  __int64 v57; // rax
  unsigned int v58; // edx
  NTSTRSAFE_PWSTR v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  NTSTRSAFE_PWSTR v62; // rcx
  unsigned int v63; // eax
  __int64 v64; // rax
  int v65; // eax
  _DWORD *v66; // r13
  char v67; // al
  char v68; // dl
  NTSTRSAFE_PWSTR v69; // rax
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r8
  wchar_t *v74; // rax
  unsigned int pcchRemaininga; // [rsp+28h] [rbp-89h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-89h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-81h]
  int v78[2]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v79; // [rsp+60h] [rbp-51h] BYREF
  void *Src; // [rsp+68h] [rbp-49h]
  wchar_t v81[4]; // [rsp+70h] [rbp-41h] BYREF
  NTSTRSAFE_PWSTR v82; // [rsp+78h] [rbp-39h] BYREF
  __int64 v83; // [rsp+80h] [rbp-31h]
  __int64 v84; // [rsp+88h] [rbp-29h]
  int v85[2]; // [rsp+90h] [rbp-21h]
  NTSTRSAFE_PWSTR v86; // [rsp+98h] [rbp-19h]
  int v87; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-1h]
  __int64 v92; // [rsp+110h] [rbp+5Fh] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0;
  v88 = 0LL;
  v12 = a1;
  v92 = 0LL;
  *a5 = 0;
  *v10 = 0;
  v15 = *(_DWORD *)(a4 + 16);
  DriverPackageMappedProperty = 0;
  *(_QWORD *)v78 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  Src = 0LL;
  v79 = 0LL;
  switch ( v15 )
  {
    case 2:
      v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v27 )
      {
        v34 = pszDest;
        pcchRemaininga = a7;
        *v8 = 18;
        ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(v12, 2LL, a2, v34, pcchRemaininga, v10);
        DriverPackageMappedProperty = ObjectDatabaseNodeName;
        v21 = ObjectDatabaseNodeName + 0x80000000;
        if ( (v21 & 0x80000000) != 0LL || ObjectDatabaseNodeName == -1073741789 )
        {
          v21 = 2 * *v10;
          *v10 = v21;
        }
        if ( ObjectDatabaseNodeName >= 0 )
          goto LABEL_27;
        v28 = 0LL;
        goto LABEL_47;
      }
      break;
    case 18:
      v36 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
        v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v36 )
        break;
      if ( a3 )
      {
        v37 = a3;
      }
      else
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)v12, (int)a2, 1, 0, (__int64)v78, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_27;
        v37 = v78[0];
        LODWORD(v12) = (_DWORD)a1;
      }
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)v12,
                                      (int)a2,
                                      v37,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      (__int64)v8,
                                      pszDest,
                                      a7,
                                      (__int64)v10);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
        goto LABEL_27;
      v38 = v78[0];
      if ( a3 )
        v38 = a3;
      v39 = DrvDbGetDriverPackageMappedProperty(
              (int)a1,
              (int)a2,
              v38,
              (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
              (__int64)v8,
              v81,
              4,
              (__int64)v10);
      DriverPackageMappedProperty = v39;
      if ( v39 != -1073741789 )
      {
        if ( v39 >= 0 )
        {
          if ( *v8 == 7 && *v10 == 4 )
          {
            v40 = *(_DWORD *)v81;
          }
          else
          {
            v40 = -1;
            *(_DWORD *)v81 = -1;
          }
          goto LABEL_82;
        }
        goto LABEL_27;
      }
      goto LABEL_78;
    case 33:
      v41 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
        v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v41 )
      {
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)v12, (int)a2, 1, 0, (__int64)v78, 0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_27;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x412uLL, 0x42444450u);
        Src = PoolWithTag;
        v33 = PoolWithTag;
        if ( PoolWithTag )
        {
          v43 = v78[0];
          if ( a3 )
            v43 = a3;
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          (int)a2,
                                          v43,
                                          (int)&DEVPKEY_DriverPackage_ProviderName,
                                          (__int64)v8,
                                          (NTSTRSAFE_PWSTR)PoolWithTag,
                                          1042,
                                          (__int64)v10);
          if ( DriverPackageMappedProperty == -1073741789 )
          {
            DriverPackageMappedProperty = -1073741595;
          }
          else if ( DriverPackageMappedProperty >= 0 )
          {
            if ( *v8 == 18 )
            {
              v21 = *v10;
              if ( (unsigned int)(v21 - 2) <= 0x206 )
              {
                v21 = ((unsigned int)v21 >> 1) - 1;
                v89 = (unsigned int)v21;
                if ( !v33[v21] )
                {
                  v44 = v78[0];
                  v45 = 2 * v21;
                  LODWORD(v79) = 2 * v21;
                  if ( a3 )
                    v44 = a3;
                  v85[0] = 1040 - v45;
                  v86 = &v33[(unsigned int)v21 + 1];
                  DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                                  (int)a1,
                                                  (int)a2,
                                                  v44,
                                                  (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                                  (__int64)v8,
                                                  v86,
                                                  1040 - v45,
                                                  (__int64)v10);
                  v46 = a5;
                  if ( DriverPackageMappedProperty == -1073741275 )
                  {
                    v47 = v78[0];
                    if ( a3 )
                      v47 = a3;
                    DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                                    (int)a1,
                                                    (int)a2,
                                                    v47,
                                                    (int)&DEVPKEY_DriverPackage_DriverInfName,
                                                    (__int64)a5,
                                                    v86,
                                                    v85[0],
                                                    (__int64)v10);
                  }
                  if ( DriverPackageMappedProperty == -1073741789 )
                  {
                    DriverPackageMappedProperty = -1073741595;
                  }
                  else if ( DriverPackageMappedProperty >= 0 )
                  {
                    if ( *v46 == 18 && *v10 - 2 <= 0x206 )
                    {
                      v33 = Src;
                      v48 = v89;
                      v49 = Src;
                      *((_WORD *)Src + v89) = 45;
                      for ( i = (unsigned __int16)*v49; (_WORD)i; i = (unsigned __int16)*v49 )
                      {
                        if ( (unsigned __int16)i <= 0x3Au && (v51 = 0x400200100000000LL, _bittest64(&v51, i))
                          || (_WORD)i == 126 )
                        {
                          *v49 = 95;
                        }
                        ++v49;
                      }
                      v52 = v79 + 2;
                      v33[v48] = 45;
                      *v46 = 18;
                      v53 = *v10 + v52;
                      *v10 = v53;
                      v21 = (unsigned __int64)pszDest;
                      if ( pszDest && a7 >= v53 )
                        memmove(pszDest, v33, v53);
                      else
                        DriverPackageMappedProperty = -1073741789;
                      goto LABEL_50;
                    }
                    DriverPackageMappedProperty = -1073741823;
                  }
                  goto LABEL_49;
                }
              }
            }
            DriverPackageMappedProperty = -1073741823;
          }
LABEL_50:
          if ( v33 )
            ExFreePoolWithTag(v33, 0);
          goto LABEL_27;
        }
        goto LABEL_96;
      }
      break;
    case 29:
      v54 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v54 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v54 )
      {
LABEL_5:
        if ( v15 != 30 )
        {
          if ( v15 == 32 )
          {
            v60 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_DriverPackageId;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId )
              v60 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v60 )
            {
              *v8 = 18;
              v61 = -1LL;
              do
                ++v61;
              while ( a2[v61] );
              v62 = pszDest;
              v63 = 2 * v61 + 2;
              *v10 = v63;
              if ( v62 && a7 >= v63 )
                memmove(v62, a2, v63);
              else
                return (unsigned int)-1073741789;
              return (unsigned int)DriverPackageMappedProperty;
            }
            break;
          }
          if ( v15 != 38 )
          {
            if ( v15 == 40 )
            {
              v70 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
                v70 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( !v70 )
              {
                if ( !a3 )
                {
                  DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)v12, (int)a2, 1, 0, (__int64)v78, 0LL);
                  if ( DriverPackageMappedProperty < 0 )
                    goto LABEL_27;
                  LODWORD(a3) = v78[0];
                  LODWORD(v12) = (_DWORD)a1;
                }
                v71 = DrvDbGetDriverPackageMappedProperty(
                        (int)v12,
                        (int)a2,
                        a3,
                        (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                        (__int64)v8,
                        (NTSTRSAFE_PWSTR)&v92,
                        4,
                        (__int64)v10);
                DriverPackageMappedProperty = v71;
                if ( v71 != -1073741789 )
                {
                  if ( v71 == -1073741275 )
                  {
                    v8 = a5;
                    DriverPackageMappedProperty = 0;
                  }
                  else
                  {
                    if ( v71 < 0 )
                      goto LABEL_27;
                    v8 = a5;
                    if ( *a5 == 7 && *v10 == 4 )
                    {
                      v40 = v92;
                      goto LABEL_82;
                    }
                  }
                  v40 = -1;
                  LODWORD(v92) = -1;
LABEL_82:
                  v21 = (unsigned __int64)pszDest;
                  *v8 = 17;
                  *v10 = 1;
                  if ( v21 && a7 )
                  {
                    *(_BYTE *)v21 = (v40 != 0) - 1;
                    goto LABEL_27;
                  }
LABEL_85:
                  DriverPackageMappedProperty = -1073741789;
                  goto LABEL_27;
                }
                goto LABEL_78;
              }
            }
            break;
          }
          v64 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Integrated;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Integrated )
            v64 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v64 )
            break;
          if ( !a3 )
          {
            DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v12, 0LL, 2u, a2, 1, 0, v78, 0LL, &v79);
            if ( DriverPackageMappedProperty < 0 )
              goto LABEL_27;
            LODWORD(a3) = v78[0];
            LODWORD(v12) = (_DWORD)a1;
          }
          v65 = DrvDbGetDriverPackageMappedProperty(
                  (int)v12,
                  (int)a2,
                  a3,
                  (int)&DEVPKEY_DriverPackage_Inbox,
                  (__int64)v8,
                  (NTSTRSAFE_PWSTR)&a8,
                  1,
                  (__int64)v10);
          DriverPackageMappedProperty = v65;
          if ( v65 != -1073741789 )
          {
            if ( v65 == -1073741275 )
            {
              v66 = a5;
              v67 = 0;
              DriverPackageMappedProperty = 0;
            }
            else
            {
              if ( v65 < 0 )
                goto LABEL_27;
              v66 = a5;
              if ( *a5 == 17 && *v10 == 1 )
              {
                v68 = (char)a8;
              }
              else
              {
                v68 = -1;
                LOBYTE(a8) = -1;
              }
              if ( !v68 )
                goto LABEL_185;
              if ( !*(_QWORD *)v78 )
              {
                LOBYTE(dwFlags[0]) = 0;
                LODWORD(pcchRemaining) = 1;
                DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                                a1,
                                                0LL,
                                                2u,
                                                a2,
                                                pcchRemaining,
                                                *(_QWORD *)dwFlags,
                                                v78,
                                                0LL,
                                                &v79);
                if ( DriverPackageMappedProperty < 0 )
                  goto LABEL_27;
                v68 = (char)a8;
              }
              v67 = v68;
              if ( (*(_BYTE *)(v79 + 56) & 0x10) != 0 )
                v67 = 0;
            }
            LOBYTE(a8) = v67;
            v68 = v67;
LABEL_185:
            v69 = pszDest;
            *v66 = 17;
            *v10 = 1;
            if ( v69 && a7 )
            {
              *(_BYTE *)v69 = v68;
              goto LABEL_27;
            }
            goto LABEL_85;
          }
LABEL_78:
          DriverPackageMappedProperty = -1073741595;
          goto LABEL_27;
        }
        v55 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v55 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v55 )
          break;
      }
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)v12, (int)a2, 1, 0, (__int64)v78, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_27;
        a3 = *(_QWORD *)v78;
        v12 = a1;
      }
      DriverPackageMappedProperty = PnpCtxRegOpenKey(*v12, a3, (__int64)L"Configurations", 0, 9u, (__int64)&v88);
      if ( DriverPackageMappedProperty == -1073741772 )
        DriverPackageMappedProperty = -1073741275;
      if ( DriverPackageMappedProperty >= 0 )
      {
        v56 = *(_DWORD *)(a4 + 16) == 30;
        v82 = pszDest;
        *(_WORD *)((char *)&v84 + 1) = 0;
        BYTE3(v84) = 0;
        HIDWORD(v83) = 0;
        HIDWORD(v84) = 0;
        if ( !v56 )
          goto LABEL_142;
        v57 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v57 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v84) = 1;
        if ( v57 )
LABEL_142:
          LOBYTE(v84) = 0;
        if ( pszDest )
          LODWORD(v83) = a7 >> 1;
        else
          LODWORD(v83) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v88, DrvDbGetConfigurationSubKeyCallback, &v82);
        if ( DriverPackageMappedProperty >= 0 )
        {
          if ( HIDWORD(v83) )
          {
            v59 = v82;
            DriverPackageMappedProperty = HIDWORD(v84);
            v58 = ++HIDWORD(v83);
            *a5 = 8210;
            *v10 = 2 * v58;
            if ( v59 && (v21 = 2LL * v58, v21 <= a7) )
              v59[v58 - 1] = 0;
            else
              DriverPackageMappedProperty = -1073741789;
          }
          else
          {
            DriverPackageMappedProperty = -1073741275;
          }
        }
        else if ( v84 < 0 )
        {
          DriverPackageMappedProperty = HIDWORD(v84);
        }
      }
      goto LABEL_27;
    default:
      goto LABEL_5;
  }
  for ( j = &off_140370770; ; j += 5 )
  {
    v18 = *j;
    if ( (*j)[4] == v15 )
    {
      v19 = *(_QWORD *)v18 - *(_QWORD *)a4;
      if ( *(_QWORD *)v18 == *(_QWORD *)a4 )
        v19 = *((_QWORD *)v18 + 1) - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
    if ( ++v11 >= 0x1F )
      return (unsigned int)-1073741802;
  }
  v20 = &(&off_140370770)[5 * v11];
  *(_QWORD *)v85 = v20;
  if ( !v20 )
    return (unsigned int)-1073741802;
  if ( a3 )
  {
    v22 = v92;
  }
  else
  {
    DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)v12, (int)a2, 1, 0, (__int64)v78, 0LL);
    if ( DriverPackageMappedProperty < 0 )
      goto LABEL_27;
    v22 = *(_QWORD *)v78;
    v20 = *(int ***)v85;
  }
  if ( *((_DWORD *)v20 + 8) )
  {
    LODWORD(a5) = 48;
    v28 = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( v28 )
    {
      v29 = *(_QWORD *)v78;
      if ( a3 )
        v29 = a3;
      v30 = PnpCtxRegQueryValue(v21, v29, L"Version", &v79, v28, &a5);
      DriverPackageMappedProperty = v30;
      if ( v30 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
      }
      else if ( v30 == -1073741789 )
      {
        DriverPackageMappedProperty = -1073741595;
      }
      else if ( v30 >= 0 )
      {
        if ( (_DWORD)v79 == 3 && (_DWORD)a5 == 48 )
        {
          v31 = *(int ***)v85;
          v21 = (unsigned __int64)pszDest;
          *v8 = *(_DWORD *)(*(_QWORD *)v85 + 8LL);
          v32 = *((_DWORD *)v31 + 8);
          *v10 = v32;
          if ( v21 && a7 >= v32 )
            memmove((void *)v21, &v28[*((unsigned int *)v31 + 7)], *((unsigned int *)v31 + 8));
          else
            DriverPackageMappedProperty = -1073741789;
        }
        else
        {
          DriverPackageMappedProperty = -1073741823;
        }
      }
      goto LABEL_47;
    }
LABEL_96:
    DriverPackageMappedProperty = -1073741801;
    goto LABEL_27;
  }
  v23 = a7;
  if ( a3 )
    v22 = a3;
  RegValueMappedProperty = DrvDbGetRegValueMappedProperty(pszDest, v22, v20, v8, pszDest, a7, v10);
  DriverPackageMappedProperty = RegValueMappedProperty;
  if ( RegValueMappedProperty == -1073741275 )
  {
    v25 = a5;
  }
  else
  {
    if ( RegValueMappedProperty && RegValueMappedProperty != -1073741789 )
      goto LABEL_27;
    v25 = a5;
    if ( *a5 != 18 || *v10 != 2 )
      goto LABEL_27;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_27;
  v72 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v72 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v72 )
    goto LABEL_27;
  v73 = *(_QWORD *)v78;
  if ( a3 )
    v73 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v73, &v87) < 0 || v87 != 218103811 )
    goto LABEL_27;
  v74 = pszDest;
  DriverPackageMappedProperty = 0;
  *v25 = 18;
  *v10 = 36;
  if ( v74 && (unsigned int)v23 >= 0x24 )
  {
    RtlStringCchCopyExW(v74, v23 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
    goto LABEL_27;
  }
  DriverPackageMappedProperty = -1073741789;
  v28 = 0LL;
LABEL_47:
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
LABEL_49:
    v33 = Src;
    goto LABEL_50;
  }
LABEL_27:
  if ( v88 )
    PnpCtxRegCloseKey(v21, v88);
  if ( *(_QWORD *)v78 )
    PnpCtxRegCloseKey(v21, *(_QWORD *)v78);
  return (unsigned int)DriverPackageMappedProperty;
}
