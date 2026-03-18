/*
 * XREFs of EtwTraceEndPointerFrameCoalesce @ 0x1C00ABDF0
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C00AEFD0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameCoalesce(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( (_DWORD)a3 )
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return McTemplateK0qqq(Arg0, &EndPointerFrameDelegateCoalesce, a3, (const unsigned int)Arg0, Arg1, 0);
  }
  else if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return McTemplateK0qqq(Arg0, &EndPointerFrameCoalesce, a3, (const unsigned int)Arg0, Arg1, 0);
  }
  return result;
}
