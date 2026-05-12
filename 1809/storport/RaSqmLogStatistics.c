/*
 * XREFs of RaSqmLogStatistics @ 0x1C003C7C0
 * Callers:
 *     RaSqmTimerDpc @ 0x1C003C880 (RaSqmTimerDpc.c)
 * Callees:
 *     RaSqmLogAdapterStatistics @ 0x1C003C3D8 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C003C6EC (RaSqmLogScsiPassthroughStatistics.c)
 */

void RaSqmLogStatistics()
{
  __int64 v0; // rbx

  if ( g_RaidSQMInitialized && _InterlockedExchange(&g_RaidSQMLogInProgress, 1) != 1 )
  {
    v0 = MEMORY[0xFFFFF78000000320];
    if ( KeQueryTimeIncrement() * (v0 - g_RaidSQMLastLogTick) >= 600000000 )
    {
      RaSqmLogScsiPassthroughStatistics();
      RaSqmLogAdapterStatistics();
      g_RaidSQMLastLogTick = v0;
    }
    KeSetCoalescableTimer(&g_RaidSQMTimer, (LARGE_INTEGER)-858000000000LL, 0, 0x493E0u, &g_RaidSQMTimerDpc);
    _InterlockedExchange(&g_RaidSQMLogInProgress, 0);
  }
}
