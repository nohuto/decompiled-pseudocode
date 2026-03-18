/*
 * XREFs of NtUserCallNoParam @ 0x1C0015E30
 * Callers:
 *     <none>
 * Callees:
 *     _DrainThreadCoreMessagingCompletions @ 0x1C0015EC0 (_DrainThreadCoreMessagingCompletions.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallNoParam(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v5; // rax

  v1 = a1;
  if ( a1 != 8 )
  {
    EnterCrit(0LL, 1LL);
    if ( (unsigned int)v1 < 0x2C )
    {
      _mm_lfence();
      v5 = (__int64 *)((__int64 (*)(void))*(&apfnSimpleCall + v1))();
      v3 = (__int64)v5;
      if ( (unsigned int)v1 >= 2 )
        goto LABEL_3;
      if ( v5 )
      {
        v3 = *v5;
        goto LABEL_3;
      }
    }
    v3 = 0LL;
    goto LABEL_3;
  }
  EnterSharedCrit(0LL, 1LL);
  _mm_lfence();
  v3 = DrainThreadCoreMessagingCompletions();
LABEL_3:
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
