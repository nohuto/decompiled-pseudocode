/*
 * XREFs of ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0043498
 * Callers:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00433E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 * Callees:
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00F8FCC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall RECHMGRCREATE(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( gbGdiHmgrStacks )
  {
    if ( gpentHmgrStacks )
      RECSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}
