/*
 * XREFs of EtwTraceContactVisualizationDown @ 0x1C010D6C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceContactVisualizationDown(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
    return McTemplateK0(a1, &ContactVisualizationDown, &Context.Flags);
  return result;
}
