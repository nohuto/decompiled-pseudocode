/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0
 * Callers:
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     GreCleanDC @ 0x1C003C230 (GreCleanDC.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AE2E0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0016BA0 (FreeObject.c)
 *     GreDCSelectBrush @ 0x1C00182F0 (GreDCSelectBrush.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001A950 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001BD10 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022748 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C003CA68 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0055128 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0079E50 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     GreSelectPalette @ 0x1C007AAB0 (GreSelectPalette.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C007ADB4 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0081AAC (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     GreDCSelectPen @ 0x1C0081CC0 (GreDCSelectPen.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B0E50 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B0E98 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00BDB68 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C0123418 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C013348C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  int v8; // r13d
  DC *v9; // rbx
  struct REGION *v10; // rcx
  DC *v11; // rcx
  struct HPATH__ *v12; // rdx
  __int64 v13; // rbx
  struct HOBJ__ *v14; // r12
  int v15; // eax
  unsigned int v16; // edx
  int v17; // r15d
  unsigned __int16 *v18; // rsi
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
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
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // ebx
  GdiHandleManager *v50; // rsi
  __int64 v51; // r8
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // r9
  _DWORD *v55; // rdx
  unsigned int v56; // ebx
  __int64 v57; // r8
  unsigned int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // r10
  DC *v61; // rdx
  __int64 v62; // rcx
  __int128 *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int128 *v66; // rcx
  __int128 v67; // xmm0
  _OWORD *v68; // rcx
  PVOID *p_DeviceObject; // rax
  __int128 v70; // xmm0
  __int128 v71; // xmm0
  __int64 v72; // rbx
  unsigned __int16 *v73; // rsi
  char v74; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v75; // rdx
  unsigned int v76; // ebx
  GdiHandleManager *v77; // rsi
  __int64 v78; // r8
  unsigned int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // r9
  _DWORD *v82; // rdx
  int v83; // eax
  unsigned int v84; // ebx
  __int64 v85; // r8
  unsigned int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // r10
  DC *v89; // rax
  __int64 v90; // rbx
  unsigned __int16 *v91; // rsi
  char v92; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v93; // rdx
  unsigned int v94; // ebx
  GdiHandleManager *v95; // rsi
  __int64 v96; // r8
  unsigned int v97; // edx
  __int64 v98; // rcx
  __int64 v99; // r9
  _DWORD *v100; // rdx
  int v101; // eax
  unsigned int v102; // ebx
  __int64 v103; // r8
  unsigned int v104; // edx
  __int64 v105; // rcx
  __int64 v106; // r10
  __int64 v107; // rbx
  DC *v108; // rdx
  unsigned int v109; // ecx
  __int64 v110; // rsi
  unsigned int v111; // r14d
  GdiHandleManager *v112; // rbx
  unsigned int v113; // eax
  struct _ENTRY *v114; // rax
  struct _ENTRY *v115; // rbx
  char v116; // al
  struct OBJECT *EntryObject; // rax
  unsigned __int8 v118; // cl
  DC *v119; // r8
  __int64 v120; // rax
  int v121; // ecx
  DC *v122; // rcx
  struct _ENTRY *v124; // [rsp+38h] [rbp-D0h] BYREF
  int v125; // [rsp+40h] [rbp-C8h]
  int v126; // [rsp+44h] [rbp-C4h]
  _DWORD *v127; // [rsp+50h] [rbp-B8h] BYREF
  int v128; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v129; // [rsp+68h] [rbp-A0h] BYREF
  int v130; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v131; // [rsp+80h] [rbp-88h] BYREF
  int v132; // [rsp+88h] [rbp-80h]
  unsigned __int16 *v133; // [rsp+98h] [rbp-70h] BYREF
  int v134; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v135; // [rsp+B0h] [rbp-58h] BYREF
  int v136; // [rsp+B8h] [rbp-50h]
  _BYTE v137[8]; // [rsp+C8h] [rbp-40h] BYREF
  struct OBJECT *v138; // [rsp+D0h] [rbp-38h]
  char v139; // [rsp+188h] [rbp+80h] BYREF
  char v140; // [rsp+198h] [rbp+90h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush((__int64)v4, *(_QWORD *)(v5 + 160));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  if ( *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (v8 = 0, (*((_DWORD *)v7 + 63) & 1) != 0) )
    v8 = 1;
  if ( *((int *)v7 + 26) > 1 )
  {
    GreRestoreDC(*(HDC *)v7, 1);
    v7 = *this;
  }
  if ( *((struct PALETTE **)v7 + 11) != ppalDefault )
  {
    GreSelectPalette(*(HDC *)v7);
    v7 = *this;
  }
  if ( *((_DWORD *)v7 + 8) == 1 )
  {
    hbmSelectBitmap(*(_QWORD *)v7, gahStockObjects[21], 1, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
    v7 = *this;
  }
  *((_WORD *)v7 + 1036) = -1;
  v9 = *this;
  v10 = (struct REGION *)*((_QWORD *)*this + 20);
  if ( v10 )
  {
    if ( v10 != prgnDefault )
    {
      FreeObject((__int64)v10, 4);
      v9 = *this;
    }
    *((_QWORD *)v9 + 20) = 0LL;
    v9 = *this;
  }
  v11 = v9;
  if ( *((_QWORD *)v9 + 21) )
  {
    REGION::vDeleteREGION(*((REGION **)v9 + 21));
    *((_QWORD *)*this + 21) = 0LL;
    v9 = *this;
    v11 = *this;
  }
  v12 = (struct HPATH__ *)*((_QWORD *)v9 + 25);
  if ( v12 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v137, v12);
    if ( v138 && (*((_DWORD *)v138 + 21) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v138, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v137);
    *((_QWORD *)v9 + 25) = 0LL;
    v11 = *this;
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v11 + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  v13 = *((_QWORD *)*this + 19);
  if ( v13 )
  {
    v14 = *(struct HOBJ__ **)v13;
    v15 = (unsigned __int16)*(_QWORD *)v13;
    v16 = ((unsigned int)*(_QWORD *)v13 >> 8) & 0xFF0000;
    v129 = 0LL;
    LOWORD(v17) = 0;
    v130 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v129, v15 | v16, 0, 0, 1);
    if ( !v130 )
    {
LABEL_61:
      if ( (unsigned __int16)v17 == 1 )
      {
        v127 = 0LL;
        v128 = 0;
        HANDLELOCK::bLockHobj((HANDLELOCK *)&v127, v14, 10);
        if ( v128 )
        {
          v34 = gpHandleManager;
          v35 = GdiHandleManager::DecodeIndex(gpHandleManager, *v127 & 0xFFFFFF);
          v36 = *((_QWORD *)v34 + 2);
          v37 = v35;
          v38 = *(_DWORD *)(v36 + 2056);
          if ( v35 >= v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
            goto LABEL_70;
          v39 = ((v35 - v38) >> 16) + 1;
          if ( v35 < v38 )
            v39 = 0LL;
          v40 = *(_QWORD *)(v36 + 8 * v39 + 8);
          if ( (_DWORD)v39 )
            v37 = ((1 - (_DWORD)v39) << 16) - v38 + v35;
          if ( (unsigned int)v37 >= *(_DWORD *)(v40 + 20) )
LABEL_70:
            v41 = 0LL;
          else
            v41 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * (v37 >> 8))
                                    + 16LL * (unsigned __int8)v37
                                    + 8);
          v42 = *((_BYTE *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)v34, v41) + 15);
          HANDLELOCK::vUnlock((HANDLELOCK *)&v127);
          if ( (v42 & 2) != 0 )
            bDeleteFont(v14, 0LL);
          if ( v128 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v127);
        }
      }
      goto LABEL_75;
    }
    v18 = v129;
    v19 = *((_BYTE *)v129 + 14);
    if ( v19 == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v13);
      v19 = *((_BYTE *)v18 + 14);
    }
    v17 = *(_DWORD *)(v13 + 8);
    if ( v19 == 5 )
    {
      v20 = *(_QWORD *)(v13 + 680);
      v21 = 0LL;
    }
    else
    {
      if ( v19 != 16 )
      {
LABEL_36:
        --*(_DWORD *)(v13 + 8);
        v22 = *(_DWORD *)v18 & 0xFFFFFF;
        if ( v22 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v18,
                                        1)
                 + 13) == HIWORD(v22) )
              v22 = (unsigned __int16)v22;
          }
          else
          {
            v22 = *v18;
          }
        }
        v23 = gpHandleManager;
        v24 = *((_QWORD *)gpHandleManager + 2);
        v25 = *(_DWORD *)(v24 + 2056);
        if ( v22 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
          goto LABEL_48;
        v26 = ((v22 - v25) >> 16) + 1;
        if ( v22 < v25 )
          v26 = 0LL;
        v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
        if ( (_DWORD)v26 )
          v22 += ((1 - (_DWORD)v26) << 16) - v25;
        if ( v22 >= *(_DWORD *)(v27 + 20) )
LABEL_48:
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
        goto LABEL_61;
      }
      v20 = *(_QWORD *)(v13 + 136);
      v21 = 2LL;
    }
    TrackObjectReferenceDecrement(v21, v20);
    goto LABEL_36;
  }
