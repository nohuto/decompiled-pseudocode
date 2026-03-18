/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032E80 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003DC00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ldevUnloadImage @ 0x1C0052F40 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C0052FC0 (ldevLoadDriver.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C006934C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0069AAC (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C006DF0C (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C006E16C (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     memcmp @ 0x1C0078C50 (memcmp.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CED80 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ldevLoadInternal @ 0x1C00D69A0 (ldevLoadInternal.c)
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
  unsigned int v17; // edi
  HDEV v18; // rbx
  BOOL v19; // r15d
  struct PDEV *v20; // rdi
  struct tagGRAPHICS_DEVICE *v21; // rcx
  int v22; // r8d
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v26; // rdx
  HDEV v27; // rsi
  struct PDEV *v28; // r13
  const struct _devicemodeW *v29; // rdx
  int v30; // ecx
  int v31; // r8d
  struct _ERESOURCE *v32; // rcx
  int v33; // r8d
  struct _ERESOURCE *v34; // rcx
  _QWORD *v35; // rsi
  char *v36; // rbx
  struct _LDEV *Driver; // rax
  struct _LDEV *v38; // r14
  int v39; // r8d
  struct PDEV *v40; // rax
  unsigned int v41; // ecx
  struct HOBJ__ **v42; // rbx
  __int64 v43; // rcx
  bool v44; // zf
  struct PDEV *v45; // rcx
  void *v46; // rcx
  int v47; // r8d
  __int64 v48; // rax
  int v49; // r14d
  HDEV v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  struct PDEV *v54; // [rsp+70h] [rbp-10h] BYREF
  struct PDEV *v55; // [rsp+78h] [rbp-8h] BYREF
  struct PDEV *v56; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v57; // [rsp+C8h] [rbp+48h]
  struct PDEV *v58; // [rsp+D8h] [rbp+58h] BYREF

  v58 = a4;
  v57 = a2;
  v56 = a1;
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
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  *a10 = 0LL;
  if ( v13 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_106;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    v20 = gppdevList;
    if ( gppdevList )
    {
      do
      {
        v21 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v20 + 321);
        v54 = v20;
        if ( (((unsigned __int64)v21 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && v13 == v21 )
        {
          v26 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v20 + 443);
          ++*((_DWORD *)v20 + 2);
          TrackObjectReferenceIncrement(1u, v26);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v20 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v20 + 6), 11LL);
          v27 = 0LL;
          v28 = 0LL;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v54) )
            v30 = DevmodeEqualEx(a3, v29);
          else
            v30 = memcmp(a3, v29, 0xDCuLL) == 0;
          if ( (*((_DWORD *)v20 + 10) & 0x80000) == 0
            && *((struct PDEV **)v20 + 320) == v58
            && *((_DWORD *)v20 + 650) == a5
            && *((_DWORD *)v20 + 651) == a6
            && v30
            && !a8 )
          {
            if ( v18 )
            {
              v49 = *((_DWORD *)v20 + 10) & 0x400;
              if ( !v49 )
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v54, 0LL, v31);
              v27 = v18;
              v50 = (HDEV)v20;
              if ( v49 )
              {
                v50 = v18;
                v27 = 0LL;
              }
              v18 = v50;
            }
            else
            {
              PDEVOBJ::vReferencePdev((PDEVOBJ *)&v54, 0LL, v31);
              v18 = (HDEV)v20;
            }
            v28 = (struct PDEV *)v27;
          }
          else if ( a7 == 1 )
          {
            v19 = 1;
          }
          else
          {
            v27 = (HDEV)v20;
          }
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v20 + 6));
          v32 = (struct _ERESOURCE *)*((_QWORD *)v20 + 6);
          if ( v32 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v32);
            PsLeavePriorityRegion();
          }
          if ( v27 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v19 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v27 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v27 + 6), 11LL);
            if ( ((_DWORD)v27[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay(v27, 0) )
                *a10 = v27;
              else
                v19 = 1;
            }
            EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v27 + 6));
            v34 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
            if ( v34 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v34);
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
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          if ( v28 )
          {
            v55 = v28;
            PDEVOBJ::vUnreferencePdev(&v55, 0, v33);
          }
          v20 = *(struct PDEV **)v20;
          PDEVOBJ::vUnreferencePdev(&v54, 0, v33);
          v13 = v56;
        }
        else
        {
          v20 = *(struct PDEV **)v20;
        }
      }
      while ( v20 );
      v12 = v57;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v17 = 0;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( v19 )
    {
      if ( v18 )
      {
        v58 = (struct PDEV *)v18;
        PDEVOBJ::vUnreferencePdev(&v58, 0, v22);
      }
      goto LABEL_106;
    }
    if ( v18 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *((_QWORD *)v18 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v18 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v18 + 6), 11LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      ++*((_DWORD *)v18 + 3);
      if ( ((_DWORD)v18[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        DrvEnableDisplay(v18);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v18 + 6));
      v23 = (struct _ERESOURCE *)*((_QWORD *)v18 + 6);
      if ( v23 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v23);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      v24 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v24 + 24) = v18;
      WdLogEvent5_WdTrace(v24);
      return (struct PDEV *)v18;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v19 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      if ( v19 )
        goto LABEL_104;
    }
  }
  v35 = PALLOCMEM2(0x9D8uLL, 0x706D7447u, 1);
  if ( !v35 )
    goto LABEL_104;
  if ( !*(_DWORD *)v12 )
    goto LABEL_103;
  while ( 1 )
  {
    if ( a9 == 1 )
    {
LABEL_57:
      v36 = (char *)v12 + 16 * v17;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v36 + 2));
      goto LABEL_58;
    }
    if ( a9 == 2 )
      break;
    if ( a9 == 4 )
      goto LABEL_57;
