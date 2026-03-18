/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C002684C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     bFreeDCAttributesWorker @ 0x1C0031100 (bFreeDCAttributesWorker.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C006D2A8 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall vDeleteDCInternalWorker(DC **this, int a2)
{
  DC *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi
  DC *v6; // rbx
  char v7; // al
  unsigned int v8; // ebx
  GdiHandleManager *v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  DC *v20; // rax
  __int64 v21; // rdi
  GdiHandleManager *v22; // rbp
  unsigned int v23; // eax
  __int64 v24; // r15
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rbp
  unsigned __int16 v32; // cx
  __int64 v33; // rcx
  __int64 v34; // r8
  DC *v35; // rdx
  DC *v36; // r14
  __int16 *v37; // rbx
  __int64 v38; // rbp
  DC *v39; // r9
  unsigned int v40; // eax
  unsigned int v41; // ebx
  __int64 v42; // rbp
  int v43; // r13d
  unsigned int v44; // r15d
  __int64 v45; // rcx
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r14
  unsigned int v49; // edx
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  __int64 v52; // r8
  DC *v53; // rdx
  DC *v54; // rdx
  __int16 *v55; // rbx
  __int16 *v56; // rax
  __int64 v57; // rbp
  DC *v58; // rbx
  REGION *v59; // rcx
  __int64 v60; // rdx
  REGION *v61; // rcx
  REGION *v62; // rcx
  REGION *v63; // rcx
  __int64 v64; // rbx
  int v65; // ebp
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  bool v69; // zf
  struct _ERESOURCE *v70; // rbp
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v71; // rdx
  int v72; // ecx
  int v73; // ebp
  REGION *v74; // rax
  unsigned int v75; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v76; // rdx
  unsigned int v77; // ecx
  struct _ENTRY *Entry; // rax
  bool v79; // cc
  struct _ENTRY *v80; // rax
  int v81; // ecx
  GdiHandleManager *v82; // [rsp+30h] [rbp-68h]
  DC *v83; // [rsp+30h] [rbp-68h]
  DC *v84; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v85; // [rsp+40h] [rbp-58h]
  int v86; // [rsp+44h] [rbp-54h]
  __int64 v87; // [rsp+A0h] [rbp+8h] BYREF
  int v88; // [rsp+A8h] [rbp+10h]
  unsigned int v89; // [rsp+B0h] [rbp+18h]
  unsigned int v90; // [rsp+B8h] [rbp+20h]

  v88 = a2;
  if ( !a2 )
    bFreeDCAttributesWorker(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 20));
  v3 = *this;
  v4 = 0;
  v84 = 0LL;
  v85 = 0;
  v5 = *((_QWORD *)v3 + 13);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v84,
    (unsigned __int16)*(_DWORD *)v5 | (*(_DWORD *)v5 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( v85 )
  {
    v6 = v84;
    v7 = *((_BYTE *)v84 + 14);
    if ( v7 != 5
      || gbGdiHmgrAltStacks
      && gpentHmgrAltStacks
      && (v75 = (unsigned __int16)*(_DWORD *)v5 | (*(_DWORD *)v5 >> 8) & 0xFF0000,
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v75 | (v75 >> 8) & 0xFF0000),
          v7 = *((_BYTE *)v6 + 14),
          v7 != 5) )
    {
      if ( v7 != 16 )
      {
LABEL_6:
        --*(_DWORD *)(v5 + 8);
        v8 = *(_DWORD *)v6 & 0xFFFFFF;
        if ( v8 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v8,
                                        1)
                 + 13) == HIWORD(v8) )
              v8 = (unsigned __int16)v8;
          }
          else
          {
            v8 = (unsigned __int16)v8;
          }
        }
        v9 = gpHandleManager;
        v10 = *((_QWORD *)gpHandleManager + 2);
        v11 = *(_DWORD *)(v10 + 2056);
        if ( v8 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
          goto LABEL_116;
        v12 = ((v8 - v11) >> 16) + 1;
        if ( v8 < v11 )
          v12 = 0LL;
        v13 = *(_QWORD *)(v10 + 8 * v12 + 8);
        if ( (_DWORD)v12 )
          v8 += ((1 - (_DWORD)v12) << 16) - v11;
        if ( v8 >= *(_DWORD *)(v13 + 20) )
LABEL_116:
          v14 = 0LL;
        else
          v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                           + 16LL * (unsigned __int8)v8
                           + 8);
        v15 = (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000;
        if ( v15 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v14,
                                        1)
                 + 13) == HIWORD(v15) )
              v15 = (unsigned __int16)v15;
          }
          else
          {
            v15 = (unsigned __int16)*v14;
          }
        }
        v16 = *((_QWORD *)v9 + 2);
        v17 = *(_DWORD *)(v16 + 2056);
        if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
        {
          v18 = ((v15 - v17) >> 16) + 1;
          if ( v15 < v17 )
            v18 = 0LL;
          v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
          if ( (_DWORD)v18 )
            v15 += ((1 - (_DWORD)v18) << 16) - v17;
          *(_DWORD *)(*(_QWORD *)v19 + 24LL * v15 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8)) + 16LL * (unsigned __int8)v15,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_22;
      }
      v76 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 136);
      v77 = 2;
    }
    else
    {
      v76 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 680);
      v77 = 0;
    }
    TrackObjectReferenceDecrement(v77, v76);
    goto LABEL_6;
  }
