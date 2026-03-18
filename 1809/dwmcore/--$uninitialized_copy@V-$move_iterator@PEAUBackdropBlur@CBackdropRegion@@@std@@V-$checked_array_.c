/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x180179AD0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180059ED8 (-ensure_extra_capacity@-$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_p.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v5 = 24LL * a4[2] + *a4;
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    v5 += 24LL;
    a2 += 24LL;
  }
  result = a1;
  a4[2] = (v5 - *a4) / 24;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
