/*
 * XREFs of ApiSetEditionPostRawMouseInputMessage @ 0x1C00601F4
 * Callers:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0060044 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionPostRawMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (int)IsEditionPostRawMouseInputMessageSupported() < 0 )
    return 0LL;
  else
    return EditionPostRawMouseInputMessage(a1, a2, a3, a4);
}
