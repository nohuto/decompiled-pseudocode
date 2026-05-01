/*
 * XREFs of ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x18005FF68
 * Callers:
 *     ?OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FE90 (-OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FEB0 (-OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FED0 (-OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FEF0 (-OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FF10 (-OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperie.c)
 *     ?OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FF30 (-OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18005FF50 (-OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801C02B0 (-OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellEx.c)
 *     ?OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C02D0 (-OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C02F0 (-OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C0310 (-OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ @ 0x180060060 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windo.c)
 *     ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x1800600FC (--$MakeAndInitialize@VShellExperienceViewChangedArg@-1--_FireViewChanged@ShellExperienceView@Cor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewChanged(RTL_SRWLOCK *a1, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  volatile signed __int32 **v6; // rsi
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // rcx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v21; // [rsp+88h] [rbp+28h] BYREF
  int v22; // [rsp+90h] [rbp+30h] BYREF

  v22 = a3;
  v21 = a2;
  v15 = 0LL;
  v4 = ___MakeAndInitialize_VShellExperienceViewChangedArg__1___FireViewChanged_ShellExperienceView_Cortana_TwinUI__AEAAJW4ShellExperienceViewChangeType_Experience_Shell_Internal_Windows__J_Z_UIShellExperienceViewChangedArg_789Windows__AEAW46789Windows__AEAJ_Details_WRL_Microsoft__YAJPEAPEAUIShellExperienceViewChangedArg_Experience_Shell_Internal_Windows__AEAW4ShellExperienceViewChangeType_4567_AEAJ_Z(
         &v15,
         &v21,
         &v22);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = (unsigned int)v4;
    v14 = 330LL;
  }
  else
  {
    v6 = (volatile signed __int32 **)&a1[30];
    v17 = v15;
    v7 = a1 + 31;
    v16 = a1;
    *(_QWORD *)&v18 = &v16;
    v8 = a1 + 31;
    v9 = 0LL;
    *((_QWORD *)&v18 + 1) = &v17;
    AcquireSRWLockExclusive(v8);
    v10 = *v6;
    if ( *v6 )
    {
      _InterlockedIncrement(v10 + 3);
      v9 = v10;
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    if ( !v9 )
      goto LABEL_9;
    v19 = v18;
    v5 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____(
           &v19,
           v9,
           v6);
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( v5 >= 0 )
    {
LABEL_9:
      v5 = 0;
      goto LABEL_10;
    }
    v13 = (unsigned int)v5;
    v14 = 331LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
    (const char *)v13,
    v15);
LABEL_10:
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v5;
}
