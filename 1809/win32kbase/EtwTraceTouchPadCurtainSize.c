/*
 * XREFs of EtwTraceTouchPadCurtainSize @ 0x1C00E81C0
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C01128C0 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     McTemplateK0qqqt @ 0x1C00EAC60 (McTemplateK0qqqt.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainSize(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0qqqt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
