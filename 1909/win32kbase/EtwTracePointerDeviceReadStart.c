/*
 * XREFs of EtwTracePointerDeviceReadStart @ 0x1C010B8A0
 * Callers:
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C019CAF8 (ApiSetEtwTracePointerDeviceReadStart.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceReadStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceReadStart, &Context.Flags);
  return result;
}
