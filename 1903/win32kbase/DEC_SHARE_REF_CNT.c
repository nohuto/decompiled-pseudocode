/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C001CBC0
 * Callers:
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     bMigrateSurfaceForConversion @ 0x1C0058D60 (bMigrateSurfaceForConversion.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001D220 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020070 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct OBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  _DWORD *v4; // rbx
  int *v5; // rdi
  unsigned __int8 v6; // cl
  unsigned int v7; // r14d
  int v8; // edx
  GdiHandleEntryDirectory **v9; // rdi
  unsigned int v10; // eax
  GdiHandleEntryDirectory *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  int *v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = 0LL;
  v18 = 0LL;
  v19 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v19 )
    return 0LL;
  v5 = v18;
  v6 = *((_BYTE *)v18 + 14);
  if ( v6 == 5 )
  {
    if ( gbGdiHmgrAltStacks )
    {
      v6 = 5;
      if ( gpentHmgrAltStacks )
      {
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)a1);
        v6 = *((_BYTE *)v5 + 14);
      }
    }
  }
  v7 = *((_DWORD *)a1 + 2);
  TrackHmgrReferenceDecrement(v6, a1);
  --*((_DWORD *)a1 + 2);
  v8 = *v5;
  v9 = (GdiHandleEntryDirectory **)gpHandleManager;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, v8 & 0xFFFFFF);
  v11 = v9[2];
  v12 = v10;
  v13 = *((_DWORD *)v11 + 514);
  if ( v10 < v13 + ((*((unsigned __int16 *)v11 + 1) + 0xFFFF) << 16) )
  {
    v14 = ((v10 - v13) >> 16) + 1;
    if ( (unsigned int)v12 < v13 )
      v14 = 0LL;
    v15 = *((_QWORD *)v11 + v14 + 1);
    if ( (_DWORD)v14 )
      v12 = ((1 - (_DWORD)v14) << 16) - v13 + (unsigned int)v12;
    if ( (unsigned int)v12 < *(_DWORD *)(v15 + 20) )
      v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
  }
  v16 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v9, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
  GdiHandleEntryDirectory::ReleaseEntryLock(v9[2], v16);
  KeLeaveCriticalRegion();
  return v7;
}
