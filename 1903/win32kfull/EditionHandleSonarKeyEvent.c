/*
 * XREFs of EditionHandleSonarKeyEvent @ 0x1C01240B0
 * Callers:
 *     <none>
 * Callees:
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 *     zzzStartSonar @ 0x1C01E9FA8 (zzzStartSonar.c)
 */

__int64 __fastcall EditionHandleSonarKeyEvent(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 2);
  if ( (result & 0x4000) == 0 )
  {
    if ( (result & 0x8000u) == 0LL )
    {
      result = (__int64)gpdwCPUserPreferencesMask;
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        result = gfade[0];
        if ( (LODWORD(gfade[6]) & 0x80u) != 0 )
        {
          result = StopFade();
          giSonarRadius = -1;
        }
      }
      if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) != a2 )
        LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = a2;
    }
    else
    {
      if ( a2 == 17
        && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 17
        && ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        zzzStartSonar();
      }
      result = (__int64)gpdwCPUserPreferencesMask;
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
          LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 0;
      }
    }
  }
  return result;
}
