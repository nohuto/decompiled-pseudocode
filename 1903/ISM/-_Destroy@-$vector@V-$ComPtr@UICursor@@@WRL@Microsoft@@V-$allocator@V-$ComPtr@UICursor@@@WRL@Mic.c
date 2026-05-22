/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@0@Z @ 0x1800C00AC
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch$57 @ 0x18003ABB0 (_std--vector_Microsoft--WRL--ComPtr_ICursor__std--allocator_Microsoft--WRL--ComPtr_ICursor_____-.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IContextualProcessor__std::allocator_Microsoft::WRL::ComPtr_IContextualProcessor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IContextualProcessor____::_1_::catch$57 @ 0x18003DA84 (_std--vector_Microsoft--WRL--ComPtr_IContextualProcessor__std--allocator_Microsoft--WRL--ComPtr_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v4++);
    while ( v4 != a3 );
  }
  return result;
}
