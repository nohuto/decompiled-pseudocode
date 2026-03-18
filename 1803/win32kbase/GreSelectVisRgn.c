/*
 * XREFs of GreSelectVisRgn @ 0x1C00315A0
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreSelectVisRgn(unsigned int a1, HRGN a2, int a3)
{
  DC *v5; // rbx
  unsigned int v6; // r15d
  DC *v7; // rbx
  HDC v8; // r14
  DC *v9; // rsi
  char v10; // al
  int v11; // edi
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r10
  unsigned int v22; // edx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // r10
  unsigned __int64 v27; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v28; // rdx
  unsigned int v29; // ecx
  DC *v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+38h] [rbp-30h]
  int v32; // [rsp+3Ch] [rbp-2Ch]

  v31 = 0;
  v32 = 0;
  v30 = (DC *)HmgShareLockEx(a1, 1, 0);
  v5 = v30;
  v6 = GreSelectVisRgnInternal(&v30, a2, a3);
  if ( !v5 )
    return v6;
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v30);
  v7 = v30;
  v30 = 0LL;
  v31 = 0;
  v8 = *(HDC *)v7;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v30,
    (unsigned __int16)*(_QWORD *)v7 | ((unsigned int)*(_QWORD *)v7 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v31 )
    return v6;
  v9 = v30;
  v10 = *((_BYTE *)v30 + 14);
  if ( v10 == 5 )
  {
    v10 = 5;
    if ( gbGdiHmgrAltStacks )
    {
      if ( gpentHmgrAltStacks )
      {
        v27 = (unsigned __int16)*(_DWORD *)v7 | ((unsigned __int64)*(unsigned int *)v7 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v27 | ((unsigned int)v27 >> 8) & 0xFF0000);
        v10 = *((_BYTE *)v9 + 14);
      }
    }
  }
  v11 = (*((unsigned __int8 *)v9 + 15) >> 3) & 1;
  if ( v10 == 5 )
  {
    v28 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v7 + 85);
    v29 = 0;
  }
  else
  {
    if ( v10 != 16 )
      goto LABEL_6;
    v28 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v7 + 17);
    v29 = 2;
  }
  TrackObjectReferenceDecrement(v29, v28);
LABEL_6:
  --*((_DWORD *)v7 + 2);
  v12 = gpHandleManager;
  v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v9 & 0xFFFFFF);
  v14 = *((_QWORD *)v12 + 2);
  v15 = v13;
  v16 = *(_DWORD *)(v14 + 2056);
  if ( v13 >= v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    goto LABEL_29;
  if ( v13 >= v16 )
    v17 = ((v13 - v16) >> 16) + 1;
  else
    v17 = 0LL;
  v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
  if ( (_DWORD)v17 )
    v15 = ((1 - (_DWORD)v17) << 16) - v16 + v13;
  if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
LABEL_29:
    v19 = 0LL;
  else
    v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  v20 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v12, (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000u);
  v21 = *((_QWORD *)v12 + 2);
  v22 = v20;
  v23 = *(_DWORD *)(v21 + 2056);
  if ( v20 < v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
  {
    if ( v20 >= v23 )
      v24 = ((v20 - v23) >> 16) + 1;
    else
      v24 = 0LL;
    v25 = *(_QWORD *)(v21 + 8 * v24 + 8);
    if ( (_DWORD)v24 )
      v22 = ((1 - (_DWORD)v24) << 16) - v23 + v20;
    *(_DWORD *)(*(_QWORD *)v25 + 24LL * v22 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v22 >> 8)) + 16LL * (unsigned __int8)v22,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v11 )
    bDeleteDCInternalEx(v8, 0LL);
  return v6;
}
