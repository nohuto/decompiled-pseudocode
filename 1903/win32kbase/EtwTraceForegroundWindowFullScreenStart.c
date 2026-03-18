/*
 * XREFs of EtwTraceForegroundWindowFullScreenStart @ 0x1C010DE70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &ForegroundWindowFullScreenStart, a1);
  return result;
}