LABEL_75:
  v43 = *this;
  v131 = 0LL;
  v132 = 0;
  v44 = *((_QWORD *)v43 + 12);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v131,
    (unsigned __int16)*(_DWORD *)v44 | (*(_DWORD *)v44 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v132 )
    goto LABEL_109;
  v45 = v131;
  v46 = *((_BYTE *)v131 + 14);
  if ( v46 == 5 )
  {
    if ( !gbGdiHmgrAltStacks
      || !gpentHmgrAltStacks
      || (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v44), v46 = *((_BYTE *)v45 + 14), v46 == 5) )
    {
      v47 = *(_QWORD *)(v44 + 680);
      v48 = 0LL;
LABEL_83:
      TrackObjectReferenceDecrement(v48, v47);
      goto LABEL_84;
    }
  }
  if ( v46 == 16 )
  {
    v47 = *(_QWORD *)(v44 + 136);
    v48 = 2LL;
    goto LABEL_83;
  }
LABEL_84:
  --*(_DWORD *)(v44 + 8);
  v49 = *(_DWORD *)v45 & 0xFFFFFF;
  if ( v49 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v45,
                                  1)
           + 13) == HIWORD(v49) )
        v49 = (unsigned __int16)v49;
    }
    else
    {
      v49 = *v45;
    }
  }
  v50 = gpHandleManager;
  v51 = *((_QWORD *)gpHandleManager + 2);
  v52 = *(_DWORD *)(v51 + 2056);
  if ( v49 >= v52 + ((*(unsigned __int16 *)(v51 + 2) + 0xFFFF) << 16) )
    goto LABEL_96;
  v53 = ((v49 - v52) >> 16) + 1;
  if ( v49 < v52 )
    v53 = 0LL;
  v54 = *(_QWORD *)(v51 + 8 * v53 + 8);
  if ( (_DWORD)v53 )
    v49 += ((1 - (_DWORD)v53) << 16) - v52;
  if ( v49 >= *(_DWORD *)(v54 + 20) )
