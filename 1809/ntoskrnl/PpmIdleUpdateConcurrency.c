/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x1402D55A8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmIdleInstallConcurrency @ 0x1402D4E90 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x1402D51D0 (PpmIdleRemoveConcurrency.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 */

void __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  KSPIN_LOCK v8; // rax
  __int64 v9; // r9
  KSPIN_LOCK v10; // rcx
  int v11; // ecx
  __int16 v12; // [rsp+30h] [rbp-8h]

  _disable();
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  v9 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v8 )
  {
    SpinLock[2] = a2;
    v10 = a2 - v8;
    if ( a4 )
    {
      SpinLock[3] += v10;
      SpinLock[v9 + 4] += v10;
    }
  }
  v11 = v9 + 1;
  if ( a3 )
    v11 = v9 - 1;
  *((_DWORD *)SpinLock + 3) = v11;
  KxReleaseSpinLock(SpinLock);
  if ( (v12 & 0x200) != 0 )
    _enable();
}
