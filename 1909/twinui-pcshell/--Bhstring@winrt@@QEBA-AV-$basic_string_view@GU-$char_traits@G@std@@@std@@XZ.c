/*
 * XREFs of ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800A19B0
 * Callers:
 *     ?IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z @ 0x1800A2160 (-IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z.c)
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008AB7A (WINRT_WindowsGetStringRawBuffer.c)
 */

PCWSTR *__fastcall winrt::hstring::operator std::basic_string_view<unsigned short>(HSTRING *a1, PCWSTR *a2)
{
  UINT32 length; // [rsp+30h] [rbp+8h] BYREF

  *a2 = WINRT_WindowsGetStringRawBuffer(*a1, &length);
  a2[1] = (PCWSTR)length;
  return a2;
}
