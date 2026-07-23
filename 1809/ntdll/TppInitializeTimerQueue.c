/*
 * XREFs of TppInitializeTimerQueue @ 0x1800301C4
 * Callers:
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 * Callees:
 *     TppInitializeTimerSubQueue @ 0x1800300B8 (TppInitializeTimerSubQueue.c)
 *     TppDestroyTimerSubQueue @ 0x180082BAC (TppDestroyTimerSubQueue.c)
 */

__int64 __fastcall TppInitializeTimerQueue(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // ebx

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  v4 = TppInitializeTimerSubQueue(a1 + 8, a2, 1u);
  if ( v4 >= 0 )
  {
    v4 = TppInitializeTimerSubQueue(a1 + 128, a2, 0);
    if ( v4 < 0 )
      TppDestroyTimerSubQueue(a1 + 8);
  }
  return (unsigned int)v4;
}
