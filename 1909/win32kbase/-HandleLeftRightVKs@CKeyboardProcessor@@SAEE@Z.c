/*
 * XREFs of ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C004AF10
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004A650 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C0189F50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CKeyboardProcessor::HandleLeftRightVKs(unsigned __int8 a1)
{
  if ( (unsigned __int8)(a1 + 96) <= 5u )
    return (a1 - 160) / 2 + 16;
  else
    return a1;
}
