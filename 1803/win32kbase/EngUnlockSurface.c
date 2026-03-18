/*
 * XREFs of EngUnlockSurface @ 0x1C0028470
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C7580 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002C230 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  PVOID *p_pvScan0; // rbx
  HSURF hsurf; // rdi
  char *v3; // r14
  GdiHandleManager *v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // r10d
  _QWORD *v12; // r11
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rdi
  char v21; // al
  unsigned int v22; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v23; // rdx
  unsigned int v24; // ecx
  GdiHandleManager *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // r8
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r10
  unsigned int v35; // edx
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // [rsp+30h] [rbp-48h] BYREF
  int v40; // [rsp+38h] [rbp-40h]

  if ( pso )
  {
    p_pvScan0 = &pso[-1].pvScan0;
    hsurf = pso->hsurf;
    v3 = 0LL;
    v4 = gpHandleManager;
    v5 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000);
    v6 = *((_QWORD *)v4 + 2);
    v7 = v5;
    v8 = *(_DWORD *)(v6 + 2056);
    if ( v5 < v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      v9 = ((v5 - v8) >> 16) + 1;
      if ( v5 < v8 )
        v9 = 0LL;
      if ( (_DWORD)v9 )
        v7 = ((1 - (_DWORD)v9) << 16) - v8 + v5;
      if ( GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v6 + 8 * v9 + 8), v7) )
        v10 = *v12 + 24LL * v11;
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 14) == 5 && *(_WORD *)(v10 + 12) == WORD1(hsurf) )
        {
          v13 = GdiHandleManager::DecodeIndex(v4, (unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000);
          v14 = *(_DWORD *)(v6 + 2056);
          v15 = v13;
          if ( v13 < v14 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
          {
            v16 = ((v13 - v14) >> 16) + 1;
            if ( v13 < v14 )
              v16 = 0LL;
            v17 = *(_QWORD *)(v6 + 8 * v16 + 8);
            if ( (_DWORD)v16 )
              v15 = ((1 - (_DWORD)v16) << 16) - v14 + v13;
            if ( (unsigned int)v15 < *(_DWORD *)(v17 + 20) )
              v3 = *(char **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
          }
        }
      }
    }
    if ( p_pvScan0 == (PVOID *)v3 )
    {
      v18 = *(_DWORD *)p_pvScan0;
      v19 = *(_DWORD *)p_pvScan0;
      v39 = 0LL;
      v40 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v39, (unsigned __int16)v18 | (v19 >> 8) & 0xFF0000, 0, 0, 1);
      if ( v40 )
      {
        v20 = v39;
        v21 = *(_BYTE *)(v39 + 14);
        if ( v21 == 5
          && (!gbGdiHmgrAltStacks
           || !gpentHmgrAltStacks
           || (v22 = (unsigned __int16)*(_DWORD *)p_pvScan0 | (*(_DWORD *)p_pvScan0 >> 8) & 0xFF0000,
               RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v22 | (v22 >> 8) & 0xFF0000),
               v21 = *(_BYTE *)(v20 + 14),
               v21 == 5)) )
        {
          v23 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)p_pvScan0[85];
          v24 = 0;
        }
        else
        {
          if ( v21 != 16 )
          {
LABEL_25:
            --*((_DWORD *)p_pvScan0 + 2);
            v25 = gpHandleManager;
            v26 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v20 & 0xFFFFFF);
            v27 = *((_QWORD *)v25 + 2);
            v28 = v26;
            v29 = *(_DWORD *)(v27 + 2056);
            if ( v26 >= v29 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
              goto LABEL_44;
            v30 = ((v26 - v29) >> 16) + 1;
            if ( v26 < v29 )
              v30 = 0LL;
            v31 = *(_QWORD *)(v27 + 8 * v30 + 8);
            if ( (_DWORD)v30 )
              v28 = ((1 - (_DWORD)v30) << 16) - v29 + v26;
            if ( (unsigned int)v28 >= *(_DWORD *)(v31 + 20) )
LABEL_44:
              v32 = 0LL;
            else
              v32 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * (v28 >> 8)) + 16LL * (unsigned __int8)v28 + 8);
            v33 = GdiHandleManager::DecodeIndex(v25, (unsigned __int16)*v32 | (*v32 >> 8) & 0xFF0000);
            v34 = *((_QWORD *)v25 + 2);
            v35 = v33;
            v36 = *(_DWORD *)(v34 + 2056);
            if ( v33 < v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
            {
              v37 = ((v33 - v36) >> 16) + 1;
              if ( v35 < v36 )
                v37 = 0LL;
              v38 = *(_QWORD *)(v34 + 8 * v37 + 8);
              if ( (_DWORD)v37 )
                v35 += ((1 - (_DWORD)v37) << 16) - v36;
              *(_DWORD *)(*(_QWORD *)v38 + 24LL * v35 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v35 >> 8)) + 16LL * (unsigned __int8)v35,
                0LL);
              KeLeaveCriticalRegion();
            }
            KeLeaveCriticalRegion();
            return;
          }
          v23 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)p_pvScan0[17];
          v24 = 2;
        }
        TrackObjectReferenceDecrement(v24, v23);
        goto LABEL_25;
      }
    }
  }
}
