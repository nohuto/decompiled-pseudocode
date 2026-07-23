/*
 * XREFs of AlpcpDestroyPort @ 0x14061A068
 * Callers:
 *     AlpcpDeletePort @ 0x140617AB0 (AlpcpDeletePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  void *v4; // rdx

  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    v2 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (__int64)v3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v4 = (void *)a1[31];
    if ( v4 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v4);
  }
}
