/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___ @ 0x1802597A0
 * Callers:
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x18025A83C (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_::operator() @ 0x180259CC0 (_lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_--operator().c)
 */

__int64 **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 **result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v9 = *i;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    if ( (unsigned __int8)lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_::operator()(a4, &v9) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
