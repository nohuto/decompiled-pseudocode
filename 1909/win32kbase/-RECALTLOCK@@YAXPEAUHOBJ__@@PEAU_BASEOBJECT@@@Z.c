/*
 * XREFs of ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0076818
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00208A0 (INC_SHARE_REF_CNT.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0021470 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022E70 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C0122F38 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall RECALTLOCK(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrAltStacks )
  {
    if ( gpentHmgrAltStacks )
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000, a2);
  }
}
