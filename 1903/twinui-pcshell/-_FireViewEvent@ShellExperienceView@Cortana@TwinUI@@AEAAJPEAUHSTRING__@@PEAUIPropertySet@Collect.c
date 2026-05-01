/*
 * XREFs of ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005E658
 * Callers:
 *     ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005E640 (-OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTR.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VShellExperienceViewEventArg@?1??_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAU6@AEAPEAU789Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAUHSTRING__@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18005E7A4 (--$MakeAndInitialize@VShellExperienceViewEventArg@-1--_FireViewEvent@ShellExperienceView@Cortana.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180147EFC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent(
        TwinUI::Cortana::ShellExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v6; // r14
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rax
  _QWORD *i; // rdi
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-10h]
  TwinUI::Cortana::ShellExperienceView *v17; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING v19; // [rsp+68h] [rbp+38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF

  v20 = a3;
  v19 = a2;
  v21 = 0LL;
  v4 = Windows::Internal::Shell::Experience::UIShellExperienceViewEventArg::Z::MakeAndInitialize<`TwinUI::Cortana::ShellExperienceView::_FireViewEvent'::`2'::ShellExperienceViewEventArg,AJPEAUHSTRING__ &,Windows::Foundation::Collections::IPropertySet *>(
         &v21,
         &v19,
         &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v15);
  }
  else
  {
    v6 = (__int64 *)((char *)this + 264);
    v17 = this;
    v7 = 0LL;
    v8 = (RTL_SRWLOCK *)((char *)this + 272);
    v16 = v21;
    AcquireSRWLockExclusive(v8);
    v9 = *v6;
    if ( *v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
      v7 = v9;
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
      for ( i = *(_QWORD **)(v7 + 16); i != *(_QWORD **)(v7 + 24); ++i )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, TwinUI::Cortana::ShellExperienceView *, __int64))(*(_QWORD *)*i + 24LL))(
                *i,
                v17,
                v16);
        v12 = v11;
        if ( v11 < 0 )
        {
          RoTransformError((unsigned int)v11, 0LL, 0LL);
          if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 )
            Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
              v6,
              *i);
        }
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
    }
    v5 = 0;
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v5;
}
