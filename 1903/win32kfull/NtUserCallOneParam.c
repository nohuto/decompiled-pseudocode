/*
 * XREFs of NtUserCallOneParam @ 0x1C00164C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx

  v2 = a2;
  if ( a2 - 44 > 0x29 )
    return 0LL;
  if ( ((a2 - 53) & 0xFFFFFFDF) != 0 )
  {
    if ( a2 == 77 )
      return ((__int64 (*)(void))*(&apfnSimpleCall + 77))();
    _mm_lfence();
    EnterCrit(0LL, 1LL);
  }
  else
  {
    _mm_lfence();
    EnterSharedCrit(0LL, 1LL);
  }
  v4 = (_QWORD *)((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(a1);
  v6 = v4;
  if ( (unsigned int)v2 < 0x2E )
  {
    if ( v4 )
      v6 = (_QWORD *)*v4;
    else
      v6 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return (__int64)v6;
}