LABEL_22:
  v20 = *this;
  v84 = v20;
  v21 = *((_QWORD *)v20 + 6);
  *((_DWORD *)v20 + 9) |= 0x10u;
  v22 = gpHandleManager;
  v82 = gpHandleManager;
  v23 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)*(_DWORD *)v20 | (*(_DWORD *)v20 >> 8) & 0xFF0000u);
  v24 = *((_QWORD *)v22 + 2);
  v25 = v23;
  v26 = *(unsigned __int16 *)(v24 + 2);
  v27 = *(_DWORD *)(v24 + 2056);
  v89 = v26;
  if ( v25 >= v27 + ((v26 + 0xFFFF) << 16) )
  {
    v31 = 0LL;
  }
  else
  {
    v28 = ((v25 - v27) >> 16) + 1;
    if ( v25 < v27 )
      v28 = 0LL;
    v29 = *(_QWORD *)(v24 + 8 * v28 + 8);
    if ( (_DWORD)v28 )
      v30 = v25 + ((1 - (_DWORD)v28) << 16) - v27;
    else
      v30 = v25;
    v31 = 0LL;
    if ( v30 < *(_DWORD *)(v29 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                   + 16LL * (unsigned __int8)v30
                   + 8) )
    {
      v31 = *(_QWORD *)v29 + 24LL * v30;
    }
    LOWORD(v26) = *(_WORD *)(v24 + 2);
    v89 = (unsigned __int16)v26;
  }
  if ( v25 >= 0x10000 )
  {
    v90 = (unsigned __int16)v25;
    if ( *(_DWORD *)v82 > 0x10000u )
    {
      LOWORD(v87) = v26;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v24,
                                  (unsigned __int16)v25,
                                  1)
           + 13) == HIWORD(v25) )
      {
        v25 = v90;
        v32 = v89;
      }
      else
      {
        v32 = v87;
      }
      goto LABEL_33;
    }
    v25 = (unsigned __int16)v25;
  }
  v32 = v26;
LABEL_33:
  if ( v25 >= v27 + ((v32 + 0xFFFF) << 16) )
    goto LABEL_129;
  v33 = ((v25 - v27) >> 16) + 1;
  if ( v25 < v27 )
    v33 = 0LL;
  v34 = *(_QWORD *)(v24 + 8 * v33 + 8);
  if ( (_DWORD)v33 )
    v25 += ((1 - (_DWORD)v33) << 16) - v27;
  if ( v25 >= *(_DWORD *)(v34 + 20) )
LABEL_129:
    v35 = 0LL;
  else
    v35 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                 + 16LL * (unsigned __int8)v25
                 + 8);
  v36 = v84;
  if ( v35 != v84 )
    v31 = 0LL;
  *(_BYTE *)(v31 + 15) |= 4u;
  v37 = (__int16 *)*((_QWORD *)v36 + 191);
  if ( v37 && v37 != (__int16 *)prgnDefault )
  {
    if ( v37[7] >= 0 )
    {
      Win32FreePool(*((_QWORD *)v36 + 191));
    }
    else
    {
      v38 = qword_1C01A26E0;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v38, v37);
    }
  }
  *((_QWORD *)v36 + 191) = prgnDefault;
  v39 = *this;
  v83 = v39;
  v40 = *(_DWORD *)*this;
  *((_DWORD *)v39 + 9) |= 0x10u;
  v41 = (unsigned __int16)v40 | (v40 >> 8) & 0xFF0000;
  if ( v41 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      Entry = GdiHandleEntryDirectory::GetEntry(
                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                (unsigned __int16)v40,
                1);
      v39 = v83;
      if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v41) )
        v41 = (unsigned __int16)v41;
    }
    else
    {
      v41 = (unsigned __int16)v40;
    }
  }
  v42 = *((_QWORD *)gpHandleManager + 2);
  v43 = *(unsigned __int16 *)(v42 + 2);
  v44 = *(_DWORD *)(v42 + 2056);
  if ( v41 >= v44 + ((v43 + 0xFFFF) << 16) )
  {
    v48 = 0LL;
  }
  else
  {
    v45 = ((v41 - v44) >> 16) + 1;
    if ( v41 < v44 )
      v45 = 0LL;
    v46 = *(_QWORD *)(v42 + 8 * v45 + 8);
    if ( (_DWORD)v45 )
      v47 = v41 + ((1 - (_DWORD)v45) << 16) - v44;
    else
      v47 = v41;
    v48 = 0LL;
    if ( v47 < *(_DWORD *)(v46 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * ((unsigned __int64)v47 >> 8))
                   + 16LL * (unsigned __int8)v47
                   + 8) )
    {
      v48 = *(_QWORD *)v46 + 24LL * v47;
    }
    LOWORD(v43) = *(_WORD *)(v42 + 2);
    v39 = v83;
  }
  v49 = *(_DWORD *)(v42 + 2056);
  if ( v41 < 0x10000 )
    goto LABEL_60;
  v79 = *(_DWORD *)gpHandleManager <= 0x10000u;
  v89 = (unsigned __int16)v41;
  if ( v79 )
  {
    v41 = (unsigned __int16)v41;
LABEL_60:
    v50 = v43;
    goto LABEL_61;
  }
  v80 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v42, (unsigned __int16)v41, 1);
  v39 = v83;
  v49 = v44;
  v81 = *((unsigned __int8 *)v80 + 13);
  v50 = v43;
  if ( v81 == HIWORD(v41) )
    v41 = v89;
