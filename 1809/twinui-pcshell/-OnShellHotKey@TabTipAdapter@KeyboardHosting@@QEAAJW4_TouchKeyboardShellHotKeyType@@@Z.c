/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1802C4D84
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1802B8A80 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802BA4E0 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C219C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x1802C51E4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(KeyboardHosting::TabTipAdapter *a1, int a2)
{
  int IsReady; // eax
  unsigned int v5; // edi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(a1);
  v5 = IsReady;
  if ( IsReady < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return v5;
  }
  v7 = 2LL;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v7 = 4LL;
    }
    else
    {
      v7 = 3LL;
      if ( a2 != 3 )
        return 2147549183LL;
    }
  }
  v8 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v7, 4LL);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EB,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
