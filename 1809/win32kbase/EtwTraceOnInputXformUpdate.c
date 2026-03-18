/*
 * XREFs of EtwTraceOnInputXformUpdate @ 0x1C0089830
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxq @ 0x1C00EA3BC (McTemplateK0pxq.c)
 */

__int64 __fastcall EtwTraceOnInputXformUpdate(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0pxq(a1, a2, a3, a1, a2, a3);
  return result;
}
