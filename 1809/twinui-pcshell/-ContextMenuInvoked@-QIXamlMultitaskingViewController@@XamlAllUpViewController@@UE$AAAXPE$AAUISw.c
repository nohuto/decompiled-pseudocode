/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180287DE8
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1800A5EB0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x18025CB88 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18025D864 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x18025DB5C (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x18027C7EC (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     ??$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z @ 0x180286018 (--$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z.c)
 *     ?CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@@Z @ 0x180287C54 (-CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windo.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1802898C8 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18028992C (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 Instance; // rax
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  __int64 v22; // [rsp+28h] [rbp-18h]
  unsigned int v24; // [rsp+98h] [rbp+58h] BYREF

  v24 = 0;
  v5 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(a3);
  v6 = v5;
  v7 = 4;
  if ( v5 < 0x5DD )
    goto LABEL_46;
  if ( v5 <= 0x5DE )
    goto LABEL_13;
  if ( v5 <= 0x5E0 )
    goto LABEL_46;
  if ( v5 <= 0x5E2 )
  {
    XamlAllUpViewController::HandlePinningCommand(a1, a2, v5);
    goto LABEL_28;
  }
  if ( v5 == 1507 )
    goto LABEL_13;
  if ( v5 == 1508 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(a1[2] + 96LL))(a1 + 2, a2);
    goto LABEL_28;
  }
  if ( v5 <= 0x5E6 )
  {
LABEL_13:
    XamlAllUpViewController::HandleSnappingCommands(a1, a2, v5);
  }
  else
  {
LABEL_46:
    if ( Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::CanSwitchItemMoveDesktops(
           a1[24],
           a2) )
    {
      if ( v6 == 1504 )
      {
        Instance = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a1[24]);
        v9 = Instance;
        v10 = 1;
        v11 = Instance;
      }
      else
      {
        v22 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a1[23]);
        v24 = 2;
        Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                     v22,
                     v6);
        v11 = Instance;
        v10 = 6;
        v9 = Instance;
      }
      v24 = v10;
      v12 = __abi_winrt_ptr_ctor(Instance);
      if ( (v10 & 4) != 0 )
      {
        v10 &= ~4u;
        v24 = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( (v10 & 2) != 0 )
      {
        v10 &= ~2u;
        v24 = v10;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( (v10 & 1) != 0 && v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)a1[24] + 80LL))(a1[24], a2, v12);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
LABEL_28:
  v14 = v6 - 1501;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v7 = 3;
      v16 = v15 - 3;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 != 1 )
                  v7 = 9;
              }
              else
              {
                v7 = 2;
              }
            }
            else
            {
              v7 = 1;
            }
          }
          else
          {
            v7 = 6;
          }
        }
        else
        {
          v7 = 8;
        }
      }
      else
      {
        v7 = 7;
      }
    }
    else
    {
      v7 = 5;
    }
  }
  v24 = v7;
  XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int>(&v24);
  return __abi_winrt_ptr_assign(a1 + 25, 0LL);
}
