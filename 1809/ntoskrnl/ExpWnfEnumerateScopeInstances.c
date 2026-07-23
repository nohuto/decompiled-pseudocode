/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1406ACD38
 * Callers:
 *     NtDeleteWnfStateName @ 0x1406AC580 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
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
