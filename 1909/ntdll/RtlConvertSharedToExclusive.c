/*
 * XREFs of RtlConvertSharedToExclusive @ 0x18005FA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x18005FCC0 (RtlAcquireResourceExclusive.c)
 *     ZwReleaseSemaphore @ 0x18009CFD0 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __cdecl RtlConvertSharedToExclusive(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  LONG v3; // ett
  LONG v4; // eax
  signed int v5; // edx
  bool v6; // zf
  LONG v7; // ecx
  int v8; // eax
  signed int NumberOfWaitingExclusive; // r8d
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive >= 0 )
  {
    if ( NumberOfActive == 1 )
    {
      while ( 1 )
      {
        v3 = NumberOfActive;
        NumberOfActive = _InterlockedCompareExchange(&Resource->NumberOfActive, -1, NumberOfActive);
        if ( v3 == NumberOfActive )
          break;
        if ( NumberOfActive != 1 )
          goto LABEL_7;
      }
      Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
LABEL_7:
      v4 = Resource->NumberOfActive;
      if ( v4 < 0 )
      {
        if ( v4 == -1 )
          Resource->ExclusiveOwnerThread = 0LL;
        if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
        {
          if ( Resource->NumberOfWaitingShared )
          {
            v7 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
            if ( v7 )
            {
              v8 = ZwReleaseSemaphore(Resource->SharedSemaphore, v7, &PreviousCount);
              if ( v8 < 0 )
                RtlRaiseStatus(v8);
            }
          }
          NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
          v10 = NumberOfWaitingExclusive == 0;
          if ( NumberOfWaitingExclusive > 0 )
          {
            do
            {
              v11 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                      NumberOfWaitingExclusive - 1,
                      NumberOfWaitingExclusive);
              if ( NumberOfWaitingExclusive == v11 )
                break;
              NumberOfWaitingExclusive = v11;
            }
            while ( v11 > 0 );
            v10 = NumberOfWaitingExclusive == 0;
          }
          if ( !v10 )
          {
            v12 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
            if ( v12 < 0 )
              RtlRaiseStatus(v12);
          }
        }
      }
      else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
      {
        v5 = Resource->NumberOfWaitingExclusive;
        v6 = v5 == 0;
        if ( v5 > 0 )
        {
          do
          {
            v13 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                    v5 - 1,
                    v5);
            if ( v5 == v13 )
              break;
            v5 = v13;
          }
          while ( v13 > 0 );
          v6 = v5 == 0;
        }
        if ( !v6 )
        {
          v14 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
          if ( v14 < 0 )
            RtlRaiseStatus(v14);
        }
      }
      RtlAcquireResourceExclusive(Resource, 1u);
    }
  }
}
