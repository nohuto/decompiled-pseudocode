/*
 * XREFs of ?dtor$0@?0??do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z@4HA @ 0x18012FB71
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFA8 @ 0x18000FFA8 (sub_18000FFA8.c)
 */

__int64 __fastcall `std::collate<char>::do_transform'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000FFA8();
  }
  return result;
}
