/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780
 * Callers:
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     GreCleanDC @ 0x1C0064110 (GreCleanDC.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0024E8C (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0026880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C00269E0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002F12C (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002FA48 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     GreSelectPalette @ 0x1C003F790 (GreSelectPalette.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00486F8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C004871C (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     GreDCSelectPen @ 0x1C0059C10 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C0059E10 (GreDCSelectBrush.c)
 *     hbmSelectBitmap @ 0x1C00638E0 (hbmSelectBitmap.c)
 *     GreRestoreDC @ 0x1C0071730 (GreRestoreDC.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0072AB4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0072AF0 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, unsigned int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  int v8; // r13d
  DC *v9; // rbx
  DC *v10; // rcx
  struct HPATH__ *v11; // rdx
  __int64 v12; // rbx
  struct HOBJ__ *v13; // r12
  int v14; // eax
  unsigned int v15; // edx
  int v16; // r15d
  unsigned __int16 *v17; // rsi
  char v18; // al
  unsigned int v19; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  GdiHandleManager *v23; // rsi
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r9
  _DWORD *v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r10
  GdiHandleManager *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r10
  struct OBJECT *v41; // rdx
  char v42; // bl
  DC *v43; // rax
  __int64 v44; // rbx
  unsigned __int16 *v45; // rsi
  char v46; // al
  unsigned int v47; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v48; // rdx
  unsigned int v49; // ecx
  unsigned int v50; // ebx
  GdiHandleManager *v51; // rsi
  __int64 v52; // r8
  unsigned int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // r9
  _DWORD *v56; // rdx
  unsigned int v57; // ebx
  __int64 v58; // r8
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // r10
  DC *v62; // rdx
  __int64 v63; // rcx
  __int128 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int128 *v67; // rcx
  __int128 v68; // xmm0
  _OWORD *v69; // rcx
  __int128 *v70; // rax
  __int128 v71; // xmm0
  __int128 v72; // xmm0
  __int64 v73; // rbx
  unsigned __int16 *v74; // rsi
  char v75; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v76; // rdx
  unsigned int v77; // ebx
  GdiHandleManager *v78; // rsi
  __int64 v79; // r8
  unsigned int v80; // edx
  __int64 v81; // rcx
  __int64 v82; // r9
  _DWORD *v83; // rdx
  int v84; // eax
  unsigned int v85; // ebx
  __int64 v86; // r8
  unsigned int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // r10
  DC *v90; // rax
  __int64 v91; // rbx
  unsigned __int16 *v92; // rsi
  char v93; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v94; // rdx
  unsigned int v95; // ebx
  GdiHandleManager *v96; // rsi
  __int64 v97; // r8
  unsigned int v98; // edx
  __int64 v99; // rcx
  __int64 v100; // r9
  _DWORD *v101; // rdx
  int v102; // eax
  unsigned int v103; // ebx
  __int64 v104; // r8
  unsigned int v105; // edx
  __int64 v106; // rcx
  __int64 v107; // r10
  __int64 v108; // rbx
  DC *v109; // rdx
  unsigned int v110; // ecx
  __int64 v111; // rsi
  unsigned int v112; // r14d
  GdiHandleManager *v113; // rbx
  unsigned int v114; // eax
  struct _ENTRY *v115; // rax
  struct _ENTRY *v116; // rbx
  char v117; // al
  struct OBJECT *EntryObject; // rax
  unsigned __int8 v119; // cl
  DC *v120; // rdx
  __int64 v121; // rax
  int v122; // ecx
  DC *v123; // rcx
  struct _ENTRY *v125; // [rsp+38h] [rbp-D0h] BYREF
  int v126; // [rsp+40h] [rbp-C8h]
  int v127; // [rsp+44h] [rbp-C4h]
  _DWORD *v128; // [rsp+50h] [rbp-B8h] BYREF
  int v129; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v130; // [rsp+68h] [rbp-A0h] BYREF
  int v131; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v132; // [rsp+80h] [rbp-88h] BYREF
  int v133; // [rsp+88h] [rbp-80h]
  unsigned __int16 *v134; // [rsp+98h] [rbp-70h] BYREF
  int v135; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v136; // [rsp+B0h] [rbp-58h] BYREF
  int v137; // [rsp+B8h] [rbp-50h]
  _BYTE v138[16]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v139[8]; // [rsp+D8h] [rbp-30h] BYREF
  struct OBJECT *v140; // [rsp+E0h] [rbp-28h]
  char v141; // [rsp+188h] [rbp+80h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 10);
  v6 = *(_DWORD *)(v5 + 8);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 16));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  if ( *(_DWORD *)(*((_QWORD *)*this + 10) + 308LL) != 1 || (v8 = 0, (*((_DWORD *)v7 + 65) & 1) != 0) )
    v8 = 1;
  if ( *((int *)v7 + 28) > 1 )
  {
    GreRestoreDC(*(_QWORD *)v7, 1LL);
    v7 = *this;
  }
  if ( *((struct PALETTE **)v7 + 12) != ppalDefault )
  {
    GreSelectPalette(*(HDC *)v7);
    v7 = *this;
  }
  if ( *((_DWORD *)v7 + 8) == 1 )
  {
    hbmSelectBitmap(*(_QWORD *)v7, gahStockObjects[21], 1LL, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
    v7 = *this;
  }
  *((_WORD *)v7 + 1240) = -1;
  v9 = *this;
  v10 = *this;
  if ( *((_QWORD *)*this + 21) )
  {
    REGION::vDeleteREGION(*((REGION **)*this + 21));
    *((_QWORD *)*this + 21) = 0LL;
    v9 = *this;
    v10 = *this;
  }
  if ( *((_QWORD *)v9 + 22) )
  {
    REGION::vDeleteREGION(*((REGION **)v9 + 22));
    *((_QWORD *)*this + 22) = 0LL;
    v9 = *this;
    v10 = *this;
  }
  v11 = (struct HPATH__ *)*((_QWORD *)v9 + 26);
  if ( v11 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v139, v11);
    if ( v140 && (*((_DWORD *)v140 + 21) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v140);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v139);
    *((_QWORD *)v9 + 26) = 0LL;
    v10 = *this;
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v10 + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 19));
  v12 = *((_QWORD *)*this + 20);
  if ( v12 )
  {
    v13 = *(struct HOBJ__ **)v12;
    v14 = (unsigned __int16)*(_QWORD *)v12;
    v15 = ((unsigned int)*(_QWORD *)v12 >> 8) & 0xFF0000;
    v130 = 0LL;
    LOWORD(v16) = 0;
    v131 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v130, v14 | v15, 0, 0, 1);
    if ( !v131 )
    {
LABEL_59:
      if ( (unsigned __int16)v16 == 1 )
      {
        v128 = 0LL;
        v129 = 0;
        HANDLELOCK::bLockHobj((HANDLELOCK *)&v128, v13, 0xAu);
        if ( v129 )
        {
          v34 = gpHandleManager;
          v35 = GdiHandleManager::DecodeIndex(gpHandleManager, *v128 & 0xFFFFFF);
          v36 = *((_QWORD *)v34 + 2);
          v37 = v35;
          v38 = *(_DWORD *)(v36 + 2056);
          if ( v35 >= v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
            goto LABEL_68;
          v39 = ((v35 - v38) >> 16) + 1;
          if ( v35 < v38 )
            v39 = 0LL;
          v40 = *(_QWORD *)(v36 + 8 * v39 + 8);
          if ( (_DWORD)v39 )
            v37 = ((1 - (_DWORD)v39) << 16) - v38 + v35;
          if ( (unsigned int)v37 >= *(_DWORD *)(v40 + 20) )
LABEL_68:
            v41 = 0LL;
          else
            v41 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * (v37 >> 8))
                                    + 16LL * (unsigned __int8)v37
                                    + 8);
          v42 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(v34, v41) + 15);
          HANDLELOCK::vUnlock((HANDLELOCK *)&v128);
          if ( (v42 & 2) != 0 )
            bDeleteFont(v13, 0LL);
          if ( v129 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v128);
        }
      }
      goto LABEL_73;
    }
    v17 = v130;
    v18 = *((_BYTE *)v130 + 14);
    if ( v18 == 5 )
    {
      v18 = 5;
      if ( gbGdiHmgrAltStacks )
      {
        if ( gpentHmgrAltStacks )
        {
          v19 = (unsigned __int16)*(_DWORD *)v12 | (*(_DWORD *)v12 >> 8) & 0xFF0000;
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v19 | (v19 >> 8) & 0xFF0000);
          v18 = *((_BYTE *)v17 + 14);
        }
      }
    }
    v16 = *(_DWORD *)(v12 + 8);
    if ( v18 == 5 )
    {
      v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v12 + 680);
      v21 = 0;
    }
    else
    {
      if ( v18 != 16 )
      {
LABEL_34:
        --*(_DWORD *)(v12 + 8);
        v22 = *(_DWORD *)v17 & 0xFFFFFF;
        if ( v22 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v17,
                                        1)
                 + 13) == HIWORD(v22) )
              v22 = (unsigned __int16)v22;
          }
          else
          {
            v22 = *v17;
          }
        }
        v23 = gpHandleManager;
        v24 = *((_QWORD *)gpHandleManager + 2);
        v25 = *(_DWORD *)(v24 + 2056);
        if ( v22 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
          goto LABEL_46;
        v26 = ((v22 - v25) >> 16) + 1;
        if ( v22 < v25 )
          v26 = 0LL;
        v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
        if ( (_DWORD)v26 )
          v22 += ((1 - (_DWORD)v26) << 16) - v25;
        if ( v22 >= *(_DWORD *)(v27 + 20) )
LABEL_46:
          v28 = 0LL;
        else
          v28 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v22 >> 8))
                           + 16LL * (unsigned __int8)v22
                           + 8);
        v29 = (unsigned __int16)*v28 | (*v28 >> 8) & 0xFF0000;
        if ( v29 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v28,
                                        1)
                 + 13) == HIWORD(v29) )
              v29 = (unsigned __int16)v29;
          }
          else
          {
            v29 = (unsigned __int16)*v28;
          }
        }
        v30 = *((_QWORD *)v23 + 2);
        v31 = *(_DWORD *)(v30 + 2056);
        if ( v29 < v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
        {
          v32 = ((v29 - v31) >> 16) + 1;
          if ( v29 < v31 )
            v32 = 0LL;
          v33 = *(_QWORD *)(v30 + 8 * v32 + 8);
          if ( (_DWORD)v32 )
            v29 += ((1 - (_DWORD)v32) << 16) - v31;
          *(_DWORD *)(*(_QWORD *)v33 + 24LL * v29 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8)) + 16LL * (unsigned __int8)v29,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_59;
      }
      v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v12 + 136);
      v21 = 2;
    }
    TrackObjectReferenceDecrement(v21, v20);
    goto LABEL_34;
  }
