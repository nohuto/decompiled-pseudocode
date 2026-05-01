/*
 * XREFs of CrmStateMonitorSizeGet @ 0x180046B3C
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorSizeGet(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 > 18 )
  {
    if ( a1 == 19 )
      return 184LL;
    if ( a1 == 20 )
      return 192LL;
    if ( a1 != 21 )
    {
      if ( a1 <= 23 )
        return 80LL;
      if ( a1 != 24 && a1 != 25 )
      {
        if ( a1 == 26 )
          return 112LL;
        return result;
      }
    }
    return 120LL;
  }
  if ( a1 > 10 )
    return 80LL;
  if ( a1 == 10 )
    return 64LL;
  if ( a1 >= 0 )
  {
    if ( a1 > 1 )
    {
      if ( a1 == 2 )
        return 128LL;
      if ( a1 <= 8 )
        return 72LL;
    }
    return 80LL;
  }
  return result;
}
