/*
 * XREFs of EngLockSurface @ 0x1C0021210
 * Callers:
 *     EngCreateLockedBitmap @ 0x1C00AC0E0 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00AC150 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00AC1C0 (EngCreateLockedRedirectionDeviceBitmap.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00FC080 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0020520 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00F8E70 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0109608 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rax
  SURFOBJ *v3; // rdi
  _DWORD *v4; // rbx
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rsi
  char v8; // al
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
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+38h] [rbp-40h]
  _BYTE v27[32]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD *v28; // [rsp+68h] [rbp-10h]

  v1 = (unsigned int)hsurf;
  SURFREF::SURFREF((SURFREF *)v27);
  v2 = (_DWORD *)HmgShareLockCheckIgnoreStockBit(v1, 5);
  v3 = 0LL;
  v28 = v2;
  v4 = v2;
  if ( v2 )
  {
    v5 = *v2;
    v6 = (unsigned __int16)*v2;
    v25 = 0LL;
    v26 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, v6 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v26 )
    {
      v7 = v25;
      v8 = *(_BYTE *)(v25 + 14);
      if ( v8 == 5
        && (!gbGdiHmgrAltStacks
         || !gpentHmgrAltStacks
         || (RECALTLOCKSTACKBACKTRACE((unsigned __int16)*v4, (struct _BASEOBJECT *)v4), v8 = *(_BYTE *)(v7 + 14),
                                                                                        v8 == 5)) )
      {
        v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v4 + 85);
        if ( v9 && qword_1C01C8828 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C01C8828,
            v9,
            1);
      }
      else if ( v8 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *((_QWORD *)v4 + 17));
      }
      ++v4[2];
      v10 = gpHandleManager;
      v11 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v7 & 0xFFFFFF);
      v12 = *((_QWORD *)v10 + 2);
      v13 = v11;
      v14 = *(_DWORD *)(v12 + 2056);
      if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
        goto LABEL_29;
      v15 = ((v11 - v14) >> 16) + 1;
      if ( v11 < v14 )
        v15 = 0LL;
      v16 = *(_QWORD *)(v12 + 8 * v15 + 8);
      if ( (_DWORD)v15 )
        v13 = ((1 - (_DWORD)v15) << 16) - v14 + v11;
      if ( (unsigned int)v13 >= *(_DWORD *)(v16 + 20) )
LABEL_29:
        v17 = 0LL;
      else
        v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
      v18 = GdiHandleManager::DecodeIndex(v10, (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000);
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
    if ( v28 )
      v3 = (SURFOBJ *)(v28 + 6);
  }
  SURFREF::~SURFREF((SURFREF *)v27);
  return v3;
}
