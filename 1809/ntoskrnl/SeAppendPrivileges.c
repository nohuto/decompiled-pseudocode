/*
 * XREFs of SeAppendPrivileges @ 0x14069ABE0
 * Callers:
 *     IopCreateSecurityCheck @ 0x1401300EC (IopCreateSecurityCheck.c)
 *     ObCheckObjectAccess @ 0x1405968F0 (ObCheckObjectAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObCheckCreateObjectAccess @ 0x1405C93B0 (ObCheckCreateObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C94C8 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     IopCheckBackupRestorePrivilege @ 0x14063DB30 (IopCheckBackupRestorePrivilege.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140862B84 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x14089D6FC (SepConcatenatePrivileges.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // r14
  ULONG PrivilegeCount; // r9d
  _DWORD *v6; // rbx
  int v7; // r8d
  unsigned int v8; // esi
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  PVOID PoolWithTag; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + Privileges->PrivilegeCount <= 3 )
  {
    if ( v6 )
    {
      if ( v7 )
        v8 = 12 * v7 + 8;
      else
        v8 = 8;
    }
    else
    {
      v8 = 0;
    }
    memmove((char *)v6 + v8, Privileges->Privilege, 12 * PrivilegeCount);
    *v6 += Privileges->PrivilegeCount;
    return 0;
  }
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  v11 = 0;
  if ( v6 )
  {
    if ( v7 )
      v12 = 12 * v7 + 8;
    else
      v12 = 8;
  }
  else
  {
    v12 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v10 + v12), 0x72506553u);
  if ( PoolWithTag )
  {
    v14 = *AuxData;
    if ( *AuxData )
    {
      if ( *v14 )
        v11 = 12 * *v14 + 8;
      else
        v11 = 8;
    }
    memmove(PoolWithTag, v14, v11);
    SepConcatenatePrivileges(PoolWithTag, v15, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = PoolWithTag;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
