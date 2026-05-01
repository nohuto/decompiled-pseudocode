/*
 * XREFs of _lambda_80d81248c4f1ac47f03bb7cac4f71e8c_::_lambda_invoker_cdecl_ @ 0x18024E090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_80d81248c4f1ac47f03bb7cac4f71e8c_::_lambda_invoker_cdecl_(
        HMONITOR a1,
        HDC a2,
        LPRECT a3,
        unsigned int *a4)
{
  unsigned int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v8[20]; // [rsp+24h] [rbp-14h] BYREF

  if ( (int)GetDpiForMonitor(a1, 0LL, &v7, v8) >= 0 )
  {
    v5 = *a4;
    if ( v7 > *a4 )
      v5 = v7;
    *a4 = v5;
  }
  return 1LL;
}
