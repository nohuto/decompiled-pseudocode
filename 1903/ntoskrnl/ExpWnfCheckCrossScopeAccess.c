/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x14063E584
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x14063EC50 (NtQueryWnfStateNameInformation.c)
 *     NtUpdateWnfStateData @ 0x140641450 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140641CA0 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1407851A0 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x14063C614 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCallerAccess @ 0x14064282C (ExpWnfCheckCallerAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v3; // rbx
  int v4; // edi
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
  {
LABEL_9:
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
    return 0LL;
  }
  result = ExpWnfLookupPermanentName(a1, &P);
  if ( (int)result < 0 )
    return result;
  v3 = P;
  v4 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10u);
  ExFreePoolWithTag(v3, 0x20666E57u);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741790 )
      return (unsigned int)v4;
    goto LABEL_9;
  }
  return 0LL;
}