LABEL_94:
    v51 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v51);
LABEL_98:
    if ( ++v17 >= *(_DWORD *)v12 )
      goto LABEL_103;
  }
  v36 = (char *)v12 + 16 * v17;
  Driver = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v36 + 2), 3LL);
LABEL_58:
  v38 = Driver;
  if ( !Driver )
  {
    v12 = v57;
    goto LABEL_94;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v56,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v36 + 2),
    *((void **)v36 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v56 )
  {
    v52 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v52);
    ldevUnloadImage(v38);
LABEL_97:
    v12 = v57;
    goto LABEL_98;
  }
  *((_QWORD *)v56 + 321) = v13;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v56, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v56, 0, v39);
    goto LABEL_97;
  }
  v40 = v56;
  v41 = (unsigned int)ghbrGrayPattern;
  *((_QWORD *)v56 + 196) = 0LL;
  *((_QWORD *)v40 + 193) = 0LL;
  *((_DWORD *)v40 + 388) = 0;
  v42 = (struct HOBJ__ **)HmgShareLockCheck(v41, 16);
  v35[10] = v35 + 69;
  *((_DWORD *)v35 + 148) = 0;
  *(_DWORD *)(v35[10] + 32LL) = 0xFFFFFF;
  v43 = v35[10];
  *((_DWORD *)v35 + 32) = 0;
  *(_QWORD *)(v43 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (int *)v56 + 384,
    (__int64)v35,
    (__int64)v42,
    (__int64)ppalDefault,
    *(_QWORD *)(*((_QWORD *)v56 + 318) + 128LL),
    *((_QWORD *)v56 + 318),
    1u);
  DEC_SHARE_REF_CNT_LAZY0(v42);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v56;
  v44 = a9 == 2;
  v45 = v58;
  *((_QWORD *)v56 + 321) = v13;
  *((_QWORD *)v56 + 320) = v45;
  if ( !v44 )
  {
    *((_QWORD *)v56 + 323) = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 0x76656447u, 0);
    v46 = (void *)*((_QWORD *)v56 + 323);
    if ( v46 )
    {
      memmove(v46, a3, a3->dmSize + (unsigned int)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v56 + 323) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v13, 1u);
    }
    else
    {
      v19 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v56, 0);
  if ( (*((_DWORD *)v56 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v56 + 321) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v56 + 11) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap(&v56);
    }
  }
  if ( !v19 )
  {
    Win32FreePool((__int64)v35);
    v48 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v48 + 24) = v56;
    WdLogEvent5_WdTrace(v48);
    return v56;
  }
  PDEVOBJ::vUnreferencePdev(&v56, 0, v47);
LABEL_103:
  Win32FreePool((__int64)v35);
LABEL_104:
  if ( *a10 )
    DrvEnableDisplay(*a10);
LABEL_106:
  v53 = WdLogNewEntry5_WdTrace();
  WdLogEvent5_WdTrace(v53);
  return 0LL;
}
