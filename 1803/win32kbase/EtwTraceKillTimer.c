/*
 * XREFs of EtwTraceKillTimer @ 0x1C00636F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xq @ 0x1C00AE774 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceKillTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return McTemplateK0xq(a1, &TimerKillTimer, a3, *(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 96));
  return result;
}
