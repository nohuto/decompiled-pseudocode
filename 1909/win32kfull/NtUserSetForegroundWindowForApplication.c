/*
 * XREFs of NtUserSetForegroundWindowForApplication @ 0x1C0137850
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C012FCE0 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall NtUserSetForegroundWindowForApplication(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  const struct tagWND *v5; // rbx
  int IsPartOfCompositeApplication; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (const struct tagWND *)v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v11 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v11;
      v12 = v2;
      HMLockObject(v2);
      IsPartOfCompositeApplication = CoreWindowProp::IsPartOfCompositeApplication(v5);
      v4 = (unsigned __int8)xxxSetForegroundWindowWithOptions(
                              (__int64)v5,
                              2u,
                              IsPartOfCompositeApplication != 0 ? 0x40 : 0,
                              1);
      ThreadUnlock1(v8, v7, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
