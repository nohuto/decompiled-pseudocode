/*
 * XREFs of EtwTraceCopyPointerInputFrameStart @ 0x1C00E61F0
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A844 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceCopyPointerInputFrameStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0(a1, &CopyPointerInputFrameStart, (const GUID *)&Context.Flags);
  return result;
}
