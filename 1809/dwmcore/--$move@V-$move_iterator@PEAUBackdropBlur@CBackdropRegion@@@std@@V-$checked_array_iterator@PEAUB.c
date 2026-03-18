/*
 * XREFs of ??$move@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18005D7CC
 * Callers:
 *     ?clear_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE794 (-clear_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBackd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int64 v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = *(_QWORD *)a4 + 24LL * *((_QWORD *)a4 + 2);
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    v5 += 24LL;
    a2 += 24LL;
  }
  *(_OWORD *)a1 = v4;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v5 - (__int64)v4) / 24;
  return result;
}
