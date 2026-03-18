/*
 * XREFs of KiSelectActiveTimerTable @ 0x140179A9C
 * Callers:
 *     KiTimerExpiration @ 0x140166854 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x1401798E0 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE70 (KiCalibrateTimeAdjustment.c)
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
