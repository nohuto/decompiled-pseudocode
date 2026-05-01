/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1802BE4A0
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802BB990 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x1802C6B84 (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  KeyboardHosting::TabTipAdapter *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 71);
  if ( !v3 )
    return 0LL;
  *((struct tagRECT *)this + 23) = *a3;
  v4 = KeyboardHosting::TabTipAdapter::SetWorkAreaRect(v3, a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
