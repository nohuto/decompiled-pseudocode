/*
 * XREFs of NtUserWindowFromDC @ 0x1C00E50A0
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C00E50F0 (_WindowFromDC.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx

  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( WindowFromDC(a1) )
    v6 = *(_QWORD *)WindowFromDC(a1);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v6;
}
