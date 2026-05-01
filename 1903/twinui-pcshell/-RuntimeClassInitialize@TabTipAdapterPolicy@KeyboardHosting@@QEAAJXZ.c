/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18032C578
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x18031BD90 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803208AC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x18032A860 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x18032A950 (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18032BF98 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18032CBD4 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(volatile signed __int32 **this)
{
  volatile signed __int32 **v2; // rbx
  void *v3; // rax
  __int64 v4; // rdx
  int v5; // ebx
  volatile signed __int32 *v7; // rax
  void *v8; // rax
  volatile signed __int32 *v9; // rax
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp+10h] BYREF
  void *v14; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = this + 25;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 25);
  *v2 = 0LL;
  v3 = operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v3;
  v13 = (volatile signed __int32 *)v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
    v4 = 26LL;
LABEL_3:
    v5 = -2147024882;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v14 = v3;
  v7 = (volatile signed __int32 *)KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider((KeyboardHosting::PositionAndSizeOptionsProvider *)v3);
  v13 = v7;
  if ( v7 )
    _InterlockedIncrement(v7 + 3);
  *v2 = v7;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 26);
  this[26] = 0LL;
  v8 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( !v8 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    v4 = 27LL;
    goto LABEL_3;
  }
  v9 = (volatile signed __int32 *)KeyboardHosting::ViewRectProvider::ViewRectProvider((KeyboardHosting::ViewRectProvider *)v8);
  v15 = v9;
  if ( v9 )
    _InterlockedIncrement(v9 + 3);
  this[26] = v9;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v15);
  v5 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v5 < 0 )
  {
    v4 = 28LL;
    goto LABEL_4;
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
