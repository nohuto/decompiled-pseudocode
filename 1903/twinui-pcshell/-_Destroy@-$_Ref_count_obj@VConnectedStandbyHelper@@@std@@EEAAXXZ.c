/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802737F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180167508 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj<ConnectedStandbyHelper>::_Destroy(__int64 a1)
{
  Concurrency::details::_RefCounter *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(Concurrency::details::_RefCounter **)(a1 + 64);
  if ( v2 )
    Concurrency::details::_RefCounter::_Destroy(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
