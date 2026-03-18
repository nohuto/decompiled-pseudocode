/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C
 * Callers:
 *     _lambda_c05599733d5c8a0f722e580d8ee161cb_::_lambda_invoker_cdecl_ @ 0x1C0100AC0 (_lambda_c05599733d5c8a0f722e580d8ee161cb_--_lambda_invoker_cdecl_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C0100B3C (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C0100EF0 (_lambda_483a8efb490f6fe72acc053c62272df4_--_lambda_invoker_cdecl_.c)
 *     _lambda_7d69e9e2d209dda7a4a46854671474a0_::operator() @ 0x1C0100F9C (_lambda_7d69e9e2d209dda7a4a46854671474a0_--operator().c)
 *     _lambda_f484f19fb3695b9a73a4913a548469c5_::_lambda_invoker_cdecl_ @ 0x1C0101320 (_lambda_f484f19fb3695b9a73a4913a548469c5_--_lambda_invoker_cdecl_.c)
 *     _lambda_16c3916dd104b3e87032ad92d6a38c73_::operator() @ 0x1C01013C8 (_lambda_16c3916dd104b3e87032ad92d6a38c73_--operator().c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4B4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C00C8B00 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
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
