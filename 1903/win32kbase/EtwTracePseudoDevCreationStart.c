/*
 * XREFs of EtwTracePseudoDevCreationStart @ 0x1C010E3F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePseudoDevCreationStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PseudoDevCreationStart, &Context.Flags);
  return result;
}
