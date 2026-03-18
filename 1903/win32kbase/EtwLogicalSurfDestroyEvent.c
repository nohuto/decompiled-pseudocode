/*
 * XREFs of EtwLogicalSurfDestroyEvent @ 0x1C009C8C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C0110830 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwLogicalSurfDestroyEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xq(a1, &LogicalSurfDestroyEvent, a3, a1, a2);
  return result;
}
