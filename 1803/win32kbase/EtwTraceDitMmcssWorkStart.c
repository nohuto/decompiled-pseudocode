/*
 * XREFs of EtwTraceDitMmcssWorkStart @ 0x1C00ABBD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceDitMmcssWorkStart(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0(a1, &DitMmcssWorkStart, &W32kControlGuid);
  return result;
}
