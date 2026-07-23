/*
 * XREFs of PopPolicyWorkerNotify @ 0x1405B11A0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140130670 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 PopPolicyWorkerNotify()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  __int64 (__fastcall **v2)(); // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v1 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v1 )
      break;
    do
    {
      _BitScanForward(&v0, v1);
      v1 &= ~(1 << v0);
      v2 = &PopNotifyWork[2 * v0];
      if ( *v2 )
      {
        ((void (__fastcall *)(_QWORD))*v2)(*((unsigned int *)v2 + 2));
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
    }
    while ( v1 );
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
