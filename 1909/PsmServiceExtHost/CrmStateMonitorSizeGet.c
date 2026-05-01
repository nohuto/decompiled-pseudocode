/*
 * XREFs of CrmStateMonitorSizeGet @ 0x180004EE0
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorSizeGet(int a1)
{
  unsigned int v1; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = 0;
  if ( a1 > 21 )
  {
    if ( a1 > 28 )
    {
      v3 = a1 - 29;
      if ( !v3 )
        return 112;
      v4 = v3 - 1;
      if ( !v4 )
        return 80;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return v1;
        return 80;
      }
    }
    else
    {
      if ( a1 == 28 )
        return 64;
      if ( a1 <= 23 )
        return 80;
      if ( a1 != 24 && a1 != 25 )
      {
        if ( a1 != 26 )
          return 96;
        return 112;
      }
    }
    return 120;
  }
  if ( a1 == 21 )
    return 120;
  if ( a1 > 11 )
  {
    if ( a1 <= 18 )
      return 80;
    if ( a1 == 19 )
      return 184;
    else
      return 192;
  }
  else
  {
    if ( a1 == 11 )
      return 80;
    if ( a1 >= 0 )
    {
      if ( a1 > 1 )
      {
        if ( a1 == 2 )
          return 128;
        if ( a1 <= 8 )
          return 72;
        if ( a1 != 9 )
          return 64;
      }
      return 80;
    }
  }
  return v1;
}
