/*
 * XREFs of ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18029CBEC
 * Callers:
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18029CC60 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18029E440 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180010594 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     wcscmp_0 @ 0x18009B2BF (wcscmp_0.c)
 */

char __fastcall XamlLauncher::ShouldLaunchCortanaOnPPI(XamlLauncher *this, HSTRING a2)
{
  char v3; // bl
  __int64 v4; // r8
  const wchar_t *StringRawBuffer; // rax
  XamlLauncher *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  v3 = 1;
  if ( IsPPIEdition() )
  {
    CortanaCapabilities::HasCortanaCapabilities(2048, (bool *)&v7, v4);
    if ( !(_BYTE)v7 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      return wcscmp_0(StringRawBuffer, L"ms-cortana://StartMode=Settings&QuerySource=Settings/") == 0;
    }
  }
  return v3;
}
