/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@0@Z @ 0x1802EA028
 * Callers:
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x1802E7CAC (--1AltTabWindowHook@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D6DD0 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall std::vector<std::shared_ptr<AltTabWindowHookData>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 *v7; // rbp
  __int64 *v8; // rdi
  __int64 *i; // rsi
  std::_Ref_count_base *v10; // rcx
  __int64 **result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v7 = (__int64 *)xmmword_18059A188;
    v8 = a3;
    if ( a4 != (__int64 *)xmmword_18059A188 )
    {
      do
      {
        std::shared_ptr<KBViewInfo>::operator=(v8, v4);
        v8 += 2;
        v4 += 2;
      }
      while ( v4 != v7 );
      v7 = (__int64 *)xmmword_18059A188;
    }
    for ( i = v8; i != v7; i += 2 )
    {
      v10 = (std::_Ref_count_base *)i[1];
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
    *(_QWORD *)&xmmword_18059A188 = v8;
  }
  result = a2;
  *a2 = a3;
  return result;
}
