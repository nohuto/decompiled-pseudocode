/*
 * XREFs of AlpcpCheckConnectionSecurity @ 0x140614280
 * Callers:
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 */

__int64 __fastcall AlpcpCheckConnectionSecurity(PEPROCESS Process, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS InformationToken; // ebx
  PACCESS_TOKEN v10; // rdi
  ACCESS_MASK AccessMask; // [rsp+50h] [rbp-69h] BYREF
  NTSTATUS AccessStatus[2]; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-59h] BYREF
  _BYTE Sid2[80]; // [rsp+80h] [rbp-39h] BYREF

  if ( a3 )
  {
    *(_QWORD *)AccessStatus = 0LL;
    v10 = PsReferencePrimaryToken(Process);
    InformationToken = SeQueryInformationToken(v10, TokenIsAppContainer, (PVOID *)AccessStatus);
    if ( InformationToken >= 0 )
    {
      if ( *(_QWORD *)AccessStatus )
        InformationToken = -1073741152;
      if ( InformationToken >= 0 )
        SeQueryUserSidToken((__int64)v10, Sid2, 0x44u, 0LL);
    }
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v10);
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
    if ( !RtlEqualSid(a3, Sid2) )
      InformationToken = -1073741152;
    AccessStatus[0] = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
  }
  if ( !a4 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
  SeAccessCheck(
    a4,
    &SubjectContext,
    0,
    0x2000000u,
    0,
    0LL,
    &AlpcPortObjectType->TypeInfo.GenericMapping,
    a2,
    &AccessMask,
    AccessStatus);
  RtlMapGenericMask(&AccessMask, &AlpcPortObjectType->TypeInfo.GenericMapping);
  InformationToken = AccessStatus[0];
  if ( (AccessMask & 1) == 0 )
    InformationToken = -1073741152;
  SeReleaseSubjectContext(&SubjectContext);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  else
    return 0LL;
}
