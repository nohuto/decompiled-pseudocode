/*
 * XREFs of AlpcRegisterLogRoutine @ 0x14088627C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E8458 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  void (__fastcall **i)(__int64, int); // rax
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x634C6C41u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = EtwpTraceALPC;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (void (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (void (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (void (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_11;
    }
  }
  v5 = off_140427CB0[0];
  if ( *(PVOID **)off_140427CB0[0] != &AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v2 = &AlpcpLogCallbackListHead;
  v2[1] = v5;
  *v5 = v2;
  off_140427CB0[0] = v2;
  AlpcpLogEnabled = 1;
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v1;
}
