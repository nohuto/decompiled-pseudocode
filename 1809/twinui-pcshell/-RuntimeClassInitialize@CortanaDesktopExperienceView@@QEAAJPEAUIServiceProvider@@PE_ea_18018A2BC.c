/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18018A2BC
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18018A1F0 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180187B14 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ??4?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180187FFC (--4-$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U-$default_delete@VAssistantLightWNF.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A5F4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  _QWORD *v7; // r15
  void *v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64); // rcx
  __int64 *v10; // rax
  void *v11; // r14
  void *v12; // rsi
  bool v13; // al
  float v14; // xmm0_4
  float v15; // xmm1_4
  int v16; // esi
  __int64 v17; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  void *v25[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h] BYREF
  void **v29; // [rsp+A8h] [rbp+58h]

  v29 = a4;
  v25[1] = (void *)-2LL;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 + 96), a3);
  v7 = (_QWORD *)(a1 + 104);
  if ( (void **)(a1 + 104) != a4 )
  {
    v8 = *a4;
    *a4 = 0LL;
    v9 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))*v7;
    if ( v8 != (void *)*v7 )
    {
      if ( v9 )
        operator delete(v9, (const struct std::nothrow_t *)8);
      *v7 = v8;
    }
  }
  v10 = wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>((__int64 *)v25);
  wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::operator=(
    (TwinUI::Lighting::AssistantLightManager ***)(a1 + 112),
    (TwinUI::Lighting::AssistantLightManager ***)v10);
  v11 = v25[0];
  if ( v25[0] )
  {
    v12 = (void *)*((_QWORD *)v25[0] + 1);
    if ( v12 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(*((TwinUI::Lighting::AssistantLightManager **)v25[0]
                                                                      + 1));
      operator delete(v12, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v11, (const struct std::nothrow_t *)0x10);
  }
  v13 = IsPPIEdition();
  *(_BYTE *)(a1 + 264) = v13;
  if ( v13 )
  {
    v14 = FLOAT_492_0;
    v15 = FLOAT_428_0;
  }
  else
  {
    v14 = FLOAT_656_0;
    v15 = FLOAT_320_0;
  }
  *(float *)(a1 + 212) = v15;
  *(float *)(a1 + 216) = v14;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v16 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          &v28);
  if ( v16 < 0 )
  {
    v17 = 378LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    if ( *a4 )
      operator delete(*a4, (const struct std::nothrow_t *)8);
    return (unsigned int)v16;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 24LL))(
          v28,
          26LL,
          a1 + 40,
          a1 + 236);
  if ( v16 < 0 )
  {
    v17 = 379LL;
    goto LABEL_15;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 24LL))(
          v28,
          1025LL,
          a1 + 40,
          a1 + 240);
  if ( v16 < 0 )
  {
    v17 = 380LL;
    goto LABEL_15;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v16 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          &v24);
  if ( v16 < 0 )
  {
    v19 = 384LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    goto LABEL_16;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, a1 + 64, a1 + 252);
  if ( v16 < 0 )
  {
    v19 = 385LL;
    goto LABEL_25;
  }
  v27 = 0;
  v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v27);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      387LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v20);
  *(_BYTE *)(a1 + 230) = v27 != 0;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 120), a2);
  LOBYTE(v21) = *(_BYTE *)(a1 + 264);
  v22 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*v7)(*v7, a1 + 72, v21);
  v23 = v22;
  if ( v22 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    if ( *a4 )
      operator delete(*a4, (const struct std::nothrow_t *)8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    if ( *a4 )
      operator delete(*a4, (const struct std::nothrow_t *)8);
    return v23;
  }
}
