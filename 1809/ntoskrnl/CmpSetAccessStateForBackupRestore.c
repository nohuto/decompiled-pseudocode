/*
 * XREFs of CmpSetAccessStateForBackupRestore @ 0x140706890
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406B6854 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 * Callees:
 *     SeSinglePrivilegeCheckEx @ 0x1406131AC (SeSinglePrivilegeCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x14070695C (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall CmpSetAccessStateForBackupRestore(__int64 a1, KPROCESSOR_MODE a2, __int64 a3, char a4)
{
  BOOLEAN v8; // al
  __int64 v9; // r8
  int v10; // ecx

  *(_DWORD *)(a1 + 20) = 0;
  if ( SeSinglePrivilegeCheckEx(SeBackupPrivilege, (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32), a2) )
  {
    *(_DWORD *)(a1 + 12) |= 2u;
    *(_DWORD *)(a1 + 20) |= 0x1020019u;
  }
  v8 = SeSinglePrivilegeCheckEx(SeRestorePrivilege, (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32), a2);
  v10 = *(_DWORD *)(a1 + 20);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 12) |= 4u;
    v10 |= 0x10F0006u;
    *(_DWORD *)(a1 + 20) = v10;
  }
  if ( a4 )
    *(_DWORD *)(a1 + 24) = v10;
  if ( !v10 )
    return 3221225506LL;
  LOBYTE(v9) = 1;
  SepAdjustAccessStateForConstraints(CmKeyObjectType, a3, v9, a1);
  *(_DWORD *)(a1 + 16) = ~*(_DWORD *)(a1 + 20) & *(_DWORD *)(a1 + 24);
  return 0LL;
}
