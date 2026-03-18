/*
 * XREFs of KdpRestoreAllBreakpoints @ 0x140957B2C
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1402A20AC (KdEnableDebuggerWithLock.c)
 * Callees:
 *     KdpLowRestoreBreakpoint @ 0x140957930 (KdpLowRestoreBreakpoint.c)
 */

char KdpRestoreAllBreakpoints()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdi
  int v2; // eax

  v0 = 0;
  v1 = &unk_14044EF20;
  do
  {
    v2 = *v1 & 5;
    if ( (*(_BYTE *)v1 & 5) == 5 )
    {
      *v1 &= ~4u;
      LOBYTE(v2) = KdpLowRestoreBreakpoint(v0);
    }
    ++v0;
    v1 += 10;
  }
  while ( v0 < 0x20 );
  return v2;
}
