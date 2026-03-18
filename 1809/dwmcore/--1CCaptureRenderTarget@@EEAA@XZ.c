/*
 * XREFs of ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180157CA0
 * Callers:
 *     ??_GCCaptureRenderTarget@@EEAAPEAXI@Z @ 0x180157F40 (--_GCCaptureRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158AE0 (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x180158F0C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801592B4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

void __fastcall CCaptureRenderTarget::~CCaptureRenderTarget(CCaptureRenderTarget *this)
{
  HANDLE **v2; // rsi
  HANDLE *v3; // rdi
  HANDLE *v4; // rbp
  HANDLE *v5; // rdi
  HANDLE *v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rcx

  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CCaptureRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  CCaptureRenderTarget::SetController(this, 0LL);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  v2 = (HANDLE **)((char *)this + 536);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 536);
  CCaptureRenderTarget::ReleaseRenderingResources(this);
  v3 = (HANDLE *)*((_QWORD *)this + 70);
  if ( v3 )
  {
    v4 = (HANDLE *)*((_QWORD *)this + 71);
    if ( v3 != v4 )
    {
      do
      {
        if ( (char *)*v3 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*v3);
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (HANDLE *)*((_QWORD *)this + 70);
    }
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 72) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 70) = 0LL;
    *((_QWORD *)this + 71) = 0LL;
    *((_QWORD *)this + 72) = 0LL;
  }
  v5 = *v2;
  if ( *v2 )
  {
    v6 = (HANDLE *)*((_QWORD *)this + 68);
    if ( v5 != v6 )
    {
      do
      {
        if ( (char *)*v5 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*v5);
        ++v5;
      }
      while ( v5 != v6 );
      v5 = *v2;
    }
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 69) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
  }
  v7 = (__int64 *)*((_QWORD *)this + 64);
  if ( v7 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 65);
    if ( v7 != v8 )
    {
      do
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v7++);
      while ( v7 != v8 );
      v7 = (__int64 *)*((_QWORD *)this + 64);
    }
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 66) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 63);
  v9 = (char *)*((_QWORD *)this + 62);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  v10 = *((_QWORD *)this + 61);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 60);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 58);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (__int64 *)*((_QWORD *)this + 54);
  if ( v13 )
  {
    v14 = (__int64 *)*((_QWORD *)this + 55);
    if ( v13 != v14 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v13 + 1);
        v13 += 2;
      }
      while ( v13 != v14 );
      v13 = (__int64 *)*((_QWORD *)this + 54);
    }
    std::_Deallocate<16,0>(v13, (*((_QWORD *)this + 56) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  v15 = *((_QWORD *)this + 50);
  if ( v15 )
    CD3DSurface::Release((CD3DSurface *)(v15 + 496));
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
