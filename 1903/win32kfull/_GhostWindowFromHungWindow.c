/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C0094354
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C0094060 (NtUserGhostWindowFromHungWindow.c)
 *     _VisrgnFromWindow @ 0x1C0128638 (_VisrgnFromWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C01595C8 (DWP_GetEnabledPopup.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v8; // rax

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 136);
  v4 = *(_WORD *)(gpsi + 900LL);
  if ( **(_WORD **)(v3 + 8) != v4 )
  {
    Prop = GetProp(a1, v4, 1LL);
    if ( Prop )
    {
      if ( Prop == -1 )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
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