LABEL_73:
  v43 = *this;
  v132 = 0LL;
  v133 = 0;
  v44 = *((_QWORD *)v43 + 13);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v132,
    (unsigned __int16)*(_DWORD *)v44 | (*(_DWORD *)v44 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v133 )
    goto LABEL_107;
  v45 = v132;
  v46 = *((_BYTE *)v132 + 14);
  if ( v46 == 5 )
  {
    if ( !gbGdiHmgrAltStacks
      || !gpentHmgrAltStacks
      || (v47 = (unsigned __int16)*(_DWORD *)v44 | (*(_DWORD *)v44 >> 8) & 0xFF0000,
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v47 | (v47 >> 8) & 0xFF0000),
          v46 = *((_BYTE *)v45 + 14),
          v46 == 5) )
    {
      v48 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v44 + 680);
      v49 = 0;
LABEL_81:
      TrackObjectReferenceDecrement(v49, v48);
      goto LABEL_82;
    }
  }
  if ( v46 == 16 )
  {
    v48 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v44 + 136);
    v49 = 2;
    goto LABEL_81;
  }
LABEL_82:
  --*(_DWORD *)(v44 + 8);
  v50 = *(_DWORD *)v45 & 0xFFFFFF;
  if ( v50 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v45,
                                  1)
           + 13) == HIWORD(v50) )
        v50 = (unsigned __int16)v50;
    }
    else
    {
      v50 = *v45;
    }
  }
  v51 = gpHandleManager;
  v52 = *((_QWORD *)gpHandleManager + 2);
  v53 = *(_DWORD *)(v52 + 2056);
  if ( v50 >= v53 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16) )
    goto LABEL_94;
  v54 = ((v50 - v53) >> 16) + 1;
  if ( v50 < v53 )
    v54 = 0LL;
  v55 = *(_QWORD *)(v52 + 8 * v54 + 8);
  if ( (_DWORD)v54 )
    v50 += ((1 - (_DWORD)v54) << 16) - v53;
  if ( v50 >= *(_DWORD *)(v55 + 20) )
