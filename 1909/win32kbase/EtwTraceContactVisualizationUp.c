/*
 * XREFs of EtwTraceContactVisualizationUp @ 0x1C010ADB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceContactVisualizationUp(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
    return McTemplateK0(a1, &ContactVisualizationUp, &Context.Flags);
  return result;
}
