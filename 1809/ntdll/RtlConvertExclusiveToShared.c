/*
 * XREFs of RtlConvertExclusiveToShared @ 0x18008DD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800A0440 (ZwReleaseSemaphore.c)
 */

void __cdecl RtlConvertExclusiveToShared(PRTL_RESOURCE Resource)
{
  LONG v1; // edx
  int v2; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  Resource->ExclusiveOwnerThread = 0LL;
  _InterlockedExchange(&Resource->NumberOfActive, 1);
  if ( Resource->NumberOfWaitingShared )
  {
    v1 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
    if ( v1 )
    {
      v2 = ZwReleaseSemaphore(Resource->SharedSemaphore, v1, &PreviousCount);
      if ( v2 < 0 )
        RtlRaiseStatus(v2);
    }
  }
}
