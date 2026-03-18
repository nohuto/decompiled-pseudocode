/*
 * XREFs of EtwTraceAuditApiSetWinEventHook @ 0x1C006CDD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqqqqp @ 0x1C00AF254 (McTemplateK0qqqqqp.c)
 */

__int64 __fastcall EtwTraceAuditApiSetWinEventHook(int a1, int a2, int a3, char a4, char a5, __int64 a6)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqqqqp(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
