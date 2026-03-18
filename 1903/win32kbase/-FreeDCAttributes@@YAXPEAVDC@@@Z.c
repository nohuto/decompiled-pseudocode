/*
 * XREFs of ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0019B4C
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0019DB0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C0027468 (HmgFreeDcAttr.c)
 */

void __fastcall FreeDCAttributes(struct DC *a1)
{
  struct _ENTRY *EntryFromObject; // rax
  struct _DC_ATTR *v3; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
  v3 = (struct _DC_ATTR *)*((_QWORD *)EntryFromObject + 2);
  if ( v3 )
  {
    *((_QWORD *)EntryFromObject + 2) = 0LL;
    if ( (*((_DWORD *)a1 + 11) & 2) == 0 )
      DC::SaveAttributes(a1, v3);
    HmgFreeDcAttr(v3);
  }
}
