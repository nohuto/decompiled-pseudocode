/*
 * XREFs of EtwTraceEndTranslateMessage @ 0x1C006C190
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cq @ 0x1C00AD5B4 (McTemplateK0cq.c)
 */

__int64 __fastcall EtwTraceEndTranslateMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(a4) = a1;
    return McTemplateK0cq(a1, &EndTranslateMessage, a3, a4, a2);
  }
  return result;
}
