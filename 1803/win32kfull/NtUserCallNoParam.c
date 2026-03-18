/*
 * XREFs of NtUserCallNoParam @ 0x1C003D530
 * Callers:
 *     <none>
 * Callees:
 *     _DrainThreadCoreMessagingCompletions @ 0x1C003D5B0 (_DrainThreadCoreMessagingCompletions.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallNoParam(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v8; // rax

  v1 = a1;
  if ( a1 != 8 )
  {
    EnterCrit(0LL, 1LL);
    if ( (unsigned int)v1 < 0x2D )
    {
      _mm_lfence();
      v8 = (__int64 *)((__int64 (*)(void))*(&apfnSimpleCall + v1))();
      v4 = (__int64)v8;
      if ( (unsigned int)v1 >= 2 )
        goto LABEL_3;
      if ( v8 )
      {
        v4 = *v8;
        goto LABEL_3;
      }
    }
    v4 = 0LL;
    goto LABEL_3;
  }
  EnterSharedCrit(0LL, 1LL);
  _mm_lfence();
  v4 = DrainThreadCoreMessagingCompletions();
LABEL_3:
  UserSessionSwitchLeaveCrit(v3, v2, v5, v6);
  return v4;
}
