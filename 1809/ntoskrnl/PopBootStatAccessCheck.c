/*
 * XREFs of PopBootStatAccessCheck @ 0x140754560
 * Callers:
 *     PopBootStatSet @ 0x140719764 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x140754280 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408784B0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140878718 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405CA3E0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  NTSTATUS v5; // edi
  PSECURITY_DESCRIPTOR v6; // r14
  BOOLEAN v7; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-11h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+7h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+17h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+1Fh] BYREF
  BOOLEAN MemoryAllocated; // [rsp+D0h] [rbp+7Fh] BYREF

  MemoryAllocated = 0;
  SecurityDescriptor = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  if ( v5 >= 0 )
  {
    AccessStatus = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &MemoryAllocated, 0);
    v5 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v6 = SecurityDescriptor;
      v7 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             a3,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v5 = AccessStatus;
      if ( v7 )
        v5 = 0;
      if ( v6 )
        ObReleaseObjectSecurity(v6, MemoryAllocated);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return (unsigned int)v5;
}
