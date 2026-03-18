/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0042E30 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C001B510 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00447C8 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0068604 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C006A930 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ldevUnloadImage @ 0x1C006B200 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006B340 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C006C880 (ldevLoadInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0076EF0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C009C6A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00A4DBC (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00A5AA0 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AA5D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B6E70 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00BE670 (memcmp.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

struct PDEV *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        struct PDEV *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // r14
  struct tagGRAPHICS_DEVICE *v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HDEV v17; // rcx
  unsigned int v18; // edi
  HDEV v19; // rbx
  BOOL v20; // r15d
  struct PDEV *v21; // rdi
  struct tagGRAPHICS_DEVICE *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rsi
  char *v25; // rbx
  struct _LDEV *Driver; // rax
  __int64 v27; // rcx
  struct _LDEV *v28; // r14
  __int64 v29; // rcx
  __int64 v30; // r8
  struct PDEV *v31; // rax
  ULONG NumberOfMapRegisters; // ecx
  struct HOBJ__ **v33; // rbx
  __int64 v34; // rcx
  bool v35; // zf
  struct PDEV *v36; // rcx
  void *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v42; // rdx
  HDEV v43; // rsi
  struct PDEV *v44; // r13
  const struct _devicemodeW *v45; // rdx
  int v46; // ecx
  struct _ERESOURCE *v47; // rcx
  __int64 v48; // r8
  struct _ERESOURCE *v49; // rcx
  PERESOURCE v50; // rcx
  __int64 v51; // rax
  struct _ERESOURCE *v52; // rcx
  int v53; // r14d
  HDEV v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  struct PDEV *v58; // [rsp+70h] [rbp-10h] BYREF
  struct PDEV *v59; // [rsp+78h] [rbp-8h] BYREF
  struct PDEV *v60; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v61; // [rsp+C8h] [rbp+48h]
  struct PDEV *v62; // [rsp+D8h] [rbp+58h] BYREF

  v62 = a4;
  v61 = a2;
  v60 = a1;
  v12 = a2;
  v13 = a1;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = v13;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( v13 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_106;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    v21 = gppdevList;
    if ( gppdevList )
    {
      do
      {
        v22 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v21 + 322);
        v58 = v21;
        if ( (((unsigned __int64)v22 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && v13 == v22 )
        {
          v42 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v21 + 443);
          ++*((_DWORD *)v21 + 2);
          TrackObjectReferenceIncrement(1u, v42);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v21 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v21 + 6), 11LL);
          v43 = 0LL;
          v44 = 0LL;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v58) )
            v46 = DevmodeEqualEx(a3, v45);
          else
            v46 = memcmp(a3, v45, 0xDCuLL) == 0;
          if ( (*((_DWORD *)v21 + 10) & 0x80000) == 0
            && *((struct PDEV **)v21 + 321) == v62
            && *((_DWORD *)v21 + 652) == a5
            && *((_DWORD *)v21 + 653) == a6
            && v46
            && !a8 )
          {
            if ( v19 )
            {
              v53 = *((_DWORD *)v21 + 10) & 0x400;
              if ( !v53 )
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v58);
              v43 = v19;
              v54 = (HDEV)v21;
              if ( v53 )
              {
                v54 = v19;
                v43 = 0LL;
              }
              v19 = v54;
            }
            else
            {
              PDEVOBJ::vReferencePdev((PDEVOBJ *)&v58);
              v19 = (HDEV)v21;
            }
            v44 = (struct PDEV *)v43;
          }
          else if ( a7 == 1 )
          {
            v20 = 1;
          }
          else
          {
            v43 = (HDEV)v21;
          }
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v21 + 6));
          v47 = (struct _ERESOURCE *)*((_QWORD *)v21 + 6);
          if ( v47 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v47);
            PsLeavePriorityRegion();
          }
          if ( v43 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v43 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v43 + 6), 11LL);
            if ( ((_DWORD)v43[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay(v43, 0) )
                *a10 = v43;
              else
                v20 = 1;
            }
            EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v43 + 6));
            v52 = (struct _ERESOURCE *)*((_QWORD *)v43 + 6);
            if ( v52 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v52);
              PsLeavePriorityRegion();
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          if ( v44 )
          {
            v59 = v44;
            PDEVOBJ::vUnreferencePdev(&v59, 0, v48);
          }
          v21 = *(struct PDEV **)v21;
          PDEVOBJ::vUnreferencePdev(&v58, 0, v48);
          v13 = v60;
        }
        else
        {
          v21 = *(struct PDEV **)v21;
        }
      }
      while ( v21 );
      v12 = v61;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v17 = (HDEV)ghsemDriverMgmt;
    v18 = 0;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( v20 )
    {
      if ( v19 )
      {
        v62 = (struct PDEV *)v19;
        PDEVOBJ::vUnreferencePdev(&v62, 0, v23);
      }
      goto LABEL_106;
    }
    if ( v19 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      *((_QWORD *)v19 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v19 + 6), 11LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      ++*((_DWORD *)v19 + 3);
      if ( ((_DWORD)v19[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        DrvEnableDisplay(v19);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v19 + 6));
      v49 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
      if ( v49 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v49);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v50 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      v51 = WdLogNewEntry5_WdTrace(v50);
      *(_QWORD *)(v51 + 24) = v19;
      WdLogEvent5_WdTrace(v51);
      return (struct PDEV *)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      if ( v20 )
        goto LABEL_104;
    }
  }
  v24 = PALLOCMEM2(0x840uLL, 0x706D7447u, 1);
  if ( !v24 )
    goto LABEL_104;
  if ( !*(_DWORD *)v12 )
    goto LABEL_103;
  while ( 1 )
  {
    if ( a9 == 1 )
    {
LABEL_16:
      v25 = (char *)v12 + 16 * v18;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v25 + 2));
      goto LABEL_17;
    }
    if ( a9 == 2 )
      break;
    v27 = a9 - 3;
    if ( a9 == 4 )
      goto LABEL_16;
