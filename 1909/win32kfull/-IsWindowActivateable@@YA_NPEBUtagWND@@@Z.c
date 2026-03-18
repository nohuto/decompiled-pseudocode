/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C013A73C
 * Callers:
 *     _lambda_c05599733d5c8a0f722e580d8ee161cb_::_lambda_invoker_cdecl_ @ 0x1C0117060 (_lambda_c05599733d5c8a0f722e580d8ee161cb_--_lambda_invoker_cdecl_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C0136E38 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C013A1C0 (_lambda_483a8efb490f6fe72acc053c62272df4_--_lambda_invoker_cdecl_.c)
 *     _lambda_7d69e9e2d209dda7a4a46854671474a0_::operator() @ 0x1C013A26C (_lambda_7d69e9e2d209dda7a4a46854671474a0_--operator().c)
 *     _lambda_f484f19fb3695b9a73a4913a548469c5_::_lambda_invoker_cdecl_ @ 0x1C013A5F0 (_lambda_f484f19fb3695b9a73a4913a548469c5_--_lambda_invoker_cdecl_.c)
 *     _lambda_16c3916dd104b3e87032ad92d6a38c73_::operator() @ 0x1C013A698 (_lambda_16c3916dd104b3e87032ad92d6a38c73_--operator().c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C006A1D0 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
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
