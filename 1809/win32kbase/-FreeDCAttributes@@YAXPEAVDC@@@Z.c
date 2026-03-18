/*
 * XREFs of ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C00204BC
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0108BB8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0023970 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C0023B9C (HmgFreeDcAttr.c)
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
