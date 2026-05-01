/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006D694
 * Callers:
 *     ??0CImmersiveWindowFactoryBase@@QEAA@XZ @ 0x18006D58C (--0CImmersiveWindowFactoryBase@@QEAA@XZ.c)
 *     ??0AllUpViewUriHandler@@QEAA@XZ @ 0x18034248C (--0AllUpViewUriHandler@@QEAA@XZ.c)
 *     ??0CPPIAllUpViewService@@QEAA@XZ @ 0x180343888 (--0CPPIAllUpViewService@@QEAA@XZ.c)
 *     ??0SwitchItem@@QEAA@XZ @ 0x18035FD34 (--0SwitchItem@@QEAA@XZ.c)
 *     ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x18036224C (--0SwitchItemThumbnailElement@@QEAA@XZ.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x1803C81E4 (--0TabletModeCoverWindow@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>(
        __int64 a1)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 8));
  return a1;
}
