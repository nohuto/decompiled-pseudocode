/*
 * XREFs of EtwpTrackProviderBinary @ 0x14071E72C
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
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
  unsigned int *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // rax
  unsigned int *v15; // r14
  __int64 v16; // rcx
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
          v11 = v10;
          if ( v10 )
          {
            EtwpProviderArrivalCallback((__int64)v10, 1, (__int64)v6);
            EtwpReleaseLoggerContext(v11, 0);
          }
        }
        v12 = v5[4];
        v13 = *(_QWORD *)(v12 + 400);
        if ( v13 )
        {
          if ( *(_DWORD *)(v7 + v13 + 128) )
          {
            v14 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v7 + v12 + 134), 0);
            v15 = v14;
            if ( v14 )
            {
              EtwpProviderArrivalCallback((__int64)v14, 1, (__int64)v6);
              EtwpReleaseLoggerContext(v15, 0);
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
    v16 = *(_QWORD *)(v5[4] + 400LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 416) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v5[4] + 400LL) + 408LL, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject((PVOID)v6);
    return v4;
  }
  return result;
}
