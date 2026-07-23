/*
 * XREFs of ExpWnfDeleteScopeById @ 0x140671AC8
 * Callers:
 *     ExWnfExitProcess @ 0x1406712B4 (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     ExpWnfFindScopeInstance @ 0x14064488C (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1406EC068 (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeById(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rdi
  _QWORD *ScopeInstance; // rax
  void *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v4 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = CurrentServerSiloGlobals[113];
  if ( v7 )
  {
    v8 = v7 + 24 * v4;
    v9 = (unsigned __int64 *)(v7 + 8 * (3 * v4 + 3));
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance((_QWORD **)(v8 + 32), a2, a3);
    v13 = ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = ScopeInstance + 4;
      v15 = ScopeInstance[4];
      v16 = (_QWORD *)ScopeInstance[5];
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    LOBYTE(CurrentServerSiloGlobals) = KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
      LOBYTE(CurrentServerSiloGlobals) = ExpWnfFreeScopeInstance(v13);
  }
  return (char)CurrentServerSiloGlobals;
}
