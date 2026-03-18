/*
 * XREFs of EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0095370
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C010DEC0 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceCompositionSurfaceObjectUpdateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0xq(a1, &CompositionSurfaceObjectUpdateEvent, a3, a1, a2);
  return result;
}
