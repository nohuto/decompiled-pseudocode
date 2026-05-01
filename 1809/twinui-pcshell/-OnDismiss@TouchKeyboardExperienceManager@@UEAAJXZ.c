/*
 * XREFs of ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B83E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1802C4B2C (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnDismiss(TouchKeyboardExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 66) )
    return 0LL;
  if ( *((_DWORD *)this + 138) == 9 )
    return 0LL;
  v1 = KeyboardHosting::TabTipAdapter::OnLightDismiss(*((_QWORD *)this + 66));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x605,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
