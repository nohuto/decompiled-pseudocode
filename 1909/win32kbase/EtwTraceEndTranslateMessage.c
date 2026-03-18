/*
 * XREFs of EtwTraceEndTranslateMessage @ 0x1C009D640
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cq @ 0x1C010C748 (McTemplateK0cq.c)
 */

__int64 __fastcall EtwTraceEndTranslateMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
  {
    LOBYTE(a4) = a1;
    return McTemplateK0cq(a1, &EndTranslateMessage, a3, a4, a2);
  }
  return result;
}
