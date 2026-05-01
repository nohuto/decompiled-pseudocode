/*
 * XREFs of ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180062210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180320310 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180324DF0 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char v9; // cl
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r8
  _BYTE *OwningThread; // rdx
  __int64 v13; // rdx
  int DefaultInputAppId; // eax
  __int64 v15; // rdx
  const unsigned __int16 *v16; // rdx
  int v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp-30h]
  _QWORD Src[2]; // [rsp+38h] [rbp-28h] BYREF
  __m128i si128; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = -2LL;
  v5 = this + 9;
  EnterCriticalSection(this + 9);
  v19 = v5;
  LOBYTE(v17) = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = 295LL;
  }
  else
  {
    v9 = v17;
    if ( (_BYTE)v17 && *((_DWORD *)this[1].OwningThread + 142) == 1 && !this[7].OwningThread )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(Src[0]) = 0;
      DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(Src);
      v8 = DefaultInputAppId;
      if ( DefaultInputAppId < 0 )
      {
        v15 = 302LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)DefaultInputAppId,
          v17);
        std::wstring::_Tidy_deallocate(Src);
        goto LABEL_5;
      }
      v16 = (const unsigned __int16 *)Src;
      if ( si128.m128i_i64[1] >= 8uLL )
        v16 = (const unsigned __int16 *)Src[0];
      DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)this, v16);
      v8 = DefaultInputAppId;
      if ( DefaultInputAppId < 0 )
      {
        v15 = 307LL;
        goto LABEL_18;
      }
      std::wstring::_Tidy_deallocate(Src);
      v9 = v17;
    }
    DebugInfo = this[1].DebugInfo;
    if ( !DebugInfo )
    {
LABEL_4:
      OwningThread = this[2].OwningThread;
      OwningThread[488] = v9 != 0;
      OwningThread[444] = 0;
      v8 = 0;
      goto LABEL_5;
    }
    LOBYTE(v7) = v9 != 0;
    v6 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)&DebugInfo->Type + 24LL))(
           this[1].DebugInfo,
           v7);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v9 = v17;
      goto LABEL_4;
    }
    v13 = 313LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6,
    v17);
LABEL_5:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v8;
}
