/*
 * XREFs of WindowsCreateString_0 @ 0x1800856C1
 * Callers:
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x18007F5C4 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x180088454 (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsCreateString_0(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
