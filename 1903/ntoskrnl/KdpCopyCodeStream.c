/*
 * XREFs of KdpCopyCodeStream @ 0x140957044
 * Callers:
 *     KdpAddBreakpoint @ 0x14095764C (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x1409578CC (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140957930 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x1409579E4 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x140957AB4 (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140957B74 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(PVOID BaseAddress, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(BaseAddress, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(BaseAddress, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
