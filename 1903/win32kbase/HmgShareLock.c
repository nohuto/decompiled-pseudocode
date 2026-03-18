/*
 * XREFs of HmgShareLock @ 0x1C001E600
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0058D60 (bMigrateSurfaceForConversion.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF1E8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF2DC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001D220 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  _DWORD *v3; // rdi
  __int16 v4; // ebx^2
  __int64 v5; // r14
  _DWORD *v6; // rsi
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r8
  GdiHandleEntryDirectory **v14; // rbx
  unsigned int v15; // eax
  GdiHandleEntryDirectory *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v4 = HIWORD(a1);
  v25 = 0LL;
  v26 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v26 )
    return v5;
  v6 = (_DWORD *)v25;
  if ( *(_BYTE *)(v25 + 14) == a2 && *(_WORD *)(v25 + 12) == v4 )
  {
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
    v9 = *((_QWORD *)v7 + 2);
    v10 = v8;
    v11 = *(_DWORD *)(v9 + 2056);
    if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      v12 = ((v8 - v11) >> 16) + 1;
      if ( v8 < v11 )
        v12 = 0LL;
      v13 = *(_QWORD *)(v9 + 8 * v12 + 8);
      if ( (_DWORD)v12 )
        v10 = ((1 - (_DWORD)v12) << 16) - v11 + v8;
      if ( (unsigned int)v10 < *(_DWORD *)(v13 + 20) )
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
    }
    ++*(_DWORD *)(v5 + 8);
    if ( a2 == 5 )
    {
      v23 = *(_QWORD *)(v5 + 680);
      v24 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_13;
      v23 = *(_QWORD *)(v5 + 136);
      v24 = 2LL;
    }
    TrackObjectReferenceIncrement(v24, v23);
  }
LABEL_13:
  v14 = (GdiHandleEntryDirectory **)gpHandleManager;
  v15 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
  v16 = v14[2];
  v17 = v15;
  v18 = *((_DWORD *)v16 + 514);
  if ( v15 < v18 + ((*((unsigned __int16 *)v16 + 1) + 0xFFFF) << 16) )
  {
    v19 = ((v15 - v18) >> 16) + 1;
    if ( (unsigned int)v17 < v18 )
      v19 = 0LL;
    v20 = *((_QWORD *)v16 + v19 + 1);
    if ( (_DWORD)v19 )
      v17 = ((1 - (_DWORD)v19) << 16) - v18 + (unsigned int)v17;
    if ( (unsigned int)v17 < *(_DWORD *)(v20 + 20) )
      v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  }
  v21 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v14, (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000);
  GdiHandleEntryDirectory::ReleaseEntryLock(v14[2], v21);
  KeLeaveCriticalRegion();
  return v5;
}
