/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C02513F4
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C0295CB0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C0114DCC (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1, __int64 a2)
{
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  int RealizedBrush; // eax
  __int64 v6; // rdx
  char *v7; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  result = a1->pvRbrush;
  if ( result )
    return result;
  if ( bUMPDSecurityGateEx((__int64)a1, a2) )
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
  RealizedBrush = bGetRealizedBrush(
                    *(struct BRUSH **)&a1[4].flColorType,
                    (struct EBRUSHOBJ *)a1,
                    *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)a1[3].pvRbrush + 6) + 2784LL));
  v7 = (char *)a1->pvRbrush;
  if ( !RealizedBrush )
  {
    if ( v7 )
    {
      EngFreeUserMem(v7 - 16);
      a1->pvRbrush = 0LL;
    }
    return 0LL;
  }
  if ( !v7 )
    return 0LL;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 72) )
    vTryToCacheRealization(
      (struct EBRUSHOBJ *)a1,
      (struct RBRUSH *)((char *)a1->pvRbrush - 16),
      *(struct BRUSH **)&a1[4].flColorType,
      0);
  return a1->pvRbrush;
}
