/*
 * XREFs of WindowsDuplicateString_0 @ 0x180088482
 * Callers:
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1802B32C4 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDuplicateString_0(HSTRING string, HSTRING *newString)
{
  return WindowsDuplicateString(string, newString);
}
