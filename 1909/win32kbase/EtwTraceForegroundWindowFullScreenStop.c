/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1C010B530
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
