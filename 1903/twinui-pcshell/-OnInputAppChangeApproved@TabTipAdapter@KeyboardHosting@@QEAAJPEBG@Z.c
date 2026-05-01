/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803217A8
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18031FB50 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x180321A30 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x180321A60 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005D8F4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x180311BE4 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180320310 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int DefaultInputAppId; // ebx
  __int64 v6; // rdx
  const WCHAR *v8; // r8
  const WCHAR *v9; // r8
  unsigned __int16 *v10; // rbx
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rax
  const char *v13; // r9
  unsigned int v14; // [rsp+30h] [rbp-88h]
  char *v15; // [rsp+38h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+40h] [rbp-78h]
  LPCWCH lpString2[2]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-58h]
  unsigned __int64 v19; // [rsp+68h] [rbp-50h]
  LPCWCH v20[2]; // [rsp+70h] [rbp-48h] BYREF
  int cchCount2; // [rsp+80h] [rbp-38h]
  unsigned __int64 v22; // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  v15 = (char *)this + 360;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  std::wstring::wstring((__int64)v20, a2);
  v18 = 0LL;
  v19 = 7LL;
  LOWORD(lpString2[0]) = 0;
  DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(lpString2);
  if ( DefaultInputAppId < 0 )
  {
    v6 = 1082LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)DefaultInputAppId);
    std::wstring::_Tidy_deallocate(lpString2);
    std::wstring::_Tidy_deallocate(v20);
    if ( v4 )
      LeaveCriticalSection(v4);
    return (unsigned int)DefaultInputAppId;
  }
  if ( v18 > 0x25 )
  {
    v8 = (const WCHAR *)lpString2;
    if ( v19 >= 8 )
      v8 = lpString2[0];
    if ( CompareStringOrdinal(L"977E9B0F-FB52-43BF-A680-05B2A126FF3D_", 37, v8, 37, 1) == 2 )
      std::wstring::operator=(v20, lpString2);
  }
  v9 = (const WCHAR *)v20;
  if ( v22 >= 8 )
    v9 = v20[0];
  v10 = (unsigned __int16 *)((char *)this + 280);
  v11 = (const WCHAR *)((char *)this + 280);
  if ( *((_QWORD *)this + 38) >= 8uLL )
    v11 = *(const WCHAR **)v10;
  if ( CompareStringOrdinal(v11, *((_DWORD *)this + 74), v9, cchCount2, 1) != 2 )
  {
    try
    {
      v12 = (const WCHAR *)((char *)this + 280);
      if ( *((_QWORD *)this + 38) >= 8uLL )
        v12 = *(const WCHAR **)v10;
      *((_QWORD *)this + 37) = 0LL;
      *v12 = 0;
      std::wstring::operator=((char *)this + 280, v20);
    }
    catch ( ... )
    {
      v14 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0x44C,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
              v13);
      std::wstring::_Tidy_deallocate(lpString2);
      std::wstring::_Tidy_deallocate(v20);
      if ( v15 )
        LeaveCriticalSection(lpCriticalSection);
      return v14;
    }
    if ( *((_QWORD *)this + 38) >= 8uLL )
      v10 = *(unsigned __int16 **)v10;
    DefaultInputAppId = TouchKeyboardExperienceManager::OnInputAppChangeApproved(
                          *((TouchKeyboardExperienceManager **)this + 7),
                          v10);
    if ( DefaultInputAppId < 0 )
    {
      v6 = 1101LL;
      goto LABEL_3;
    }
  }
  std::wstring::_Tidy_deallocate(lpString2);
  std::wstring::_Tidy_deallocate(v20);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
