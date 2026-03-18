/*
 * XREFs of ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002537C
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0021480 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 * Callees:
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00F8E70 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall RECALTLOCK(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrAltStacks )
  {
    if ( gpentHmgrAltStacks )
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000, a2);
  }
}
