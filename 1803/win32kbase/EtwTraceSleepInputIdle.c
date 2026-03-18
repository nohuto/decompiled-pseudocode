/*
 * XREFs of EtwTraceSleepInputIdle @ 0x1C0062AE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C00AE45C (McTemplateK0p.c)
 */

__int64 __fastcall EtwTraceSleepInputIdle(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0p(a1, &SleepInputIdleEvent, a1, a2);
  return result;
}
