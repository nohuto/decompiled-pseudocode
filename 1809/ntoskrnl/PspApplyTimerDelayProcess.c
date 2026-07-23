/*
 * XREFs of PspApplyTimerDelayProcess @ 0x1402EA344
 * Callers:
 *     PspTimerDelayProcess @ 0x1402EAB10 (PspTimerDelayProcess.c)
 *     PspTimerDelayWorkerRoutine @ 0x1402EAB80 (PspTimerDelayWorkerRoutine.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1402EA884 (PspSetProcessTimerDelayForKTimers.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1402EAA54 (PspSetProcessTimerDelayForWin32.c)
 */

__int64 __fastcall PspApplyTimerDelayProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v3; // esi
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rax
  __int64 v10; // rtt
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 4u);
  v5 = 0LL;
  if ( a2 )
  {
    v6 = 0;
    v5 = (*a2 / 0x2710u) & 0x3FFFFFFF | ((unsigned __int64)((a2[1] / 0x2710u) & 0x3FFFFFFF) << 30);
  }
  else
  {
    v6 = 1;
  }
  v7 = *(_QWORD *)(a1 + 1984);
  if ( v6 )
  {
    if ( ((v7 | (v7 >> 30)) & 0x3FFFFFFF) == 0 )
      goto LABEL_22;
    v5 = v7 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( (((unsigned int)v5 ^ (unsigned int)v7) & 0x3FFFFFFF) == 0
         && (v7 & 0xFFFFFFFC0000000LL) == (v5 & 0xFFFFFFFFC0000000uLL) )
  {
    goto LABEL_22;
  }
  v8 = ((unsigned __int64)v6 << 61) | 0x8000000000000000uLL | v5;
  v10 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1984), v8, v7 & 0x7FFFFFFFFFFFFFFFLL);
  if ( v10 != v9 )
  {
    do
    {
      v11 = v9;
      if ( v9 < 0 )
      {
        if ( v6 )
        {
          v8 = v8 & 0xF000000000000000uLL | v9 & 0xFFFFFFFFFFFFFFFLL;
        }
        else if ( (v9 & 0x2000000000000000LL) == 0 )
        {
          goto LABEL_22;
        }
        v8 |= 0x4000000000000000uLL;
      }
      else
      {
        v8 &= ~0x4000000000000000uLL;
        if ( v6 )
          v8 ^= (v8 ^ v9) & 0xFFFFFFFFFFFFFFFLL;
      }
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1984), v8, v9);
    }
    while ( v9 != v11 );
  }
  if ( (v8 & 0x4000000000000000LL) == 0 )
  {
    do
    {
      v12 = v8;
      PspSetProcessTimerDelayForKTimers(a1);
      v3 = PspSetProcessTimerDelayForWin32(a1);
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1984), v8 & 0x1FFFFFFFFFFFFFFFLL, v8);
    }
    while ( v12 != v8 );
  }
LABEL_22:
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v3;
}