LABEL_94:
    v56 = 0LL;
  else
    v56 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)v50 >> 8))
                     + 16LL * (unsigned __int8)v50
                     + 8);
  v57 = (unsigned __int16)*v56 | (*v56 >> 8) & 0xFF0000;
  if ( v57 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v56,
                                  1)
           + 13) == HIWORD(v57) )
        v57 = (unsigned __int16)v57;
    }
    else
    {
      v57 = (unsigned __int16)*v56;
    }
  }
  v58 = *((_QWORD *)v51 + 2);
  v59 = *(_DWORD *)(v58 + 2056);
  if ( v57 < v59 + ((*(unsigned __int16 *)(v58 + 2) + 0xFFFF) << 16) )
  {
    v60 = ((v57 - v59) >> 16) + 1;
    if ( v57 < v59 )
      v60 = 0LL;
    v61 = *(_QWORD *)(v58 + 8 * v60 + 8);
    if ( (_DWORD)v60 )
      v57 += ((1 - (_DWORD)v60) << 16) - v59;
    *(_DWORD *)(*(_QWORD *)v61 + 24LL * v57 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v61 + 24) + 8 * ((unsigned __int64)v57 >> 8)) + 16LL * (unsigned __int8)v57,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_107:
  v62 = *this;
  v63 = *((_QWORD *)*this + 38);
  if ( v63 && (DC *)v63 != (DC *)((char *)*this + 272) )
  {
    Win32FreePool(v63);
    *((_QWORD *)*this + 38) = 0LL;
    v62 = *this;
  }
  v64 = (__int128 *)((char *)v62 + 88);
  v65 = 3LL;
  v66 = 3LL;
  v67 = (__int128 *)&dclevelDefault;
  do
  {
    v64 += 8;
    v68 = *v67;
    v67 += 8;
    *(v64 - 8) = v68;
    *(v64 - 7) = *(v67 - 7);
    *(v64 - 6) = *(v67 - 6);
    *(v64 - 5) = *(v67 - 5);
    *(v64 - 4) = *(v67 - 4);
    *(v64 - 3) = *(v67 - 3);
    *(v64 - 2) = *(v67 - 2);
    *(v64 - 1) = *(v67 - 1);
    --v66;
  }
  while ( v66 );
  *v64 = *v67;
  v64[1] = v67[1];
  v69 = (_OWORD *)*((_QWORD *)*this + 10);
  v70 = (__int128 *)&DcAttrDefault;
  do
  {
    v69 += 8;
    v71 = *v70;
    v70 += 8;
    *(v69 - 8) = v71;
    *(v69 - 7) = *(v70 - 7);
    *(v69 - 6) = *(v70 - 6);
    *(v69 - 5) = *(v70 - 5);
    *(v69 - 4) = *(v70 - 4);
    *(v69 - 3) = *(v70 - 3);
    *(v69 - 2) = *(v70 - 2);
    *(v69 - 1) = *(v70 - 1);
    --v65;
  }
  while ( v65 );
  v72 = *v70;
  v134 = 0LL;
  v135 = 0;
  *v69 = v72;
  v69[1] = v70[1];
  *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x12001Fu;
  v73 = *((_QWORD *)*this + 18);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v134,
    (unsigned __int16)*(_DWORD *)v73 | (*(_DWORD *)v73 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v135 )
  {
    v74 = v134;
    v75 = *((_BYTE *)v134 + 14);
    if ( v75 == 5
      && (RECALTLOCK(
            (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v73 | (unsigned __int64)((*(_DWORD *)v73 >> 8) & 0xFF0000)),
            (struct _BASEOBJECT *)v73),
          v75 = *((_BYTE *)v74 + 14),
          v75 == 5) )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v73 + 680));
    }
    else if ( v75 == 16 )
    {
      v76 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v73 + 136);
      if ( v76 )
      {
        if ( qword_1C019F750 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C019F750,
            v76,
            1);
      }
    }
    ++*(_DWORD *)(v73 + 8);
    v77 = *(_DWORD *)v74 & 0xFFFFFF;
    if ( v77 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v74,
                                    1)
             + 13) == HIWORD(v77) )
          v77 = (unsigned __int16)v77;
      }
      else
      {
        v77 = *v74;
      }
    }
    v78 = gpHandleManager;
    v79 = *((_QWORD *)gpHandleManager + 2);
    v80 = *(_DWORD *)(v79 + 2056);
    if ( v77 >= v80 + ((*(unsigned __int16 *)(v79 + 2) + 0xFFFF) << 16) )
      goto LABEL_134;
    v81 = ((v77 - v80) >> 16) + 1;
    if ( v77 < v80 )
      v81 = 0LL;
    v82 = *(_QWORD *)(v79 + 8 * v81 + 8);
    if ( (_DWORD)v81 )
      v77 += ((1 - (_DWORD)v81) << 16) - v80;
    if ( v77 >= *(_DWORD *)(v82 + 20) )
