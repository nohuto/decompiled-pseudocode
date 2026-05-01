/*
 * XREFs of ??0?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@QEAA@XZ @ 0x18037FF2C
 * Callers:
 *     ??0CVirtualDesktopNotificationsDerived@@QEAA@XZ @ 0x18037FFCC (--0CVirtualDesktopNotificationsDerived@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>(
        __int64 a1)
{
  _QWORD *v2; // rbx

  *(_QWORD *)a1 = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  v2 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_QWORD *)a1 = &VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *v2 = &CVirtualDesktopNotifications::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 1;
  *(_QWORD *)a1 = &VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::`vftable';
  *(_QWORD *)(a1 + 8) = &VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::`vftable'{for `IVirtualDesktopNotification'};
  *v2 = &CVirtualDesktopNotifications::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
