/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0015210 (GreLockVisRgnSharedOrExclusive.c)
 *     GreValidateVisrgn @ 0x1C0016244 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C00162B0 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C003C970 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C003C9C0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C003D6D0 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C003DAF0 (GreGetDCOrgEx.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     GreMarkDCUnreadable @ 0x1C00766B8 (GreMarkDCUnreadable.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007A934 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007A9D4 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSelectVisRgnShared @ 0x1C00B2F40 (GreSelectVisRgnShared.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BE474 (--1DCOBJA@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C001D2B0 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001EC70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022748 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(__int64 **this)
{
  __int64 *v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // r14
  char v4; // al
  int v5; // esi
  GdiHandleManager *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  GdiHandleEntryDirectory *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  GdiHandleEntryTable *v21; // [rsp+78h] [rbp+10h] BYREF

  v1 = *this;
  v18 = 0LL;
  v19 = 0;
  v2 = *v1;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)*v1 | ((unsigned int)*v1 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v19 )
    return;
  v3 = v18;
  v4 = *(_BYTE *)(v18 + 14);
  if ( v4 == 5 )
  {
    v4 = 5;
    if ( gbGdiHmgrAltStacks )
    {
      if ( gpentHmgrAltStacks )
      {
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v1);
        v4 = *(_BYTE *)(v3 + 14);
      }
    }
  }
  v5 = (*(unsigned __int8 *)(v3 + 15) >> 3) & 1;
  if ( v4 == 5 )
  {
    v16 = v1[85];
    v17 = 0LL;
  }
  else
  {
    if ( v4 != 16 )
      goto LABEL_5;
    v16 = v1[17];
    v17 = 2LL;
  }
  TrackObjectReferenceDecrement(v17, v16);
LABEL_5:
  --*((_DWORD *)v1 + 2);
  v6 = gpHandleManager;
  v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v3 & 0xFFFFFF);
  v8 = *((_QWORD *)v6 + 2);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    goto LABEL_16;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
  if ( (_DWORD)v11 )
    v9 = ((1 - (_DWORD)v11) << 16) - v10 + (unsigned int)v9;
  if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_16:
    v13 = 0LL;
  else
    v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
  v14 = GdiHandleManager::DecodeIndex(v6, (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000);
  v15 = (GdiHandleEntryDirectory *)*((_QWORD *)v6 + 2);
  v21 = 0LL;
  v20 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v15, v14, &v21, &v20) )
    GdiHandleEntryTable::ReleaseEntryLock(v21, v20);
  KeLeaveCriticalRegion();
  if ( v5 )
    bDeleteDCInternalEx(v2, 0LL);
}
