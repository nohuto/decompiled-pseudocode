/*
 * XREFs of ___abi_translateCurrentException_::_1_::catch$1 @ 0x1800AF785
 * Callers:
 *     <none>
 * Callees:
 *     RoOriginateError_0 @ 0x18008530C (RoOriginateError_0.c)
 *     ?__abi_FailFast@@YAXXZ_0 @ 0x180088483 (-__abi_FailFast@@YAXXZ_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall __abi_translateCurrentException_::_1_::catch_1(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a2 + 64) )
  {
    __abi_FailFast();
    __debugbreak();
  }
  RoOriginateError_0(2147942414LL, 0LL);
  return &loc_180088435;
}
