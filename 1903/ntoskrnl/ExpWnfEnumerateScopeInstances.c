/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1406EBF60
 * Callers:
 *     NtDeleteWnfStateName @ 0x14063F860 (NtDeleteWnfStateName.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  _QWORD *ServerSiloGlobals; // rax
  __int64 v6; // rdx
  unsigned __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF **v8; // r14
  PRTL_BALANCED_NODE v9; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx
  __int64 HostSilo; // rax

  v2 = a1;
  v4 = 0LL;
  if ( a1 == 4 )
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals = PsGetServerSiloGlobals(HostSilo);
  }
  else
  {
    ServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  v6 = ServerSiloGlobals[113];
  if ( !v6 )
    return 0LL;
  v7 = (unsigned __int64 *)(v6 + 8 * (3 * v2 + 3));
  v8 = (struct _EX_RUNDOWN_REF **)(v6 + 8 * (3 * v2 + 4));
  v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  if ( a2 )
    Count = (struct _EX_RUNDOWN_REF *)a2[4].Count;
  else
    Count = 0LL;
  if ( !Count )
    Count = *v8;
  while ( Count != (struct _EX_RUNDOWN_REF *)v8 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection_0(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 1);
  return v4;
}
