/*
 * XREFs of EtwTraceDwmManipulationFrameRouted @ 0x1C00E63A0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qq @ 0x1C00E97D4 (McTemplateK0qq.c)
 */

ULONG __fastcall EtwTraceDwmManipulationFrameRouted(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *a3)
{
  ULONG result; // eax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qq(Arg0, &DwmManipulationFrameRouted, a3, (const unsigned int)Arg0, Arg1);
  return result;
}
