/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C011916C
 * Callers:
 *     GetMonitorMaxArea @ 0x1C01190D8 (GetMonitorMaxArea.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C0217F40 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop || (Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) != 0 )
    {
      LOBYTE(v5) = 1;
      v6 = HMValidateHandleNoSecure(Prop, v5);
      v2 = v6;
      if ( v6 && (unsigned int)IsWindowBeingDestroyed(v6) )
        return 0LL;
    }
  }
  return v2;
}
