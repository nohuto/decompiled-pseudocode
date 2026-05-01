/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1801F015C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801F009C (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1801ED518 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x1801EDC20 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18041F4C4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  void *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  TwinUI::Lighting::AssistantLightManager *v11; // rbx
  _QWORD *v12; // rbx
  TwinUI::Lighting::AssistantLightManager *v13; // rsi
  bool v14; // al
  __int64 (__fastcall *v15)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r8
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  void *v26[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF
  void **v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v26[1] = (void *)-2LL;
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)(a1 + 96),
    a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (void **)(a1 + 104),
    v7);
  v8 = wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>((__int64 *)v26);
  v9 = *v8;
  *v8 = 0LL;
  v10 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v9;
  if ( v10 )
  {
    v11 = (TwinUI::Lighting::AssistantLightManager *)v10[1];
    v10[1] = 0LL;
    if ( v11 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v11);
      operator delete(v11, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v10, (const struct std::nothrow_t *)0x10);
  }
  v12 = v26[0];
  v26[0] = 0LL;
  if ( v12 )
  {
    v13 = (TwinUI::Lighting::AssistantLightManager *)v12[1];
    v12[1] = 0LL;
    if ( v13 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v13);
      operator delete(v13, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v12, (const struct std::nothrow_t *)0x10);
  }
  v14 = IsPPIEdition();
  *(_BYTE *)(a1 + 296) = v14;
  if ( v14 )
  {
    *(_DWORD *)(a1 + 212) = 1138098176;
    *(_DWORD *)(a1 + 216) = 1140195328;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 1134559232;
    *(_DWORD *)(a1 + 216) = 1143209984;
  }
  v25 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v16 = v15(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v25);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = 385LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_29;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
          v25,
          26LL,
          a1 + 40,
          a1 + 260);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = 386LL;
    goto LABEL_16;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
          v25,
          1025LL,
          a1 + 40,
          a1 + 264);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = 387LL;
    goto LABEL_16;
  }
  v29 = 0LL;
  v19 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v20 = v19(a2, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v29);
  v17 = v20;
  if ( v20 >= 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, a1 + 64, a1 + 276);
    v17 = v20;
    if ( v20 >= 0 )
    {
      v28 = 0;
      v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 24LL))(v29, &v28);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v22);
      *(_BYTE *)(a1 + 254) = v28 != 0;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 120), a2);
      LOBYTE(v23) = *(_BYTE *)(a1 + 296);
      v20 = (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 104))(*(_QWORD *)(a1 + 104), a1 + 72, v23);
      v17 = v20;
      if ( v20 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        v17 = 0;
        goto LABEL_29;
      }
      v21 = 401LL;
    }
    else
    {
      v21 = 392LL;
    }
  }
  else
  {
    v21 = 391LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v17;
}
