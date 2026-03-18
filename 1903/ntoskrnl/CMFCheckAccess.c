/*
 * XREFs of CMFCheckAccess @ 0x140915640
 * Callers:
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SePrivilegeCheck @ 0x1405CED00 (SePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 *     RtlMapGenericMask @ 0x140601F00 (RtlMapGenericMask.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
 */

__int64 __fastcall CMFCheckAccess(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3)
{
  unsigned int v5; // ebx
  GENERIC_MAPPING *GenericMapping; // rdi
  ACCESS_MASK v7; // esi
  BOOLEAN v8; // r14
  BOOLEAN v9; // al
  struct _PRIVILEGE_SET *v10; // rbx
  ACCESS_MASK v11; // edi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+70h] [rbp-90h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v20[28]; // [rsp+130h] [rbp+30h] BYREF

  AccessMask = a2;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v20, 0, sizeof(v20));
  if ( a1 )
  {
    GenericMapping = (GENERIC_MAPPING *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)]
                                       + 76);
    RtlMapGenericMask(&AccessMask, GenericMapping);
    if ( !CMFSecurityDescriptor )
    {
      P = 0LL;
      v5 = CMFCreateSecurityDescriptor(&P, GenericMapping);
      if ( (v5 & 0xC0000000) == 0xC0000000 )
        return v5;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSecurityDescriptor, (signed __int64)P, 0LL) )
        ExFreePoolWithTag(P, 0);
    }
    v7 = AccessMask;
    v5 = SeCreateAccessState(&AccessState, v20, AccessMask, GenericMapping);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      SeLockSubjectContext(&AccessState.SubjectSecurityContext);
      RequiredPrivileges.Control = 0;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      P = (PVOID)18;
      RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      v5 = 0;
      v8 = SePrivilegeCheck(&RequiredPrivileges, &AccessState.SubjectSecurityContext, a3);
      GrantedAccess = 0;
      AccessStatus = 0;
      if ( v8 )
      {
        v11 = v7;
      }
      else
      {
        Privileges = 0LL;
        v9 = SeAccessCheck(
               CMFSecurityDescriptor,
               &AccessState.SubjectSecurityContext,
               1u,
               v7,
               0,
               &Privileges,
               GenericMapping,
               a3,
               &GrantedAccess,
               &AccessStatus);
        v10 = Privileges;
        v8 = v9;
        if ( Privileges )
        {
          SeAppendPrivileges(&AccessState, Privileges);
          CmSiFreeMemory(v10);
        }
        v5 = AccessStatus;
        v11 = GrantedAccess;
      }
      SeUnlockSubjectContext(&AccessState.SubjectSecurityContext);
      if ( (v5 & 0xC0000000) != 0xC0000000 )
      {
        if ( !v8 || (~v11 & v7) != 0 )
          v5 = -1073741790;
        else
          v5 = 0;
      }
      SepDeleteAccessState((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
