/*
 * XREFs of ExInitializePoolDescriptor @ 0x140740044
 * Callers:
 *     MiInitializeSessionPool @ 0x14073FFF0 (MiInitializeSessionPool.c)
 *     InitializePool @ 0x1409EE8D0 (InitializePool.c)
 *     InitializePagedPool @ 0x1409EED38 (InitializePagedPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializePoolDescriptor(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v6; // rcx

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 192) = a3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( a2 == 33 && !ExpSessionPoolTrackTable )
  {
    ExpSessionPoolTrackTable = qword_1404659D8 + 4096;
    v4 = 292LL;
    if ( _BitScanReverse64((unsigned __int64 *)&v6, 0x124uLL) )
      v4 = 1LL << v6;
    ExpSessionPoolTrackTableSize = v4;
    result = v4 - 1;
    ExpSessionPoolTrackTableMask = result;
  }
  return result;
}
