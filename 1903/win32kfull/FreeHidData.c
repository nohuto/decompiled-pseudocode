/*
 * XREFs of FreeHidData @ 0x1C00073F0
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0002854 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002A5C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0041C80 (EditionPostRawMouseInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D7A78 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C022E470 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeHidData(__int64 a1)
{
  __int64 result; // rax

  result = HMMarkObjectDestroy();
  if ( (_DWORD)result )
  {
    HMAssignmentUnlock(a1 + 24);
    return HMFreeObject(a1);
  }
  return result;
}
