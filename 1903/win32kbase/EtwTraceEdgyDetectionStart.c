/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C010D990
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0(a1, &EdgyDetectionStart, &Context.Flags);
  return result;
}
