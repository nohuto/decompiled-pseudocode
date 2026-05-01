/*
 * XREFs of __Platform_WindowsSubstringWithSpecifiedLength @ 0x180088634
 * Callers:
 *     ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x1803BF244 (-SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall _Platform_WindowsSubstringWithSpecifiedLength(
        HSTRING string,
        UINT32 startIndex,
        UINT32 length,
        HSTRING *newString)
{
  return WindowsSubstringWithSpecifiedLength(string, startIndex, length, newString);
}
