/*
 * XREFs of EtwTraceDCompBeginFrameEvent @ 0x1C010D810
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C0110830 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceDCompBeginFrameEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xq(a1, &DCompBeginFrameEvent, a3, a1, a2);
  return result;
}
