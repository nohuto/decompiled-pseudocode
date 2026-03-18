/*
 * XREFs of NtUserGetCursor @ 0x1C0102690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetCursor()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 *v4; // rcx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 376LL);
  if ( v4 )
    v3 = *v4;
  UserSessionSwitchLeaveCrit(v4, v0, v1, v2);
  return v3;
}
