/*
 * XREFs of _lambda_768cb2220f6e5c58bd753db9dcc20fa9_::operator() @ 0x18010EDD0
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0____XWinRT::IntVersionTag_::Do__lambda_768cb2220f6e5c58bd753db9dcc20fa9___lambda_ce29597577b2c05eb038e19e940cb786___ @ 0x18010AC60 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18010AC60.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_768cb2220f6e5c58bd753db9dcc20fa9_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_18b5f7e7_e9aa_5842_8777_b00199391fc7, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
