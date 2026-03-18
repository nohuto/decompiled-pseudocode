/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003F3D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003F470 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ldevUnloadImage @ 0x1C0053EB0 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C0054000 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C0057D70 (ldevLoadInternal.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005D300 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00910D8 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C009335C (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00A2988 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AB9D8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00ABA2C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
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
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HDEV v17; // rcx
  HDEV v18; // rsi
  HDEV v19; // rbx
  BOOL v20; // r15d
  struct PDEV *v21; // rdi
  struct tagGRAPHICS_DEVICE *v22; // rcx
  const struct _devicemodeW *v23; // rdx
  int v24; // ecx
  __int64 v25; // r8
  int v26; // r14d
  HDEV v27; // rax
  struct PDEV *v28; // r14
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  char *v39; // rbx
  struct _LDEV *Internal; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rax
  struct PDEV *v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  bool v51; // zf
  struct PDEV *v52; // rcx
  void *v53; // rax
  void *v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rax
  struct PDEV *v58; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v59[11]; // [rsp+80h] [rbp-21h] BYREF
  struct PDEV *v60; // [rsp+E8h] [rbp+47h] BYREF
  struct _DRV_NAMES *v61; // [rsp+F0h] [rbp+4Fh]
  struct PDEV *v62; // [rsp+100h] [rbp+5Fh] BYREF

  v62 = a4;
  v61 = a2;
  v12 = a2;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = a1;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_70;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    v21 = gppdevList;
    if ( gppdevList )
    {
      do
      {
        v22 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v21 + 322);
        v60 = v21;
        if ( (((unsigned __int64)v22 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v22 )
        {
          PDEV::IncrementClientReferenceCount(v21);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v21 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v21 + 6), 11LL);
          v58 = 0LL;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v60) )
            v24 = DevmodeEqualEx(a3, v23);
          else
            v24 = memcmp(a3, v23, 0xDCuLL) == 0;
          if ( (*((_DWORD *)v21 + 10) & 0x80000) == 0
            && *((struct PDEV **)v21 + 321) == v62
            && *((_DWORD *)v21 + 652) == a5
            && *((_DWORD *)v21 + 653) == a6
            && v24
            && !a8 )
          {
            if ( v19 )
            {
              v26 = *((_DWORD *)v21 + 10) & 0x400;
              if ( !v26 )
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v60, 0LL, v25);
              v18 = v19;
              v27 = (HDEV)v21;
              if ( v26 )
              {
                v27 = v19;
                v18 = 0LL;
              }
              v19 = v27;
            }
            else
            {
              PDEVOBJ::vReferencePdev((PDEVOBJ *)&v60, 0LL, v25);
              v19 = (HDEV)v21;
            }
            v28 = (struct PDEV *)v18;
          }
          else
          {
            v28 = v58;
            if ( a7 == 1 )
              v20 = 1;
            else
              v18 = (HDEV)v21;
          }
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v21 + 6));
          GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v21 + 6));
          if ( v18 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v18 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v18 + 6), 11LL);
            if ( ((_DWORD)v18[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay((HSEMAPHORE *)v18, 0LL, v29) )
                *a10 = v18;
              else
                v20 = 1;
            }
            EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v18 + 6));
            GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v18 + 6));
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v18 = 0LL;
          if ( v28 )
          {
            v58 = v28;
            PDEVOBJ::vUnreferencePdev(&v58, 0, v30);
          }
          v21 = *(struct PDEV **)v21;
          PDEVOBJ::vUnreferencePdev(&v60, 0, v30);
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
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    if ( v20 )
    {
      if ( v19 )
      {
        v62 = (struct PDEV *)v19;
        PDEVOBJ::vUnreferencePdev(&v62, 0, v31);
      }
      goto LABEL_70;
    }
    if ( v19 )
    {
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      *((_QWORD *)v19 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v19 + 6), 11LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      ++*((_DWORD *)v19 + 3);
      if ( ((_DWORD)v19[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        DrvEnableDisplay(v19);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v19 + 6));
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v19 + 6));
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v33 = WdLogNewEntry5_WdTrace(v32);
      *(_QWORD *)(v33 + 24) = v19;
      WdLogEvent5_WdTrace(v33);
      return (struct PDEV *)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( v20 )
        goto LABEL_68;
    }
  }
  v35 = PALLOCMEM2(0x868uLL, 1886221383LL, 1);
  if ( !v35 )
    goto LABEL_68;
  if ( !*(_DWORD *)v12 )
    goto LABEL_67;
  while ( a9 != 1 )
  {
    if ( a9 == 2 )
    {
      v39 = (char *)v12 + 16 * (unsigned int)v18;
      Internal = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v39 + 2), 3LL);
      goto LABEL_58;
    }
    v36 = a9 - 3;
    if ( a9 == 4 )
    {
      v37 = 4LL;
      v38 = 1LL;
      goto LABEL_57;
    }
