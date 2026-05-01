/*
 * XREFs of ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x180060918
 * Callers:
 *     ?OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180060840 (-OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180060860 (-OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180060880 (-OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800608A0 (-OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800608C0 (-OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperie.c)
 *     ?OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800608E0 (-OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180060900 (-OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801DF2F0 (-OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellEx.c)
 *     ?OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801DF310 (-OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801DF330 (-OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801DF350 (-OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ @ 0x180060A5C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windo.c)
 *     ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x180060B54 (--$MakeAndInitialize@VShellExperienceViewChangedArg@-1--_FireViewChanged@ShellExperienceView@Cor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewChanged(RTL_SRWLOCK *a1, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  RTL_SRWLOCK *v8; // rsi
  RTL_SRWLOCK *v9; // rdi
  RTL_SRWLOCK *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r10
  volatile int *v13; // rdx
  __int64 v14; // rcx
  RTL_SRWLOCK *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v20; // [rsp+68h] [rbp+28h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v21 = a3;
  v20 = a2;
  v22 = 0LL;
  v4 = ___MakeAndInitialize_VShellExperienceViewChangedArg__1___FireViewChanged_ShellExperienceView_Cortana_TwinUI__AEAAJW4ShellExperienceViewChangeType_Experience_Shell_Internal_Windows__J_Z_UIShellExperienceViewChangedArg_789Windows__AEAW46789Windows__AEAJ_Details_WRL_Microsoft__YAJPEAPEAUIShellExperienceViewChangedArg_Experience_Shell_Internal_Windows__AEAW4ShellExperienceViewChangeType_4567_AEAJ_Z(
         &v22,
         &v20,
         &v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 330LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)v6,
      (int)v16);
    goto LABEL_15;
  }
  v8 = a1 + 30;
  v17 = v22;
  v9 = a1 + 31;
  v16 = a1;
  v18[0] = &v16;
  v10 = a1 + 31;
  v11 = 0LL;
  v18[1] = &v17;
  AcquireSRWLockExclusive(v10);
  if ( v8->Ptr )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(v8->Ptr);
    v11 = v12;
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( v11 )
  {
    v5 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_f7183679cc6b687de449de5d3d056096__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView___Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____(
           v18,
           v11,
           v8);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v11 + 12), v13) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( v5 < 0 )
    {
      v6 = (unsigned int)v5;
      v7 = 331LL;
      goto LABEL_13;
    }
  }
  v5 = 0;
LABEL_15:
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}
