/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C001E314
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C00F90F4 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0020280 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  ENTRYOBJ *EntryFromObject; // rax

  v2 = 0;
  if ( a1 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
    if ( EntryFromObject )
      return (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, a2) != 0;
  }
  return v2;
}
