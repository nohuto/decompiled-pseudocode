/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18034BDF8
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x18033B5E0 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008F3A4 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18034010C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x18034931C (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x18034A1D0 (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18034B818 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18034C3E4 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(volatile int **this)
{
  volatile int **v1; // rbx
  int v3; // ebx
  __int64 v4; // rdx
  KeyboardHosting::ViewRectProvider *v6; // rax
  KeyboardHosting::ViewRectProvider *v7; // rax
  volatile int *v8; // rdx
  KeyboardHosting::ViewRectProvider *v9; // r10
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  KeyboardHosting::ViewRectProvider *v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 25;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 25);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(v1);
  if ( v3 < 0 )
  {
    v4 = 26LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 26);
  this[26] = 0LL;
  v6 = (KeyboardHosting::ViewRectProvider *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  if ( !v6 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v12);
    v4 = 27LL;
    v3 = -2147024882;
    goto LABEL_3;
  }
  v7 = KeyboardHosting::ViewRectProvider::ViewRectProvider(v6);
  v12 = v7;
  v9 = v7;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      (__int64)v7,
      v8);
  this[26] = (volatile int *)v9;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v12);
  v3 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v3 < 0 )
  {
    v4 = 28LL;
    goto LABEL_3;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
