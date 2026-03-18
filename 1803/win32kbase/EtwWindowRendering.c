/*
 * XREFs of EtwWindowRendering @ 0x1C00DA490
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pppqqqqpppqqqq @ 0x1C00AE4B8 (McTemplateK0pppqqqqpppqqqq.c)
 */

NTSTATUS __fastcall EtwWindowRendering(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  NTSTATUS result; // eax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pppqqqqpppqqqq(
             a1,
             &WindowRendering,
             a3,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  return result;
}
