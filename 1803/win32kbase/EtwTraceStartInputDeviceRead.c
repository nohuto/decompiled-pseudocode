/*
 * XREFs of EtwTraceStartInputDeviceRead @ 0x1C00AC830
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     McTemplateK0qq @ 0x1C00AECC8 (McTemplateK0qq.c)
 */

ULONG __fastcall EtwTraceStartInputDeviceRead(struct _MCGEN_TRACE_CONTEXT *a1, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qq(a1, &StartInputDeviceRead, a3, (unsigned __int8)a1, Arg1);
  return result;
}
