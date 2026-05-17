/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800823F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((unsigned int *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
