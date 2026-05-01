/*
 * XREFs of ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@0@Z @ 0x18032C134
 * Callers:
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18032B940 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007E840 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x18032B3E4 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

__int64 *__fastcall std::vector<ActivationHints::Hint>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        ActivationHints::Hint *a4)
{
  ActivationHints::Hint *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  ActivationHints::Hint *i; // rbx
  __int64 *result; // rax

  if ( (ActivationHints::Hint *)a3 != a4 )
  {
    v7 = *(ActivationHints::Hint **)(a1 + 8);
    v8 = a3;
    if ( a4 != v7 )
    {
      v9 = (__int64)a4 - a3;
      do
      {
        std::wstring::operator=(v8, v9 + v8);
        std::wstring::operator=(v8 + 32, v8 + v9 + 32);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + v8 + 64);
        v10 = *(_QWORD *)(v9 + v8 + 72);
        *(_QWORD *)(v9 + v8 + 72) = 0LL;
        v11 = *(_QWORD *)(v8 + 72);
        *(_QWORD *)(v8 + 72) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v8 += 80LL;
      }
      while ( (ActivationHints::Hint *)(v9 + v8) != v7 );
      v7 = *(ActivationHints::Hint **)(a1 + 8);
    }
    for ( i = (ActivationHints::Hint *)v8; i != v7; i = (ActivationHints::Hint *)((char *)i + 80) )
      ActivationHints::Hint::~Hint(i);
    *(_QWORD *)(a1 + 8) = v8;
  }
  result = a2;
  *a2 = a3;
  return result;
}
