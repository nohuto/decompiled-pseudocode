/*
 * XREFs of _CmGetDeviceCompoundFiltersWorker @ 0x14093B1B8
 * Callers:
 *     _CmGetDeviceCompoundFilters @ 0x1407092F0 (_CmGetDeviceCompoundFilters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1405C079C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406FB170 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpSetObjectProperty @ 0x1407083D4 (_PnpSetObjectProperty.c)
 *     _CmGetDeclarativeFilterList @ 0x14093ADA4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14093CE84 (_CmMergeFilterLists.c)
 */

__int64 __fastcall CmGetDeviceCompoundFiltersWorker(
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
  const wchar_t *v13; // r15
  wchar_t *v14; // rsi
  PVOID v15; // rdi
  __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rax
  const __int64 *v19; // r12
  PVOID PoolWithTag; // rax
  int ObjectProperty; // ebx
  __int64 v22; // r12
  int DeviceMappedPropertyFromRegProp; // eax
  int v24; // eax
  PVOID v25; // rax
  __int64 v27; // [rsp+30h] [rbp-61h]
  unsigned int NumberOfBytes; // [rsp+68h] [rbp-29h] BYREF
  int NumberOfBytes_4; // [rsp+6Ch] [rbp-25h] BYREF
  __int64 v30; // [rsp+70h] [rbp-21h] BYREF
  PVOID v31; // [rsp+78h] [rbp-19h]
  __int64 v32; // [rsp+80h] [rbp-11h]
  PVOID P; // [rsp+88h] [rbp-9h]

  LODWORD(v30) = 0;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v31 = 0LL;
  v15 = 0LL;
  NumberOfBytes = 0;
  if ( (int)PnpCtxRegQueryInfoKey(0LL, a4, (__int64)&v30, 0LL, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v30 )
    goto LABEL_46;
  if ( *(_DWORD *)(a5 + 16) != 22 )
    goto LABEL_8;
  v16 = *(_QWORD *)a5 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_CompoundUpperFilters )
    v16 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
  if ( v16 )
  {
LABEL_8:
    v17 = &DEVPKEY_Device_LowerFilterCache;
    v18 = &DEVPKEY_Device_LowerFilterLevels;
    v19 = (const __int64 *)&DEVPKEY_Device_LowerFilterDefaultLevel;
    v13 = L"*Lower";
  }
  else
  {
    v17 = &DEVPKEY_Device_UpperFilterCache;
    v18 = &DEVPKEY_Device_UpperFilterLevels;
    v19 = &DEVPKEY_Device_UpperFilterDefaultLevel;
    v13 = (const wchar_t *)L"*Upper";
  }
  v30 = (__int64)v18;
  v32 = (__int64)v17;
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       1LL,
                       a3,
                       0LL,
                       (__int64)v17,
                       (__int64)&NumberOfBytes_4,
                       0LL,
                       0,
                       (__int64)&NumberOfBytes,
                       0) == -1073741789
    && NumberOfBytes_4 == 8210 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1LL,
                       a3,
                       0LL,
                       v32,
                       (__int64)&NumberOfBytes_4,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_50;
    v22 = a3;
LABEL_15:
    DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                        a1,
                                        a2,
                                        v22,
                                        a6,
                                        &NumberOfBytes_4,
                                        0LL,
                                        0,
                                        &NumberOfBytes,
                                        0);
    ObjectProperty = DeviceMappedPropertyFromRegProp;
    if ( DeviceMappedPropertyFromRegProp == -1073741275 )
    {
      NumberOfBytes = 0;
      goto LABEL_39;
    }
    if ( DeviceMappedPropertyFromRegProp != -1073741789 )
    {
LABEL_47:
      if ( v14 && v14 != v13 )
        ExFreePoolWithTag(v14, 0);
LABEL_50:
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      return (unsigned int)ObjectProperty;
    }
    if ( !NumberOfBytes || !a9 )
    {
LABEL_39:
      ObjectProperty = CmMergeFilterLists((wchar_t *)v15, (wchar_t *)P, a9, a10);
      if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
        *a7 = 8210;
      goto LABEL_47;
    }
    P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
    if ( P )
    {
      ObjectProperty = CmGetDeviceMappedPropertyFromRegProp(
                         a1,
                         a2,
                         v22,
                         a6,
                         &NumberOfBytes_4,
                         (GUID *)P,
                         NumberOfBytes,
                         &NumberOfBytes,
                         0);
      if ( ObjectProperty >= 0 )
        goto LABEL_39;
      goto LABEL_47;
    }
LABEL_23:
    ObjectProperty = -1073741801;
    goto LABEL_47;
  }
  v24 = PnpGetObjectProperty(
          a1,
          a2,
          1LL,
          a3,
          0LL,
          (__int64)v19,
          (__int64)&NumberOfBytes_4,
          0LL,
          0,
          (__int64)&NumberOfBytes,
          0);
  ObjectProperty = v24;
  if ( v24 == -1073741789 )
  {
    if ( NumberOfBytes_4 == 18 )
    {
      v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
      if ( !v14 )
        return (unsigned int)-1073741801;
      v27 = (__int64)v19;
      v22 = a3;
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         1LL,
                         a3,
                         0LL,
                         v27,
                         (__int64)&NumberOfBytes_4,
                         (__int64)v14,
                         NumberOfBytes,
                         (__int64)&NumberOfBytes,
                         0);
      if ( ObjectProperty < 0 )
        goto LABEL_47;
      if ( (unsigned int)PnpGetObjectProperty(
                           a1,
                           a2,
                           1LL,
                           a3,
                           0LL,
                           v30,
                           (__int64)&NumberOfBytes_4,
                           0LL,
                           0,
                           (__int64)&NumberOfBytes,
                           0) == -1073741789 )
      {
        v25 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
        v31 = v25;
        if ( !v25 )
          goto LABEL_23;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           a2,
                           1LL,
                           a3,
                           0LL,
                           v30,
                           (__int64)&NumberOfBytes_4,
                           (__int64)v25,
                           NumberOfBytes,
                           (__int64)&NumberOfBytes,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_47;
        goto LABEL_28;
      }
LABEL_46:
      ObjectProperty = -1073741275;
      goto LABEL_47;
    }
  }
  else if ( v24 == -1073741275 )
  {
    v22 = a3;
    v14 = (wchar_t *)v13;
LABEL_28:
    ObjectProperty = CmGetDeclarativeFilterList(
                       a1,
                       (__int64)a4,
                       (wchar_t *)v31,
                       v14,
                       (__int64)v13,
                       0LL,
                       0,
                       &NumberOfBytes);
    if ( !ObjectProperty )
      ObjectProperty = -1073741762;
    if ( ObjectProperty != -1073741789 )
      goto LABEL_47;
    v15 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
    if ( !v15 )
      goto LABEL_23;
    ObjectProperty = CmGetDeclarativeFilterList(
                       a1,
                       (__int64)a4,
                       (wchar_t *)v31,
                       v14,
                       (__int64)v13,
                       (wchar_t *)v15,
                       NumberOfBytes,
                       &NumberOfBytes);
    if ( ObjectProperty < 0 )
      goto LABEL_47;
    PnpSetObjectProperty(a1, a2, 1u, v22, 0LL, v32, 8210, (__int64)v15, NumberOfBytes, 0);
    goto LABEL_15;
  }
  if ( NumberOfBytes_4 != 8210 || v24 == -1073739509 || !v24 )
    return (unsigned int)-1073741275;
  return (unsigned int)ObjectProperty;
}
