/*
 * XREFs of KiSelectActiveTimerTable @ 0x14016FBBC
 * Callers:
 *     KiTimerExpiration @ 0x140156BD4 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14016FA00 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x14056B040 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiSerializeTimerExpiration )
    return a1 + 13952;
  if ( !a2 || *(_BYTE *)(a1 + 33) )
    return KiProcessorBlock[0] + 13952;
  return result;
}
