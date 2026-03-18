/*
 * XREFs of rimInputTypeFromDeviceTypeAndUsages @ 0x1C010BB60
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C011E450 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimInputTypeFromDeviceTypeAndUsages(int a1, __int16 a2, __int16 a3)
{
  __int64 result; // rax

  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( a1 != 2 )
    return 0LL;
  if ( a2 != 13 )
    return 32LL;
  result = 4LL;
  if ( (unsigned __int16)(a3 - 1) <= 1u )
    return result;
  if ( a3 == 4 )
    return 16LL;
  if ( a3 == 5 )
    return 8LL;
  else
    return 32LL;
}
