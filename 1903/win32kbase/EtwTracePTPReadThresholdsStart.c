/*
 * XREFs of EtwTracePTPReadThresholdsStart @ 0x1C010DF90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePTPReadThresholdsStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &PTPReadThresholdsStart, &Context.Flags);
  return result;
}
