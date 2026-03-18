/*
 * XREFs of InitQEntryLookaside @ 0x1C02670D0
 * Callers:
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C005D4D0 (Win32AllocPagedLookasideList.c)
 */

__int64 InitQEntryLookaside()
{
  QEntryLookaside = Win32AllocPagedLookasideList(168LL, 0x616C7355u, 0x6D717355u, 0x10u);
  if ( QEntryLookaside
    && (QLookaside = (void *)Win32AllocPagedLookasideList(496LL, 0x616C7355u, 0x75717355u, 0x10u)) != 0LL )
  {
    return 0LL;
  }
  else
  {
    return 3221225495LL;
  }
}
