/*
 * XREFs of RtlIsSandboxedToken @ 0x14064A330
 * Callers:
 *     IopCheckInitiatorHint @ 0x1400A39EC (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BBEB0 (ObpParseSymbolicLinkEx.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtDuplicateToken @ 0x14064A010 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     ObpCreateDirectoryObject @ 0x1406ADCDC (ObpCreateDirectoryObject.c)
 *     CmpCheckCreateAccess @ 0x1406B5654 (CmpCheckCreateAccess.c)
 *     ObCreateSymbolicLink @ 0x1406B71FC (ObCreateSymbolicLink.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14004D510 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, KPROCESSOR_MODE a2)
{
  char v4; // di
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // r14
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-48h] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+B0h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(TokenInformation) = 0;
  v5 = 0LL;
  GrantedAccess = 0;
  AccessStatus = 0;
  if ( a2 )
  {
    if ( !SubjectContext )
      SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    if ( SubjectContext )
      p_SubjectContexta = SubjectContext;
    v5 = p_SubjectContexta;
    if ( SeAccessCheck(
           SeMediumDaclSd,
           p_SubjectContexta,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&RtlpRestrictedMapping,
           a2,
           &GrantedAccess,
           &AccessStatus) == 1 )
    {
      if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        goto LABEL_8;
      ClientToken = p_SubjectContexta->ClientToken;
      if ( !p_SubjectContexta->ClientToken )
        ClientToken = p_SubjectContexta->PrimaryToken;
      if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0
        && !(_DWORD)TokenInformation )
      {
LABEL_8:
        v4 = 1;
      }
    }
  }
  else
  {
    v4 = 1;
  }
  if ( v5 == &SubjectContexta )
    SeReleaseSubjectContext(v5);
  return v4 != 1;
}
