/*
 * XREFs of ??0CVirtualDesktop@@QEAA@XZ @ 0x18041E3AC
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktop@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18041E214 (--$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtua.c)
 * Callees:
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x18041E2E8 (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 */

CVirtualDesktop *__fastcall CVirtualDesktop::CVirtualDesktop(CVirtualDesktop *this)
{
  RPC_STATUS v2; // eax
  struct _GUID v3; // xmm0
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF
  struct _GUID v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = UuidCreate(&Uuid);
  if ( !v2 || v2 == 1824 )
  {
    v3 = Uuid;
  }
  else
  {
    v3 = GUID_NULL;
    Uuid = GUID_NULL;
  }
  v6 = v3;
  CVirtualDesktop::CVirtualDesktop(this, &v6);
  *(_QWORD *)this = &CVirtualDesktop::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CVirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktop,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CVirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
