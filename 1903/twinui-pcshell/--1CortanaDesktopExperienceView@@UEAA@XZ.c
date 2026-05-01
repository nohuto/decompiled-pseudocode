/*
 * XREFs of ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1801CE80C
 * Callers:
 *     ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1801CEA30 (--_ECortanaDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1801D1F14 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFE94 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180412AF0 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CortanaDesktopExperienceView::~CortanaDesktopExperienceView(CortanaDesktopExperienceView *this)
{
  __int64 v2; // rcx
  HWND v3; // rcx
  HWND v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  TwinUI::Lighting::AssistantLightManager *v8; // rsi
  __int64 v9; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CortanaDesktopExperienceView *)((char *)this + 352));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CortanaDesktopExperienceView *)((char *)this + 320));
  v2 = *((_QWORD *)this + 38);
  if ( v2 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (HWND)*((_QWORD *)this + 36);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (HWND)*((_QWORD *)this + 35);
  if ( v4 )
    DestroyWindow(v4);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  v7 = (_QWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v7 )
  {
    v8 = (TwinUI::Lighting::AssistantLightManager *)v7[1];
    v7[1] = 0LL;
    if ( v8 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v8);
      operator delete(v8, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v7, (const struct std::nothrow_t *)0x10);
  }
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (char *)this + 104,
    0LL);
  v9 = *((_QWORD *)this + 12);
  if ( v9 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>((__int64)this);
}
