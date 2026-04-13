/*
 * XREFs of _std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor$10 @ 0x1800D1266
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180012DB8 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~0x10u;
    std::string::~string(a2 + 184);
  }
}
