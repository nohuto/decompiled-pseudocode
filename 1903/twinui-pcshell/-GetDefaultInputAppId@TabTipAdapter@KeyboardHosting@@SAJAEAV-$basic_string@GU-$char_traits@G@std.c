/*
 * XREFs of ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180320310
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180062210 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18031FB50 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803217A8 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18015DD2C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18019E9EC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(_QWORD *Src)
{
  unsigned int ValueW; // eax
  _WORD *v3; // rax
  unsigned __int64 v4; // r8
  const char *v5; // r9
  DWORD pcbData; // [rsp+40h] [rbp-238h] BYREF
  __int64 v8; // [rsp+48h] [rbp-230h]
  _WORD pvData[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v8 = -2LL;
  memset_0(pvData, 0, 0x208uLL);
  pcbData = 520;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"SIPAppId", 2u, 0LL, pvData, &pcbData);
  if ( ValueW )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      1372LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)ValueW);
  }
  else
  {
    v3 = Src;
    if ( Src[3] >= 8uLL )
      v3 = (_WORD *)*Src;
    Src[2] = 0LL;
    *v3 = 0;
    v4 = -1LL;
    do
      ++v4;
    while ( pvData[v4] );
    try
    {
      std::wstring::append((void **)Src, pvData, v4);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x563,
                             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                             v5);
    }
  }
  return 0LL;
}
