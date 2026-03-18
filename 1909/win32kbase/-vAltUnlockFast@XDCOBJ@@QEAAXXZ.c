/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C
 * Callers:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     GreValidateVisrgn @ 0x1C0017B9C (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C0017C00 (GreSelectVisRgn.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002C1B0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C002DE90 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C003FA80 (GreGetDCOrgEx.c)
 *     GreMarkDCUnreadable @ 0x1C0062AF8 (GreMarkDCUnreadable.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00769B4 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0076A54 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSetDCOrg @ 0x1C0076FD0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0077730 (GreCopyVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00B0010 (GreSelectVisRgnShared.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BBF58 (--1DCOBJA@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C001F640 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001FFB0 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0021B38 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+38h] [rbp-30h]
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF
  GdiHandleEntryTable *v23; // [rsp+78h] [rbp+10h] BYREF

  v1 = *this;
  v20 = 0LL;
  v21 = 0;
  v2 = *v1;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)*v1 | ((unsigned int)*v1 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v21 )
    return;
  v3 = v20;
  v4 = *(_BYTE *)(v20 + 14);
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
    v18 = v1[85];
    v19 = 0LL;
  }
  else
  {
    if ( v4 != 16 )
      goto LABEL_5;
    v18 = v1[17];
    v19 = 2LL;
  }
  TrackObjectReferenceDecrement(v19, v18);
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
  v23 = 0LL;
  v22 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v15, v14, &v23, &v22) )
    GdiHandleEntryTable::ReleaseEntryLock(v23, v22);
  KeLeaveCriticalRegion();
  if ( v5 )
    bDeleteDCInternalEx(v2, 0LL, v16, v17);
}
