/*
 * XREFs of KiTpWriteBreakpoint @ 0x1402AD9DC
 * Callers:
 *     KiTpHandleTrap @ 0x1402AD7F0 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x14087FB80 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x1402ADA40 (KiTpWriteMemory.c)
 *     KiTpWriteSecureBreakpoint @ 0x1402ADB64 (KiTpWriteSecureBreakpoint.c)
 */

__int64 __fastcall KiTpWriteBreakpoint(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 50) )
    return KiTpWriteMemory(*(_QWORD *)(a1 + 16));
  result = KiTpWriteSecureBreakpoint();
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741667 )
    return KiTpWriteMemory(*(_QWORD *)(a1 + 16));
  return result;
}
