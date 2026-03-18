/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x1405C5C18
 * Callers:
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObpGrantAccess @ 0x1406BECCC (ObpGrantAccess.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x14003AC70 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1405C7350 (ObpReferenceSecurityDescriptor.c)
 *     SePrivilegeCheck @ 0x1405CED00 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF3DC (SePrivilegedServiceAuditAlarm.c)
 *     RtlMapGenericMask @ 0x140601F00 (RtlMapGenericMask.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, KPROCESSOR_MODE a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK *p_RemainingDesiredAccess; // rdi
  ACCESS_MASK RemainingDesiredAccess; // eax
  __int64 v10; // rdi
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-48h] BYREF

  p_RemainingDesiredAccess = &AccessState->RemainingDesiredAccess;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    *p_RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessState->RemainingDesiredAccess, (PGENERIC_MAPPING)(a3 + 76));
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a2) )
    {
      SePrivilegedServiceAuditAlarm(0LL, &AccessState->SubjectSecurityContext, &RequiredPrivileges, 0LL);
      return 3221225569LL;
    }
    *p_RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  }
  AccessState->PreviouslyGrantedAccess |= RemainingDesiredAccess;
  *p_RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= *(_DWORD *)(a3 + 92) | 0x1000000;
  v10 = ObpReferenceSecurityDescriptor(a4 - 48);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v10);
  if ( v10 )
    ObDereferenceSecurityDescriptor(v10, 1LL);
  return 0LL;
}
