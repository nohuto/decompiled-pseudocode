/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x1802C0548
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1802B39B8 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C01C4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMessageProxyReconnectAdapterOwner@@U.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter(
        KeyboardHosting::TabTipAdapter *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>((__int64)this);
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0x3FF0000000000000LL;
  memset_0((char *)this + 120, 0, 0x98uLL);
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 7LL;
  *((_WORD *)this + 136) = 0;
  *((_BYTE *)this + 304) = 0;
  *((_WORD *)this + 154) = 0;
  *((_DWORD *)this + 78) = 0;
  *(_QWORD *)((char *)this + 316) = 9LL;
  *((_WORD *)this + 162) = 0;
  *((_DWORD *)this + 82) = 0;
  *(_QWORD *)((char *)this + 332) = 9LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 9, 0, 0);
  return this;
}
