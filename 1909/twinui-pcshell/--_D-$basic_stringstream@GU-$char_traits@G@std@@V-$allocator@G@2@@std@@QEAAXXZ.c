/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18022CF90
 * Callers:
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GenerateAumIdForView_::_1_::dtor$1 @ 0x180234C03 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--_GenerateAumIdForV_ea_180234C03.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$9 @ 0x1802412BB (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$9.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18022C588 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1 + 152);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
