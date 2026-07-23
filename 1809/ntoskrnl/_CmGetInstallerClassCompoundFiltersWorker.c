/*
 * XREFs of _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528
 * Callers:
 *     _CmGetInstallerClassCompoundFilters @ 0x1406F21FC (_CmGetInstallerClassCompoundFilters.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     _CmGetInstallerClassCompoundFilterList @ 0x1408FF2F8 (_CmGetInstallerClassCompoundFilterList.c)
 *     _CmMergeInstallerClassFilterLists @ 0x1409002D0 (_CmMergeInstallerClassFilterLists.c)
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
  __int64 v11; // r12
  PVOID PoolWithTag; // rdi
  PVOID v14; // rsi
  __int64 v15; // rax
  const WCHAR *v16; // rdi
  const WCHAR *v17; // r14
  const WCHAR *v18; // r13
  int InstallerClassCompoundFilterList; // ebx
  int Value; // eax
  __int64 v21; // rcx
  unsigned int v22; // r14d
  int v23; // r13d
  int InstallerClassMappedPropertyFromRegProp; // eax
  unsigned int v25; // ebx
  PVOID v26; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  SIZE_T v29; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v30; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  _DWORD *v39; // [rsp+98h] [rbp-68h]
  wchar_t v40[264]; // [rsp+A0h] [rbp-60h] BYREF

  v39 = a7;
  v11 = a3;
  v38 = a8;
  v37 = a10;
  PoolWithTag = 0LL;
  v34 = a3;
  v14 = 0LL;
  v36 = a2;
  KeyHandle = a4;
  v33 = a1;
  Handle = 0LL;
  LODWORD(v30) = 0;
  NumberOfBytes = 0LL;
  P = 0LL;
  LODWORD(v29) = 0;
  if ( (int)PnpCtxRegQueryInfoKey(a1, (int)a4, (int)&v30, 0, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v30 )
  {
    InstallerClassCompoundFilterList = -1073741275;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(a5 + 16) != 20 )
    goto LABEL_8;
  v15 = *(_QWORD *)a5 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v15 = *(_QWORD *)(a5 + 8) - 0x4B88D2ECD9DBB9A9LL;
  if ( v15 )
  {
LABEL_8:
    v30 = L"*Lower";
    v16 = L"LowerFilterLevels";
    v17 = L"LowerFilterDefaultLevel";
    v18 = L"LowerFiltersCache";
  }
  else
  {
    v30 = L"*Upper";
    v16 = L"UpperFilterLevels";
    v11 = v34;
    v17 = L"UpperFilterDefaultLevel";
    v18 = L"UpperFiltersCache";
  }
  LODWORD(NumberOfBytes) = 0;
  if ( (unsigned int)RegRtlQueryValue(a4, v18, (_DWORD *)&NumberOfBytes + 1, 0LL, (unsigned int *)&NumberOfBytes) == -1073741789
    && HIDWORD(NumberOfBytes) == 7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    if ( !PoolWithTag )
    {
LABEL_12:
      InstallerClassCompoundFilterList = -1073741801;
      goto LABEL_46;
    }
    Value = RegRtlQueryValue(a4, v18, (_DWORD *)&NumberOfBytes + 1, PoolWithTag, (unsigned int *)&NumberOfBytes);
    InstallerClassCompoundFilterList = Value;
LABEL_27:
    if ( Value >= 0 )
    {
      v23 = v33;
      InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                  v33,
                                                  v36,
                                                  v34,
                                                  a6,
                                                  &v29,
                                                  0LL,
                                                  0,
                                                  (unsigned int *)&NumberOfBytes);
      InstallerClassCompoundFilterList = InstallerClassMappedPropertyFromRegProp;
      if ( InstallerClassMappedPropertyFromRegProp == -1073741275 )
      {
        LODWORD(NumberOfBytes) = 0;
        goto LABEL_36;
      }
      if ( InstallerClassMappedPropertyFromRegProp == -1073741789 )
      {
        v25 = NumberOfBytes;
        if ( !(_DWORD)NumberOfBytes || !a9 )
        {
LABEL_36:
          InstallerClassCompoundFilterList = CmMergeInstallerClassFilterLists(
                                               (wchar_t *)PoolWithTag,
                                               (wchar_t *)P,
                                               a9,
                                               v37);
          if ( (int)(InstallerClassCompoundFilterList + 0x80000000) < 0
            || InstallerClassCompoundFilterList == -1073741789 )
          {
            *v39 = 8210;
          }
          goto LABEL_40;
        }
        v26 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
        P = v26;
        if ( v26 )
        {
          InstallerClassCompoundFilterList = CmGetInstallerClassMappedPropertyFromRegProp(
                                               v23,
                                               v36,
                                               v34,
                                               a6,
                                               &v29,
                                               (wchar_t *)v26,
                                               v25,
                                               (unsigned int *)&NumberOfBytes);
          if ( InstallerClassCompoundFilterList >= 0 )
            goto LABEL_36;
        }
        else
        {
          InstallerClassCompoundFilterList = -1073741801;
        }
      }
    }
LABEL_40:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_42;
  }
  if ( a1 )
    v21 = *(_QWORD *)(a1 + 224);
  else
    v21 = 0LL;
  InstallerClassCompoundFilterList = SysCtxRegOpenKey(
                                       v21,
                                       v11,
                                       (__int64)L"Configuration",
                                       0,
                                       0x80000000,
                                       (__int64)&Handle);
  if ( InstallerClassCompoundFilterList < 0 )
    goto LABEL_46;
  LODWORD(NumberOfBytes) = 260;
  InstallerClassCompoundFilterList = RegRtlQueryValue(
                                       Handle,
                                       v17,
                                       (_DWORD *)&NumberOfBytes + 1,
                                       v40,
                                       (unsigned int *)&NumberOfBytes);
  if ( InstallerClassCompoundFilterList < 0 )
    goto LABEL_46;
  LODWORD(NumberOfBytes) = 0;
  InstallerClassCompoundFilterList = RegRtlQueryValue(Handle, v16, 0LL, 0LL, (unsigned int *)&NumberOfBytes);
  if ( InstallerClassCompoundFilterList != -1073741789 )
    goto LABEL_46;
  v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
  if ( !v14 )
    goto LABEL_12;
  InstallerClassCompoundFilterList = RegRtlQueryValue(
                                       Handle,
                                       v16,
                                       (_DWORD *)&NumberOfBytes + 1,
                                       v14,
                                       (unsigned int *)&NumberOfBytes);
  if ( InstallerClassCompoundFilterList >= 0 )
  {
    InstallerClassCompoundFilterList = CmGetInstallerClassCompoundFilterList(
                                         v33,
                                         (__int64)KeyHandle,
                                         (const wchar_t *)v14,
                                         v40,
                                         (__int64)v30,
                                         0LL,
                                         0,
                                         &v29);
    if ( InstallerClassCompoundFilterList == -1073741789 )
    {
      v22 = v29;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v29, 0x52504E50u);
      if ( PoolWithTag )
      {
        InstallerClassCompoundFilterList = CmGetInstallerClassCompoundFilterList(
                                             v33,
                                             (__int64)KeyHandle,
                                             (const wchar_t *)v14,
                                             v40,
                                             (__int64)v30,
                                             (wchar_t *)PoolWithTag,
                                             v22,
                                             &NumberOfBytes);
        if ( InstallerClassCompoundFilterList < 0 )
          goto LABEL_40;
        Value = RegRtlSetValue(KeyHandle, v18, 7u, PoolWithTag, v22);
        goto LABEL_27;
      }
      InstallerClassCompoundFilterList = -1073741801;
    }
  }
LABEL_42:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_46:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InstallerClassCompoundFilterList;
}