LABEL_60:
    v42 = WdLogNewEntry5_WdTrace(v36);
    WdLogEvent5_WdTrace(v42);
LABEL_66:
    LODWORD(v18) = (_DWORD)v18 + 1;
    if ( (unsigned int)v18 >= *(_DWORD *)v12 )
      goto LABEL_67;
  }
  v37 = 1LL;
  v38 = (*((_DWORD *)a1 + 40) & 0x4000000 | 0x2000000u) >> 25;
LABEL_57:
  v39 = (char *)v12 + 16 * (unsigned int)v18;
  Internal = ldevLoadDriver(*((PCWSTR *)v39 + 2), v37, v38);
LABEL_58:
  v36 = 0LL;
  v41 = (__int64)Internal;
  if ( !Internal )
  {
    v12 = v61;
    goto LABEL_60;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v60,
    Internal,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v39 + 2),
    *((void **)v39 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v60 )
  {
    v44 = WdLogNewEntry5_WdTrace(v43);
    WdLogEvent5_WdTrace(v44);
    ldevUnloadImage(v41);
LABEL_65:
    v12 = v61;
    goto LABEL_66;
  }
  *((_QWORD *)v60 + 322) = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v60, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v60, 0, v45);
    goto LABEL_65;
  }
  v47 = v60;
  v48 = (unsigned int)ghbrGrayPattern;
  *((_QWORD *)v60 + 197) = 0LL;
  *((_QWORD *)v47 + 194) = 0LL;
  *((_DWORD *)v47 + 390) = 0;
  v49 = HmgShareLockCheck(v48, 16);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v59, v49);
  v35[122] = v35 + 68;
  *((_DWORD *)v35 + 182) = 0;
  *(_DWORD *)(v35[122] + 176LL) = 0xFFFFFF;
  v50 = v35[122];
  *((_DWORD *)v35 + 30) = 0;
  *(_QWORD *)(v50 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (char *)v60 + 1544,
    v35,
    v59[0],
    ppalDefault,
    *(_QWORD *)(*((_QWORD *)v60 + 319) + 128LL),
    *((_QWORD *)v60 + 319),
    1);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v59);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v60;
  v51 = a9 == 2;
  v52 = v62;
  *((_QWORD *)v60 + 322) = a1;
  *((_QWORD *)v60 + 321) = v52;
  if ( !v51 )
  {
    v53 = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL, 0);
    *((_QWORD *)v60 + 324) = v53;
    v54 = (void *)*((_QWORD *)v60 + 324);
    if ( v54 )
    {
      memmove(v54, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v60 + 324) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1u);
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
  if ( v20 )
  {
    PDEVOBJ::vUnreferencePdev(&v60, 0, v55);
LABEL_67:
    Win32FreePool((__int64)v35);
LABEL_68:
    v17 = *a10;
    if ( *a10 )
      DrvEnableDisplay(v17);
LABEL_70:
    v46 = WdLogNewEntry5_WdTrace(v17);
    WdLogEvent5_WdTrace(v46);
    return 0LL;
  }
  else
  {
    Win32FreePool((__int64)v35);
    v57 = WdLogNewEntry5_WdTrace(v56);
    *(_QWORD *)(v57 + 24) = v60;
    WdLogEvent5_WdTrace(v57);
    return v60;
  }
}
