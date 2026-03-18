/*
 * XREFs of KdMarkHiberPhase @ 0x1405AAC98
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 */

void KdMarkHiberPhase()
{
  __int64 i; // rbx
  void *v1; // r8

  PoSetHiberRange(0LL, 0x10000u, &KdPitchDebugger, 0LL, 0x626C644Bu);
  if ( !KdPitchDebugger )
  {
    KdSetHiberRange((char *)&KdDebuggerNotPresent + 5);
    for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
    {
      v1 = (void *)KdLogBuffer[i];
      if ( v1 )
        PoSetHiberRange(0LL, 0x10000u, v1, 0x1000uLL, 0x626C644Bu);
    }
  }
}
