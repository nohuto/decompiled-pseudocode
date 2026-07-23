/*
 * XREFs of NtOpenDirectoryObject @ 0x1405BA200
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenDirectoryObject(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // cl
  NTSTATUS result; // eax
  void *v7; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ObjectAttributes = (POBJECT_ATTRIBUTES)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)FileHandle < 0x7FFFFFFF0000LL )
      ObjectAttributes = (POBJECT_ATTRIBUTES)FileHandle;
    *(_QWORD *)&ObjectAttributes->Length = *(_QWORD *)&ObjectAttributes->Length;
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  result = ObOpenObjectByName(
             v3,
             (_DWORD)ObpDirectoryObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v7);
  *FileHandle = v7;
  return result;
}
