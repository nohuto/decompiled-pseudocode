/*
 * XREFs of HmgShareLock @ 0x1C002B3A0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0049DD0 (bMigrateSurfaceForConversion.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077AA0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077B94 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r10
  GdiHandleManager *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r9
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // edx
  unsigned int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v30 = 0LL;
  v31 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v30, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v31 )
    return v4;
  v5 = (_DWORD *)v30;
  if ( *(_BYTE *)(v30 + 14) == a2 && *(_WORD *)(v30 + 12) == v3 )
  {
    v6 = gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v30 & 0xFFFFFF);
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
      v28 = *(_QWORD *)(v4 + 680);
      v29 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_13;
      v28 = *(_QWORD *)(v4 + 136);
      v29 = 2LL;
    }
    TrackObjectReferenceIncrement(v29, v28);
  }
LABEL_13:
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex(gpHandleManager, *v5 & 0xFFFFFF);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_31;
  v18 = ((v14 - v17) >> 16) + 1;
  if ( v14 < v17 )
    v18 = 0LL;
  v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
  if ( (_DWORD)v18 )
    v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
  if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
LABEL_31:
    v20 = 0LL;
  else
    v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  v21 = GdiHandleManager::DecodeIndex(v13, (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000);
  v22 = *((_QWORD *)v13 + 2);
  v23 = v21;
  v24 = *(_DWORD *)(v22 + 2056);
  if ( v21 < v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
  {
    v25 = ((v21 - v24) >> 16) + 1;
    if ( v23 < v24 )
      v25 = 0LL;
    v26 = *(_QWORD *)(v22 + 8 * v25 + 8);
    if ( (_DWORD)v25 )
      v23 += ((1 - (_DWORD)v25) << 16) - v24;
    *(_DWORD *)(*(_QWORD *)v26 + 24LL * v23 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v23 >> 8)) + 16LL * (unsigned __int8)v23,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v4;
}
