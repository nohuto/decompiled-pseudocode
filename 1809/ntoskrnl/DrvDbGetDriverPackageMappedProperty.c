/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406D3B40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140902E84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1409031AC (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406D4D1C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1409031AC (DrvDbGetDriverPackageSignerScore.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        _QWORD *a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v10; // r12
  __int64 v11; // rcx
  int v14; // ebx
  HANDLE v15; // r11
  int v16; // r8d
  unsigned int v17; // edx
  int **i; // r10
  int *v19; // r9
  int DriverPackageMappedProperty; // ebx
  __int64 v21; // rcx
  int **v22; // r13
  _DWORD *v23; // rsi
  int RegValueMappedProperty; // eax
  char *PoolWithTag; // r14
  HANDLE v26; // rcx
  int v27; // eax
  NTSTRSAFE_PWSTR v28; // rcx
  unsigned int v29; // eax
  unsigned __int16 *v30; // r14
  __int64 v32; // rax
  int v33; // r8d
  NTSTRSAFE_PWSTR v34; // r14
  int v35; // r8d
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  wchar_t *v39; // rax
  int v40; // r8d
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r8d
  int v45; // ecx
  int v46; // esi
  int v47; // r8d
  _DWORD *v48; // rsi
  PVOID v49; // r8
  _WORD *v50; // rdx
  unsigned __int64 j; // rcx
  __int64 v52; // r9
  int v53; // ecx
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  bool v58; // zf
  __int64 v59; // rax
  unsigned int v60; // edx
  NTSTRSAFE_PWSTR v61; // r8
  __int64 v62; // rax
  HANDLE v63; // r8
  wchar_t *v64; // rcx
  int v65; // [rsp+30h] [rbp-50h]
  NTSTRSAFE_PWSTR v66; // [rsp+40h] [rbp-40h] BYREF
  int v67; // [rsp+48h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v69; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h]
  NTSTRSAFE_PWSTR v71; // [rsp+68h] [rbp-18h] BYREF
  __int64 v72; // [rsp+70h] [rbp-10h]
  __int64 v73; // [rsp+78h] [rbp-8h]
  __int64 v76; // [rsp+D8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  Handle = 0LL;
  v69 = 0LL;
  *a5 = 0;
  v14 = a2;
  *v10 = 0;
  v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 16);
  v76 = 0LL;
  P = 0LL;
  if ( v16 == 18 )
  {
    v32 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v32 )
    {
      if ( a3 )
      {
        v33 = (int)a3;
      }
      else
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey((_DWORD)a1, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_40;
        v33 = (int)Handle;
        v14 = a2;
      }
      v34 = pszDest;
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)a1,
                                      v14,
                                      v33,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      (__int64)v8,
                                      pszDest,
                                      a7,
                                      (__int64)v10);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) >= 0 && DriverPackageMappedProperty != -1073741789 )
      {
        v35 = (int)Handle;
        if ( a3 )
          v35 = (int)a3;
        v36 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                a2,
                v35,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)v8,
                (NTSTRSAFE_PWSTR)&a8,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v36;
        if ( v36 == -1073741789 )
        {
          DriverPackageMappedProperty = -1073741595;
        }
        else if ( v36 >= 0 )
        {
          if ( *v8 == 7 && *v10 == 4 )
          {
            v37 = (int)a8;
          }
          else
          {
            v37 = -1;
            LODWORD(a8) = -1;
          }
          *v8 = 17;
          *v10 = 1;
          if ( v34 && a7 )
            *(_BYTE *)v34 = (v37 != 0) - 1;
          else
            DriverPackageMappedProperty = -1073741789;
        }
      }
      goto LABEL_40;
    }
    goto LABEL_5;
  }
  if ( v16 == 33 )
  {
    v38 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v38 )
    {
LABEL_5:
      v17 = 0;
      for ( i = &off_140351640; ; i += 5 )
      {
        v19 = *i;
        if ( (*i)[4] == v16 )
        {
          v21 = *(_QWORD *)v19 - *(_QWORD *)a4;
          if ( *(_QWORD *)v19 == *(_QWORD *)a4 )
            v21 = *((_QWORD *)v19 + 1) - *(_QWORD *)(a4 + 8);
          if ( !v21 )
            break;
        }
        if ( ++v17 >= 0x1E )
          return (unsigned int)-1073741802;
      }
      v22 = &(&off_140351640)[5 * v17];
      if ( !v22 )
        return (unsigned int)-1073741802;
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey((_DWORD)a1, 0, 2, v14, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_40;
        v15 = Handle;
      }
      if ( !*((_DWORD *)v22 + 8) )
      {
        v23 = a5;
        if ( a3 )
          v15 = a3;
        RegValueMappedProperty = DrvDbGetRegValueMappedProperty(0LL, v15, v22, a5, pszDest, a7, v10);
        DriverPackageMappedProperty = RegValueMappedProperty;
        if ( RegValueMappedProperty != -1073741275
          && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *v23 != 18 || *v10 != 2)
          || *(_DWORD *)(a4 + 16) != 7 )
        {
          goto LABEL_40;
        }
        v62 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
          v62 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v62 )
          goto LABEL_40;
        v63 = Handle;
        if ( a3 )
          v63 = a3;
        if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v63, &v67) < 0 || v67 != 218103811 )
          goto LABEL_40;
        v64 = pszDest;
        DriverPackageMappedProperty = 0;
        *v23 = 18;
        *v10 = 36;
        if ( v64 && a7 >= 0x24 )
        {
          RtlStringCchCopyExW(v64, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
          goto LABEL_40;
        }
        PoolWithTag = (char *)v76;
LABEL_45:
        DriverPackageMappedProperty = -1073741789;
        goto LABEL_36;
      }
      LODWORD(v76) = 48;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
      if ( PoolWithTag )
      {
        v26 = Handle;
        if ( a3 )
          v26 = a3;
        v27 = RegRtlQueryValue(v26, L"Version", &v66, PoolWithTag, (unsigned int *)&v76);
        DriverPackageMappedProperty = v27;
        if ( v27 == -1073741772 )
        {
          DriverPackageMappedProperty = -1073741275;
          goto LABEL_36;
        }
        if ( v27 == -1073741789 )
        {
          DriverPackageMappedProperty = -1073741595;
          goto LABEL_36;
        }
        if ( v27 >= 0 )
        {
          if ( (_DWORD)v66 != 3 || (_DWORD)v76 != 48 )
          {
            DriverPackageMappedProperty = -1073741823;
            goto LABEL_36;
          }
          v28 = pszDest;
          *a5 = *((_DWORD *)v22 + 2);
          v29 = *((_DWORD *)v22 + 8);
          *v10 = v29;
          if ( !v28 || a7 < v29 )
            goto LABEL_45;
          memmove(v28, &PoolWithTag[*((unsigned int *)v22 + 7)], *((unsigned int *)v22 + 8));
        }
LABEL_36:
        if ( !PoolWithTag )
          goto LABEL_40;
        ExFreePoolWithTag(PoolWithTag, 0);
        v30 = (unsigned __int16 *)P;
LABEL_38:
        if ( v30 )
          ExFreePoolWithTag(v30, 0);
        goto LABEL_40;
      }
