/*
 * XREFs of ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0022014
 * Callers:
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021E60 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022E70 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0027E90 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C0123094 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall RECHMGRCREATE(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrStacks )
  {
    if ( gpentHmgrStacks )
      RECSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}
