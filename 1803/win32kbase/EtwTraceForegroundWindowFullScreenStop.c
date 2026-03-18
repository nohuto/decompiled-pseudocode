/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1C00AC020
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStop(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0(a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
