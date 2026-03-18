/*
 * XREFs of ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C001B1E4
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0021A40 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 */

void __fastcall SetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  struct _ENTRY *EntryFromObject; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
  DC::RestoreAttributes(a1, a2);
  *((_QWORD *)EntryFromObject + 2) = a2;
}
