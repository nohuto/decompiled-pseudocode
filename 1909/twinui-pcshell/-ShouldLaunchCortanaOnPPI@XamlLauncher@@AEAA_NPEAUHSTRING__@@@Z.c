/*
 * XREFs of ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x180313FEC
 * Callers:
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180314060 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x1803159C0 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800492C0 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     wcscmp_0 @ 0x1800D3EDF (wcscmp_0.c)
 */

char __fastcall XamlLauncher::ShouldLaunchCortanaOnPPI(XamlLauncher *this, HSTRING a2)
{
  char v3; // bl
  bool *v4; // r8
  const wchar_t *StringRawBuffer; // rax
  XamlLauncher *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  v3 = 1;
  if ( IsPPIEdition() )
  {
    CortanaCapabilities::HasCortanaCapabilities(2048, (enum CortanaCapabilities::CapabilityFlags *)&v7, v4);
    if ( !(_BYTE)v7 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      return wcscmp_0(StringRawBuffer, L"ms-cortana://StartMode=Settings&QuerySource=Settings/") == 0;
    }
  }
  return v3;
}
