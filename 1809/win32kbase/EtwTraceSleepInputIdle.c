/*
 * XREFs of EtwTraceSleepInputIdle @ 0x1C00746F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C00E9DA0 (McTemplateK0p.c)
 */

__int64 __fastcall EtwTraceSleepInputIdle(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0p(a1, &SleepInputIdleEvent, a1, a2);
  return result;
}
