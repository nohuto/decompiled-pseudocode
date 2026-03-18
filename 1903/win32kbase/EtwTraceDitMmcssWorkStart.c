/*
 * XREFs of EtwTraceDitMmcssWorkStart @ 0x1C010D870
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceDitMmcssWorkStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0(a1, &DitMmcssWorkStart, &Context.Flags);
  return result;
}
