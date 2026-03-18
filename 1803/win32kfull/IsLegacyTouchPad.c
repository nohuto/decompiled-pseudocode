/*
 * XREFs of IsLegacyTouchPad @ 0x1C019ACCC
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0107A6C (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C019AB14 (GetTelemDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyTouchPad(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(a1 + 740) != 1 )
    return 0LL;
  return result;
}
