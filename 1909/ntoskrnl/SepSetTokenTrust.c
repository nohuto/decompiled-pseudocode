/*
 * XREFs of SepSetTokenTrust @ 0x1405D5C90
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140085D08 (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     SeCopyClientToken @ 0x1405C4278 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x1406E4EEC (SepDuplicateSid.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = SepDuplicateSid(a2), v2 = result, (int)result >= 0) )
  {
    v4 = *(void **)(a1 + 1104);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
    return v2;
  }
  return result;
}
