/*
 * XREFs of ?_Destroy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXPEAVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x1800B5624
 * Callers:
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::_Emplace_reallocate_Microsoft::WRL::Wrappers::HString__::_1_::catch$0 @ 0x18013362E (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Destroy(__int64 a1, HSTRING *a2, HSTRING *a3)
{
  HSTRING *v4; // rbx
  HRESULT result; // eax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = WindowsDeleteString(*v4);
      *v4++ = 0LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
