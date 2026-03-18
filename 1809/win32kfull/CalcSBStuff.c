/*
 * XREFs of CalcSBStuff @ 0x1C0020010
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C001FD30 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C0106138 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02286D4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02288AC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228B64 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C0020124 (CalcSBStuff2.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     _InitPwSB @ 0x1C002150C (_InitPwSB.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // eax
  __int64 result; // rax
  bool v13; // zf
  int v14; // esi
  unsigned int v15; // eax
  unsigned int DpiForSystem; // eax
  int v17; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+24h] [rbp-1Ch]
  int v19; // [rsp+28h] [rbp-18h]
  int v20; // [rsp+2Ch] [rbp-14h]
  _DWORD v21[2]; // [rsp+30h] [rbp-10h] BYREF
  int v22; // [rsp+38h] [rbp-8h]
  int v23; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v21, 33LL);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 26) & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - v22;
    v9 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - v21[0];
  }
  else
  {
    v9 = v22;
    v10 = v21[0];
  }
  if ( a3 )
  {
    LOBYTE(v7) = *(_BYTE *)(v8 + 16);
    if ( (*(_BYTE *)(v8 + 25) & 0x40) != 0 )
    {
      v17 = v10;
      v19 = v10;
      if ( (v7 & 2) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v7, v6);
        v17 = v10 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v17 = v9;
      v19 = v9;
      if ( (v7 & 2) != 0 )
      {
        v11 = GetDpiForSystem(v7, v6);
        v19 = v9 + GetDpiDependentMetric(0LL, v11);
      }
    }
    v18 = v21[1];
    v20 = v23;
  }
  else
  {
    v13 = (*(_BYTE *)(v8 + 16) & 4) == 0;
    v14 = v23;
    v18 = v23;
    v20 = v23;
    if ( !v13 )
    {
      v15 = ((__int64 (*)(void))GetDpiForSystem)();
      v20 = v14 + GetDpiDependentMetric(1LL, v15);
    }
    v17 = v10;
    v19 = v9;
  }
  result = InitPwSB(a1);
  if ( result )
    return CalcSBStuff2(a2, &v17, *(_QWORD *)(a1 + 128) + (a3 != 0 ? 20LL : 4LL), a3);
  return result;
}
