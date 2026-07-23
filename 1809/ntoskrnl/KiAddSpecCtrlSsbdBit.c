/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x140295954
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_WORD *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}
