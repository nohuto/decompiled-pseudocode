/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C00710D0
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C0071080 (NtUserGhostWindowFromHungWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0100E84 (DWP_GetEnabledPopup.c)
 *     _VisrgnFromWindow @ 0x1C01B1B64 (_VisrgnFromWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  unsigned __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v8; // rax

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_WORD *)(gpsi + 900LL);
  if ( **(_WORD **)(v3 + 8) != v4 )
  {
    Prop = RealGetProp(*(_QWORD *)(a1 + 120), v4, 1LL);
    if ( Prop )
    {
      if ( Prop == -1LL )
        Prop = 0LL;
    }
    else
    {
      Prop = RealGetProp(*(_QWORD *)(a1 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
    }
    if ( Prop )
    {
      LOBYTE(v6) = 1;
      v8 = HMValidateHandleNoSecure(Prop, v6);
      v2 = v8;
      if ( v8 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v8) )
          return 0LL;
      }
    }
  }
  return v2;
}
