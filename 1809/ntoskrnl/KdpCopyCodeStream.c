/*
 * XREFs of KdpCopyCodeStream @ 0x1409198A8
 * Callers:
 *     KdpAddBreakpoint @ 0x140919BE4 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140919E64 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140919EC8 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140919F7C (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x14091A04C (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x14091A10C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
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
