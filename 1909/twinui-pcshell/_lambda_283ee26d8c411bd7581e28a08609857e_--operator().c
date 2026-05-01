/*
 * XREFs of _lambda_283ee26d8c411bd7581e28a08609857e_::operator() @ 0x18034DA74
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_283ee26d8c411bd7581e28a08609857e___lambda_2b794430212e81a1bd63b42019c278ed___ @ 0x18034D6D8 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18034D6D8.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_283ee26d8c411bd7581e28a08609857e_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 40))(
         *(_QWORD *)(v2 + 40),
         &GUID_3957f2e7_ed22_58ef_9d32_5820c3d6bcd2,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return (unsigned int)v3;
}
