/*
 * XREFs of ?SettingsPaneAnimationDwmTransition@@YAXPEAUHWND__@@_N@Z @ 0x180105C54
 * Callers:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x180105DC0 (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

void __fastcall SettingsPaneAnimationDwmTransition(HWND hWnd, char a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct tagRECT Rect; // [rsp+48h] [rbp+7h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp+17h] BYREF
  struct tagRECT v8; // [rsp+68h] [rbp+27h] BYREF
  struct tagRECT v9; // [rsp+78h] [rbp+37h] BYREF

  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  *(_QWORD *)&v8.left = 0LL;
  *(_QWORD *)&v8.right = 0LL;
  *(_QWORD *)&v9.left = 0LL;
  *(_QWORD *)&v9.right = 0LL;
  GetWindowRect(hWnd, &Rect);
  v8 = Rect;
  v9 = Rect;
  rc = Rect;
  if ( (GetWindowLongPtrW(hWnd, -20) & 0x400000) != 0 )
    v4 = Rect.left - Rect.right;
  else
    v4 = Rect.right - Rect.left;
  OffsetRect(&rc, -rc.left, -rc.top);
  if ( a2 )
  {
    OffsetRect(&v8, v4, 0);
    v5 = 287309866LL;
  }
  else
  {
    OffsetRect(&v9, v4, 0);
    v5 = 813695018LL;
  }
  DwmpTransitionWindowWithRects(hWnd, v5, &rc, &v8);
}
