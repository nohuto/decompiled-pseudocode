/*
 * XREFs of ??1PrivilegedOperationsService@@UEAA@XZ @ 0x1801A2E40
 * Callers:
 *     ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x1801A3028 (--_GPrivilegedOperationsService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A3F4C (-InternalRelease@-$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A3F70 (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A3F94 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A3FB8 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PrivilegedOperationsService::~PrivilegedOperationsService(PrivilegedOperationsService *this)
{
  __int64 *v1; // rbx
  volatile int *v3; // rdx

  PrivilegedOperationsService::s_this = 0LL;
  *(_QWORD *)this = &PrivilegedOperationsService::`vftable'{for `IInspectable'};
  v1 = (__int64 *)((char *)this + 168);
  *((_QWORD *)this + 1) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &PrivilegedOperationsService::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &PrivilegedOperationsService::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<CPrivilegedDesktopOperations>::InternalRelease((char *)this + 248);
  Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(v1 + 9);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 8);
  Microsoft::WRL::ComPtr<CPrivilegedDesktopOperations>::InternalRelease(v1 + 7);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 6);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 5);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 4);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 3);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 2);
  Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(v1 + 1);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(v1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v3);
}
