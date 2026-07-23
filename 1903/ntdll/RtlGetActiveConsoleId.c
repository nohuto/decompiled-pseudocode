/*
 * XREFs of RtlGetActiveConsoleId @ 0x180081D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->ActiveConsoleId;
  else
    return MEMORY[0x7FFE02D8];
}
