/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C001C6D0
 * Callers:
 *     NtUserGhostWindowFromHungWindow @ 0x1C001C670 (NtUserGhostWindowFromHungWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     _VisrgnFromWindow @ 0x1C011D5A8 (_VisrgnFromWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0228108 (DWP_GetEnabledPopup.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
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
  v3 = *(_QWORD *)(a1 + 112);
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
