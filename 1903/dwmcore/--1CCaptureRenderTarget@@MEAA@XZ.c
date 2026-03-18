/*
 * XREFs of ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024EEA8
 * Callers:
 *     ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019EE20 (--_GCCaptureRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801A6A04 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016C028 (--1-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024F8AC (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024F8FC (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18024FF9C (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
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
  char *v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 *v15; // rsi

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
  v12 = (char *)*((_QWORD *)this + 59);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v12);
  v13 = *((_QWORD *)this + 57);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (__int64 *)*((_QWORD *)this + 53);
  if ( v14 )
  {
    v15 = (__int64 *)*((_QWORD *)this + 54);
    if ( v14 != v15 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v14 + 1);
        v14 += 2;
      }
      while ( v14 != v15 );
      v14 = (__int64 *)*((_QWORD *)this + 53);
    }
    std::_Deallocate<16,0>(v14, (*((_QWORD *)this + 55) - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
  }
  wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::~com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>((__int64 *)this + 49);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
