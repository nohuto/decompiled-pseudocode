/*
 * XREFs of bDeleteBrush @ 0x1C007DE80
 * Callers:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00221E0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0043690 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C007DE28 (-vCleanupBrushes@@YAXK@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC538 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E630 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00210C0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0043320 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0043354 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005D960 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C006D02C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0079A58 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C007E92C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01091C4 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  int v4; // r13d
  unsigned int v6; // r15d
  int v7; // ebx
  _DWORD *v8; // r14
  _DWORD *v9; // r14
  struct OBJECT *EntryObject; // r13
  __int64 v11; // rcx
  void *v12; // rax
  ULONG_PTR v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r8d
  volatile signed __int32 *v19; // rcx
  _DWORD *v21; // [rsp+40h] [rbp-98h] BYREF
  int v22; // [rsp+48h] [rbp-90h]
  _DWORD *v23; // [rsp+58h] [rbp-80h]
  struct OBJECT *v24; // [rsp+60h] [rbp-78h]
  _QWORD v25[14]; // [rsp+68h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp+20h]

  v4 = a2;
  v6 = 1;
  LODWORD(BugCheckParameter2) = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    v21 = 0LL;
    v22 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v21, a1, 16);
    if ( !v22 )
    {
LABEL_17:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v21);
      goto LABEL_18;
    }
    v9 = v21;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v21 & 0xFFFFFF);
    v24 = EntryObject;
    v8 = (_DWORD *)*((_QWORD *)v9 + 2);
    v23 = v8;
    if ( (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v21) )
    {
      **((_DWORD **)EntryObject + 6) = 2;
    }
    else
    {
      if ( !v8 )
      {
LABEL_14:
        if ( v6 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
        v4 = 0;
        v6 = 1;
        goto LABEL_17;
      }
      if ( (*v8 & 1) == 0 )
      {
        v11 = *((_DWORD *)EntryObject + 10) & 0x400;
        if ( (*((_DWORD *)EntryObject + 10) & 0x10) != 0
          && (!(_DWORD)v11 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(
                             v11,
                             (*((_DWORD *)EntryObject + 10) & 0x400) != 0,
                             v8,
                             v21,
                             (__int64)&v21,
                             0LL) )
        {
          v7 = 0;
        }
        v6 = v7;
        goto LABEL_14;
      }
    }
    v7 = 0;
    goto LABEL_14;
  }
LABEL_18:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 3 )
    {
      v13 = BugCheckParameter2;
      goto LABEL_25;
    }
    v12 = HmgRemoveObjectImpl(a1, 0, 1, 2u, 16, 0LL);
  }
  else
  {
    v12 = HmgRemoveObject(a1, 0, 0, 0, 16, 0LL);
  }
  v13 = (ULONG_PTR)v12;
LABEL_25:
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 40);
    if ( (v14 & 0x400) != 0 )
    {
      v15 = *(_QWORD *)(v13 + 152);
      if ( v15 )
      {
        if ( (v14 & 0x4000) == 0 )
          Win32FreePool(v15);
      }
    }
    v16 = *(_QWORD *)(v13 + 24);
    if ( v16 )
      bDeleteSurface(v16);
    if ( *(_DWORD *)(v13 + 100) != -1 )
    {
      v17 = *(_DWORD *)(v13 + 40);
      if ( v17 >= 0 )
      {
        v18 = v17 & 0x40000000;
        v19 = *(volatile signed __int32 **)(v13 + 120);
        if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v19, v18 != 0);
        *(_QWORD *)(v13 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v13 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v13);
    if ( *(_QWORD *)(v13 + 136) )
      ReleaseReferenceCountedObjectHandle(2LL);
    FreeBrushMemory(v13);
    if ( !v4 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, (HBRUSH)a1);
    if ( !v25[0] || (*(_DWORD *)(v25[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  }
  return v6;
}
