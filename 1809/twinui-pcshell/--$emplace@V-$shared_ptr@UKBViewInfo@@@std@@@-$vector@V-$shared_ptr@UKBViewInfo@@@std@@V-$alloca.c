/*
 * XREFs of ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x1802B3F24
 * Callers:
 *     _lambda_0b76205be84400ecfc27954a2135cf03_::operator() @ 0x1800928A8 (_lambda_0b76205be84400ecfc27954a2135cf03_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180190528 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1802B3D18 (--$_Emplace_reallocate@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@st.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::emplace<std::shared_ptr<KBViewInfo>>(
        char **a1,
        _QWORD *a2,
        char *a3,
        __int64 *a4)
{
  char *v4; // rdi
  __int64 v7; // rax
  __int64 *v8; // rsi
  std::_Ref_count_base *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]

  v4 = a1[1];
  if ( a1[2] == v4 )
  {
    *a2 = std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo>>(a1, a3, a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      *(_QWORD *)v4 = *a4;
      *((_QWORD *)v4 + 1) = a4[1];
      *a4 = 0LL;
      a4[1] = 0LL;
      a1[1] += 16;
    }
    else
    {
      v7 = *a4;
      v8 = (__int64 *)(v4 - 16);
      *a4 = 0LL;
      v11 = v7;
      v9 = (std::_Ref_count_base *)a4[1];
      a4[1] = 0LL;
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      v12 = v9;
      *(_QWORD *)v4 = *((_QWORD *)v4 - 2);
      *((_QWORD *)v4 + 1) = *((_QWORD *)v4 - 1);
      *v8 = 0LL;
      v8[1] = 0LL;
      a1[1] += 16;
      if ( v4 - 16 != a3 )
      {
        do
        {
          v8 -= 2;
          std::shared_ptr<KBViewInfo>::operator=(v8 + 2, v8);
        }
        while ( v8 != (__int64 *)a3 );
      }
      std::shared_ptr<KBViewInfo>::operator=(a3, &v11);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
    }
    *a2 = a3;
  }
  return a2;
}
