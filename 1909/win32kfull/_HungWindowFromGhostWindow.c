/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C00FC670
 * Callers:
 *     GetMonitorMaxArea @ 0x1C00FC5DC (GetMonitorMaxArea.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C015C350 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop || (Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) != 0 )
    {
      LOBYTE(v5) = 1;
      v7 = HMValidateHandleNoSecure(Prop, v5, v6);
      v2 = v7;
      if ( v7 && (unsigned int)IsWindowBeingDestroyed(v7) )
        return 0LL;
    }
  }
  return v2;
}
