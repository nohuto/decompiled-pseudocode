/*
 * XREFs of HmgShareLock @ 0x1C0022B50
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C009CEA0 (bMigrateSurfaceForConversion.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC538 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC624 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC740 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC84C (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0023400 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0023780 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // rdi
  _DWORD *v5; // rsi
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r8
  GdiHandleManager *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  GdiHandleEntryDirectory *v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+38h] [rbp-40h]
  unsigned int v28; // [rsp+80h] [rbp+8h] BYREF
  GdiHandleEntryTable *v29; // [rsp+90h] [rbp+18h] BYREF

  v3 = HIWORD(a1);
  v26 = 0LL;
  v27 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v27 )
    return v4;
  v5 = (_DWORD *)v26;
  if ( *(_BYTE *)(v26 + 14) == a2 && *(_WORD *)(v26 + 12) == v3 )
  {
    v6 = gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v26 & 0xFFFFFF);
    v8 = *((_QWORD *)v6 + 2);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 < v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    {
      v11 = ((v7 - v10) >> 16) + 1;
      if ( v7 < v10 )
        v11 = 0LL;
      v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
      if ( (unsigned int)v9 < *(_DWORD *)(v12 + 20) )
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
    }
    ++*(_DWORD *)(v4 + 8);
    if ( a2 == 5 )
    {
      v24 = *(_QWORD *)(v4 + 680);
      v25 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_13;
      v24 = *(_QWORD *)(v4 + 136);
      v25 = 2LL;
    }
    TrackObjectReferenceIncrement(v25, v24);
  }
LABEL_13:
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex(gpHandleManager, *v5 & 0xFFFFFF);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_26;
  v18 = ((v14 - v17) >> 16) + 1;
  if ( (unsigned int)v16 < v17 )
    v18 = 0LL;
  v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
  if ( (_DWORD)v18 )
    v16 = ((1 - (_DWORD)v18) << 16) - v17 + (unsigned int)v16;
  if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
LABEL_26:
    v20 = 0LL;
  else
    v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  v21 = GdiHandleManager::DecodeIndex(v13, (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000);
  v22 = (GdiHandleEntryDirectory *)*((_QWORD *)v13 + 2);
  v29 = 0LL;
  v28 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v22, v21, &v29, &v28) )
    GdiHandleEntryTable::ReleaseEntryLock(v29, v28);
  KeLeaveCriticalRegion();
  return v4;
}
