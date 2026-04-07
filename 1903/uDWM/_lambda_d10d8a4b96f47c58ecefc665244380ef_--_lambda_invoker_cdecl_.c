/*
 * XREFs of _lambda_d10d8a4b96f47c58ecefc665244380ef_::_lambda_invoker_cdecl_ @ 0x180079720
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18007A2B8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall lambda_d10d8a4b96f47c58ecefc665244380ef_::_lambda_invoker_cdecl_(
        __int64 a1,
        wil::details **a2,
        int a3)
{
  wil::details *v3; // rcx

  if ( !a3 )
  {
    v3 = *a2;
LABEL_5:
    wil::details::SetEvent(v3, a2);
    return 0LL;
  }
  if ( a3 == 1 )
  {
    v3 = a2[1];
    goto LABEL_5;
  }
  return 0LL;
}
