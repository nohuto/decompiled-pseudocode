/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x180320E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x180324FEC (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18032C060 (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // eax
  bool v6; // dl
  unsigned int v7; // edi
  KeyboardHosting::TabTipAdapterPolicy *v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  bool v12; // dl
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v15);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
  *(_BYTE *)(*((_QWORD *)this + 12) + 507LL) = v15 != 0;
  v9 = (KeyboardHosting::TabTipAdapterPolicy *)*((_QWORD *)this + 12);
  if ( v15 )
  {
    if ( !*((_BYTE *)v9 + 493) )
    {
      v10 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v6, 1);
      if ( v10 < 0 )
      {
        v11 = 532LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
  }
  else if ( !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(v9) )
  {
    v13 = *((_QWORD *)this + 12);
    if ( !*(_BYTE *)(v13 + 498) && !*(_BYTE *)(v13 + 485) )
    {
      v10 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v12, 0);
      if ( v10 < 0 )
      {
        v11 = 541LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
