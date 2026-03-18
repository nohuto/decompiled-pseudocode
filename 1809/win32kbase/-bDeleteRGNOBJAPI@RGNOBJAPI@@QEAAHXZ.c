/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C001CCF0
 * Callers:
 *     bDeleteRegion @ 0x1C001CC90 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C01070E0 (EngDeleteRgn.c)
 * Callees:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C001D5A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     FreeObject @ 0x1C001D830 (FreeObject.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E630 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00210C0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct OBJECT **this)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  struct HOBJ__ *v4; // rdx
  struct _ENTRY *EntryFromObject; // rax
  struct REGION *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_20;
  v4 = *(struct HOBJ__ **)*this;
  v8 = 0LL;
  v9 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v8, v4, 4u);
  if ( !v9 )
    goto LABEL_20;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, *this);
  v2 = *((_QWORD *)EntryFromObject + 2);
  if ( !v2 || (v1 = bPEBCacheHandle(&v8, 2LL, v2, EntryFromObject, &v8, this)) == 0 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  if ( v9 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  if ( !v1 )
  {
LABEL_20:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this) )
    {
      v6 = *this;
      if ( *this && v6 != prgnDefault )
        FreeObject(v6, 4LL);
      *this = 0LL;
      v1 = 1;
      if ( v2 )
        HmgFreeObjectAttr(v2);
    }
    else
    {
      return 0;
    }
  }
  return v1;
}