LABEL_88:
      DriverPackageMappedProperty = -1073741801;
      goto LABEL_40;
    }
    if ( !a3 )
    {
      DriverPackageMappedProperty = DrvDbOpenObjectRegKey((_DWORD)a1, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
      if ( DriverPackageMappedProperty < 0 )
        goto LABEL_40;
      v14 = a2;
    }
    v39 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x412uLL, 0x42444450u);
    v30 = v39;
    if ( !v39 )
      goto LABEL_88;
    v40 = (int)Handle;
    if ( a3 )
      v40 = (int)a3;
    v41 = DrvDbGetDriverPackageMappedProperty(
            (int)a1,
            v14,
            v40,
            (int)&DEVPKEY_DriverPackage_ProviderName,
            (__int64)v8,
            v39,
            1042,
            (__int64)v10);
    DriverPackageMappedProperty = v41;
    if ( v41 != -1073741789 )
    {
      if ( v41 < 0 )
        goto LABEL_38;
      if ( *v8 != 18 )
        goto LABEL_90;
      if ( *v10 - 2 > 0x206 )
        goto LABEL_90;
      v42 = (*v10 >> 1) - 1;
      v43 = (unsigned int)v42;
      P = (PVOID)(unsigned int)v42;
      if ( v30[v42] )
        goto LABEL_90;
      v44 = (int)Handle;
      if ( a3 )
        v44 = (int)a3;
      v45 = 2 * v42;
      v46 = 1040 - v45;
      LODWORD(v76) = v45;
      v66 = &v30[v43 + 1];
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)a1,
                                      a2,
                                      v44,
                                      (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                      (__int64)v8,
                                      v66,
                                      1040 - v45,
                                      (__int64)v10);
      if ( DriverPackageMappedProperty == -1073741275 )
      {
        v47 = (int)Handle;
        if ( a3 )
          v47 = (int)a3;
        v65 = v46;
        v48 = a5;
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)a1,
                                        a2,
                                        v47,
                                        (int)&DEVPKEY_DriverPackage_DriverInfName,
                                        (__int64)a5,
                                        v66,
                                        v65,
                                        (__int64)v10);
      }
      else
      {
        v48 = a5;
      }
      if ( DriverPackageMappedProperty != -1073741789 )
      {
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_38;
        if ( *v48 == 18 && *v10 - 2 <= 0x206 )
        {
          v49 = P;
          v50 = v30;
          v30[(_QWORD)P] = 45;
          for ( j = *v30; (_WORD)j; j = (unsigned __int16)*v50 )
          {
            if ( (unsigned __int16)j <= 0x3Au && (v52 = 0x400200100000000LL, _bittest64(&v52, j)) || (_WORD)j == 126 )
              *v50 = 95;
            ++v50;
          }
          v53 = v76 + 2;
          v30[(_QWORD)v49] = 45;
          *v48 = 18;
          v54 = *v10 + v53;
          *v10 = v54;
          if ( pszDest && a7 >= v54 )
            memmove(pszDest, v30, v54);
          else
            DriverPackageMappedProperty = -1073741789;
          goto LABEL_38;
        }
LABEL_90:
        DriverPackageMappedProperty = -1073741823;
        goto LABEL_38;
      }
    }
    DriverPackageMappedProperty = -1073741595;
    goto LABEL_38;
  }
  if ( v16 != 29 )
    goto LABEL_113;
  v55 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
    v55 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v55 )
  {
LABEL_113:
    if ( v16 != 30 )
      goto LABEL_5;
    v56 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v56 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v56 )
      goto LABEL_5;
  }
  if ( a3 )
  {
LABEL_117:
    if ( *a1 )
      v11 = *(_QWORD *)(*a1 + 224LL);
    DriverPackageMappedProperty = SysCtxRegOpenKey(v11, (__int64)a3, (__int64)L"Configurations", 0, 9u, (__int64)&v69);
    if ( DriverPackageMappedProperty == -1073741772 )
      DriverPackageMappedProperty = -1073741275;
    if ( DriverPackageMappedProperty >= 0 )
    {
      v72 = 0LL;
      v58 = *(_DWORD *)(a4 + 16) == 30;
      v73 = 0LL;
      v71 = pszDest;
      if ( !v58 )
        goto LABEL_126;
      v59 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
        v59 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      LOBYTE(v73) = 1;
      if ( v59 )
LABEL_126:
        LOBYTE(v73) = 0;
      if ( pszDest )
        LODWORD(v72) = a7 >> 1;
      else
        LODWORD(v72) = 0;
      DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v69, DrvDbGetConfigurationSubKeyCallback, &v71);
      if ( DriverPackageMappedProperty >= 0 )
      {
        if ( HIDWORD(v72) )
        {
          v61 = v71;
          DriverPackageMappedProperty = HIDWORD(v73);
          v60 = ++HIDWORD(v72);
          *a5 = 8210;
          *v10 = 2 * v60;
          if ( v61 && 2 * (unsigned __int64)v60 <= a7 )
            v61[v60 - 1] = 0;
          else
            DriverPackageMappedProperty = -1073741789;
        }
        else
        {
          DriverPackageMappedProperty = -1073741275;
        }
      }
      else if ( v73 < 0 )
      {
        DriverPackageMappedProperty = HIDWORD(v73);
      }
    }
    goto LABEL_40;
  }
  v57 = DrvDbOpenObjectRegKey((_DWORD)a1, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
  v11 = 0LL;
  DriverPackageMappedProperty = v57;
  if ( v57 >= 0 )
  {
    a3 = Handle;
    goto LABEL_117;
  }
LABEL_40:
  if ( v69 )
    ZwClose(v69);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DriverPackageMappedProperty;
}
