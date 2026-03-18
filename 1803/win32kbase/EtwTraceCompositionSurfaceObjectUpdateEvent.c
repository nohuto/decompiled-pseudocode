/*
 * XREFs of EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0011C90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C00AE774 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceCompositionSurfaceObjectUpdateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0xq(a1, &CompositionSurfaceObjectUpdateEvent, a3, a1, a2);
  return result;
}
