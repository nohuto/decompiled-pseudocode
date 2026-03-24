/*
 * XREFs of SepSetTokenTrust @ 0x1406A4668
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x1400D9E14 (SepSetTrustLevelForProcessToken.c)
 *     NtOpenThreadTokenEx @ 0x140648880 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x140649E74 (SeCopyClientToken.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x140648FA0 (SepDuplicateSid.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    result = SepDuplicateSid(a2, &v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v2 = v7;
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
  }
  *(_QWORD *)(a1 + 1104) = v2;
  return v3;
}
