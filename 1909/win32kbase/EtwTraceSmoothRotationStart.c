/*
 * XREFs of EtwTraceSmoothRotationStart @ 0x1C010BB10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qtq @ 0x1C010F134 (McTemplateK0qtq.c)
 */

__int64 __fastcall EtwTraceSmoothRotationStart(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0qtq(a1, a2, a3, a1, a2, a3);
  return result;
}
