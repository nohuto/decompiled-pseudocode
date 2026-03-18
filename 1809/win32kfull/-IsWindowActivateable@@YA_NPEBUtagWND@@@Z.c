/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC
 * Callers:
 *     _lambda_e431929e928b7742a1b6141ab1c3075d_::_lambda_invoker_cdecl_ @ 0x1C0009E10 (_lambda_e431929e928b7742a1b6141ab1c3075d_--_lambda_invoker_cdecl_.c)
 *     _lambda_fb16448920153f6d07666723336f7afd_::_lambda_invoker_cdecl_ @ 0x1C000B670 (_lambda_fb16448920153f6d07666723336f7afd_--_lambda_invoker_cdecl_.c)
 *     _lambda_f932728a1b975e70479b80d5b5444ac1_::operator() @ 0x1C000B78C (_lambda_f932728a1b975e70479b80d5b5444ac1_--operator().c)
 *     _lambda_43087959960ad584e9ae12ed5f2c8018_::operator() @ 0x1C000B858 (_lambda_43087959960ad584e9ae12ed5f2c8018_--operator().c)
 *     _lambda_68a2c304fdaadaf6683155c27661d8ec_::_lambda_invoker_cdecl_ @ 0x1C000BC60 (_lambda_68a2c304fdaadaf6683155c27661d8ec_--_lambda_invoker_cdecl_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00D8A6C (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowHolographicForHitTest @ 0x1C002BD40 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  bool result; // al
  char v2; // dl
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx

  result = 0;
  if ( a1 )
  {
    v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v2 & 0x10) != 0 && (v2 & 8) == 0 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
      if ( (unsigned int)IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf)
        || !(unsigned int)GetWindowCloakState(CompositeAppFrameWindowOrSelf) )
      {
        return 1;
      }
    }
  }
  return result;
}
