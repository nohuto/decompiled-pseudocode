/*
 * XREFs of ObCreateSiloRootDirectory @ 0x140944520
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsDereferenceSiloContext @ 0x14012DE80 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401C0BD0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401C1530 (ZwCreateDirectoryObjectEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlIntegerToUnicodeString @ 0x14063E630 (RtlIntegerToUnicodeString.c)
 *     PsIsJobParentImmutable @ 0x140696C30 (PsIsJobParentImmutable.c)
 *     ObpInitializeRootNamespace @ 0x14074F160 (ObpInitializeRootNamespace.c)
 *     PsInsertPermanentSiloContextEx @ 0x14077C438 (PsInsertPermanentSiloContextEx.c)
 *     PsCreateSiloContext @ 0x14077C6E0 (PsCreateSiloContext.c)
 *     PsGetSiloIdentifier @ 0x14078A870 (PsGetSiloIdentifier.c)
 *     PsGetParentSilo @ 0x1408C4AD0 (PsGetParentSilo.c)
 *     PsInsertSiloContext @ 0x1408C4B20 (PsInsertSiloContext.c)
 *     ObpGetSilosRootDirectory @ 0x1409449DC (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  void *v4; // rdi
  PVOID v5; // r15
  __int64 v6; // rcx
  __int64 ParentSilo; // rbx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // r12
  ULONG SiloIdentifier; // eax
  int SilosRootDirectory; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  PVOID Object; // [rsp+98h] [rbp+Fh] BYREF
  char v23; // [rsp+A0h] [rbp+17h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = 0LL;
  v17 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v16 = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 || !PsIsJobParentImmutable(a1) )
    return 3221225485LL;
  ParentSilo = PsGetParentSilo(v6);
  if ( ParentSilo != PsGetHostSilo() )
    return 3221227289LL;
  v9 = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
  v10 = PsAttachSiloToCurrentThread(v9);
  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = (wchar_t *)&v23;
  SiloIdentifier = PsGetSiloIdentifier(a1);
  SilosRootDirectory = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v18);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (a2 & 1) == 0
        || (ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName,
            ObjectAttributes.Length = 48,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            SilosRootDirectory = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            SilosRootDirectory >= 0) )
      {
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 592;
        SilosRootDirectory = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
        if ( SilosRootDirectory >= 0 )
        {
          v13 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v5 = Object;
          SilosRootDirectory = v13;
          if ( v13 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(a1, 8, 1, (__int64)ObpDirectoryTeardownCallback, &v16);
            if ( SilosRootDirectory < 0 )
            {
              v4 = v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v5, 0x7254624Fu);
              v4 = v16;
              v14 = (__int64)v16;
              *v16 = v5;
              SilosRootDirectory = PsInsertSiloContext(a1, PsObjectDirectoryTeardownSlot, v14);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       PsObjectDirectorySiloContextSlot,
                                       (__int64)v5,
                                       1);
                if ( SilosRootDirectory >= 0 && (a2 & 2) != 0 )
                {
                  if ( (a2 & 4) == 0
                    || (ObjectAttributes.RootDirectory = 0LL,
                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDosDevicesShortName,
                        ObjectAttributes.Length = 48,
                        ObjectAttributes.Attributes = 512,
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                        SilosRootDirectory = ZwOpenDirectoryObject(&v17, 3u, &ObjectAttributes),
                        SilosRootDirectory >= 0) )
                  {
                    SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, (__int64)v17);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v4 )
    PsDereferenceSiloContext(v4);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)SilosRootDirectory;
}
