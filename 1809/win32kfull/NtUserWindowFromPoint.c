/*
 * XREFs of NtUserWindowFromPoint @ 0x1C0069E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C0067DF0 (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(int a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx

  EnterCrit(0LL, 1LL);
  v3 = (__int64 *)xxxWindowFromPoint(a1, v2);
  v8 = 0LL;
  if ( v3 )
    v8 = *v3;
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
