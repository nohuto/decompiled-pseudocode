/*
 * XREFs of EtwTraceInternalSetTimer @ 0x1C0070C50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq @ 0x1C00EA1AC (McTemplateK0pqqqq.c)
 */

__int64 __fastcall EtwTraceInternalSetTimer(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    return McTemplateK0pqqqq(
             a1,
             (unsigned int)&TimerInternalSetTimerCoalescing,
             a3,
             *(_QWORD *)(a1 + 88),
             *(_DWORD *)(a1 + 96),
             *(_DWORD *)(a1 + 52),
             *(_DWORD *)(a1 + 44),
             *(_DWORD *)(a1 + 48));
  return result;
}
