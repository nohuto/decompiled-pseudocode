/*
 * XREFs of SepTokenPrivilegeCount @ 0x140014440
 * Callers:
 *     SepGetTokenAccessInformationBufferSize @ 0x1405C04A0 (SepGetTokenAccessInformationBufferSize.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14065C808 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTokenPrivilegeCount(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edx

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(result) = 0;
  v3 = 1LL;
  v4 = 37LL;
  do
  {
    v5 = result + 1;
    if ( (v1 & v3) == 0 )
      v5 = result;
    v3 = __ROL8__(v3, 1);
    result = v5;
    --v4;
  }
  while ( v4 );
  return result;
}
