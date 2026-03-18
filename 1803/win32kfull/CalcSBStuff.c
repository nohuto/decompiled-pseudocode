/*
 * XREFs of CalcSBStuff @ 0x1C0038D48
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C003891C (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C012F578 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C01FFCCC (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0200154 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 * Callees:
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     _InitPwSB @ 0x1C0038CEC (_InitPwSB.c)
 *     CalcSBStuff2 @ 0x1C0038E5C (CalcSBStuff2.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // eax
  __int64 result; // rax
  bool v12; // zf
  int v13; // esi
  unsigned int v14; // eax
  unsigned int DpiForSystem; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  int v17; // [rsp+24h] [rbp-1Ch]
  int v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+2Ch] [rbp-14h]
  int v20[2]; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+38h] [rbp-8h]
  int v22; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v20, 33);
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 26) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 88) - v21;
    v8 = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 88) - v20[0];
  }
  else
  {
    v8 = v21;
    v9 = v20[0];
  }
  if ( a3 )
  {
    LOBYTE(v6) = *(_BYTE *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 25) & 0x40) != 0 )
    {
      v16 = v9;
      v18 = v9;
      if ( (v6 & 2) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v6);
        v16 = v9 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v16 = v8;
      v18 = v8;
      if ( (v6 & 2) != 0 )
      {
        v10 = GetDpiForSystem(v6);
        v18 = v8 + GetDpiDependentMetric(0LL, v10);
      }
    }
    v17 = v20[1];
    v19 = v22;
  }
  else
  {
    v12 = (*(_BYTE *)(v7 + 16) & 4) == 0;
    v13 = v22;
    v17 = v22;
    v19 = v22;
    if ( !v12 )
    {
      v14 = GetDpiForSystem(v6);
      v19 = v13 + GetDpiDependentMetric(1LL, v14);
    }
    v16 = v9;
    v18 = v8;
  }
  result = InitPwSB(a1);
  if ( result )
    return CalcSBStuff2(a2, &v16, *(_QWORD *)(a1 + 128) + (a3 != 0 ? 20LL : 4LL), a3);
  return result;
}
