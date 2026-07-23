/*
 * XREFs of EtwpCovSampLookasidePop @ 0x140335C08
 * Callers:
 *     EtwpCovSampCaptureBufferGet @ 0x140334D64 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140335558 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140335F98 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140335880 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

_SLIST_ENTRY *__fastcall EtwpCovSampLookasidePop(__int64 a1, __int64 a2)
{
  _SLIST_ENTRY *v4; // rdx

  if ( *(_WORD *)a2 )
    v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a2);
  else
    v4 = 0LL;
  if ( !v4 )
  {
    if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 700)) >= 0x40 )
      {
        *(_DWORD *)(a1 + 700) = MEMORY[0xFFFFF78000000320];
        KeInsertQueueDpc((PRKDPC)(a1 + 608), 0LL, 0LL);
      }
    }
    return 0LL;
  }
  if ( !*(_DWORD *)(a2 + 40) )
  {
    EtwpCovSampCaptureReleaseToLookaside(a1, a2, v4);
    return 0LL;
  }
  v4->Next = (_SLIST_ENTRY *)6941;
  return v4;
}