LABEL_134:
      v83 = 0LL;
    else
      v83 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v82 + 24) + 8 * ((unsigned __int64)v77 >> 8))
                       + 16LL * (unsigned __int8)v77
                       + 8);
    v84 = (unsigned __int16)*v83;
    v85 = v84 | (*v83 >> 8) & 0xFF0000;
    if ( v85 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v84,
                                    1)
             + 13) == HIWORD(v85) )
          v85 = (unsigned __int16)v85;
      }
      else
      {
        v85 = (unsigned __int16)v84;
      }
    }
    v86 = *((_QWORD *)v78 + 2);
    v87 = *(_DWORD *)(v86 + 2056);
    if ( v85 < v87 + ((*(unsigned __int16 *)(v86 + 2) + 0xFFFF) << 16) )
    {
      v88 = ((v85 - v87) >> 16) + 1;
      if ( v85 < v87 )
        v88 = 0LL;
      v89 = *(_QWORD *)(v86 + 8 * v88 + 8);
      if ( (_DWORD)v88 )
        v85 += ((1 - (_DWORD)v88) << 16) - v87;
      *(_DWORD *)(*(_QWORD *)v89 + 24LL * v85 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v89 + 24) + 8 * ((unsigned __int64)v85 >> 8)) + 16LL * (unsigned __int8)v85,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v90 = *this;
  v136 = 0LL;
  v137 = 0;
  v91 = *((_QWORD *)v90 + 19);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v136,
    (unsigned __int16)*(_DWORD *)v91 | (*(_DWORD *)v91 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v137 )
  {
    v92 = v136;
    v93 = *((_BYTE *)v136 + 14);
    if ( v93 == 5
      && (RECALTLOCK(
            (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v91 | (unsigned __int64)((*(_DWORD *)v91 >> 8) & 0xFF0000)),
            (struct _BASEOBJECT *)v91),
          v93 = *((_BYTE *)v92 + 14),
          v93 == 5) )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v91 + 680));
    }
    else if ( v93 == 16 )
    {
      v94 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v91 + 136);
      if ( v94 )
      {
        if ( qword_1C019F750 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C019F750,
            v94,
            1);
      }
    }
    ++*(_DWORD *)(v91 + 8);
    v95 = *(_DWORD *)v92 & 0xFFFFFF;
    if ( v95 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v92,
                                    1)
             + 13) == HIWORD(v95) )
          v95 = (unsigned __int16)v95;
      }
      else
      {
        v95 = *v92;
      }
    }
    v96 = gpHandleManager;
    v97 = *((_QWORD *)gpHandleManager + 2);
    v98 = *(_DWORD *)(v97 + 2056);
    if ( v95 >= v98 + ((*(unsigned __int16 *)(v97 + 2) + 0xFFFF) << 16) )
      goto LABEL_167;
    v99 = ((v95 - v98) >> 16) + 1;
    if ( v95 < v98 )
      v99 = 0LL;
    v100 = *(_QWORD *)(v97 + 8 * v99 + 8);
    if ( (_DWORD)v99 )
      v95 += ((1 - (_DWORD)v99) << 16) - v98;
    if ( v95 >= *(_DWORD *)(v100 + 20) )
