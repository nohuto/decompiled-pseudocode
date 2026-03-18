/*
 * XREFs of RtlIsSandboxedToken @ 0x1405D82D0
 * Callers:
 *     IopCheckInitiatorHint @ 0x1400173FC (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     RtlIsSandboxedTokenHandle @ 0x14013C3C4 (RtlIsSandboxedTokenHandle.c)
 *     NtDuplicateToken @ 0x1405D7FA0 (NtDuplicateToken.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     ObpParseSymbolicLinkEx @ 0x14061C5A0 (ObpParseSymbolicLinkEx.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     ObpCreateDirectoryObject @ 0x14068136C (ObpCreateDirectoryObject.c)
 *     CmpCheckCreateAccess @ 0x1406D4A50 (CmpCheckCreateAccess.c)
 *     ObCreateSymbolicLink @ 0x1406D8F48 (ObCreateSymbolicLink.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14000A3A0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeAccessCheckWithHint @ 0x1400A85A0 (SeAccessCheckWithHint.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  char v4; // bl
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // r14
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+60h] [rbp-48h] BYREF
  PVOID TokenInformation; // [rsp+B8h] [rbp+10h] BYREF
  int v11; // [rsp+C0h] [rbp+18h] BYREF
  int v12; // [rsp+C8h] [rbp+20h] BYREF

  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  v4 = 0;
  LODWORD(TokenInformation) = 0;
  v5 = 0LL;
  v12 = 0;
  v11 = 0;
  if ( a2 )
  {
    if ( !SubjectContext )
      SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    if ( SubjectContext )
      p_SubjectContexta = SubjectContext;
    v5 = p_SubjectContexta;
    if ( (unsigned __int8)SeAccessCheckWithHint(
                            (__int64)SeMediumDaclSd,
                            8LL,
                            (__int64)p_SubjectContexta,
                            0LL,
                            0x20000,
                            0,
                            0LL,
                            (__int64)&RtlpRestrictedMapping,
                            a2,
                            (__int64)&v12,
                            (__int64)&v11) == 1 )
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
