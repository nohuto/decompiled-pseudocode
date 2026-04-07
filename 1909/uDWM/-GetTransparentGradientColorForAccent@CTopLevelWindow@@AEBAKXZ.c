/*
 * XREFs of ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18008D334
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800286E8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180036E4C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18007F648 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 */

__int64 __fastcall CTopLevelWindow::GetTransparentGradientColorForAccent(CTopLevelWindow *this, __int64 a2)
{
  CDesktopManager *v3; // rdi
  struct CTopLevelWindow::WindowFrame *v4; // rax
  bool v5; // zf
  char v6; // r8
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+44h] [rbp-24h]

  LOBYTE(a2) = 1;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((unsigned int *)this + 146),
         a2,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 607LL) & 0x10) != 0);
  *(_QWORD *)&v8 = 4282425086LL;
  v5 = (*((_BYTE *)this + 584) & 0x40) == 0;
  *((_QWORD *)&v8 + 1) = 27LL;
  v9 = 73;
  v10 = 1LL;
  if ( !v5 || (v6 = 2, (*(_BYTE *)(*((_QWORD *)this + 90) + 607LL) & 0x10) != 0) )
    v6 = 1;
  CDesktopManager::GetEffectiveGlassColorizationParameters((__int64)v3, *((float *)v4 + 470), v6, 1, &v8);
  return v8 & 0xFF00FF00 | ((unsigned __int8)v8 << 16) | (unsigned int)BYTE2(v8);
}
