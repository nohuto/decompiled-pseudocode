/*
 * XREFs of RtlpComputeMergedAcl @ 0x14089573C
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlpComputeMergedAcl2 @ 0x140895864 (RtlpComputeMergedAcl2.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        PVOID *a9,
        __int64 a10)
{
  unsigned int v10; // eax
  int v15; // esi
  ACL *Acl; // rax
  unsigned int v17; // edi
  __int64 v19; // [rsp+60h] [rbp-38h] BYREF

  v10 = 1024;
  LODWORD(v19) = 1024;
  v15 = 0;
  while ( 1 )
  {
    Acl = (ACL *)ExAllocatePoolWithTag(PagedPool, v10, 0x63416553u);
    *a9 = Acl;
    if ( !Acl )
      break;
    v17 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)&v19, Acl, a10);
    if ( (v17 & 0x80000000) == 0 )
    {
      if ( !(_DWORD)v19 )
      {
        ExFreePoolWithTag(*a9, 0);
        *a9 = 0LL;
      }
      return v17;
    }
    ExFreePoolWithTag(*a9, 0);
    *a9 = 0LL;
    if ( v17 != -1073741789 )
      return v17;
    if ( (unsigned int)++v15 >= 2 )
      return v17;
    v10 = v19;
  }
  return 3221225495LL;
}
