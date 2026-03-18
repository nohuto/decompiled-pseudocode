/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C0029280
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0049DD0 (bMigrateSurfaceForConversion.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C0075FA8 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0027830 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct OBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  __int64 v4; // rsi
  char v5; // cl
  unsigned int v6; // edx
  unsigned int v7; // ebp
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+38h] [rbp-20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v23 = 0LL;
  v24 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v24 )
    return 0LL;
  v4 = v23;
  v5 = *(_BYTE *)(v23 + 14);
  if ( v5 == 5 )
  {
    if ( gbGdiHmgrAltStacks )
    {
      v5 = 5;
      if ( gpentHmgrAltStacks )
      {
        v6 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v6 | (v6 >> 8) & 0xFF0000);
        v5 = *(_BYTE *)(v4 + 14);
      }
    }
  }
  v7 = *((_DWORD *)a1 + 2);
  TrackHmgrReferenceDecrement(v5, a1);
  --*((_DWORD *)a1 + 2);
  v8 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v4 & 0xFFFFFF);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_21;
  v13 = ((v9 - v12) >> 16) + 1;
  if ( v9 < v12 )
    v13 = 0LL;
  v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v11 = ((1 - (_DWORD)v13) << 16) - v12 + v9;
  if ( (unsigned int)v11 >= *(_DWORD *)(v14 + 20) )
LABEL_21:
    v15 = 0LL;
  else
    v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  v16 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000);
  v17 = *((_QWORD *)v8 + 2);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    v20 = ((v16 - v19) >> 16) + 1;
    if ( v16 < v19 )
      v20 = 0LL;
    v21 = *(_QWORD *)(v17 + 8 * v20 + 8);
    if ( (_DWORD)v20 )
      v18 = ((1 - (_DWORD)v20) << 16) - v19 + v16;
    *(_DWORD *)(*(_QWORD *)v21 + 24LL * v18 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v7;
}
