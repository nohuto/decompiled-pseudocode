/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4
 * Callers:
 *     GreValidateVisrgn @ 0x1C0031910 (GreValidateVisrgn.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0031AA0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C0033740 (GreIsRendering.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003E2BC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003E398 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetDCOrgEx @ 0x1C00615B0 (GreGetDCOrgEx.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     GreMarkUndeletableDC @ 0x1C00630F0 (GreMarkUndeletableDC.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0063710 (GreSetDCOrg.c)
 *     GreSelectVisRgnShared @ 0x1C0072E20 (GreSelectVisRgnShared.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0073C68 (--1DCOBJA@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 *     GreMarkDCUnreadable @ 0x1C00DADB8 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C00DAE20 (GreMarkDeletableDC.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  unsigned int *v2; // rdi
  HDC v3; // rbp
  __int64 v4; // r14
  char v5; // al
  int v6; // esi
  GdiHandleManager *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]

  XDCOBJ::RestoreAttributes(this);
  v2 = *(unsigned int **)this;
  v24 = 0LL;
  v25 = 0;
  v3 = *(HDC *)v2;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v24,
    (unsigned __int16)*(_QWORD *)v2 | ((unsigned int)*(_QWORD *)v2 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v25 )
    return;
  v4 = v24;
  v5 = *(_BYTE *)(v24 + 14);
  if ( v5 == 5 )
  {
    v5 = 5;
    if ( gbGdiHmgrAltStacks )
    {
      if ( gpentHmgrAltStacks )
      {
        v21 = (unsigned __int16)*v2 | ((unsigned __int64)*v2 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
        v5 = *(_BYTE *)(v4 + 14);
      }
    }
  }
  v6 = (*(unsigned __int8 *)(v4 + 15) >> 3) & 1;
  if ( v5 == 5 )
  {
    v22 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 85);
    v23 = 0;
  }
  else
  {
    if ( v5 != 16 )
      goto LABEL_5;
    v22 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 17);
    v23 = 2;
  }
  TrackObjectReferenceDecrement(v23, v22);
LABEL_5:
  --v2[2];
  v7 = gpHandleManager;
  v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v4 & 0xFFFFFF);
  v9 = *((_QWORD *)v7 + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_27;
  if ( v8 >= v11 )
    v12 = ((v8 - v11) >> 16) + 1;
  else
    v12 = 0LL;
  v13 = *(_QWORD *)(v9 + 8 * v12 + 8);
  if ( (_DWORD)v12 )
    v10 = ((1 - (_DWORD)v12) << 16) - v11 + v8;
  if ( (unsigned int)v10 >= *(_DWORD *)(v13 + 20) )
LABEL_27:
    v14 = 0LL;
  else
    v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v15 = GdiHandleManager::DecodeIndex(v7, (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000);
  v16 = *((_QWORD *)v7 + 2);
  v17 = v15;
  v18 = *(_DWORD *)(v16 + 2056);
  if ( v15 < v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(v16 + 8 * v19 + 8);
    if ( (_DWORD)v19 )
      v17 = ((1 - (_DWORD)v19) << 16) - v18 + v15;
    *(_DWORD *)(*(_QWORD *)v20 + 24LL * v17 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v17 >> 8)) + 16LL * (unsigned __int8)v17,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v6 )
    bDeleteDCInternalEx(v3, 0LL);
}
