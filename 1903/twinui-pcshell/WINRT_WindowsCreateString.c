/*
 * XREFs of WINRT_WindowsCreateString @ 0x1800883C1
 * Callers:
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x18008B244 (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 *     ??0PenWorkspaceAppInstallBroker@@QEAA@XZ @ 0x1800944A4 (--0PenWorkspaceAppInstallBroker@@QEAA@XZ.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1802B3274 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_WindowsCreateString(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
