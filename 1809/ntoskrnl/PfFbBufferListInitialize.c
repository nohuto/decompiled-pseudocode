/*
 * XREFs of PfFbBufferListInitialize @ 0x1407531A4
 * Callers:
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall PfFbBufferListInitialize(PKSPIN_LOCK SpinLock, __int64 a2, char a3)
{
  unsigned int v6; // eax
  __int128 v7; // xmm1
  KSPIN_LOCK v8; // xmm0_8

  if ( a3 )
  {
    SpinLock[13] = 0LL;
    *((_DWORD *)SpinLock + 28) = 0;
  }
  else
  {
    memset(SpinLock, 0, 0x80uLL);
  }
  InitializeSListHead((PSLIST_HEADER)SpinLock + 1);
  InitializeSListHead((PSLIST_HEADER)SpinLock + 2);
  InitializeSListHead((PSLIST_HEADER)SpinLock + 3);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(_OWORD *)(a2 + 16);
  *((_OWORD *)SpinLock + 4) = *(_OWORD *)a2;
  if ( v6 < 0x30 )
    v6 = 48;
  v8 = *(_QWORD *)(a2 + 32);
  *((_OWORD *)SpinLock + 5) = v7;
  SpinLock[12] = v8;
  *((_DWORD *)SpinLock + 19) = v6;
  if ( a3 )
    _InterlockedExchange64((volatile __int64 *)SpinLock, 0LL);
  else
    ExInitializePushLock(SpinLock);
}
