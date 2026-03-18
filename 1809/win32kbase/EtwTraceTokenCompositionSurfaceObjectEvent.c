/*
 * XREFs of EtwTraceTokenCompositionSurfaceObjectEvent @ 0x1C0081420
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqxxx @ 0x1C00E9F58 (McTemplateK0ppqxxx.c)
 */

__int64 __fastcall EtwTraceTokenCompositionSurfaceObjectEvent(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0ppqxxx(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
