/*
 * XREFs of ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0040810
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C140 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
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
