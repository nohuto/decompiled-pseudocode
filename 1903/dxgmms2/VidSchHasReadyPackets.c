/*
 * XREFs of VidSchHasReadyPackets @ 0x1C0032EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchHasReadyPackets(__int64 a1)
{
  char v2; // bl
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v5; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v2 = 0;
  if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 424, 0LL, *(unsigned int *)(a1 + 72)) )
  {
    for ( i = *(_QWORD **)(a1 + 280); i != (_QWORD *)(a1 + 280); i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 4); j != i - 4; j = (_QWORD *)*j )
      {
        v5 = j[79];
        if ( (_QWORD *)v5 != j + 79 && (*(_DWORD *)(v5 + 16) != 4 || (*(_DWORD *)(v5 + 240) & 1) != 0) )
          goto LABEL_12;
      }
    }
  }
  else
  {
LABEL_12:
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
