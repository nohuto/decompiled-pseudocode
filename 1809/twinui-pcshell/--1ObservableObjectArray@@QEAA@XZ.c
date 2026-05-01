/*
 * XREFs of ??1ObservableObjectArray@@QEAA@XZ @ 0x1802F2100
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802F20C8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F3B70 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V-$VirtualDes.c)
 *     ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x1802F3BB0 (--_EVirtualDesktopItemCollection@@UEAAPEAXI@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1802F4CC8 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F4EA0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18014014C (--1CGITRegistrationList@@QEAA@XZ.c)
 */

void __fastcall ObservableObjectArray::~ObservableObjectArray(ObservableObjectArray *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  CGITRegistrationList::~CGITRegistrationList((ObservableObjectArray *)((char *)this + 96));
  CGITRegistrationList::~CGITRegistrationList((ObservableObjectArray *)((char *)this + 48));
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 3) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 3) );
      v2 = (void *)*((_QWORD *)this + 2);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
