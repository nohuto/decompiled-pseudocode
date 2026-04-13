/*
 * XREFs of _wil::details::string_maker_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_____::make_::_1_::dtor$0 @ 0x1800CF795
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002EBC4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall wil::details::string_maker_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_____::make_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 80));
  }
}
