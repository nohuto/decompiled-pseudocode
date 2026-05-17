/*
 * XREFs of RtlFreeSid @ 0x180072300
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall RtlFreeSid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  if ( (unsigned int)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1) )
    return 0LL;
  return v1;
}
