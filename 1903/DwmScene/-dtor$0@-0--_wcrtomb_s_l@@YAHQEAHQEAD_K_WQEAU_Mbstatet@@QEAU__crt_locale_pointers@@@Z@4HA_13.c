/*
 * XREFs of ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_13 @ 0x180132DEB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
void __fastcall `_wcrtomb_s_l'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  std::locale::~locale((std::locale *)(a2 + 80));
}
