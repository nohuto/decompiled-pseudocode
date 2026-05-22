/*
 * XREFs of _lambda_2767fecee140e58cebc2d212b2646f2a_::operator() @ 0x180102944
 * Callers:
 *     _lambda_f70b1d3ca5d586fe2915dfa0db6ded94_::_lambda_invoker_cdecl_ @ 0x180102830 (_lambda_f70b1d3ca5d586fe2915dfa0db6ded94_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_2767fecee140e58cebc2d212b2646f2a_::operator()(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int16 a3)
{
  LSTATUS ValueW; // eax
  unsigned __int16 v5; // cx
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]
  unsigned __int16 v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = HIDWORD(a1);
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
             a2,
             0x10u,
             0LL,
             &v9,
             &v7);
  v5 = v9;
  if ( ValueW )
    return a3;
  return v5;
}
