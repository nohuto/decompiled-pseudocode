/*
 * XREFs of bDeleteBrush @ 0x1C000DDC0
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000EC68 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C000E0FC (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C000E1A0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C000E834 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     HmgRemoveObject @ 0x1C0018B30 (HmgRemoveObject.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0050B18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0050B44 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C006AF60 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0090E70 (HmgFreeObjectAttr.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B0548 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01309D8 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2)
{
  int v2; // r13d
  unsigned int v4; // r14d
  int v5; // r15d
  _DWORD *v6; // rsi
  int v7; // r13d
  _DWORD *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // edx
  __int64 v18; // rax
  ULONG_PTR v19; // rbx
  int *v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  volatile signed __int32 *v24; // rcx
  ULONG_PTR v25; // [rsp+40h] [rbp-78h]
  _QWORD v26[2]; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v27; // [rsp+60h] [rbp-58h] BYREF
  int v28; // [rsp+68h] [rbp-50h]

  v2 = a2;
  v4 = 1;
  v5 = 1;
  v6 = 0LL;
  if ( a2 )
    goto LABEL_22;
  v27 = 0LL;
  v28 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v27, a1, 0x10u);
  if ( !v28 )
    goto LABEL_22;
  v7 = 1;
  v8 = v27;
  v9 = gpHandleManager;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, *v27 & 0xFFFFFF);
  v11 = *((_QWORD *)v9 + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_52;
  if ( v10 >= v12 )
    v13 = ((v10 - v12) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  if ( v13 )
    v10 += ((1 - v13) << 16) - v12;
  if ( v10 >= *(_DWORD *)(v14 + 20) )
LABEL_52:
    v15 = 0LL;
  else
    v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v6 = (_DWORD *)*((_QWORD *)v8 + 2);
  if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v27) )
  {
    **(_DWORD **)(v15 + 48) = 2;
LABEL_25:
    v5 = 0;
    goto LABEL_18;
  }
  if ( v6 )
  {
    if ( (*v6 & 1) == 0 )
    {
      v16 = *(_DWORD *)(v15 + 40) & 0x400;
      if ( (*(_DWORD *)(v15 + 40) & 0x10) != 0
        && (!v16 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
        && (unsigned int)bPEBCacheHandle(v16 != 0, v6, v27, &v27, 0LL) )
      {
        v5 = 0;
      }
      v7 = v5;
      goto LABEL_18;
    }
    goto LABEL_25;
  }
LABEL_18:
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  v2 = 0;
  if ( v28 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
LABEL_22:
  if ( v5 )
  {
    v18 = HmgRemoveObject((int)a1, 0, 0, 0, 16, 0LL);
    v19 = v18;
    v25 = v18;
    if ( v18 )
    {
      v20 = (int *)(v18 + 40);
      v21 = *(_DWORD *)(v18 + 40);
      if ( (v21 & 0x400) != 0 )
      {
        v22 = *(_QWORD *)(v19 + 152);
        if ( v22 )
        {
          if ( (v21 & 0x4000) == 0 )
            Win32FreePool(v22);
        }
      }
      if ( *(_QWORD *)(v19 + 24) )
        bDeleteSurface();
      if ( *(_DWORD *)(v19 + 100) != -1 && *v20 >= 0 )
      {
        v23 = *v20 & 0x40000000;
        v24 = *(volatile signed __int32 **)(v19 + 120);
        if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v24, v23 != 0);
        *(_QWORD *)(v19 + 120) = 0LL;
        v19 = v25;
      }
      if ( (*v20 & 0x80u) != 0 )
        BRUSH::vDeleteIcmDIBs((BRUSH *)v19);
      if ( *(_QWORD *)(v19 + 136) )
        ReleaseReferenceCountedObjectHandle(2LL);
      FreeBrushMemory(v19);
      if ( !v2 && v6 )
        HmgFreeObjectAttr(v6);
    }
    else
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v26, (HBRUSH)a1);
      if ( !v26[0] || (*(_DWORD *)(v26[0] + 40LL) & 0x200) == 0 )
        v4 = 0;
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
    }
  }
  return v4;
}
