/*
 * XREFs of wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967___ @ 0x180092458
 * Callers:
 *     _lambda_ab0326ecea74eabee98d06838221c40f_::operator() @ 0x18009358C (_lambda_ab0326ecea74eabee98d06838221c40f_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180190528 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967___(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 464);
  v3 = *(_QWORD *)a1[1] + 16LL;
  if ( v3 != v2 )
  {
    do
    {
      std::shared_ptr<KBViewInfo>::operator=(v3 - 16, v3);
      v3 += 16LL;
    }
    while ( v3 != v2 );
    v2 = *(_QWORD *)(v1 + 464);
  }
  v4 = *(std::_Ref_count_base **)(v2 - 8);
  if ( v4 )
  {
    std::_Ref_count_base::_Decref(v4);
    v2 = *(_QWORD *)(v1 + 464);
  }
  *(_QWORD *)(v1 + 464) = v2 - 16;
  return 0LL;
}
