/*
 * XREFs of PopBootStatAccessCheck @ 0x14077CA2C
 * Callers:
 *     PopBootStatSet @ 0x14073AD68 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x14077C74C (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408B3E20 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408B4088 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReleaseObjectSecurity @ 0x1405C7290 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7680 (ObpGetObjectSecurity.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PopBootStatAccessCheck(HANDLE Handle, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  NTSTATUS v6; // edi
  ACCESS_MASK v7; // r9d
  PSECURITY_DESCRIPTOR v8; // r14
  BOOLEAN v9; // bl
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+7h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+17h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+1Fh] BYREF
  BOOLEAN MemoryAllocated; // [rsp+D0h] [rbp+7Fh] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  MemoryAllocated = 0;
  SecurityDescriptor = 0LL;
  v6 = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
  if ( v6 >= 0 )
  {
    AccessStatus = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &MemoryAllocated, 0);
    v6 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v7 = a3;
      v8 = SecurityDescriptor;
      v9 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             v7,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             a2,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v6 = AccessStatus;
      if ( v9 )
        v6 = 0;
      if ( v8 )
        ObReleaseObjectSecurity(v8, MemoryAllocated);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
