/*
 * XREFs of WindowsGetStringRawBuffer_0 @ 0x180085318
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18007A570 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18007A610 (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PCWSTR __stdcall WindowsGetStringRawBuffer_0(HSTRING string, UINT32 *length)
{
  return WindowsGetStringRawBuffer(string, length);
}
