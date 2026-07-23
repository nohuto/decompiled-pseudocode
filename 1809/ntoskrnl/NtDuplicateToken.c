/*
 * XREFs of NtDuplicateToken @ 0x14064B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1400CCF54 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405BCD54 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x14064B61C (SeCaptureSecurityQos.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 v9; // di
  PHANDLE v10; // r12
  TOKEN_TYPE v11; // r13d
  NTSTATUS result; // eax
  ACCESS_MASK GrantedAccess; // r15d
  PVOID v14; // rsi
  signed int v15; // ecx
  NTSTATUS inserted; // ebx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PrimaryToken; // r15
  int v21; // eax
  char v22; // [rsp+40h] [rbp-A8h] BYREF
  char v23; // [rsp+41h] [rbp-A7h] BYREF
  _BYTE v24[6]; // [rsp+42h] [rbp-A6h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-98h] BYREF
  PVOID v27; // [rsp+58h] [rbp-90h] BYREF
  __int64 v28; // [rsp+60h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v30[4]; // [rsp+88h] [rbp-60h] BYREF
  signed int v31; // [rsp+8Ch] [rbp-5Ch]
  struct _SECURITY_SUBJECT_CONTEXT v32; // [rsp+98h] [rbp-50h] BYREF

  v22 = 0;
  v23 = 0;
  v28 = 0LL;
  memset(&v32, 0, sizeof(v32));
  v9 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
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
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v22, v30);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, &v23);
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
          v32.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v32) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v21 = SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken, v24);
            if ( Token == PrimaryToken || v21 >= 0 && v24[0] )
              GrantedAccess = DesiredAccess;
            else
              GrantedAccess = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
          else
          {
            GrantedAccess = DesiredAccess;
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
          GrantedAccess = HandleInformation.GrantedAccess;
        }
        v14 = Token;
        if ( v22 )
          v15 = v31;
        else
          v15 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v15 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v27 = 0LL;
          inserted = SepDuplicateToken((__int64)Token, (int)ObjectAttributes, EffectiveOnly, v11, v15, v9, 0, &v27);
          if ( inserted >= 0 )
          {
            v17 = v27;
            inserted = ObInsertObjectEx(v27, 0LL, GrantedAccess, 1, 0, 0LL, (unsigned __int64 *)&v28);
            if ( inserted >= 0 )
            {
              if ( !v23 )
                SepFinalizeTokenAcls(v17);
              ObfDereferenceObject(v17);
            }
          }
          ObfDereferenceObject(v14);
          if ( inserted >= 0 )
            *v10 = (HANDLE)v28;
          return inserted;
        }
      }
    }
  }
  return result;
}
