/*
 * XREFs of UserUnsafeIsProcessDwm @ 0x1C0028F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserUnsafeIsProcessDwm(PVOID a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 )
    return a1 == g_pepDwm;
  return result;
}
