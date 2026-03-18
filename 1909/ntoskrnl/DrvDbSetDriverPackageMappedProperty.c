/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x1409412DC
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406F35C0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409412DC (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406F389C (DrvDbOpenDriverPackageRegKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406F4B54 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x14070AA00 (_PnpCtxRegSetValue.c)
 *     DrvDbGetDriverPackageSignerName @ 0x14093FC5C (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x14093FD10 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409412DC (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409418F4 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 *a1,
        _WORD *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7)
{
  int v8; // r8d
  _WORD *v10; // rbx
  int v11; // r11d
  wchar_t *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // edx
  int **i; // r10
  int *v22; // r9
  __int64 v23; // rcx
  __int64 v25; // rcx
  int **v26; // r13
  unsigned int v27; // r14d
  int v28; // eax
  bool v29; // zf
  char *PoolWithTag; // rdi
  void *v31; // rdx
  int v32; // eax
  size_t v33; // r8
  char *v34; // rcx
  __int64 v35; // rcx
  void *v36; // rdx
  int v37; // eax
  const wchar_t *v38; // rdx
  unsigned int v39; // r12d
  _DWORD *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // r8
  void *v45; // rdx
  __int64 v46; // rax
  void *v47; // r8
  __int64 v48; // rdx
  void *v49; // r8
  int v50; // r8d
  void *v51; // rdx
  __int64 v52; // r8
  void *v53; // r8
  void *v54; // rdx
  int v55; // r8d
  int v56; // [rsp+40h] [rbp-20h] BYREF
  wchar_t *v57; // [rsp+48h] [rbp-18h] BYREF
  void *v58; // [rsp+50h] [rbp-10h] BYREF
  char *v59; // [rsp+58h] [rbp-8h]
  unsigned int v62; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  v58 = 0LL;
  v10 = a2;
  v59 = 0LL;
  v11 = (int)a1;
  v57 = 0LL;
  v12 = 0LL;
  if ( v8 == 2 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v13 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 18 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v15 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v15 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v16 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v16 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 33 )
  {
    v17 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v17 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v17 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 40 )
  {
    v18 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
      v18 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v18 )
      return (unsigned int)-1073741790;
  }
  v20 = 0;
  for ( i = &off_140370770; ; i += 5 )
  {
    v22 = *i;
    if ( (*i)[4] == v8 )
    {
      v23 = *(_QWORD *)v22 - *(_QWORD *)a4;
      if ( *(_QWORD *)v22 == *(_QWORD *)a4 )
        v23 = *((_QWORD *)v22 + 1) - *(_QWORD *)(a4 + 8);
      if ( !v23 )
        break;
    }
    if ( ++v20 >= 0x1F )
      return (unsigned int)-1073741802;
  }
  v25 = 5LL * v20;
  v26 = &(&off_140370770)[5 * v20];
  if ( !v26 )
    return (unsigned int)-1073741802;
  v27 = a5;
  if ( a5 != *((_DWORD *)v26 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v19 = DrvDbOpenDriverPackageRegKey(v11, (int)v10, 3, 0, (__int64)&v58, 0LL);
    if ( v19 < 0 )
      goto LABEL_113;
    v10 = a2;
  }
  v28 = *((_DWORD *)v26 + 8);
  if ( v28 )
  {
    if ( v27 )
      v29 = a7 == v28;
    else
      v29 = a7 == 0;
    if ( !v29 )
    {
      v19 = -1073741823;
      goto LABEL_113;
    }
    v62 = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_48;
    v31 = v58;
    if ( a3 )
      v31 = a3;
    v32 = PnpCtxRegQueryValue(v25, v31, L"Version", &v57, PoolWithTag, &v62);
    v19 = v32;
    if ( v32 == -1073741772 )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      goto LABEL_58;
    }
    if ( v32 == -1073741789 )
    {
      v19 = -1073741595;
    }
    else if ( v32 >= 0 )
    {
      if ( (_DWORD)v57 == 3 && v62 == 48 )
      {
LABEL_58:
        v33 = *((unsigned int *)v26 + 8);
        v34 = &PoolWithTag[*((unsigned int *)v26 + 7)];
        if ( v27 )
          memmove(v34, Src, v33);
        else
          memset(v34, 0, v33);
        v36 = v58;
        if ( a3 )
          v36 = a3;
        v37 = PnpCtxRegSetValue(v35, v36, (__int64)L"Version", 3LL, (__int64)PoolWithTag, 0x30u);
LABEL_108:
        v19 = v37;
        goto LABEL_109;
      }
      v19 = -1073741823;
    }
LABEL_109:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_113;
  }
  v38 = L"Microsoft Windows";
  v39 = a7;
  v40 = Src;
  if ( *(_DWORD *)(a4 + 16) == 7 )
  {
    v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
      v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    v42 = 0LL;
    if ( !v41 && v27 == 18 && a7 > 2 )
    {
      if ( Src )
      {
        if ( !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
        {
          v43 = wcsicmp((const wchar_t *)Src, L"Microsoft Windows");
          v42 = 0LL;
          if ( !v43 )
          {
            v44 = (__int64)v58;
            if ( a3 )
              v44 = (__int64)a3;
            if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v44, (wchar_t *)&v56) >= 0 && v56 == 218103811 )
            {
              v45 = v58;
              if ( a3 )
                v45 = a3;
              v19 = DrvDbSetRegValueMappedProperty(v42, v45, v26, 0LL, 0LL, 0);
              if ( v19 != -1073741275 )
                goto LABEL_113;
              goto LABEL_81;
            }
LABEL_105:
            v51 = v58;
            if ( a3 )
              v51 = a3;
            v37 = DrvDbSetRegValueMappedProperty(v42, v51, v26, v27, v40, v39);
            PoolWithTag = v59;
            v12 = v57;
            goto LABEL_108;
          }
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
  }
  if ( *(_DWORD *)(a4 + 16) != 8 )
    goto LABEL_105;
  v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v46 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v46 )
    goto LABEL_105;
  if ( v27 == 7 )
  {
    if ( v39 != 4 || !v40 )
      goto LABEL_105;
    if ( *v40 == 218103811 )
    {
      v47 = v58;
      if ( a3 )
        v47 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName(0LL, (__int64)v38, v47, 0LL, 0, &v62) == -1073741789
        && v62 == 18 )
      {
        v57 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
        if ( !v57 )
        {
LABEL_48:
          v19 = -1073741801;
          goto LABEL_113;
        }
        v49 = v58;
        if ( a3 )
          v49 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v25, v48, v49, v57, 18, &v62) >= 0
          && v62
          && !v57[v62 - 1]
          && !wcsicmp(v57, L"Microsoft Windows") )
        {
          v50 = (int)v58;
          if ( a3 )
            v50 = (int)a3;
          DrvDbSetDriverPackageMappedProperty((int)a1, (int)a2, v50, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_105;
    }
  }
  else if ( v27 )
  {
    goto LABEL_105;
  }
  v52 = (__int64)v58;
  if ( a3 )
    v52 = (__int64)a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v52, (wchar_t *)&v56) < 0 || v56 != 218103811 )
    goto LABEL_105;
  v53 = v58;
  if ( a3 )
    v53 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName(v42, 0LL, v53, 0LL, 0, &v62) != -1073741275 )
    goto LABEL_105;
  v54 = v58;
  if ( a3 )
    v54 = a3;
  v19 = DrvDbSetRegValueMappedProperty(v42, v54, v26, v27, v40, v39);
  if ( v19 < 0 )
    goto LABEL_113;
  v55 = (int)v58;
  if ( a3 )
    v55 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    (int)a1,
    (int)a2,
    v55,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_81:
  v19 = 0;
LABEL_113:
  if ( v58 )
    PnpCtxRegCloseKey(v25, v58);
  return (unsigned int)v19;
}
