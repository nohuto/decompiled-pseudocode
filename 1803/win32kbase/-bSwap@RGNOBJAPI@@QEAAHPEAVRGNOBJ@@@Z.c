/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024040
 * Callers:
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0023EB0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0023F60 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     HmgReplaceObject @ 0x1C00247E0 (HmgReplaceObject.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(struct OBJECT **this, struct OBJECT **a2)
{
  if ( !(unsigned int)HmgReplaceObject(*this, *a2) )
    return 0LL;
  RGNOBJ::vSwap((RGNOBJ *)this, (struct RGNOBJ *)a2);
  return 1LL;
}