LABEL_96:
    v55 = 0LL;
  else
    v55 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)v49 >> 8))
                     + 16LL * (unsigned __int8)v49
                     + 8);
  v56 = (unsigned __int16)*v55 | (*v55 >> 8) & 0xFF0000;
  if ( v56 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v55,
                                  1)
           + 13) == HIWORD(v56) )
        v56 = (unsigned __int16)v56;
    }
    else
    {
      v56 = (unsigned __int16)*v55;
    }
  }
  v57 = *((_QWORD *)v50 + 2);
  v58 = *(_DWORD *)(v57 + 2056);
  if ( v56 < v58 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
  {
    v59 = ((v56 - v58) >> 16) + 1;
    if ( v56 < v58 )
      v59 = 0LL;
    v60 = *(_QWORD *)(v57 + 8 * v59 + 8);
    if ( (_DWORD)v59 )
      v56 += ((1 - (_DWORD)v59) << 16) - v58;
    *(_DWORD *)(*(_QWORD *)v60 + 24LL * v56 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * ((unsigned __int64)v56 >> 8)) + 16LL * (unsigned __int8)v56,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_109:
  v61 = *this;
  v62 = *((_QWORD *)*this + 37);
  if ( v62 && (DC *)v62 != (DC *)((char *)*this + 264) )
  {
    Win32FreePool(v62);
    *((_QWORD *)*this + 37) = 0LL;
    v61 = *this;
  }
  v63 = (__int128 *)((char *)v61 + 80);
  v64 = 3LL;
  v65 = 3LL;
  v66 = (__int128 *)&dclevelDefault;
  do
  {
    v63 += 8;
    v67 = *v66;
    v66 += 8;
    *(v63 - 8) = v67;
    *(v63 - 7) = *(v66 - 7);
    *(v63 - 6) = *(v66 - 6);
    *(v63 - 5) = *(v66 - 5);
    *(v63 - 4) = *(v66 - 4);
    *(v63 - 3) = *(v66 - 3);
    *(v63 - 2) = *(v66 - 2);
    *(v63 - 1) = *(v66 - 1);
    --v65;
  }
  while ( v65 );
  *v63 = *v66;
  v63[1] = v66[1];
  v68 = (_OWORD *)*((_QWORD *)*this + 122);
  p_DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  do
  {
    v68 += 8;
    v70 = *(_OWORD *)p_DeviceObject;
    p_DeviceObject += 16;
    *(v68 - 8) = v70;
    *(v68 - 7) = *((_OWORD *)p_DeviceObject - 7);
    *(v68 - 6) = *((_OWORD *)p_DeviceObject - 6);
    *(v68 - 5) = *((_OWORD *)p_DeviceObject - 5);
    *(v68 - 4) = *((_OWORD *)p_DeviceObject - 4);
    *(v68 - 3) = *((_OWORD *)p_DeviceObject - 3);
    *(v68 - 2) = *((_OWORD *)p_DeviceObject - 2);
    *(v68 - 1) = *((_OWORD *)p_DeviceObject - 1);
    --v64;
  }
  while ( v64 );
  v71 = *(_OWORD *)p_DeviceObject;
  v133 = 0LL;
  v134 = 0;
  *v68 = v71;
  v68[1] = *((_OWORD *)p_DeviceObject + 1);
  v68[2] = *((_OWORD *)p_DeviceObject + 2);
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  v72 = *((_QWORD *)*this + 17);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v133,
    (unsigned __int16)*(_DWORD *)v72 | (*(_DWORD *)v72 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v134 )
  {
    v73 = v133;
    v74 = *((_BYTE *)v133 + 14);
    if ( v74 == 5
      && (RECALTLOCK(
            (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v72 | (unsigned __int64)((*(_DWORD *)v72 >> 8) & 0xFF0000)),
            (struct _BASEOBJECT *)v72),
          v74 = *((_BYTE *)v73 + 14),
          v74 == 5) )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v72 + 680));
    }
    else if ( v74 == 16 )
    {
      v75 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v72 + 136);
      if ( v75 )
      {
        if ( qword_1C0210558 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C0210558,
            v75,
            1);
      }
    }
    ++*(_DWORD *)(v72 + 8);
    v76 = *(_DWORD *)v73 & 0xFFFFFF;
    if ( v76 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v73,
                                    1)
             + 13) == HIWORD(v76) )
          v76 = (unsigned __int16)v76;
      }
      else
      {
        v76 = *v73;
      }
    }
    v77 = gpHandleManager;
    v78 = *((_QWORD *)gpHandleManager + 2);
    v79 = *(_DWORD *)(v78 + 2056);
    if ( v76 >= v79 + ((*(unsigned __int16 *)(v78 + 2) + 0xFFFF) << 16) )
      goto LABEL_136;
    v80 = ((v76 - v79) >> 16) + 1;
    if ( v76 < v79 )
      v80 = 0LL;
    v81 = *(_QWORD *)(v78 + 8 * v80 + 8);
    if ( (_DWORD)v80 )
      v76 += ((1 - (_DWORD)v80) << 16) - v79;
    if ( v76 >= *(_DWORD *)(v81 + 20) )
