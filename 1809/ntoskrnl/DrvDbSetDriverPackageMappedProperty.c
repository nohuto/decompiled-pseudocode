/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x1409045A4
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406D3B40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1409030F8 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1409031AC (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140904B78 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7)
{
  int v8; // r8d
  __int64 v10; // rbx
  wchar_t *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ebx
  unsigned int v18; // edx
  int **i; // r10
  int *v20; // r9
  __int64 v21; // rcx
  int **v23; // r13
  unsigned int v24; // r14d
  int v25; // eax
  bool v26; // zf
  char *PoolWithTag; // rdi
  HANDLE v28; // rcx
  int v29; // eax
  size_t v30; // r8
  char *v31; // rcx
  HANDLE v32; // rcx
  int v33; // eax
  const wchar_t *v34; // rdx
  unsigned int v35; // r12d
  _DWORD *v36; // r15
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  HANDLE v40; // r8
  HANDLE v41; // rdx
  __int64 v42; // rax
  HANDLE v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  HANDLE v46; // r8
  int v47; // r8d
  HANDLE v48; // rdx
  HANDLE v49; // r8
  HANDLE v50; // r8
  HANDLE v51; // rdx
  int v52; // r8d
  int v53; // [rsp+40h] [rbp-20h] BYREF
  wchar_t *v54; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  char *v56; // [rsp+58h] [rbp-8h]
  __int64 v59; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v10 = a2;
  v56 = 0LL;
  v54 = 0LL;
  v12 = 0LL;
  if ( v8 == 18 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v15 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v15 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 33 )
  {
    v16 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v16 )
      return (unsigned int)-1073741790;
  }
  v18 = 0;
  for ( i = &off_140351640; ; i += 5 )
  {
    v20 = *i;
    if ( (*i)[4] == v8 )
    {
      v21 = *(_QWORD *)v20 - *(_QWORD *)a4;
      if ( *(_QWORD *)v20 == *(_QWORD *)a4 )
        v21 = *((_QWORD *)v20 + 1) - *(_QWORD *)(a4 + 8);
      if ( !v21 )
        break;
    }
    if ( ++v18 >= 0x1E )
      return (unsigned int)-1073741802;
  }
  v23 = &(&off_140351640)[5 * v18];
  if ( !v23 )
    return (unsigned int)-1073741802;
  v24 = a5;
  if ( a5 != *((_DWORD *)v23 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v17 = DrvDbOpenObjectRegKey(a1, 0LL, 2u, v10, 3, 0, &Handle, 0LL);
    if ( v17 < 0 )
      goto LABEL_105;
    v10 = a2;
  }
  v25 = *((_DWORD *)v23 + 8);
  if ( v25 )
  {
    if ( v24 )
      v26 = a7 == v25;
    else
      v26 = a7 == 0;
    if ( !v26 )
    {
      v17 = -1073741823;
      goto LABEL_105;
    }
    LODWORD(v59) = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_40;
    v28 = Handle;
    if ( a3 )
      v28 = a3;
    v29 = RegRtlQueryValue(v28, L"Version", &v54, PoolWithTag, (unsigned int *)&v59);
    v17 = v29;
    if ( v29 == -1073741772 )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      goto LABEL_50;
    }
    if ( v29 == -1073741789 )
    {
      v17 = -1073741595;
    }
    else if ( v29 >= 0 )
    {
      if ( (_DWORD)v54 == 3 && (_DWORD)v59 == 48 )
      {
LABEL_50:
        v30 = *((unsigned int *)v23 + 8);
        v31 = &PoolWithTag[*((unsigned int *)v23 + 7)];
        if ( v24 )
          memmove(v31, Src, v30);
        else
          memset(v31, 0, v30);
        v32 = Handle;
        if ( a3 )
          v32 = a3;
        v33 = RegRtlSetValue(v32, L"Version", 3u, PoolWithTag, 0x30u);
LABEL_100:
        v17 = v33;
        goto LABEL_101;
      }
      v17 = -1073741823;
    }
LABEL_101:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_105;
  }
  v34 = L"Microsoft Windows";
  v35 = a7;
  v36 = Src;
  if ( *(_DWORD *)(a4 + 16) == 7 )
  {
    v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
      v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    v38 = 0LL;
    if ( !v37 && v24 == 18 && a7 > 2 )
    {
      if ( Src )
      {
        if ( !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
        {
          v39 = wcsicmp((const wchar_t *)Src, L"Microsoft Windows");
          v38 = 0LL;
          if ( !v39 )
          {
            v40 = Handle;
            if ( a3 )
              v40 = a3;
            if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v40, (wchar_t *)&v53) >= 0 && v53 == 218103811 )
            {
              v41 = Handle;
              if ( a3 )
                v41 = a3;
              v17 = DrvDbSetRegValueMappedProperty(v38, v41, v23, 0LL, 0LL, 0);
              if ( v17 != -1073741275 )
                goto LABEL_105;
              goto LABEL_73;
            }
LABEL_97:
            v48 = Handle;
            if ( a3 )
              v48 = a3;
            v33 = DrvDbSetRegValueMappedProperty(v38, v48, v23, v24, v36, v35);
            PoolWithTag = v56;
            v12 = v54;
            goto LABEL_100;
          }
        }
      }
    }
  }
  else
  {
    v38 = 0LL;
  }
  if ( *(_DWORD *)(a4 + 16) != 8 )
    goto LABEL_97;
  v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v42 )
    goto LABEL_97;
  if ( v24 == 7 )
  {
    if ( v35 != 4 || !v36 )
      goto LABEL_97;
    if ( *v36 == 218103811 )
    {
      v43 = Handle;
      if ( a3 )
        v43 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName(0LL, (__int64)v34, v43, 0LL, 0, (unsigned int *)&v59) == -1073741789
        && (_DWORD)v59 == 18 )
      {
        v54 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
        if ( !v54 )
        {
LABEL_40:
          v17 = -1073741801;
          goto LABEL_105;
        }
        v46 = Handle;
        if ( a3 )
          v46 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v45, v44, v46, v54, 18, (unsigned int *)&v59) >= 0
          && (_DWORD)v59
          && !v54[(unsigned int)(v59 - 1)]
          && !wcsicmp(v54, L"Microsoft Windows") )
        {
          v47 = (int)Handle;
          if ( a3 )
            v47 = (int)a3;
          DrvDbSetDriverPackageMappedProperty((int)a1, a2, v47, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_97;
    }
  }
  else if ( v24 )
  {
    goto LABEL_97;
  }
  v49 = Handle;
  if ( a3 )
    v49 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v49, (wchar_t *)&v53) < 0 || v53 != 218103811 )
    goto LABEL_97;
  v50 = Handle;
  if ( a3 )
    v50 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName(v38, 0LL, v50, 0LL, 0, (unsigned int *)&v59) != -1073741275 )
    goto LABEL_97;
  v51 = Handle;
  if ( a3 )
    v51 = a3;
  v17 = DrvDbSetRegValueMappedProperty(v38, v51, v23, v24, v36, v35);
  if ( v17 < 0 )
    goto LABEL_105;
  v52 = (int)Handle;
  if ( a3 )
    v52 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    (int)a1,
    a2,
    v52,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_73:
  v17 = 0;
LABEL_105:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v17;
}
