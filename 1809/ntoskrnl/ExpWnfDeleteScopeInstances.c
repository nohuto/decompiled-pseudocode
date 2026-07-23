/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x1408DC8C0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1408883D8 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x1406CD260 (ExpWnfFreeScopeInstance.c)
 */

__int64 __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  _RTL_BALANCED_NODE *v6; // rax
  _RTL_BALANCED_NODE *v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rax
  unsigned __int64 Count; // rcx

  v4 = (unsigned __int64 *)(a1 + 24 + 24LL * a2);
  v5 = a1 + 32 + 24LL * a2;
  v6 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  while ( 1 )
  {
    v8 = *(struct _EX_RUNDOWN_REF **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5
      || (Count = v8->Count, *(struct _EX_RUNDOWN_REF **)(v8->Count + 8) != v8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v5 = Count;
    *(_QWORD *)(Count + 8) = v5;
    if ( v8 == (struct _EX_RUNDOWN_REF *)v5 )
      break;
    v8->Count = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(v8 - 4, 1);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  return KeAbPostRelease((ULONG_PTR)v4);
}