LABEL_136:
      v82 = 0LL;
    else
      v82 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v81 + 24) + 8 * ((unsigned __int64)v76 >> 8))
                       + 16LL * (unsigned __int8)v76
                       + 8);
    v83 = (unsigned __int16)*v82;
    v84 = v83 | (*v82 >> 8) & 0xFF0000;
    if ( v84 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v83,
                                    1)
             + 13) == HIWORD(v84) )
          v84 = (unsigned __int16)v84;
      }
      else
      {
        v84 = (unsigned __int16)v83;
      }
    }
    v85 = *((_QWORD *)v77 + 2);
    v86 = *(_DWORD *)(v85 + 2056);
    if ( v84 < v86 + ((*(unsigned __int16 *)(v85 + 2) + 0xFFFF) << 16) )
    {
      v87 = ((v84 - v86) >> 16) + 1;
      if ( v84 < v86 )
        v87 = 0LL;
      v88 = *(_QWORD *)(v85 + 8 * v87 + 8);
      if ( (_DWORD)v87 )
        v84 += ((1 - (_DWORD)v87) << 16) - v86;
      *(_DWORD *)(*(_QWORD *)v88 + 24LL * v84 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v88 + 24) + 8 * ((unsigned __int64)v84 >> 8)) + 16LL * (unsigned __int8)v84,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v89 = *this;
  v135 = 0LL;
  v136 = 0;
  v90 = *((_QWORD *)v89 + 18);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v135,
    (unsigned __int16)*(_DWORD *)v90 | (*(_DWORD *)v90 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v136 )
  {
    v91 = v135;
    v92 = *((_BYTE *)v135 + 14);
    if ( v92 == 5
      && (RECALTLOCK(
            (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v90 | (unsigned __int64)((*(_DWORD *)v90 >> 8) & 0xFF0000)),
            (struct _BASEOBJECT *)v90),
          v92 = *((_BYTE *)v91 + 14),
          v92 == 5) )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v90 + 680));
    }
    else if ( v92 == 16 )
    {
      v93 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v90 + 136);
      if ( v93 )
      {
        if ( qword_1C0210558 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C0210558,
            v93,
            1);
      }
    }
    ++*(_DWORD *)(v90 + 8);
    v94 = *(_DWORD *)v91 & 0xFFFFFF;
    if ( v94 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v91,
                                    1)
             + 13) == HIWORD(v94) )
          v94 = (unsigned __int16)v94;
      }
      else
      {
        v94 = *v91;
      }
    }
    v95 = gpHandleManager;
    v96 = *((_QWORD *)gpHandleManager + 2);
    v97 = *(_DWORD *)(v96 + 2056);
    if ( v94 >= v97 + ((*(unsigned __int16 *)(v96 + 2) + 0xFFFF) << 16) )
      goto LABEL_169;
    v98 = ((v94 - v97) >> 16) + 1;
    if ( v94 < v97 )
      v98 = 0LL;
    v99 = *(_QWORD *)(v96 + 8 * v98 + 8);
    if ( (_DWORD)v98 )
      v94 += ((1 - (_DWORD)v98) << 16) - v97;
    if ( v94 >= *(_DWORD *)(v99 + 20) )
