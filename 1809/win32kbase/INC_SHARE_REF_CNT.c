/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C00215E0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C009CEA0 (bMigrateSurfaceForConversion.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C00F6574 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0023400 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0023780 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002537C (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  GdiHandleEntryDirectory *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF
  GdiHandleEntryTable *v21; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)a1;
  v18 = 0LL;
  v19 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)v1 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v19 )
    return;
  v4 = v18;
  v5 = *(_BYTE *)(v18 + 14);
  if ( v5 == 5 )
  {
    RECALTLOCK(
      (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)a1 | (unsigned __int64)((*(_DWORD *)a1 >> 8) & 0xFF0000)),
      a1);
    v5 = *(_BYTE *)(v4 + 14);
    if ( v5 == 5 )
    {
      v6 = *((_QWORD *)a1 + 85);
      v7 = 0LL;
LABEL_5:
      TrackObjectReferenceIncrement(v7, v6);
      goto LABEL_6;
    }
  }
  if ( v5 == 16 )
  {
    v6 = *((_QWORD *)a1 + 17);
    v7 = 2LL;
    goto LABEL_5;
  }
LABEL_6:
  ++*((_DWORD *)a1 + 2);
  v8 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v4 & 0xFFFFFF);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_19;
  v13 = ((v9 - v12) >> 16) + 1;
  if ( v9 < v12 )
    v13 = 0LL;
  v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v11 = ((1 - (_DWORD)v13) << 16) - v12 + v9;
  if ( (unsigned int)v11 >= *(_DWORD *)(v14 + 20) )
LABEL_19:
    v15 = 0LL;
  else
    v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  v16 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000);
  v17 = (GdiHandleEntryDirectory *)*((_QWORD *)v8 + 2);
  v21 = 0LL;
  v20 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v17, v16, &v21, &v20) )
    GdiHandleEntryTable::ReleaseEntryLock(v21, v20);
  KeLeaveCriticalRegion();
}
