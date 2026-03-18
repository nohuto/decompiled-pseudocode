/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01884DC
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C140 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateAsyncKeyState @ 0x1C00403C0 (UpdateAsyncKeyState.c)
 *     UpdateRawKeyState @ 0x1C008EACC (UpdateRawKeyState.c)
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
