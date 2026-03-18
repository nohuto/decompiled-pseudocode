/*
 * XREFs of EtwTraceTouchHWTimeStamp @ 0x1C00E8070
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ddxdddd @ 0x1C00E9708 (McTemplateK0ddxdddd.c)
 */

__int64 __fastcall EtwTraceTouchHWTimeStamp(int a1, int a2, int a3, char a4, char a5, char a6, char a7)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0ddxdddd(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
