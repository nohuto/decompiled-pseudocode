/*
 * XREFs of NtDuplicateToken @ 0x1405D7FA0
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14000A3AC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405D7F5C (SepAppendAdminAceToTokenAcl.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x1405D8424 (SeCaptureSecurityQos.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14061BD7C (SepNewTokenAsRestrictedAsProcessToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 v9; // bl
  PHANDLE v10; // r12
  TOKEN_TYPE v11; // r13d
  NTSTATUS result; // eax
  ACCESS_MASK GrantedAccess; // r15d
  _DWORD *v14; // rsi
  int v15; // ecx
  int inserted; // ebx
  PVOID v17; // rdi
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PrimaryToken; // r15
  int v21; // eax
  char v22; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v23[7]; // [rsp+41h] [rbp-A7h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-A0h] BYREF
  PVOID Token; // [rsp+50h] [rbp-98h] BYREF
  PVOID v26; // [rsp+58h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+68h] [rbp-80h] BYREF
  int v29; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v31; // [rsp+98h] [rbp-50h] BYREF

  v28 = 0LL;
  v29 = 0;
  v22 = 0;
  v23[0] = 0;
  Handle = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v31.ClientToken = 0LL;
  *(_QWORD *)&v31.ImpersonationLevel = 0LL;
  v31.ProcessAuditId = 0LL;
  v9 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  if ( v9 )
  {
    v11 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v10 = NewTokenHandle;
    v18 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
  }
  else
  {
    v10 = NewTokenHandle;
    v11 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v22, &v28);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, v23);
    if ( result >= 0 )
    {
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 v9,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContext(&SubjectContext);
          v31.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v31) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v14 = Token;
            v21 = SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            if ( v14 == PrimaryToken || v21 >= 0 && v23[1] )
              GrantedAccess = DesiredAccess;
            else
              GrantedAccess = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KeLeaveCriticalRegion();
          }
          else
          {
            GrantedAccess = DesiredAccess;
            v14 = Token;
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
          GrantedAccess = HandleInformation.GrantedAccess;
          v14 = Token;
        }
        if ( v22 )
          v15 = HIDWORD(v28);
        else
          v15 = v14[49];
        if ( v14[48] == 2 && (v11 == TokenImpersonation && v15 > v14[49] || v11 == TokenPrimary && (int)v14[49] < 2) )
        {
          ObfDereferenceObject(v14);
          return -1073741659;
        }
        else
        {
          v26 = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)v14,
                       (_DWORD)ObjectAttributes,
                       EffectiveOnly,
                       v11,
                       v15,
                       v9,
                       0,
                       (__int64)&v26);
          if ( inserted >= 0 )
          {
            v17 = v26;
            inserted = ObInsertObject(v26, 0LL, GrantedAccess, 1u, 0LL, &Handle);
            if ( inserted >= 0 )
            {
              if ( !v23[0] )
                SepAppendAdminAceToTokenAcl((__int64)v17);
              ObfDereferenceObject(v17);
            }
          }
          ObfDereferenceObject(v14);
          if ( inserted >= 0 )
            *v10 = Handle;
          return inserted;
        }
      }
    }
  }
  return result;
}
