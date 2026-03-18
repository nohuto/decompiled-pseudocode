/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0016AE8
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  struct _ENTRY *EntryFromObject; // rax

  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  REGION::vDeleteREGION(*((REGION **)this + 140));
  *((_QWORD *)this + 140) = prgnDefault;
}
