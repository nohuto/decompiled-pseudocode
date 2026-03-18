/*
 * XREFs of EtwTraceTouchTargetingOffset @ 0x1C010EA20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0dddd @ 0x1C010FBC8 (McTemplateK0dddd.c)
 */

__int64 __fastcall EtwTraceTouchTargetingOffset(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0dddd(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
