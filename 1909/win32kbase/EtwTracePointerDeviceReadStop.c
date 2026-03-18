/*
 * XREFs of EtwTracePointerDeviceReadStop @ 0x1C010B8D0
 * Callers:
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C019CB88 (ApiSetEtwTracePointerDeviceReadStop.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceReadStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceReadStop, &Context.Flags);
  return result;
}
