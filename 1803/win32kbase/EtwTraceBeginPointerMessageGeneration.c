/*
 * XREFs of EtwTraceBeginPointerMessageGeneration @ 0x1C00AB730
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     McTemplateK0hh @ 0x1C00AE364 (McTemplateK0hh.c)
 */

__int64 __fastcall EtwTraceBeginPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0hh(a1, &BeginPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
