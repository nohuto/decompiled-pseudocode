/*
 * XREFs of CalcSBStuff @ 0x1C004B584
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C004BAF8 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C00EA614 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0240AD8 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240D08 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240FE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     CalcSBStuff2 @ 0x1C004B35C (CalcSBStuff2.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     _InitPwSB @ 0x1C004B6A4 (_InitPwSB.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 */

int __fastcall CalcSBStuff(__int64 a1, int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  int v11; // edi
  unsigned int v12; // eax
  __int64 inited; // rax
  bool v14; // zf
  int v15; // esi
  unsigned int v16; // eax
  unsigned int DpiForSystem; // eax
  int v19; // [rsp+20h] [rbp-20h] BYREF
  int v20; // [rsp+24h] [rbp-1Ch]
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]

  v23 = 0LL;
  v24 = 0LL;
  GetRect(a1, &v23, 33LL);
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
  {
    v11 = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 88) - v24;
    v10 = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 88) - v23;
  }
  else
  {
    v10 = v24;
    v11 = v23;
  }
  if ( a3 )
  {
    LOBYTE(v7) = *(_BYTE *)(v9 + 16) & 2;
    if ( (*(_BYTE *)(v9 + 25) & 0x40) != 0 )
    {
      v19 = v11;
      v21 = v11;
      if ( (_BYTE)v7 )
      {
        DpiForSystem = GetDpiForSystem(v7, v6, v8);
        v19 = v11 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v19 = v10;
      v21 = v10;
      if ( (_BYTE)v7 )
      {
        v12 = GetDpiForSystem(v7, v6, v8);
        v21 = v10 + GetDpiDependentMetric(0LL, v12);
      }
    }
    v20 = HIDWORD(v23);
    v22 = HIDWORD(v24);
  }
  else
  {
    v14 = (*(_BYTE *)(v9 + 16) & 4) == 0;
    v15 = HIDWORD(v24);
    v20 = HIDWORD(v24);
    v22 = HIDWORD(v24);
    if ( !v14 )
    {
      v16 = GetDpiForSystem(v7, v6, v8);
      v22 = v15 + GetDpiDependentMetric(1LL, v16);
    }
    v19 = v11;
    v21 = v10;
  }
  inited = InitPwSB(a1);
  if ( inited )
    LODWORD(inited) = CalcSBStuff2(a2, &v19, (int *)(*(_QWORD *)(a1 + 152) + (a3 != 0 ? 20LL : 4LL)), a3);
  return inited;
}