LABEL_167:
      v101 = 0LL;
    else
      v101 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v100 + 24) + 8 * ((unsigned __int64)v95 >> 8))
                        + 16LL * (unsigned __int8)v95
                        + 8);
    v102 = (unsigned __int16)*v101;
    v103 = v102 | (*v101 >> 8) & 0xFF0000;
    if ( v103 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v102,
                                    1)
             + 13) == HIWORD(v103) )
          v103 = (unsigned __int16)v103;
      }
      else
      {
        v103 = (unsigned __int16)v102;
      }
    }
    v104 = *((_QWORD *)v96 + 2);
    v105 = *(_DWORD *)(v104 + 2056);
    if ( v103 < v105 + ((*(unsigned __int16 *)(v104 + 2) + 0xFFFF) << 16) )
    {
      v106 = ((v103 - v105) >> 16) + 1;
      if ( v103 < v105 )
        v106 = 0LL;
      v107 = *(_QWORD *)(v104 + 8 * v106 + 8);
      if ( (_DWORD)v106 )
        v103 += ((1 - (_DWORD)v106) << 16) - v105;
      *(_DWORD *)(*(_QWORD *)v107 + 24LL * v103 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v107 + 24) + 8 * ((unsigned __int64)v103 >> 8)) + 16LL * (unsigned __int8)v103,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v108 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v108 + 40) & 1);
  v109 = *this;
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)(gpDispInfo + 40) )
  {
    *(_DWORD *)(*((_QWORD *)v109 + 10) + 12LL) |= 2u;
    v109 = *this;
  }
  v110 = *((_DWORD *)v109 + 65) & 0xFFFFFFFE;
  if ( v8 )
    v110 = *((_DWORD *)v109 + 65) | 1;
  *((_DWORD *)v109 + 65) = v110;
  v111 = *((_QWORD *)*this + 13);
  v112 = (unsigned __int16)*(_DWORD *)v111 | (*(_DWORD *)v111 >> 8) & 0xFF0000;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v141);
  v113 = gpHandleManager;
  v126 = 1;
  v114 = GdiHandleManager::DecodeIndex(gpHandleManager, v112);
  v115 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v113 + 2), v114, 0);
  v116 = v115;
  v125 = v115;
  if ( !v115 )
  {
    v126 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_199;
  }
  _m_prefetchw((char *)v115 + 8);
  v127 = *((_DWORD *)v115 + 2);
  v117 = *((_BYTE *)v115 + 15);
  if ( (v117 & 0x20) != 0 )
    goto LABEL_194;
  if ( (v117 & 0x40) != 0 )
  {
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v116 & 0xFFFFFF);
    if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
    {
LABEL_195:
      v116 = v125;
      goto LABEL_196;
    }
