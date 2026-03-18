/*
 * XREFs of EtwTraceArmDitMouseFlush @ 0x1C010D0E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceArmDitMouseFlush(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0(a1, &ArmDitMouseFlush, &Context.Flags);
  return result;
}
