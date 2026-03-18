/*
 * XREFs of EtwTraceBeginPointerMessageGeneration @ 0x1C010D5E0
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     McTemplateK0hh @ 0x1C010FF54 (McTemplateK0hh.c)
 */

__int64 __fastcall EtwTraceBeginPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0hh(a1, &BeginPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
