/*
 * XREFs of ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_4 @ 0x180131120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008943C @ 0x18008943C (sub_18008943C.c)
 */

__int64 __fastcall `std::collate<unsigned short>::do_transform'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18008943C(*(__int64 **)(a2 + 72));
  }
  return result;
}