LABEL_169:
      v100 = 0LL;
    else
      v100 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v99 + 24) + 8 * ((unsigned __int64)v94 >> 8))
                        + 16LL * (unsigned __int8)v94
                        + 8);
    v101 = (unsigned __int16)*v100;
    v102 = v101 | (*v100 >> 8) & 0xFF0000;
    if ( v102 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v101,
                                    1)
             + 13) == HIWORD(v102) )
          v102 = (unsigned __int16)v102;
      }
      else
      {
        v102 = (unsigned __int16)v101;
      }
    }
    v103 = *((_QWORD *)v95 + 2);
    v104 = *(_DWORD *)(v103 + 2056);
    if ( v102 < v104 + ((*(unsigned __int16 *)(v103 + 2) + 0xFFFF) << 16) )
    {
      v105 = ((v102 - v104) >> 16) + 1;
      if ( v102 < v104 )
        v105 = 0LL;
      v106 = *(_QWORD *)(v103 + 8 * v105 + 8);
      if ( (_DWORD)v105 )
        v102 += ((1 - (_DWORD)v105) << 16) - v104;
      *(_DWORD *)(*(_QWORD *)v106 + 24LL * v102 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * ((unsigned __int64)v102 >> 8)) + 16LL * (unsigned __int8)v102,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v107 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v107 + 40) & 1);
  v108 = *this;
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)(gpDispInfo + 40) )
  {
    **((_DWORD **)v108 + 122) |= 2u;
    v108 = *this;
  }
  v109 = *((_DWORD *)v108 + 63) | 1;
  if ( !v8 )
    v109 = *((_DWORD *)v108 + 63) & 0xFFFFFFFE;
  *((_DWORD *)v108 + 63) = v109;
  v110 = *((_QWORD *)*this + 12);
  v111 = (unsigned __int16)*(_DWORD *)v110 | (*(_DWORD *)v110 >> 8) & 0xFF0000;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v139);
  v112 = gpHandleManager;
  v125 = 1;
  v113 = GdiHandleManager::DecodeIndex(gpHandleManager, v111);
  v114 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v112 + 2), v113, 0);
  v115 = v114;
  v124 = v114;
  if ( !v114 )
  {
    v125 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_201;
  }
  _m_prefetchw((char *)v114 + 8);
  v126 = *((_DWORD *)v114 + 2);
  v116 = *((_BYTE *)v114 + 15);
  if ( (v116 & 0x20) != 0 )
    goto LABEL_196;
  if ( (v116 & 0x40) != 0 )
  {
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v115 & 0xFFFFFF);
    if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
    {
LABEL_197:
      v115 = v124;
      goto LABEL_198;
    }
