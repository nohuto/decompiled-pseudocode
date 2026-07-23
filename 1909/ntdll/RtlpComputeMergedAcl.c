/*
 * XREFs of RtlpComputeMergedAcl @ 0x180088E28
 * Callers:
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpComputeMergedAcl2 @ 0x180088F48 (RtlpComputeMergedAcl2.c)
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
  int v14; // ebp
  void *ProcessHeap; // rsi
  unsigned int v16; // eax
  ACL *Acl; // rax
  unsigned int v18; // edi
  __int64 v20; // [rsp+60h] [rbp-38h] BYREF

  v14 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v16 = 1024;
  LODWORD(v20) = 1024;
  while ( 1 )
  {
    Acl = (ACL *)RtlAllocateHeap(ProcessHeap, 0, v16);
    *a9 = Acl;
    if ( !Acl )
      break;
    v18 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)&v20, Acl, a10);
    if ( (v18 & 0x80000000) == 0 )
    {
      if ( !(_DWORD)v20 )
      {
        RtlFreeHeap(ProcessHeap, 0, *a9);
        *a9 = 0LL;
      }
      return v18;
    }
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *a9 = 0LL;
    if ( v18 != -1073741789 )
      return v18;
    if ( (unsigned int)++v14 >= 2 )
      return v18;
    v16 = v20;
  }
  return 3221225495LL;
}
