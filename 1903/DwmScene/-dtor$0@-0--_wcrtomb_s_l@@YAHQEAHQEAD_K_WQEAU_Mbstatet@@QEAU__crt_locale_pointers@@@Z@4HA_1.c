/*
 * XREFs of ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x180128A58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `_wcrtomb_s_l'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(a2 + 80));
}
