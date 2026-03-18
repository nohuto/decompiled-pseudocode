/*
 * XREFs of IsLegacyTouchPad @ 0x1C020F8F4
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C00D7490 (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C020F724 (GetTelemDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyTouchPad(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(a1 + 884) != 1 )
    return 0LL;
  return result;
}
