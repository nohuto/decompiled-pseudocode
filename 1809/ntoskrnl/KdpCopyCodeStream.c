/*
 * XREFs of KdpCopyCodeStream @ 0x1409188A8
 * Callers:
 *     KdpAddBreakpoint @ 0x140918BE4 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140918E64 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140918EC8 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140918F7C (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x14091904C (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x14091910C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409189A8 (KdpCopyMemoryChunks.c)
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
