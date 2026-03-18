/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C00E61E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00B53CC (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C026B358 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // eax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  if ( gpBmpDev || gpRedirDev )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v6 = v2;
    if ( v2 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5, (struct PDEVOBJ *)&v6);
      v3 = *(_DWORD *)(v2 + 40);
      if ( (v3 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2120) & 0x8000) == 0
        || (v3 & 0x20000) == 0
        && (*(_DWORD *)(v2 + 2120) & 0x8000) != 0
        && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
        && *(_QWORD *)(a1 + 24) )
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
        return;
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
    }
    else
    {
      if ( (struct SURFACE *)a1 == SURFACE::pdibDefault )
        return;
      if ( (unsigned int)SURFACE::bStockSurface((SURFACE *)a1) )
        return;
      v4 = *(_DWORD *)(a1 + 112);
      if ( (v4 & 0x40000) != 0 || (v4 & 0x4000000) == 0 )
        return;
    }
    vAccNotify((struct _SURFOBJ *)(a1 + 24), 8u, 0LL);
  }
}
