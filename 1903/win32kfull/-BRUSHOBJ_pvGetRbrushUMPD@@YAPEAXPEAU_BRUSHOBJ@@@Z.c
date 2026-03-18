/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C026AD20
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AAF30 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00F5330 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  result = a1->pvRbrush;
  if ( !result )
  {
    if ( bUMPDSecurityGateEx((__int64)a1, a2, a3, a4) )
    {
      pvRbrush = a1[3].pvRbrush;
      if ( !pvRbrush )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg() == NULL\n",
            404LL);
        return 0LL;
      }
      if ( !pvRbrush[6] )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg()->hdev() == NULL\n",
            410LL);
        return 0LL;
      }
    }
    if ( !(unsigned int)bGetRealizedBrush(
                          *(struct BRUSH **)&a1[4].flColorType,
                          (struct EBRUSHOBJ *)a1,
                          *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)a1[3].pvRbrush + 6) + 2784LL)) )
    {
      v10 = (char *)a1->pvRbrush;
      if ( v10 )
      {
        EngFreeUserMem(v10 - 16);
        a1->pvRbrush = 0LL;
      }
      return 0LL;
    }
    if ( !a1->pvRbrush )
      return 0LL;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9) + 72) )
      vTryToCacheRealization(
        (struct EBRUSHOBJ *)a1,
        (struct RBRUSH *)((char *)a1->pvRbrush - 16),
        *(struct BRUSH **)&a1[4].flColorType,
        0);
    return a1->pvRbrush;
  }
  return result;
}
