/*
 * XREFs of RtlNewSecurityObjectEx @ 0x18000EBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  int v9; // [rsp+28h] [rbp-30h]
  GUID *v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = ObjectType;
  LOBYTE(v9) = IsDirectoryObject;
  return sub_1800100C4(
           (int)ParentDescriptor,
           (int)CreatorDescriptor,
           (int)NewDescriptor,
           (unsigned __int64)&v10 & -(__int64)(ObjectType != 0LL),
           ObjectType != 0LL,
           v9,
           AutoInheritFlags,
           Token,
           (__int64)GenericMapping);
}