LABEL_196:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v124);
    if ( !v125 )
      goto LABEL_201;
    goto LABEL_197;
  }
LABEL_198:
  v118 = *((_BYTE *)v115 + 14);
  if ( v118 == 5 )
  {
    RECALTLOCK(
      (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v110 | (unsigned __int64)((*(_DWORD *)v110 >> 8) & 0xFF0000)),
      (struct _BASEOBJECT *)v110);
    v118 = *((_BYTE *)v115 + 14);
  }
  TrackHmgrReferenceIncrement(v118, (struct OBJECT *)v110);
  ++*(_DWORD *)(v110 + 8);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v124);
LABEL_201:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v124);
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v140, *((struct RFONT **)*this + 218));
  *((_QWORD *)*this + 218) = 0LL;
  v119 = *this;
  v120 = *((_DWORD *)*this + 10) & 1;
  v121 = *((_DWORD *)*this + 2 * v120 + 255);
  *((_DWORD *)v119 + 294) = *((_DWORD *)*this + 2 * v120 + 254);
  *((_DWORD *)v119 + 295) = v121;
  DC::vReleaseRao(*this);
  if ( (unsigned int)DC::bDpiScaleTransform(*this) )
    DC::vClearDpiScaling(v122);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v140);
  return 1LL;
}
