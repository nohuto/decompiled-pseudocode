/*
 * XREFs of ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18017153C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x180171650 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

void __fastcall CDrawingContext::SetHeatMapForCurrentNode(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  int v3; // edx
  struct CVisual *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  char v7; // al
  char v8; // cl
  __int64 v9; // rax
  int v10; // eax
  char v11; // al
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v3 = g_HeatMaps_Type;
  v4 = CurrentVisual;
  v5 = 0xFFFFFFFFLL;
  LOBYTE(v6) = 64;
  v7 = *((_BYTE *)CurrentVisual + 93);
  if ( (v7 & 0x40) != 0 && g_HeatMaps_Type != 1 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 4) + 1220LL);
    *((_BYTE *)v4 + 93) &= ~0x40u;
    v7 = *((_BYTE *)v4 + 93);
  }
  v8 = v7;
  if ( (v7 & 0x20) != 0 && v3 != 2 )
  {
    v8 = v7 & 0xDF;
    g_HeatMaps_OverdrawContentKinds = 0;
    *((_BYTE *)v4 + 93) = v7 & 0xDF;
  }
  if ( (v8 & 8) != 0 && v3 != 3 )
  {
    *((_BYTE *)v4 + 93) = v8 & 0xE7;
    --*(_DWORD *)(*((_QWORD *)this + 4) + 1216LL);
  }
  if ( v3 == 1 )
  {
    if ( (*((_BYTE *)v4 + 93) & 0x40) != 0 )
      return;
    v9 = *((_QWORD *)this + 4);
    v13 = 0;
    v12 = _xmm;
    ++*(_DWORD *)(v9 + 1220);
    *((_BYTE *)v4 + 93) |= 0x40u;
    ((void (__fastcall *)(struct CVisual *, __int128 *, __int64, __int64))CVisual::SetHeatMapProperties)(
      v4,
      &v12,
      v6,
      0xFFFFFFFFLL);
    v3 = g_HeatMaps_Type;
  }
  if ( v3 == 2 )
  {
    v10 = g_HeatMaps_OverdrawContentKinds;
    *((_BYTE *)v4 + 93) |= 0x20u;
    v12 = _xmm;
    v13 = v10;
    ((void (__fastcall *)(struct CVisual *, __int128 *, __int64, __int64))CVisual::SetHeatMapProperties)(
      v4,
      &v12,
      v6,
      v5);
    v3 = g_HeatMaps_Type;
  }
  if ( v3 == 3 )
  {
    v11 = *((_BYTE *)v4 + 93);
    if ( (v11 & 0x10) == 0 )
    {
      *((_BYTE *)v4 + 93) = v11 | 0x18;
      ++*(_DWORD *)(*((_QWORD *)this + 4) + 1216LL);
    }
  }
}
