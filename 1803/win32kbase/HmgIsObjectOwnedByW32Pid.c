/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C005DC94
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C005DB80 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C002C370 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, int a2)
{
  unsigned int v2; // ebx
  ENTRYOBJ *EntryFromObject; // rax

  v2 = 0;
  if ( a1 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, a1);
    if ( EntryFromObject )
      return ENTRYOBJ::bOwnedBy(EntryFromObject, a2);
  }
  return v2;
}
