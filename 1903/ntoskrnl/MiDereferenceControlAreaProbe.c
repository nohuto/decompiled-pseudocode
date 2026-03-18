/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x1400DF7D0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x1402BA318 (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
