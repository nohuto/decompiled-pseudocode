/*
 * XREFs of IsLegacyTouchPad @ 0x1C01BBCDC
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C01287C0 (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C01BBB0C (GetTelemDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyTouchPad(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(a1 + 744) != 1 )
    return 0LL;
  return result;
}
