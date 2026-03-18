/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00257E4
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  struct _ENTRY *EntryFromObject; // rax

  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  REGION::vDeleteREGION(*((REGION **)this + 191));
  *((_QWORD *)this + 191) = prgnDefault;
}
