/*
 * XREFs of ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x18032CA38
 * Callers:
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18032B7D0 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18015DD2C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2)
{
  const WCHAR *v2; // r8
  unsigned int v5; // eax
  const WCHAR *v6; // r8
  unsigned int v7; // eax
  const WCHAR *v8; // r8
  unsigned int v9; // eax
  const WCHAR *v10; // r8
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int Data; // [rsp+60h] [rbp+8h] BYREF
  unsigned int lpData; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  v2 = (const WCHAR *)*((_QWORD *)this + 14);
  Data = (int)(float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a2) & _xmm);
  v5 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v2, 4u, &Data, 4u);
  if ( v5 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      1102LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)v5);
  v6 = (const WCHAR *)*((_QWORD *)this + 16);
  lpData = *(float *)a2 >= 0.0;
  v7 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v6, 4u, &lpData, 4u);
  if ( v7 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      1104LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)v7);
  v8 = (const WCHAR *)*((_QWORD *)this + 15);
  v15 = (int)(float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 1)) & _xmm);
  v9 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v8, 4u, &v15, 4u);
  if ( v9 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      1107LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)v9);
  v10 = (const WCHAR *)*((_QWORD *)this + 17);
  v16 = *((float *)a2 + 1) >= 0.0;
  v11 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v10, 4u, &v16, 4u);
  if ( v11 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      1109LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)v11);
}
