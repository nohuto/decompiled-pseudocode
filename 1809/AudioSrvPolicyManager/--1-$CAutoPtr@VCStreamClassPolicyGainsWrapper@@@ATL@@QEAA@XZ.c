/*
 * XREFs of ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x18002ADB8
 * Callers:
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x1800397DB (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180036BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CAutoPtr<CStreamClassPolicyGainsWrapper>::~CAutoPtr<CStreamClassPolicyGainsWrapper>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(
      &v2[9].OwningThread,
      0x10uLL,
      0x15uLL,
      std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    `eh vector destructor iterator'(
      &v2[1],
      0x10uLL,
      0x15uLL,
      std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    DeleteCriticalSection(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x2D0);
  }
  *a1 = 0LL;
}
