/*
 * XREFs of EtwTraceCompleteInputDeviceRead @ 0x1C008E590
 * Callers:
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 * Callees:
 *     McTemplateK0qq @ 0x1C00E97D4 (McTemplateK0qq.c)
 */

ULONG __fastcall EtwTraceCompleteInputDeviceRead(struct _MCGEN_TRACE_CONTEXT *a1, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0qq(a1, &CompleteInputDeviceRead, a3, (unsigned __int8)a1, Arg1);
  return result;
}
