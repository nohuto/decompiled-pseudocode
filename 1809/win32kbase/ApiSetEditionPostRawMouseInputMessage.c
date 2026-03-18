/*
 * XREFs of ApiSetEditionPostRawMouseInputMessage @ 0x1C006FB24
 * Callers:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C006FAD4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionPostRawMouseInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  if ( (int)IsEditionPostRawMouseInputMessageSupported() < 0 )
    return 0LL;
  else
    return EditionPostRawMouseInputMessage(a1, a2, a3, a4, a5);
}
