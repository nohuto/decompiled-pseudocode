/*
 * XREFs of _CmGetInstallerClassCompoundFiltersWorker @ 0x14093C01C
 * Callers:
 *     _CmGetInstallerClassCompoundFilters @ 0x140702C98 (_CmGetInstallerClassCompoundFilters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406FB170 (_PnpCtxRegQueryInfoKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140702E28 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpSetObjectProperty @ 0x1407083D4 (_PnpSetObjectProperty.c)
 *     _CmGetDeclarativeFilterList @ 0x14093ADA4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14093CE84 (_CmMergeFilterLists.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFiltersWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  wchar_t *v10; // rdi
  __int64 v14; // rax
  void *v15; // rcx
  void *v16; // r12
  wchar_t *PoolWithTag; // rax
  int ObjectProperty; // ebx
  int v19; // r12d
  int InstallerClassMappedPropertyFromRegProp; // eax
  int v21; // eax
  __int64 v22; // rbx
  PVOID v23; // rax
  __int64 v25; // [rsp+30h] [rbp-71h]
  unsigned int NumberOfBytes; // [rsp+68h] [rbp-39h] BYREF
  int NumberOfBytes_4; // [rsp+6Ch] [rbp-35h] BYREF
  int v28[2]; // [rsp+70h] [rbp-31h] BYREF
  PVOID P; // [rsp+78h] [rbp-29h]
  PVOID v30; // [rsp+80h] [rbp-21h]
  __int64 v31; // [rsp+88h] [rbp-19h]
  PVOID v32; // [rsp+90h] [rbp-11h]
  __int64 v33; // [rsp+98h] [rbp-9h]

  v28[0] = 0;
  v10 = 0LL;
  P = 0LL;
  NumberOfBytes = 0;
  v32 = 0LL;
  v30 = 0LL;
  if ( (int)PnpCtxRegQueryInfoKey(a1, a4, (__int64)v28, 0LL, 0LL, 0LL, 0LL) < 0 || !v28[0] )
    goto LABEL_44;
  if ( *(_DWORD *)(a5 + 16) != 20 )
    goto LABEL_8;
  v14 = *(_QWORD *)a5 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v14 = *(_QWORD *)(a5 + 8) - 0x4B88D2ECD9DBB9A9LL;
  if ( v14 )
  {
LABEL_8:
    v33 = (__int64)&DEVPKEY_DeviceClass_LowerFilterLevels;
    v15 = &DEVPKEY_DeviceClass_LowerFilterCache;
    *(_QWORD *)v28 = L"*Lower";
    v16 = &DEVPKEY_DeviceClass_LowerFilterDefaultLevel;
  }
  else
  {
    v33 = (__int64)&DEVPKEY_DeviceClass_UpperFilterLevels;
    v15 = &DEVPKEY_DeviceClass_UpperFilterCache;
    *(_QWORD *)v28 = L"*Upper";
    v16 = &DEVPKEY_DeviceClass_UpperFilterDefaultLevel;
  }
  v31 = (__int64)v15;
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       2LL,
                       a3,
                       0LL,
                       (__int64)v15,
                       (__int64)&NumberOfBytes_4,
                       0LL,
                       0,
                       (__int64)&NumberOfBytes,
                       0) == -1073741789
    && NumberOfBytes_4 == 8210 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       2LL,
                       a3,
                       0LL,
                       v31,
                       (__int64)&NumberOfBytes_4,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_47;
    v19 = a2;
    goto LABEL_15;
  }
  v21 = PnpGetObjectProperty(
          a1,
          a2,
          2LL,
          a3,
          0LL,
          (__int64)v16,
          (__int64)&NumberOfBytes_4,
          0LL,
          0,
          (__int64)&NumberOfBytes,
          0);
  ObjectProperty = v21;
  if ( v21 == -1073741789 && NumberOfBytes_4 == 18 )
  {
    P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
    if ( !P )
      return (unsigned int)-1073741801;
    v25 = (__int64)v16;
    v19 = a2;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       2LL,
                       a3,
                       0LL,
                       v25,
                       (__int64)&NumberOfBytes_4,
                       (__int64)P,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_45;
    v22 = v33;
    if ( (unsigned int)PnpGetObjectProperty(
                         a1,
                         a2,
                         2LL,
                         a3,
                         0LL,
                         v33,
                         (__int64)&NumberOfBytes_4,
                         0LL,
                         0,
                         (__int64)&NumberOfBytes,
                         0) == -1073741789 )
    {
      v23 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
      v30 = v23;
      if ( !v23 )
        goto LABEL_23;
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         2LL,
                         a3,
                         0LL,
                         v22,
                         (__int64)&NumberOfBytes_4,
                         (__int64)v23,
                         NumberOfBytes,
                         (__int64)&NumberOfBytes,
                         0);
      if ( ObjectProperty < 0 )
        goto LABEL_45;
      ObjectProperty = CmGetDeclarativeFilterList(
                         a1,
                         (__int64)a4,
                         (wchar_t *)v30,
                         (wchar_t *)P,
                         *(__int64 *)v28,
                         0LL,
                         0,
                         &NumberOfBytes);
      if ( !ObjectProperty )
        ObjectProperty = -1073741762;
      if ( ObjectProperty != -1073741789 )
        goto LABEL_45;
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
      if ( !v10 )
        goto LABEL_23;
      ObjectProperty = CmGetDeclarativeFilterList(
                         a1,
                         (__int64)a4,
                         (wchar_t *)v30,
                         (wchar_t *)P,
                         *(__int64 *)v28,
                         v10,
                         NumberOfBytes,
                         &NumberOfBytes);
      if ( ObjectProperty < 0 )
        goto LABEL_45;
      PnpSetObjectProperty(a1, a2, 2u, a3, 0LL, v31, 8210, (__int64)v10, NumberOfBytes, 0);
LABEL_15:
      InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                  a1,
                                                  v19,
                                                  a3,
                                                  a6,
                                                  &NumberOfBytes_4,
                                                  0LL,
                                                  0,
                                                  &NumberOfBytes);
      if ( InstallerClassMappedPropertyFromRegProp == -1073741275 )
      {
        NumberOfBytes = 0;
        goto LABEL_37;
      }
      if ( InstallerClassMappedPropertyFromRegProp != -1073741789 )
      {
        ObjectProperty = InstallerClassMappedPropertyFromRegProp;
        goto LABEL_45;
      }
      if ( !NumberOfBytes || !a9 )
      {
LABEL_37:
        ObjectProperty = CmMergeFilterLists(v10, (wchar_t *)v32, a9, a10);
        if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
          *a7 = 8210;
        goto LABEL_45;
      }
      v32 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
      if ( v32 )
      {
        ObjectProperty = CmGetInstallerClassMappedPropertyFromRegProp(
                           a1,
                           v19,
                           a3,
                           a6,
                           &NumberOfBytes_4,
                           (wchar_t *)v32,
                           NumberOfBytes,
                           &NumberOfBytes);
        if ( ObjectProperty >= 0 )
          goto LABEL_37;
LABEL_45:
        if ( P )
          ExFreePoolWithTag(P, 0);
LABEL_47:
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
        if ( v30 )
          ExFreePoolWithTag(v30, 0);
        return (unsigned int)ObjectProperty;
      }
LABEL_23:
      ObjectProperty = -1073741801;
      goto LABEL_45;
    }
LABEL_44:
    ObjectProperty = -1073741275;
    goto LABEL_45;
  }
  if ( NumberOfBytes_4 != 8210 || v21 == -1073739509 || !v21 )
    return (unsigned int)-1073741275;
  return (unsigned int)ObjectProperty;
}
