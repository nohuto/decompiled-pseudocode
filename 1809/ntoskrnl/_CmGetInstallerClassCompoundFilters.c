/*
 * XREFs of _CmGetInstallerClassCompoundFilters @ 0x1406F21FC
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406F1F90 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x14059FB8C (_CmOpenInstallerClassRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilters(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // rax
  const DEVPROPKEY *v13; // r14
  int v14; // ebx
  HANDLE v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r12
  int v19; // r13d
  int InstallerClassMappedPropertyFromRegProp; // eax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v23; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 20 )
    goto LABEL_19;
  v12 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v12 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
  v13 = &DEVPKEY_DeviceClass_UpperFilters;
  if ( v12 )
LABEL_19:
    v13 = &DEVPKEY_DeviceClass_LowerFilters;
  if ( a3 )
  {
    v15 = a3;
    Handle = a3;
  }
  else
  {
    v14 = CmOpenInstallerClassRegKey(a1, a2, 0LL, a4, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v14 < 0 )
      goto LABEL_13;
    v15 = Handle;
  }
  if ( a1 )
    v16 = *(_QWORD *)(a1 + 224);
  else
    v16 = 0LL;
  v17 = SysCtxRegOpenKey(v16, (__int64)v15, (__int64)L"Filters", 0, 0x2001Fu, (__int64)&v23);
  v18 = a8;
  v14 = v17;
  v19 = a7;
  if ( v17 < 0
    || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassCompoundFiltersWorker(
                                                    a1,
                                                    a2,
                                                    Handle,
                                                    v23,
                                                    a4,
                                                    v13,
                                                    a5,
                                                    a6,
                                                    a7,
                                                    a8),
        InstallerClassMappedPropertyFromRegProp == -1073741772)
    || InstallerClassMappedPropertyFromRegProp == -1073741444
    || InstallerClassMappedPropertyFromRegProp == -1073741275 )
  {
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                (_DWORD)Handle,
                                                (_DWORD)v13,
                                                a5,
                                                a6,
                                                v19,
                                                v18);
  }
  else if ( InstallerClassMappedPropertyFromRegProp >= 0 )
  {
    goto LABEL_13;
  }
  v14 = InstallerClassMappedPropertyFromRegProp;
LABEL_13:
  if ( Handle && !a3 )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v14;
}
