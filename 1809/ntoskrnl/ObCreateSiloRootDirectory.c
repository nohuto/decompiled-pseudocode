/*
 * XREFs of ObCreateSiloRootDirectory @ 0x1409071B0
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401B8DF0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401B9730 (ZwCreateDirectoryObjectEx.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PsIsJobParentImmutable @ 0x1406074A4 (PsIsJobParentImmutable.c)
 *     ObpInitializeRootNamespace @ 0x14072CE5C (ObpInitializeRootNamespace.c)
 *     PsInsertPermanentSiloContextEx @ 0x140731BF8 (PsInsertPermanentSiloContextEx.c)
 *     PsCreateSiloContext @ 0x140731E90 (PsCreateSiloContext.c)
 *     PsGetParentSilo @ 0x140887970 (PsGetParentSilo.c)
 *     PsInsertSiloContext @ 0x1408879C0 (PsInsertSiloContext.c)
 *     ObpGetSilosRootDirectory @ 0x14090764C (ObpGetSilosRootDirectory.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  PVOID v2; // r15
  void *v3; // rsi
  char v4; // r14
  __int64 v6; // rcx
  __int64 ParentSilo; // rbx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // r12
  ULONG v11; // ecx
  int SilosRootDirectory; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-1h] BYREF
  PVOID Object; // [rsp+98h] [rbp+Fh] BYREF
  char v23; // [rsp+A0h] [rbp+17h] BYREF

  v17 = 0LL;
  v2 = 0LL;
  DirectoryHandle = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v4 = a2;
  Handle = 0LL;
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
  if ( a1 )
    v11 = *(_DWORD *)(a1 + 1220);
  else
    v11 = 0;
  SilosRootDirectory = RtlIntegerToUnicodeString(v11, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v18);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (v4 & 1) == 0
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
          v2 = Object;
          SilosRootDirectory = v13;
          if ( v13 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(a1, 8, 1, (__int64)ObpDirectoryTeardownCallback, &v16);
            if ( SilosRootDirectory < 0 )
            {
              v3 = v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v2, 0x7254624Fu);
              v3 = v16;
              v14 = (__int64)v16;
              *v16 = v2;
              SilosRootDirectory = PsInsertSiloContext(a1, PsObjectDirectoryTeardownSlot, v14);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       PsObjectDirectorySiloContextSlot,
                                       (__int64)v2,
                                       1);
                if ( SilosRootDirectory >= 0 && (v4 & 2) != 0 )
                {
                  if ( (v4 & 4) == 0
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
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    PsDereferenceSiloContext(v3);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)SilosRootDirectory;
}
