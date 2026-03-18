/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1405FFB10
 * Callers:
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     NtLockRegistryKey @ 0x14073C240 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140823240 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823530 (NtCompressKey.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1408242F0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140824670 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140824940 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140824BF0 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A121A8 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        _QWORD *a5,
        _DWORD *Object)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v6 = Object;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  if ( !Object )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, (PVOID *)&Object, v7);
  if ( v8 >= 0 )
  {
    if ( *Object == 1803104306 )
    {
      *a5 = Object;
      if ( v6 )
        *v6 = v10;
      return 0LL;
    }
    v8 = -1073741816;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v8;
}
