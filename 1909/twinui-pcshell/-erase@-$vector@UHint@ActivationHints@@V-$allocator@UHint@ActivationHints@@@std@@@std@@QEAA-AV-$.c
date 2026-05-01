/*
 * XREFs of ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803ABA80
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18007E230 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803AB290 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803AB164 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::vector<ActivationHints::Hint>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 80;
  if ( a3 + 80 != v3 )
  {
    v8 = (__int64 *)(a3 + 72);
    do
    {
      std::wstring::operator=((__int64)(v8 - 9), v4);
      std::wstring::operator=((__int64)(v8 - 5), (__int64)(v8 + 5));
      *(v8 - 1) = v8[9];
      v9 = v8[10];
      v8[10] = 0LL;
      v10 = *v8;
      *v8 = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v4 += 80LL;
      v8 += 10;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  ActivationHints::Hint::~Hint((ActivationHints::Hint *)(v3 - 80));
  *(_QWORD *)(a1 + 8) -= 80LL;
  result = a2;
  *a2 = a3;
  return result;
}
