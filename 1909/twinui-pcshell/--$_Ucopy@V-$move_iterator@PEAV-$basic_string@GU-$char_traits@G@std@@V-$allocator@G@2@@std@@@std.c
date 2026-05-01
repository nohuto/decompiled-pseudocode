/*
 * XREFs of ??$_Ucopy@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0PEAV21@@Z @ 0x1800B472C
 * Callers:
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800B4380 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18008533C (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Ucopy<std::move_iterator<std::wstring *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r9
  _OWORD *v7; // rcx

  v4 = a4;
  v5 = (_QWORD *)(a2 + 24);
  v6 = a4 - a2;
  while ( 1 )
  {
    v7 = v5 - 3;
    if ( v5 - 3 == a3 )
      break;
    *(_QWORD *)((char *)v5 + v6 - 8) = 0LL;
    *(_QWORD *)((char *)v5 + v6) = 0LL;
    *(_OWORD *)v4 = *v7;
    *(_OWORD *)(v4 + 16) = v7[1];
    *(v5 - 1) = 0LL;
    v4 += 32LL;
    *v5 = 7LL;
    v5 += 4;
    *(_WORD *)v7 = 0;
  }
  std::_Destroy_range<std::allocator<std::wstring>>((_QWORD *)v4, (_QWORD *)v4);
  return v4;
}
