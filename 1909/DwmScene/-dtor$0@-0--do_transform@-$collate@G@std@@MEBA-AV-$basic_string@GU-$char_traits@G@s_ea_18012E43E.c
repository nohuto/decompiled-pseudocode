/*
 * XREFs of ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_3 @ 0x18012E43E
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_116 @ 0x18000FFC0 (j_unknown_libname_116.c)
 */

__int64 __fastcall `std::collate<unsigned short>::do_transform'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return j_unknown_libname_116();
  }
  return result;
}
