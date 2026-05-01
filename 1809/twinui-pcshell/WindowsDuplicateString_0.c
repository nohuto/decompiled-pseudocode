/*
 * XREFs of WindowsDuplicateString_0 @ 0x180085782
 * Callers:
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18007A6E8 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDuplicateString_0(HSTRING string, HSTRING *newString)
{
  return WindowsDuplicateString(string, newString);
}
