/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1405CE4CC
 * Callers:
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     NtLockRegistryKey @ 0x14068F430 (NtLockRegistryKey.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407EA0B0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407EA3B0 (NtCompressKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EBB60 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CD4F0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _QWORD *v6; // rdi
  NTSTATUS v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v6 = a6;
  v11 = 0LL;
  v7 = ObReferenceObjectByHandle(
         a1,
         a2,
         (POBJECT_TYPE)CmKeyObjectType,
         a4,
         (PVOID *)&a6,
         (POBJECT_HANDLE_INFORMATION)((unsigned __int64)&v11 & -(__int64)(a6 != 0LL)));
  v8 = a6;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *a6 == 1803104306 )
    {
      *a5 = a6;
      v8 = 0LL;
      if ( v6 )
        *v6 = v11;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
