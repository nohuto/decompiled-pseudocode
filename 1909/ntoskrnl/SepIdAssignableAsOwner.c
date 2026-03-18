/*
 * XREFs of SepIdAssignableAsOwner @ 0x1406CC8F8
 * Callers:
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406CC7FC (SepValidOwnerSubjectContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
