/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x14064CA20
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x14064C230 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406D9460 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1406DB020 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1406EA5F0 (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  __int64 v8; // rax

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v8 < *(_DWORD *)(a1 + 8) && *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) == a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v3;
}
