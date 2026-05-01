/*
 * XREFs of ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x180093C60 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x180093EB0 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x180094270 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800959D0 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x180045210 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??$ShellFeedsExperienceManagerImpl_Show@PEBGAEAW4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@ShellFeedsTelemetry@@SAX$$QEAPEBGAEAW4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x18009256C (--$ShellFeedsExperienceManagerImpl_Show@PEBGAEAW4ShellFeedsButtonInteraction@Experience@Shell@In.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094BE0 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsExperienceManagerImpl::_Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  HSTRING_HEADER *v6; // rbx
  HRESULT v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  HSTRING newString; // [rsp+20h] [rbp-99h] BYREF
  HSTRING string; // [rsp+28h] [rbp-91h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-89h] BYREF
  LPCWSTR v19[2]; // [rsp+38h] [rbp-81h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-71h] BYREF
  HSTRING string1; // [rsp+60h] [rbp-59h]
  HSTRING_HEADER v22; // [rsp+68h] [rbp-51h] BYREF
  WCHAR sourceString[40]; // [rsp+90h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v19[1] = (LPCWSTR)-2LL;
  v18 = a3;
  v19[0] = WindowsGetStringRawBuffer(a2, 0LL);
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_Show<unsigned short const *,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &>(
    v19,
    (int *)&v18);
  ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)a1);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(a3, sourceString, 34LL, 10LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, sourceString);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&FeedsButtonInteraction=", 0x19u, 0x18u);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = WindowsConcatString(string1, (HSTRING)v6[1].Reserved.Reserved1, &string);
  v8 = v7;
  if ( v7 >= 0 )
  {
    WindowsDeleteString(0LL);
    newString = 0LL;
    v9 = WindowsConcatString(a2, string, &newString);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = 508LL;
      goto LABEL_16;
    }
    v11 = 0;
    v12 = a3 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_9:
        v11 = 2;
        goto LABEL_12;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 2 )
          goto LABEL_12;
        goto LABEL_9;
      }
      v11 = 4;
    }
    else
    {
      v11 = 1;
    }
LABEL_12:
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 24LL))(
           *(_QWORD *)(a1 + 72),
           *(_QWORD *)(a1 + 104));
    v8 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 72) + 48LL))(
             *(_QWORD *)(a1 + 72),
             newString,
             v11);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
        goto LABEL_18;
      }
      v10 = 526LL;
    }
    else
    {
      v10 = 525LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_18:
    WindowsDeleteString(newString);
    newString = 0LL;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_19:
  WindowsDeleteString(string);
  return v8;
}
