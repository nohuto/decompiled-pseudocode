/*
 * XREFs of EtwTraceTouchPadCurtainSize @ 0x1C010E780
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqqt @ 0x1C0111478 (McTemplateK0qqqt.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainSize(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0qqqt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
