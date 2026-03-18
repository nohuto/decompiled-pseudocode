/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C02879A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C009DF28 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C009DF64 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    v5 = v10[0];
    if ( v10[0] )
    {
      v6 = 1;
      v11 = *(_QWORD *)(v10[0] + 48);
      if ( (*(_DWORD *)(*(_QWORD *)(v10[0] + 976) + 236LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v11, v10[0], v4);
        v9 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v11, v7, v8);
        v5 = v10[0];
      }
      else
      {
        *a2 = 0;
        v9 = 0;
      }
      a2[1] = v9;
    }
    else
    {
      EngSetLastError(6u);
      v5 = v10[0];
      v6 = 0;
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
    return v6;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
