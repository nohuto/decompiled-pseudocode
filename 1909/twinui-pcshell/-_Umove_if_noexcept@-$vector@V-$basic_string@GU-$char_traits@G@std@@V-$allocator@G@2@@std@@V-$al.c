/*
 * XREFs of ?_Umove_if_noexcept@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@00@Z @ 0x1801D6414
 * Callers:
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800B4380 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800B5858 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<std::wstring>::_Umove_if_noexcept(__int64 a1, char *a2, char *a3, __int64 a4)
{
  char *v4; // rdx
  _QWORD *v5; // rcx
  char *result; // rax

  if ( a2 != a3 )
  {
    v4 = &a2[-a4];
    v5 = (_QWORD *)(a4 + 24);
    do
    {
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      *(_OWORD *)(v5 - 3) = *(_OWORD *)((char *)v5 + (_QWORD)v4 - 24);
      *(_OWORD *)(v5 - 1) = *(_OWORD *)((char *)v5 + (_QWORD)v4 - 8);
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4) = 7LL;
      *(_WORD *)((char *)v5 + (_QWORD)v4 - 24) = 0;
      v5 += 4;
      result = &v4[(_QWORD)v5 - 24];
    }
    while ( result != a3 );
  }
  return result;
}
