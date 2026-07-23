/*
 * XREFs of IopCheckBackupRestorePrivilege @ 0x14063DB30
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400A7C90 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x14062B1F0 (SePrivilegeCheck.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 */

void __fastcall IopCheckBackupRestorePrivilege(PACCESS_STATE AccessState, _DWORD *a2, char a3, int a4)
{
  char v5; // r14
  ULONG Flags; // ecx
  char v7; // r12
  ACCESS_MASK RemainingDesiredAccess; // esi
  PACCESS_TOKEN ClientToken; // rcx
  int v12; // esi
  struct _PRIVILEGE_SET Privileges; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  Flags = AccessState->Flags;
  v7 = 0;
  if ( (Flags & 0x100) != 0 || (*a2 & 0x4000) == 0 )
    return;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  AccessState->Flags = Flags | 0x100;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
    RemainingDesiredAccess |= 0x11F01BFu;
  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    v7 = 1;
  }
  else
  {
    if ( (RemainingDesiredAccess & 0x11200A9) == 0 )
      goto LABEL_12;
    Privileges.Privilege[0].Luid = SeBackupPrivilege;
    Privileges.PrivilegeCount = 1;
    Privileges.Control = 1;
    Privileges.Privilege[0].Attributes = 0;
    if ( !a3 )
    {
LABEL_17:
      v5 = 1;
      SeAppendPrivileges(AccessState, &Privileges);
      AccessState->PreviouslyGrantedAccess |= RemainingDesiredAccess & 0x11200A9;
      RemainingDesiredAccess &= 0xFEEDFF56;
      AccessState->RemainingDesiredAccess &= 0xFEEDFF56;
      AccessState->Flags |= 2u;
      goto LABEL_12;
    }
    ClientToken = AccessState->SubjectSecurityContext.ClientToken;
    if ( !ClientToken )
    {
      ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
      goto LABEL_11;
    }
    if ( AccessState->SubjectSecurityContext.ImpersonationLevel >= SecurityImpersonation )
    {
LABEL_11:
      if ( !SepPrivilegeCheck((__int64)ClientToken, (__int64)Privileges.Privilege, 1u, 1, a3) )
        goto LABEL_12;
      goto LABEL_17;
    }
  }
LABEL_12:
  v12 = RemainingDesiredAccess & 0x11F0116;
  if ( (v12 || v7)
    && (Privileges.Privilege[0].Luid = SeRestorePrivilege,
        Privileges.PrivilegeCount = 1,
        Privileges.Control = 1,
        Privileges.Privilege[0].Attributes = 0,
        SePrivilegeCheck(&Privileges, &AccessState->SubjectSecurityContext, a3)) )
  {
    SeAppendPrivileges(AccessState, &Privileges);
    AccessState->PreviouslyGrantedAccess |= v12;
    AccessState->RemainingDesiredAccess &= 0xFEE0FEE9;
    AccessState->Flags |= 4u;
  }
  else if ( !v5 )
  {
    *a2 &= ~0x4000u;
  }
}
