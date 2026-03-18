/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50
 * Callers:
 *     IopDoFullTraverseCheck @ 0x140044310 (IopDoFullTraverseCheck.c)
 *     IopIsSecurityContextAppContainer @ 0x14029C0F0 (IopIsSecurityContextAppContainer.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x14069FA64 (PopPowerRequestActionInfo.c)
 * Callees:
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  PSECURITY_SUBJECT_CONTEXT p_SubjectContexta; // rsi
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  *a2 = 1;
  if ( !SubjectContext )
    SeCaptureSubjectContext(&SubjectContexta);
  p_SubjectContexta = &SubjectContexta;
  if ( SubjectContext )
    p_SubjectContexta = SubjectContext;
  if ( SeAccessCheck(
         SeNullDaclSd,
         p_SubjectContexta,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( !SubjectContext )
    SeReleaseSubjectContext(p_SubjectContexta);
  return v5;
}
