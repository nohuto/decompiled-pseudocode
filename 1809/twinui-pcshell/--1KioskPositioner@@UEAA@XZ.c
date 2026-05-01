/*
 * XREFs of ??1KioskPositioner@@UEAA@XZ @ 0x180096CDC
 * Callers:
 *     ??_EKioskPositioner@@UEAAPEAXI@Z @ 0x180096FCC (--_EKioskPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x180096EC4 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18009A600 (-_Destroy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800E5A18 (--1SmartCookie@@QEAA@XZ.c)
 */

void __fastcall KioskPositioner::~KioskPositioner(KioskPositioner *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 78);
  if ( v1 )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(this, v1, *((_QWORD *)this + 79));
    std::_Deallocate<16,0>(
      *((void **)this + 78),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 80) - *((_QWORD *)this + 78)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 78) = 0LL;
    *((_QWORD *)this + 79) = 0LL;
    *((_QWORD *)this + 80) = 0LL;
  }
  if ( *((_QWORD *)this + 77) )
    std::default_delete<PrimaryAppProxyBase>::operator()();
  SmartCookie::~SmartCookie((KioskPositioner *)((char *)this + 488));
  SmartCookie::~SmartCookie((KioskPositioner *)((char *)this + 368));
  SmartCookie::~SmartCookie((KioskPositioner *)((char *)this + 248));
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 30);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 29);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 28);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 27);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 26);
  *((_DWORD *)this + 51) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
}
