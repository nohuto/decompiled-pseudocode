/*
 * XREFs of ??1CCaptureController@@EEAA@XZ @ 0x1801CEDF4
 * Callers:
 *     ??_ECCaptureController@@EEAAPEAXI@Z @ 0x18019EDD0 (--_ECCaptureController@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CCaptureController::~CCaptureController(CCaptureController *this)
{
  CCaptureRenderTarget **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rsi

  *(_QWORD *)this = &CCaptureController::`vftable';
  while ( 1 )
  {
    v2 = (CCaptureRenderTarget **)*((_QWORD *)this + 7);
    if ( v2 == *((CCaptureRenderTarget ***)this + 8) )
      break;
    CCaptureRenderTarget::SetController(*v2, 0LL);
  }
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 10);
  v5 = (__int64 *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 8);
    if ( v5 != v6 )
    {
      do
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v5++);
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 7);
    }
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 9) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  CResource::~CResource(this);
}
