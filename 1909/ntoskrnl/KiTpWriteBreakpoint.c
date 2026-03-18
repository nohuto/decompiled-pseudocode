/*
 * XREFs of KiTpWriteBreakpoint @ 0x1402AD73C
 * Callers:
 *     KiTpHandleTrap @ 0x1402AD550 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x14087F280 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x1402AD7A0 (KiTpWriteMemory.c)
 *     KiTpWriteSecureBreakpoint @ 0x1402AD8C4 (KiTpWriteSecureBreakpoint.c)
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
