/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1405FE0E0
 * Callers:
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14064D920 (NtEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     NtLockRegistryKey @ 0x140739FB0 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140823B40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823E30 (NtCompressKey.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140824BF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1408254F0 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A11A10 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
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
