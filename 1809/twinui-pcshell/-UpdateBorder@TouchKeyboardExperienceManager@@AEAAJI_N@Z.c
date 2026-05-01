/*
 * XREFs of ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1802BCD24
 * Callers:
 *     _lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator() @ 0x180092AA8 (_lambda_4ae43a7ebf3caa9980047f7d59b4d07c_--operator().c)
 *     _lambda_95049987556ed2fca2fb7bfd11a04e1e_::operator() @ 0x180092F00 (_lambda_95049987556ed2fca2fb7bfd11a04e1e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x1802B6944 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1802BE410 (-UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagREC.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorder(RTL_SRWLOCK *this, int a2, char a3)
{
  int FrameWindowByViewId; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // r8
  int updated; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v13; // [rsp+58h] [rbp+20h] BYREF

  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(this, a2, &v13);
  v7 = FrameWindowByViewId;
  if ( FrameWindowByViewId >= 0 )
  {
    v9 = 4LL;
    if ( (a2 & 0xFFFFFFFA) == 0 && a2 != 4 || a3 )
      v9 = 0LL;
    updated = TouchKeyboardExperienceManager::UpdateWindowAccent(v6, v13, v9);
    v11 = updated;
    if ( updated >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x909,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)updated);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return v7;
  }
}
