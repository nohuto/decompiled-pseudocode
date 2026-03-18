/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C025BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00CE3D8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00CE480 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rdx
  int v8; // eax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    MDCOBJ::MDCOBJ((MDCOBJ *)v9, a1);
    v5 = v9[0];
    if ( v9[0] )
    {
      v6 = 1;
      v10 = *(_QWORD *)(v9[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 104LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v10, v4);
        v8 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v10, v7);
      }
      else
      {
        *a2 = 0;
        v8 = 0;
      }
      a2[1] = v8;
      if ( v5 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v9);
    }
    else
    {
      EngSetLastError(6u);
      return 0;
    }
    return v6;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
