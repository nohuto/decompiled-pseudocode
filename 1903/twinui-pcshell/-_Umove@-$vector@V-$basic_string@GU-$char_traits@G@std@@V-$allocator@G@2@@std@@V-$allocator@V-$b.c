/*
 * XREFs of ?_Umove@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEAV32@00@Z @ 0x1801B743C
 * Callers:
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800A5A50 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$34 @ 0x1800A5C9E (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1800A5C9E.c)
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$36 @ 0x1800A5D5F (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1800A5D5F.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800A6F18 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<std::wstring>::_Umove(__int64 a1, _QWORD *a2, _QWORD *a3, char *a4)
{
  _QWORD *v4; // rax
  char *v5; // r10

  if ( a2 != a3 )
  {
    v4 = a2 + 3;
    v5 = (char *)(a4 - (char *)a2);
    do
    {
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_OWORD *)a4 = *(_OWORD *)(v4 - 3);
      *((_OWORD *)a4 + 1) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      a4 += 32;
      *v4 = 7LL;
      *((_WORD *)v4 - 12) = 0;
      v4 += 4;
    }
    while ( v4 - 3 != a3 );
  }
  return a4;
}
