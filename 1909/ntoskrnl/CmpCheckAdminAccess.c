/*
 * XREFs of CmpCheckAdminAccess @ 0x1406F75E4
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406A41B0 (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406A4254 (CmpVEPerformOpenAccessCheck.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x140003BC0 (SeAccessCheckFromState.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpBuildAdminInformation @ 0x1406F76B4 (CmpBuildAdminInformation.c)
 */

__int64 __fastcall CmpCheckAdminAccess(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        __int64 a3,
        BOOLEAN *a4)
{
  int v7; // edi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-28h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-24h] BYREF
  PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation; // [rsp+58h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-18h] BYREF

  PrimaryTokenInformation = 0LL;
  Privileges = 0LL;
  v7 = CmpBuildAdminInformation(&PrimaryTokenInformation, a3);
  if ( v7 >= 0 )
  {
    *a4 = SeAccessCheckFromState(
            SecurityDescriptor,
            PrimaryTokenInformation,
            0LL,
            DesiredAccess,
            0,
            &Privileges,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            1,
            &GrantedAccess,
            &AccessStatus);
    v7 = 0;
    if ( Privileges )
      ExFreePoolWithTag(Privileges, 0);
  }
  if ( PrimaryTokenInformation )
    CmSiFreeMemory((PPRIVILEGE_SET)PrimaryTokenInformation);
  return (unsigned int)v7;
}
