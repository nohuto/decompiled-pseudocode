/*
 * XREFs of EngLockSurface @ 0x1C002D1A0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C7DE0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C002EE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  struct _BASEOBJECT *v1; // rax
  struct _BASEOBJECT *v2; // rbx
  SURFOBJ *v3; // rbp
  int v4; // edx
  int v5; // eax
  __int64 v6; // rsi
  char v7; // al
  unsigned int v8; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v9; // rdx
  GdiHandleManager *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r10
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v25; // [rsp+30h] [rbp-28h] BYREF
  int v26; // [rsp+38h] [rbp-20h]

  v1 = (struct _BASEOBJECT *)HmgShareLockCheckIgnoreStockBit(hsurf, 5);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  HmgIncrementShareReferenceCount(v1);
  v3 = (SURFOBJ *)((char *)v2 + 24);
  v4 = (*(_DWORD *)v2 >> 8) & 0xFF0000;
  v5 = (unsigned __int16)*(_DWORD *)v2;
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, v5 | v4, 0, 0, 1);
  if ( v26 )
  {
    v6 = v25;
    v7 = *(_BYTE *)(v25 + 14);
    if ( v7 == 5
      && (!gbGdiHmgrAltStacks
       || !gpentHmgrAltStacks
       || (v8 = (unsigned __int16)*(_DWORD *)v2 | (*(_DWORD *)v2 >> 8) & 0xFF0000,
           RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v8 | (v8 >> 8) & 0xFF0000),
           v7 = *(_BYTE *)(v6 + 14),
           v7 == 5)) )
    {
      v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 85);
      if ( v9 && qword_1C019F730 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C019F730, v9, 0);
    }
    else if ( v7 == 16 )
    {
      TrackObjectReferenceDecrement(
        2u,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v2 + 17));
    }
    --*((_DWORD *)v2 + 2);
    v10 = gpHandleManager;
    v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v6 & 0xFFFFFF);
    v12 = *((_QWORD *)v10 + 2);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 2056);
    if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
      goto LABEL_27;
    v15 = ((v11 - v14) >> 16) + 1;
    if ( v11 < v14 )
      v15 = 0LL;
    v16 = *(_QWORD *)(v12 + 8 * v15 + 8);
    if ( (_DWORD)v15 )
      v13 = ((1 - (_DWORD)v15) << 16) - v14 + v11;
    if ( (unsigned int)v13 >= *(_DWORD *)(v16 + 20) )
LABEL_27:
      v17 = 0LL;
    else
      v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
    v18 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v10,
            (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000u);
    v19 = *((_QWORD *)v10 + 2);
    v20 = v18;
    v21 = *(_DWORD *)(v19 + 2056);
    if ( v18 < v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    {
      v22 = ((v18 - v21) >> 16) + 1;
      if ( v20 < v21 )
        v22 = 0LL;
      v23 = *(_QWORD *)(v19 + 8 * v22 + 8);
      if ( (_DWORD)v22 )
        v20 += ((1 - (_DWORD)v22) << 16) - v21;
      *(_DWORD *)(*(_QWORD *)v23 + 24LL * v20 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v20 >> 8)) + 16LL * (unsigned __int8)v20,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
