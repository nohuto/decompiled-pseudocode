/*
 * XREFs of SeAppendPrivileges @ 0x1406BEF60
 * Callers:
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     ObCheckCreateObjectAccess @ 0x1405C5B00 (ObCheckCreateObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C5C18 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopCheckBackupRestorePrivilege @ 0x140601F70 (IopCheckBackupRestorePrivilege.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObCheckObjectAccess @ 0x1406BED70 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x14089E3C0 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x1406BEFC4 (SepConcatenatePrivileges.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rdi
  ULONG PrivilegeCount; // r8d
  _DWORD *v6; // rcx
  int v7; // r9d
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // eax
  PVOID PoolWithTag; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + Privileges->PrivilegeCount <= 3 )
  {
    SepConcatenatePrivileges(v6, Privileges, Privileges);
    return 0;
  }
  v9 = 8;
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  if ( v6 )
  {
    if ( v7 )
      v11 = 12 * v7 + 8;
    else
      v11 = 8;
  }
  else
  {
    v11 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + v10), 0x72506553u);
  if ( PoolWithTag )
  {
    v13 = *AuxData;
    if ( *AuxData )
    {
      if ( *v13 )
        v9 = 12 * *v13 + 8;
    }
    else
    {
      v9 = 0;
    }
    memmove(PoolWithTag, v13, v9);
    SepConcatenatePrivileges(PoolWithTag, v14, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = PoolWithTag;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
