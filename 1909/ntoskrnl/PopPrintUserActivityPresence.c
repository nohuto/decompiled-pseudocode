/*
 * XREFs of PopPrintUserActivityPresence @ 0x1407261D0
 * Callers:
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407260A0 (PopEvaluateGlobalUserStatus.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall PopPrintUserActivityPresence(int a1)
{
  int v2; // ecx

  if ( !a1 )
    return L"PowerUserPresent";
  v2 = a1 - 1;
  if ( !v2 )
    return L"PowerUserNotPresent";
  if ( v2 == 1 )
    return L"PowerUserInactive";
  return L"Invalid";
}
