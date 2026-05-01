/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x1801518C0
 * Callers:
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D2A7C (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
