/*
 * XREFs of EtwTraceUiAuditReadClipboard @ 0x1C00BA770
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qmqmq @ 0x1C00BA888 (McTemplateK0qmqmq.c)
 */

__int64 __fastcall EtwTraceUiAuditReadClipboard(int a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 result; // rax

  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0qmqmq(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}
