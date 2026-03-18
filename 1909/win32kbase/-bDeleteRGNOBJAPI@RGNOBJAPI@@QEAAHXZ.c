/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0018B70
 * Callers:
 *     bDeleteRegion @ 0x1C00185B0 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C012EC40 (EngDeleteRgn.c)
 * Callees:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C000E1A0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0018AE0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     FreeObject @ 0x1C001A1E0 (FreeObject.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001F5B0 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0090E70 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct OBJECT **this)
{
  unsigned int v1; // edi
  _DWORD *v2; // rsi
  struct HOBJ__ *v4; // rdx
  struct _ENTRY *EntryFromObject; // rax
  GdiHandleEntryDirectory **v6; // rbp
  unsigned int v7; // eax
  GdiHandleEntryDirectory *v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  int v15; // ebp
  struct REGION *v16; // rcx
  _DWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_15;
  v4 = *(struct HOBJ__ **)*this;
  v18 = 0LL;
  v19 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v18, v4, 4u);
  if ( !v19 )
    goto LABEL_15;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, *this);
  v2 = (_DWORD *)*((_QWORD *)EntryFromObject + 2);
  if ( v2 && (v1 = bPEBCacheHandle(2, v2, EntryFromObject, (__int64)&v18, (__int64)this)) != 0 )
  {
    v15 = v19;
  }
  else
  {
    v6 = (GdiHandleEntryDirectory **)gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *v18 & 0xFFFFFF);
    v8 = v6[2];
    v9 = v7;
    v10 = *((_DWORD *)v8 + 514);
    if ( v7 >= v10 + ((*((unsigned __int16 *)v8 + 1) + 0xFFFF) << 16) )
      goto LABEL_25;
    if ( v7 >= v10 )
      v11 = ((v7 - v10) >> 16) + 1;
    else
      v11 = 0LL;
    v12 = *((_QWORD *)v8 + v11 + 1);
    if ( (_DWORD)v11 )
      v9 += ((1 - (_DWORD)v11) << 16) - v10;
    if ( v9 >= *(_DWORD *)(v12 + 20) )
LABEL_25:
      v13 = 0LL;
    else
      v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                       + 16LL * (unsigned __int8)v9
                       + 8);
    v14 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v6, (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000);
    GdiHandleEntryDirectory::ReleaseEntryLock(v6[2], v14);
    v15 = 0;
    v18 = 0LL;
    v19 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v15 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  if ( !v1 )
  {
LABEL_15:
    v1 = RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this);
    if ( v1 )
    {
      v16 = *this;
      if ( *this && v16 != prgnDefault )
        FreeObject(v16, 4LL);
      *this = 0LL;
      if ( v2 )
        HmgFreeObjectAttr(v2);
    }
  }
  return v1;
}