LABEL_194:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v125);
    if ( !v126 )
      goto LABEL_199;
    goto LABEL_195;
  }
LABEL_196:
  v119 = *((_BYTE *)v116 + 14);
  if ( v119 == 5 )
  {
    RECALTLOCK(
      (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v111 | (unsigned __int64)((*(_DWORD *)v111 >> 8) & 0xFF0000)),
      (struct _BASEOBJECT *)v111);
    v119 = *((_BYTE *)v116 + 14);
  }
  TrackHmgrReferenceIncrement(v119, (struct OBJECT *)v111);
  ++*(_DWORD *)(v111 + 8);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v125);
LABEL_199:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v125);
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)v138, *((struct RFONT **)*this + 269));
  *((_QWORD *)*this + 269) = 0LL;
  v120 = *this;
  v121 = *((_DWORD *)*this + 10) & 1;
  v122 = *((_DWORD *)*this + 2 * v121 + 357);
  *((_DWORD *)v120 + 396) = *((_DWORD *)*this + 2 * v121 + 356);
  *((_DWORD *)v120 + 397) = v122;
  DC::vReleaseRao(*this);
  if ( (unsigned int)DC::bDpiScaleTransform(*this) )
    DC::vClearDpiScaling(v123);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v138);
  return 1LL;
}
