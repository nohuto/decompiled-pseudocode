/*
 * XREFs of NtOpenDirectoryObject @ 0x1406C57E0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenDirectoryObject(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // cl
  __int64 v6; // r8
  NTSTATUS result; // eax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)FileHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)FileHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)ObpDirectoryObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v8);
  *FileHandle = v8;
  return result;
}
