/*
 * XREFs of PfSnQueueEnablePrefetcherTimer @ 0x140764844
 * Callers:
 *     PfSnBeginBootPhase @ 0x14057013C (PfSnBeginBootPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140570228 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnQueueEnablePrefetcherTimer(__int64 *a1)
{
  struct _KDPC *EnablePrefetcherTimer; // rax
  unsigned int v3; // ebx

  EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(1u);
  v3 = 0;
  if ( EnablePrefetcherTimer )
    KiSetTimerEx((__int64)EnablePrefetcherTimer, *a1, 0, 0, (__int64)&EnablePrefetcherTimer[1]);
  else
    return (unsigned int)-1073741670;
  return v3;
}
