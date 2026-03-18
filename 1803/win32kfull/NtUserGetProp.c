/*
 * XREFs of NtUserGetProp @ 0x1C00D9190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetProp(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 Prop; // rbx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  Prop = 0LL;
  if ( v4 )
    Prop = RealGetProp(*(_QWORD *)(v4 + 120), a2, 0LL);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return Prop;
}
