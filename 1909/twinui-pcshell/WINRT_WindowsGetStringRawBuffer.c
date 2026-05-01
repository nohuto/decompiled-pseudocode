/*
 * XREFs of WINRT_WindowsGetStringRawBuffer @ 0x18008AB7A
 * Callers:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800A19B0 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x1802D280C (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1802D2998 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PCWSTR __stdcall WINRT_WindowsGetStringRawBuffer(HSTRING string, UINT32 *length)
{
  return WindowsGetStringRawBuffer(string, length);
}
