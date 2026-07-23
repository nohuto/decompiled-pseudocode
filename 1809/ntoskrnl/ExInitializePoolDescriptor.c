/*
 * XREFs of ExInitializePoolDescriptor @ 0x140716CEC
 * Callers:
 *     MiInitializeSessionPool @ 0x140716924 (MiInitializeSessionPool.c)
 *     InitializePool @ 0x1409B7DF8 (InitializePool.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400063D0 (KeInitializeGuardedMutex.c)
 */

void __fastcall ExInitializePoolDescriptor(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rax
  struct _FAST_MUTEX *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rcx

  *(_DWORD *)a1 = a2;
  v3 = (_QWORD *)(a1 + 320);
  *(_DWORD *)(a1 + 196) = a2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 192) = a3;
  while ( (unsigned __int64)v3 < a1 + 4416 )
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
  }
  v5 = (struct _FAST_MUTEX *)(a1 + 8);
  if ( (a2 & 1) != 0 )
    KeInitializeGuardedMutex(v5);
  else
    *(_QWORD *)&v5->Count = 0LL;
  if ( a2 == 33 && !ExpSessionPoolLookaside )
  {
    ExpSessionPoolLookaside = qword_14043B080 + 256;
    ExpSessionPoolTrackTable = qword_14043B080 + 12288;
    v6 = 146LL;
    if ( _BitScanReverse64((unsigned __int64 *)&v8, 0x92uLL) )
      v6 = 1LL << v8;
    ExpSessionPoolTrackTableSize = v6;
    ExpSessionPoolTrackTableMask = v6 - 1;
    ExpSessionPoolSmallLists = 21;
  }
}
