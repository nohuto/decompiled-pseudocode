/*
 * XREFs of EtwTracePointerDeviceContactIds @ 0x1C00AC320
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqqdd @ 0x1C00AF048 (McTemplateK0qqqdd.c)
 */

__int64 __fastcall EtwTracePointerDeviceContactIds(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqqdd(a1, a2, a3, a1, a2, a3, a4, SBYTE4(a4));
  return result;
}