LABEL_95:
    v55 = WdLogNewEntry5_WdTrace(v27);
    WdLogEvent5_WdTrace(v55);
LABEL_99:
    if ( ++v18 >= *(_DWORD *)v12 )
      goto LABEL_103;
  }
  v25 = (char *)v12 + 16 * v18;
  Driver = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v25 + 2), 3LL);
LABEL_17:
  v27 = 0LL;
  v28 = Driver;
  if ( !Driver )
  {
    v12 = v61;
    goto LABEL_95;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v60,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v25 + 2),
    *((void **)v25 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v60 )
  {
    v56 = WdLogNewEntry5_WdTrace(v29);
    WdLogEvent5_WdTrace(v56);
    ldevUnloadImage(v28);
LABEL_98:
    v12 = v61;
    goto LABEL_99;
  }
  *((_QWORD *)v60 + 322) = v13;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v60, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v60, 0, v30);
    goto LABEL_98;
  }
  v31 = v60;
  NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  *((_QWORD *)v60 + 197) = 0LL;
  *((_QWORD *)v31 + 194) = 0LL;
  *((_DWORD *)v31 + 390) = 0;
  v33 = (struct HOBJ__ **)HmgShareLockCheck(NumberOfMapRegisters, 16);
  v24[122] = v24 + 68;
  *((_DWORD *)v24 + 182) = 0;
  *(_DWORD *)(v24[122] + 176LL) = 0xFFFFFF;
  v34 = v24[122];
  *((_DWORD *)v24 + 30) = 0;
  *(_QWORD *)(v34 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (char *)v60 + 1544,
    v24,
    v33,
    ppalDefault,
    *(_QWORD *)(*((_QWORD *)v60 + 319) + 128LL),
    *((_QWORD *)v60 + 319),
    1);
  DEC_SHARE_REF_CNT_LAZY0(v33);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v60;
  v35 = a9 == 2;
  v36 = v62;
  *((_QWORD *)v60 + 322) = v13;
  *((_QWORD *)v60 + 321) = v36;
  if ( !v35 )
  {
    *((_QWORD *)v60 + 324) = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 0x76656447u, 0);
    v37 = (void *)*((_QWORD *)v60 + 324);
    if ( v37 )
    {
      memmove(v37, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v60 + 324) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v13, 1u);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v60, 0);
  if ( (*((_DWORD *)v60 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v60 + 322) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v60 + 11) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap(&v60);
    }
  }
  if ( !v20 )
  {
    Win32FreePool((__int64)v24);
    v40 = WdLogNewEntry5_WdTrace(v39);
    *(_QWORD *)(v40 + 24) = v60;
    WdLogEvent5_WdTrace(v40);
    return v60;
  }
  PDEVOBJ::vUnreferencePdev(&v60, 0, v38);
LABEL_103:
  Win32FreePool((__int64)v24);
LABEL_104:
  v17 = *a10;
  if ( *a10 )
    DrvEnableDisplay(v17);
LABEL_106:
  v57 = WdLogNewEntry5_WdTrace(v17);
  WdLogEvent5_WdTrace(v57);
  return 0LL;
}
