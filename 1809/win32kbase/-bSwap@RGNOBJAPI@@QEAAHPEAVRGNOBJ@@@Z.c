/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0023D60
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C001E4E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0070AF0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0024550 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     HmgReplaceObject @ 0x1C0025270 (HmgReplaceObject.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(struct OBJECT **this, struct OBJECT **a2)
{
  if ( !(unsigned int)HmgReplaceObject(*this, *a2) )
    return 0LL;
  RGNOBJ::vSwap((RGNOBJ *)this, (struct RGNOBJ *)a2);
  return 1LL;
}
