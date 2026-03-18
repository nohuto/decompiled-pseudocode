/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01862EC
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C0189F50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateAsyncKeyState @ 0x1C004AAC0 (UpdateAsyncKeyState.c)
 *     UpdateRawKeyState @ 0x1C008A61C (UpdateRawKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v3; // ebx

  v2 = a1;
  v3 = a2;
  UpdateRawKeyState(a1, a2);
  UpdateAsyncKeyState(gpqForeground, v2, v3);
}
