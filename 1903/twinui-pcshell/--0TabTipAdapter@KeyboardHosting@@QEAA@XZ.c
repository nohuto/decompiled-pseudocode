/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x18031D6E0
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18030C2E0 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x18031D2D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMessageProxyReconnectAdapterOwner@@U.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter(
        struct _RTL_CRITICAL_SECTION *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>((__int64)this);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *(_QWORD *)&this->LockCount = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  this->LockSemaphore = 0LL;
  this->SpinCount = 0LL;
  this[1].DebugInfo = 0LL;
  *(_QWORD *)&this[1].LockCount = 0LL;
  this[1].OwningThread = 0LL;
  this[1].LockSemaphore = 0LL;
  this[1].SpinCount = 0LL;
  this[2].DebugInfo = 0LL;
  *(_QWORD *)&this[2].LockCount = 0LL;
  this[2].OwningThread = 0LL;
  this[2].SpinCount = 0x3FF0000000000000LL;
  memset_0(&this[3], 0, 0xA0uLL);
  this[7].OwningThread = 0LL;
  this[7].LockSemaphore = HANDLE_FLAG_PROTECT_FROM_CLOSE|HANDLE_FLAG_INHERIT|0x4;
  LOWORD(this[7].DebugInfo) = 0;
  HIDWORD(this[8].DebugInfo) = 9;
  LODWORD(this[8].OwningThread) = 9;
  LOBYTE(this[7].SpinCount) = 0;
  WORD2(this[7].SpinCount) = 0;
  LODWORD(this[8].DebugInfo) = 0;
  LOWORD(this[8].LockCount) = 0;
  this[8].RecursionCount = 0;
  this[8].LockSemaphore = 0LL;
  this[8].SpinCount = 0LL;
  InitializeCriticalSectionEx(this + 9, 0, 0);
  return this;
}
