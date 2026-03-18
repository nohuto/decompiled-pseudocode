/*
 * XREFs of PopBootStatAccessCheck @ 0x14077944C
 * Callers:
 *     PopBootStatSet @ 0x140738B08 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x14077916C (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408B4550 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408B47B8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReleaseObjectSecurity @ 0x1405C6D90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7180 (ObpGetObjectSecurity.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
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
