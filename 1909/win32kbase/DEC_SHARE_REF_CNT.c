/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C001DF00
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0069F00 (bMigrateSurfaceForConversion.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00BABBC (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001F5B0 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020E70 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct OBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  _DWORD *v4; // rbx
  __int64 v5; // r14
  unsigned __int8 v6; // cl
  unsigned int v7; // ebp
  GdiHandleEntryDirectory **v8; // rdi
  unsigned int v9; // eax
  GdiHandleEntryDirectory *v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+38h] [rbp-20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = 0LL;
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v18 )
    return 0LL;
  v5 = v17;
  v6 = *(_BYTE *)(v17 + 14);
  if ( v6 == 5 )
  {
    if ( gbGdiHmgrAltStacks )
    {
      v6 = 5;
      if ( gpentHmgrAltStacks )
      {
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)a1);
        v6 = *(_BYTE *)(v5 + 14);
      }
    }
  }
  v7 = *((_DWORD *)a1 + 2);
  TrackHmgrReferenceDecrement(v6, a1);
  --*((_DWORD *)a1 + 2);
  v8 = (GdiHandleEntryDirectory **)gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v5 & 0xFFFFFF);
  v10 = v8[2];
  v11 = v9;
  v12 = *((_DWORD *)v10 + 514);
  if ( v9 < v12 + ((*((unsigned __int16 *)v10 + 1) + 0xFFFF) << 16) )
  {
    v13 = ((v9 - v12) >> 16) + 1;
    if ( v9 < v12 )
      v13 = 0LL;
    v14 = *((_QWORD *)v10 + v13 + 1);
    if ( (_DWORD)v13 )
      v11 = ((1 - (_DWORD)v13) << 16) - v12 + (unsigned int)v11;
    if ( (unsigned int)v11 < *(_DWORD *)(v14 + 20) )
      v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  }
  v15 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v8, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
  GdiHandleEntryDirectory::ReleaseEntryLock(v8[2], v15);
  KeLeaveCriticalRegion();
  return v7;
}
