/*
 * XREFs of NtUserCallTwoParam @ 0x1C003BCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallTwoParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx

  v4 = a3;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v4 - 130) > 0xF )
    v10 = 0LL;
  else
    v10 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v4))(a1, a2);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
