/*
 * XREFs of imp_WdfCollectionGetFirstItem @ 0x1C0061780
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetFirstItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r8
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *Blink; // rbx
  __int16 v6; // cx
  unsigned __int64 v7; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  FxNonPagedObject::Lock(pCollection, &irql, v2);
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    Blink = 0LL;
  else
    Blink = Flink[-1].Blink;
  FxNonPagedObject::Unlock(pCollection, irql, v3);
  if ( !Blink )
    return 0LL;
  v6 = WORD1(Blink->Blink);
  v7 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v6 )
    return 0LL;
  return v7;
}
