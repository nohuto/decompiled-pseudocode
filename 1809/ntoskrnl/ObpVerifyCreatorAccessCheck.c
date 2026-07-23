/*
 * XREFs of ObpVerifyCreatorAccessCheck @ 0x1406558C4
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140655520 (NtCreatePrivateNamespace.c)
 *     NtDeletePrivateNamespace @ 0x140707FF0 (NtDeletePrivateNamespace.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140655E84 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 */

__int64 __fastcall ObpVerifyCreatorAccessCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *PrimaryToken; // rbx
  PULONG v4; // rax
  int v5; // ebx
  int v6; // ecx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-59h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-51h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE Sid[80]; // [rsp+70h] [rbp-9h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  TokenInformation = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  memset(SubjectContext, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, SubjectContext);
  PrimaryToken = SubjectContext[0].PrimaryToken;
  if ( SubjectContext[0].ClientToken )
    PrimaryToken = SubjectContext[0].ClientToken;
  if ( PrimaryToken[48] == 2 && (int)PrimaryToken[49] < 2 )
    goto LABEL_14;
  SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
  if ( !(_DWORD)TokenInformation
    || (LODWORD(SubjectContext[1].PrimaryToken) = SeQueryInformationToken(
                                                    PrimaryToken,
                                                    TokenAppContainerSid,
                                                    &SubjectContext[1].ClientToken),
        SLODWORD(SubjectContext[1].PrimaryToken) >= 0) )
  {
    SeQueryInformationToken(PrimaryToken, TokenIntegrityLevel, (PVOID *)((char *)&TokenInformation + 4));
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v4 = RtlSubAuthoritySid(Sid, 0);
    *v4 = HIDWORD(TokenInformation);
    *(_QWORD *)&SubjectContext[1].ImpersonationLevel = Sid;
    SeLockSubjectContext(SubjectContext);
    v5 = RtlEnumerateBoundaryDescriptorEntries(a1, ObpVerifyAccessToBoundaryEntry, SubjectContext);
    SeUnlockSubjectContext(SubjectContext);
    v6 = (int)SubjectContext[1].PrimaryToken;
    if ( SLODWORD(SubjectContext[1].PrimaryToken) >= 0 )
    {
      if ( v5 < 0 )
        v6 = v5;
      LODWORD(SubjectContext[1].PrimaryToken) = v6;
      if ( v6 >= 0 && SubjectContext[1].ClientToken && (BYTE4(SubjectContext[1].PrimaryToken) & 1) == 0 )
LABEL_14:
        LODWORD(SubjectContext[1].PrimaryToken) = -1073741790;
    }
  }
  SeReleaseSubjectContext(SubjectContext);
  if ( SubjectContext[1].ClientToken )
    ExFreePoolWithTag(SubjectContext[1].ClientToken, 0);
  return LODWORD(SubjectContext[1].PrimaryToken);
}
