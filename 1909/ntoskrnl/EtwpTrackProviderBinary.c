/*
 * XREFs of EtwpTrackProviderBinary @ 0x1406EE98C
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     EtwpProviderArrivalCallback @ 0x140736780 (EtwpProviderArrivalCallback.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(__int64 a1, HANDLE *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebp
  _QWORD *v5; // rbx
  volatile signed __int16 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // r14
  __int64 v18; // rcx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(*a2, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    v5 = Object;
    if ( *(_QWORD *)(*((_QWORD *)Object + 4) + 400LL) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v5[4] + 400LL) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(v5[4] + 400LL) + 416LL) = KeGetCurrentThread();
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5[4] + 408LL, 0LL);
    v6 = (volatile signed __int16 *)Object;
    *(_QWORD *)(v5[4] + 416LL) = KeGetCurrentThread();
    if ( (v6[49] & 0x20) != 0 )
    {
      v4 = 0;
    }
    else
    {
      _InterlockedOr16(v6 + 49, 0x20u);
      v6 = (volatile signed __int16 *)Object;
      v7 = 0LL;
      v8 = 8LL;
      do
      {
        v9 = v5[4];
        if ( *(_DWORD *)(v7 + v9 + 128) )
        {
          v10 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v7 + v9 + 134), 0);
          v12 = v10;
          if ( v10 )
          {
            LOBYTE(v11) = 1;
            EtwpProviderArrivalCallback(v10, v11, v6);
            EtwpReleaseLoggerContext(v12, 0);
          }
        }
        v13 = v5[4];
        v14 = *(_QWORD *)(v13 + 400);
        if ( v14 )
        {
          if ( *(_DWORD *)(v7 + v14 + 128) )
          {
            v15 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v7 + v13 + 134), 0);
            v17 = v15;
            if ( v15 )
            {
              LOBYTE(v16) = 1;
              EtwpProviderArrivalCallback(v15, v16, v6);
              EtwpReleaseLoggerContext(v17, 0);
            }
          }
        }
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(v5[4] + 416LL) = 0LL;
    ExReleasePushLockEx(v5[4] + 408LL, 0LL);
    KeLeaveCriticalRegion();
    v18 = *(_QWORD *)(v5[4] + 400LL);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 416) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v5[4] + 400LL) + 408LL, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject((PVOID)v6);
    return v4;
  }
  return result;
}
