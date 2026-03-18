/*
 * XREFs of IsKeyStateCached @ 0x1C002F6E0
 * Callers:
 *     AllocQueue @ 0x1C002F500 (AllocQueue.c)
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0180DC4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  int v1; // edx
  _BYTE *i; // rax

  v1 = 0;
  if ( a1 >= 0x20u )
  {
    for ( i = &unk_1C01DD080; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
        return a1 >= 0x5Bu && a1 <= 0xA5u && (a1 > 0x9Fu || a1 <= 0x5Cu);
    }
  }
  return 1LL;
}
