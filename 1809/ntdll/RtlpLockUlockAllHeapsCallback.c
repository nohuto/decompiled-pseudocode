/*
 * XREFs of RtlpLockUlockAllHeapsCallback @ 0x18006D260
 * Callers:
 *     <none>
 * Callees:
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 */

__int64 __fastcall RtlpLockUlockAllHeapsCallback(void *a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap(a1);
  else
    RtlUnlockHeap(a1);
  return 0LL;
}
