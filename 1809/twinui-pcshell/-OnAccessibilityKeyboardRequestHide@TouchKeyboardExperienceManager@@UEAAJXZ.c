/*
 * XREFs of ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B7CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1802C6AF8 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x1802CB9EC (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnAccessibilityKeyboardRequestHide(
        TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapterPolicy **v1; // rbx
  bool v2; // dl
  int v3; // eax
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (KeyboardHosting::TabTipAdapterPolicy **)*((_QWORD *)this + 69);
  *((_BYTE *)v1[12] + 494) = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShown(v1[12], 0)
    || (v3 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)v1, v2, 0),
        v4 = v3,
        v3 >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x512,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
