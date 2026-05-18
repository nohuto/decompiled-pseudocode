/*
 * XREFs of ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x180131114
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `_wcrtomb_s_l'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 80));
}
