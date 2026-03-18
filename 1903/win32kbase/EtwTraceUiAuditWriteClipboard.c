/*
 * XREFs of EtwTraceUiAuditWriteClipboard @ 0x1C00BD810
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qm @ 0x1C00BD86C (McTemplateK0qm.c)
 */

__int64 __fastcall EtwTraceUiAuditWriteClipboard(int a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qm(a1, (unsigned int)&UiAuditWriteClipboard, a3, a1, a2);
  return result;
}
