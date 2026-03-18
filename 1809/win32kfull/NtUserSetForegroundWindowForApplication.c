/*
 * XREFs of NtUserSetForegroundWindowForApplication @ 0x1C00CCAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00CEEB0 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 */

__int64 __fastcall NtUserSetForegroundWindowForApplication(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  struct tagWND *v8; // rbx
  int IsPartOfCompositeApplication; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = v2;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      IsPartOfCompositeApplication = CoreWindowProp::IsPartOfCompositeApplication((const struct tagWND *)v2);
      v7 = xxxSetForegroundWindowWithOptions(v8, 1, IsPartOfCompositeApplication != 0 ? 0x40 : 0);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
