/*
 * XREFs of EngLockSurface @ 0x1C0021270
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0125BF0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0021040 (HmgIncrementShareReferenceCount.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0021B38 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00229D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0130E1C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
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
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r10
  unsigned int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v24; // [rsp+30h] [rbp-28h] BYREF
  int v25; // [rsp+38h] [rbp-20h]

  v1 = (struct _BASEOBJECT *)HmgShareLockCheckIgnoreStockBit(hsurf, 5);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  HmgIncrementShareReferenceCount(v1);
  v3 = (SURFOBJ *)((char *)v2 + 24);
  v4 = (*(_DWORD *)v2 >> 8) & 0xFF0000;
  v5 = (unsigned __int16)*(_DWORD *)v2;
  v24 = 0LL;
  v25 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, v5 | v4, 0, 0, 1);
  if ( v25 )
  {
    v6 = v24;
    v7 = *(_BYTE *)(v24 + 14);
    if ( v7 == 5
      && (!gbGdiHmgrAltStacks
       || !gpentHmgrAltStacks
       || (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v2), v7 = *(_BYTE *)(v6 + 14), v7 == 5)) )
    {
      v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 85);
      if ( v8 && qword_1C020D538 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C020D538, v8, 0);
    }
    else if ( v7 == 16 )
    {
      TrackObjectReferenceDecrement(2LL, *((_QWORD *)v2 + 17));
    }
    --*((_DWORD *)v2 + 2);
    v9 = gpHandleManager;
    v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v6 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      goto LABEL_27;
    v14 = ((v10 - v13) >> 16) + 1;
    if ( v10 < v13 )
      v14 = 0LL;
    v15 = *(_QWORD *)(v11 + 8 * v14 + 8);
    if ( (_DWORD)v14 )
      v12 = ((1 - (_DWORD)v14) << 16) - v13 + v10;
    if ( (unsigned int)v12 >= *(_DWORD *)(v15 + 20) )
LABEL_27:
      v16 = 0LL;
    else
      v16 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
    v17 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v9,
            (unsigned __int16)*v16 | (*v16 >> 8) & 0xFF0000u);
    v18 = *((_QWORD *)v9 + 2);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 2056);
    if ( v17 < v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    {
      v21 = ((v17 - v20) >> 16) + 1;
      if ( v19 < v20 )
        v21 = 0LL;
      v22 = *(_QWORD *)(v18 + 8 * v21 + 8);
      if ( (_DWORD)v21 )
        v19 += ((1 - (_DWORD)v21) << 16) - v20;
      *(_DWORD *)(*(_QWORD *)v22 + 24LL * v19 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v19 >> 8)) + 16LL * (unsigned __int8)v19,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
