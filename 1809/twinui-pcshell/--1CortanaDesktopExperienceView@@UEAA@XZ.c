/*
 * XREFs of ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180187E38
 * Callers:
 *     ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1801880C0 (--_ECortanaDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A5F4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1803B0680 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CortanaDesktopExperienceView::~CortanaDesktopExperienceView(CortanaDesktopExperienceView *this)
{
  __int64 v2; // rcx
  HWND v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile int *v6; // rdx
  TwinUI::Lighting::AssistantLightManager **v7; // rdi
  TwinUI::Lighting::AssistantLightManager *v8; // rsi
  void *v9; // rcx
  __int64 v10; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CortanaDesktopExperienceView *)((char *)this + 320));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CortanaDesktopExperienceView *)((char *)this + 288));
  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (HWND)*((_QWORD *)this + 32);
  if ( v3 )
    DestroyWindow(v3);
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  v7 = (TwinUI::Lighting::AssistantLightManager **)*((_QWORD *)this + 14);
  if ( v7 )
  {
    v8 = v7[1];
    if ( v8 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v7[1]);
      operator delete(v8, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v7, (const struct std::nothrow_t *)0x10);
  }
  v9 = (void *)*((_QWORD *)this + 13);
  if ( v9 )
    operator delete(v9, (const struct std::nothrow_t *)8);
  v10 = *((_QWORD *)this + 12);
  if ( v10 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>(
    (__int64)this,
    v6);
}
