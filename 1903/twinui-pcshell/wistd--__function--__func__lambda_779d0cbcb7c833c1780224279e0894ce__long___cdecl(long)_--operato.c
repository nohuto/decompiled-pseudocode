/*
 * XREFs of wistd::__function::__func__lambda_779d0cbcb7c833c1780224279e0894ce__long___cdecl(long)_::operator() @ 0x18020DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18020900C (_lambda_b1e75d3e314d3909b197b601af483277_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_779d0cbcb7c833c1780224279e0894ce__long___cdecl_long__::operator()(
        __int64 a1,
        int *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(***(_QWORD ***)(a1 + 8) + 24LL))(
    **(_QWORD **)(a1 + 8),
    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
    &v6);
  v4 = 0;
  if ( v6 )
    v4 = lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
           (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 8) + 16LL),
           *(struct IWin32ApplicationView ***)(*(_QWORD *)(a1 + 8) + 8LL),
           *a2);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v6);
  return v4;
}