LABEL_61:
  if ( v41 >= v49 + ((v50 + 0xFFFF) << 16) )
    goto LABEL_140;
  v51 = ((v41 - v49) >> 16) + 1;
  if ( v41 < v49 )
    v51 = 0LL;
  v52 = *(_QWORD *)(v42 + 8 * v51 + 8);
  if ( (_DWORD)v51 )
    v41 += ((1 - (_DWORD)v51) << 16) - v49;
  if ( v41 >= *(_DWORD *)(v52 + 20) )
LABEL_140:
    v53 = 0LL;
  else
    v53 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v52 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                 + 16LL * (unsigned __int8)v41
                 + 8);
  if ( v53 != v39 )
    v48 = 0LL;
  *(_BYTE *)(v48 + 15) |= 4u;
  v54 = *this;
  v55 = (__int16 *)*((_QWORD *)*this + 194);
  if ( !v55
    || (*((_DWORD *)v54 + 10) & 2) == 0
    || (v69 = (unsigned int)DC::bDpiScaledSurface(*this) == 0, v56 = v55, v69) )
  {
    v56 = (__int16 *)*((_QWORD *)v54 + 192);
  }
  if ( v56 )
  {
    if ( !v55 || (*((_DWORD *)v54 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v54) )
      v55 = (__int16 *)*((_QWORD *)v54 + 192);
    if ( v55 && v55 != (__int16 *)prgnDefault )
    {
      if ( v55[7] >= 0 )
      {
        Win32FreePool((__int64)v55);
      }
      else
      {
        v57 = qword_1C01A26E0;
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
          Win32FreeToPagedLookasideListImpl(v57, v55);
      }
    }
  }
  v58 = *this;
  v59 = (REGION *)*((_QWORD *)*this + 194);
  if ( v59 )
  {
    REGION::vDeleteREGION(v59);
    v58 = *this;
  }
  if ( !*((_QWORD *)v58 + 195) || (*((_DWORD *)v58 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v58) )
    v60 = *((_QWORD *)v58 + 193);
  if ( v60 )
  {
    v74 = DC::prgnRao(v58);
    REGION::vDeleteREGION(v74);
    v58 = *this;
  }
  v61 = (REGION *)*((_QWORD *)v58 + 195);
  if ( v61 )
  {
    REGION::vDeleteREGION(v61);
    v58 = *this;
  }
  v62 = (REGION *)*((_QWORD *)v58 + 196);
  if ( v62 )
  {
    REGION::vDeleteREGION(v62);
    v58 = *this;
  }
  v63 = (REGION *)*((_QWORD *)v58 + 197);
  if ( v63 )
  {
    REGION::vDeleteREGION(v63);
    v58 = *this;
  }
  v64 = *((_QWORD *)v58 + 7);
  v65 = v88;
  v87 = v64;
  XDCOBJ::bDeleteDC((XDCOBJ *)this, v88);
  v69 = v65 == 0;
  v70 = ghsemDriverMgmt;
  LOBYTE(v4) = !v69;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v70);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v67, v66, v68, (_DWORD)ghsemDriverMgmt, 12, (__int64)L"ghsemDriverMgmt");
  v71 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v21 + 3544);
  v72 = (int)qword_1C019F740;
  if ( v71 && qword_1C019F740 )
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C019F740, v71, 0);
  v69 = (*(_DWORD *)(v21 + 8))-- == 1;
  v73 = *(_DWORD *)(v21 + 8);
  if ( v69 )
    RemovePDEVFromList(&gppdevList, (struct PDEV *)v21);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v72, (unsigned int)&LockRelease, v68, (_DWORD)ghsemDriverMgmt, (__int64)L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  if ( !v73 )
  {
    v84 = (DC *)v21;
    v85 = v4;
    v86 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v84);
  }
  if ( v64 )
    PDEVOBJ::vUnreferencePdev(&v87, v4);
}
