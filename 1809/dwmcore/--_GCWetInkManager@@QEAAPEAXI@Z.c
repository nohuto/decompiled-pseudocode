/*
 * XREFs of ??_GCWetInkManager@@QEAAPEAXI@Z @ 0x18014AE64
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CWetInkManager *__fastcall CWetInkManager::`scalar deleting destructor'(CWetInkManager *this)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = (__int64 *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 2);
    if ( v1 != v3 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v1 + 1);
        v1 += 10;
      }
      while ( v1 != v3 );
      v1 = (__int64 *)*((_QWORD *)this + 1);
    }
    std::_Deallocate<16,0>(v1, 80 * ((*((_QWORD *)this + 3) - (_QWORD)v1) / 80LL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  operator delete(this);
  return this;
}
