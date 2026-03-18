/*
 * XREFs of EtwTraceCompleteInputDeviceRead @ 0x1C00A8480
 * Callers:
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 * Callees:
 *     McTemplateK0qq @ 0x1C010D4F4 (McTemplateK0qq.c)
 */

ULONG __fastcall EtwTraceCompleteInputDeviceRead(struct _MCGEN_TRACE_CONTEXT *a1, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0qq(a1, &CompleteInputDeviceRead, a3, (unsigned __int8)a1, Arg1);
  return result;
}
