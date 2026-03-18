/*
 * XREFs of EngUnlockSurface @ 0x1C00205A0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0125370 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C001F640 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001FFB0 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0021B38 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  PVOID *p_pvScan0; // rbx
  unsigned int hsurf; // edi
  char *v3; // r14
  GdiHandleManager *v4; // r15
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rdi
  char v21; // al
  PVOID v22; // rdx
  __int64 v23; // rcx
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rdx
  unsigned int v32; // eax
  GdiHandleEntryDirectory *v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+38h] [rbp-50h]
  unsigned int v36; // [rsp+90h] [rbp+8h] BYREF
  GdiHandleEntryTable *v37; // [rsp+98h] [rbp+10h] BYREF

  if ( pso )
  {
    p_pvScan0 = &pso[-1].pvScan0;
    hsurf = (unsigned int)pso->hsurf;
    v3 = 0LL;
    v4 = gpHandleManager;
    v5 = (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000;
    v6 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v5);
    v7 = *((_QWORD *)v4 + 2);
    v8 = v6;
    v9 = *(_DWORD *)(v7 + 2056);
    if ( v6 < v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    {
      v10 = ((v6 - v9) >> 16) + 1;
      if ( v6 < v9 )
        v10 = 0LL;
      v11 = *(_QWORD *)(v7 + 8 * v10 + 8);
      if ( (_DWORD)v10 )
        v8 = ((1 - (_DWORD)v10) << 16) - v9 + v6;
      v12 = 0LL;
      if ( (unsigned int)v8 < *(_DWORD *)(v11 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8) )
      {
        v12 = *(_QWORD *)v11 + 24LL * (unsigned int)v8;
      }
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 14) == 5 && *(_WORD *)(v12 + 12) == HIWORD(hsurf) )
        {
          v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v4, v5);
          v14 = *(_DWORD *)(v7 + 2056);
          v15 = v13;
          if ( v13 < v14 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
          {
            v16 = ((v13 - v14) >> 16) + 1;
            if ( v13 < v14 )
              v16 = 0LL;
            v17 = *(_QWORD *)(v7 + 8 * v16 + 8);
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
      v34 = 0LL;
      v35 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v34, (unsigned __int16)v18 | (v19 >> 8) & 0xFF0000, 0, 0, 1);
      if ( v35 )
      {
        v20 = v34;
        v21 = *(_BYTE *)(v34 + 14);
        if ( v21 == 5
          && (!gbGdiHmgrAltStacks
           || !gpentHmgrAltStacks
           || (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)p_pvScan0), v21 = *(_BYTE *)(v20 + 14), v21 == 5)) )
        {
          v22 = p_pvScan0[85];
          v23 = 0LL;
        }
        else
        {
          if ( v21 != 16 )
          {
LABEL_26:
            --*((_DWORD *)p_pvScan0 + 2);
            v24 = gpHandleManager;
            v25 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v20 & 0xFFFFFF);
            v26 = *((_QWORD *)v24 + 2);
            v27 = v25;
            v28 = *(_DWORD *)(v26 + 2056);
            if ( v25 >= v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
              goto LABEL_37;
            v29 = ((v25 - v28) >> 16) + 1;
            if ( v25 < v28 )
              v29 = 0LL;
            v30 = *(_QWORD *)(v26 + 8 * v29 + 8);
            if ( (_DWORD)v29 )
              v27 = ((1 - (_DWORD)v29) << 16) - v28 + (unsigned int)v27;
            if ( (unsigned int)v27 >= *(_DWORD *)(v30 + 20) )
LABEL_37:
              v31 = 0LL;
            else
              v31 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * (v27 >> 8)) + 16LL * (unsigned __int8)v27 + 8);
            v32 = GdiHandleManager::DecodeIndex(
                    (GdiHandleEntryDirectory **)v24,
                    (unsigned __int16)*v31 | (*v31 >> 8) & 0xFF0000u);
            v33 = (GdiHandleEntryDirectory *)*((_QWORD *)v24 + 2);
            v37 = 0LL;
            v36 = 0;
            if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v33, v32, &v37, &v36) )
              GdiHandleEntryTable::ReleaseEntryLock(v37, v36);
            KeLeaveCriticalRegion();
            return;
          }
          v22 = p_pvScan0[17];
          v23 = 2LL;
        }
        TrackObjectReferenceDecrement(v23, v22);
        goto LABEL_26;
      }
    }
  }
}
