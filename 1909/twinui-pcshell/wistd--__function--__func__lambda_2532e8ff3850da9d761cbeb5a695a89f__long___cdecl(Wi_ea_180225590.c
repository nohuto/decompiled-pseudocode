/*
 * XREFs of wistd::__function::__func__lambda_2532e8ff3850da9d761cbeb5a695a89f__long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____)_::destroy @ 0x180225590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AB50 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_2532e8ff3850da9d761cbeb5a695a89f__long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_______::destroy(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
