/*
 * XREFs of ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180338F98
 * Callers:
 *     _lambda_0cdbb88562623b41bf5d2249de419233_::operator() @ 0x1800A9D1C (_lambda_0cdbb88562623b41bf5d2249de419233_--operator().c)
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::operator() @ 0x1800AA730 (_lambda_4728da50fba771f61f09ce8410cf9c38_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18032F140 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorder(RTL_SRWLOCK *this, int a2, char a3)
{
  int FrameWindowByViewId; // eax
  unsigned int v6; // edi
  bool v8; // al
  const char *v9; // r9
  HWND v10; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(this, a2, &v10);
  v6 = FrameWindowByViewId;
  if ( FrameWindowByViewId >= 0 )
  {
    v8 = (a2 & 0xFFFFFFFA) == 0 && a2 != 4 || a3;
    v14[3] = 0;
    v14[1] = 1504;
    v11 = 19;
    v14[2] = 0;
    v13 = 16;
    v14[0] = !v8 ? 5 : 0;
    v12 = v14;
    if ( !(unsigned int)SetWindowCompositionAttribute(v10, &v11) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xAAA,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return v6;
  }
}
