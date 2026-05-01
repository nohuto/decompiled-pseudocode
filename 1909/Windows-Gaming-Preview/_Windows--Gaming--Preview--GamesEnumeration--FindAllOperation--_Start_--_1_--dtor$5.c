/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$5 @ 0x1800446FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::CollectionTile *>>::~vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::CollectionTile *>>(a2 + 96);
}
