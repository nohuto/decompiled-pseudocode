/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18004D064
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // r8d
  _QWORD *v3; // rbx
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rax
  unsigned __int64 v9; // r10
  _OWORD *v10; // rcx
  __int128 *v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx

  v2 = (*((_DWORD *)this + 5394) + 1) % 6u;
  *((_DWORD *)this + 5394) = v2;
  v3 = (_QWORD *)((char *)this + 1352 * (int)v2 + 13464);
  memset_0(v3, 0, 0x548uLL);
  v4 = 0;
  v5 = 0;
  for ( *v3 = *(_QWORD *)(*((_QWORD *)this + 1680) + 368LL);
        v5 < (unsigned int)((__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8);
        ++*((_DWORD *)v3 + 274) )
  {
    if ( v5 >= 2 )
      break;
    v7 = 68LL * v5;
    v8 = 2LL;
    v9 = (unsigned __int64)v5 << 8;
    v10 = &v3[v7 + 1];
    v11 = (__int128 *)(v9 + *((_QWORD *)this + 1054));
    do
    {
      v12 = *v11;
      v11 += 8;
      *v10 = v12;
      v10 += 8;
      *(v10 - 7) = *(v11 - 7);
      *(v10 - 6) = *(v11 - 6);
      *(v10 - 5) = *(v11 - 5);
      *(v10 - 4) = *(v11 - 4);
      *(v10 - 3) = *(v11 - 3);
      *(v10 - 2) = *(v11 - 2);
      *(v10 - 1) = *(v11 - 1);
      --v8;
    }
    while ( v8 );
    v3[v7 + 65] = &v3[v7 + 1];
    ++v5;
    LODWORD(v3[v7 + 67]) = *(_DWORD *)(*(_QWORD *)(v9 + *((_QWORD *)this + 1054) + 24) + 76LL);
  }
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 1569);
    if ( v4 >= (unsigned int)((*((_QWORD *)this + 1570) - v6) / 120) || v4 >= 2 )
      break;
    v13 = 15LL * v4;
    *(_OWORD *)&v3[v13 + 138] = *(_OWORD *)(v13 * 8 + v6);
    *(_OWORD *)&v3[v13 + 140] = *(_OWORD *)(v13 * 8 + v6 + 16);
    *(_OWORD *)&v3[v13 + 142] = *(_OWORD *)(v13 * 8 + v6 + 32);
    *(_OWORD *)&v3[v13 + 144] = *(_OWORD *)(v13 * 8 + v6 + 48);
    *(_OWORD *)&v3[v13 + 146] = *(_OWORD *)(v13 * 8 + v6 + 64);
    *(_OWORD *)&v3[v13 + 148] = *(_OWORD *)(v13 * 8 + v6 + 80);
    *(_OWORD *)&v3[v13 + 150] = *(_OWORD *)(v13 * 8 + v6 + 96);
    v3[v13 + 152] = *(_QWORD *)(v13 * 8 + v6 + 112);
    ++*((_DWORD *)v3 + 336);
    ++v4;
  }
  *((_BYTE *)v3 + 1348) = *((_BYTE *)this + 13418);
}
