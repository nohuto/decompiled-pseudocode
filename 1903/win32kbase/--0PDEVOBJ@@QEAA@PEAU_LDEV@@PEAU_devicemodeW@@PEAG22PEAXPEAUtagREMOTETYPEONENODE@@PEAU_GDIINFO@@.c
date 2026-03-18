/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AC8D0
 * Callers:
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00479C0 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C00182C0 (GreReleaseSemaphoreInternal.c)
 *     GreCreateSemaphore @ 0x1C0056B20 (GreCreateSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0056B40 (GreDeleteSemaphore.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00570E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0058824 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0058850 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0058878 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005B2A0 (--1EPALOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C009C1D8 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C009C9FC (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     GreSetPaletteOwner @ 0x1C009DE70 (GreSetPaletteOwner.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C009EB4C (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C009FCE0 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00A0900 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00A25F8 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00A7160 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00B6C4C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0132BF8 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        void *a7,
        struct tagREMOTETYPEONENODE *a8,
        struct _GDIINFO *a9,
        struct tagDEVINFO *a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  struct PDEV *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _GDIINFO *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int64 v25; // rdx
  _OWORD *v27; // rcx
  __int128 v28; // xmm1
  __int64 v29; // r8
  void *v30; // r15
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // edx
  _DWORD *v39; // r8
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int16 *v47; // rbx
  unsigned int *v48; // rcx
  unsigned int v49; // eax
  bool v50; // cc
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  int HalftoneBrushesWrap; // eax
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // rdx
  signed __int32 v58; // ett
  _DWORD *v59; // rbx
  unsigned int v60; // edi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // r8
  _QWORD *v67; // rax
  __int64 v68; // r8
  __int64 v69; // rax
  struct _ERESOURCE *v70; // rcx
  struct _ERESOURCE *v71; // rcx
  struct PDEV *v72; // rcx
  unsigned int v74; // [rsp+28h] [rbp-D8h]
  unsigned int v75; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v76; // [rsp+60h] [rbp-A0h] BYREF
  void *v77; // [rsp+68h] [rbp-98h]
  unsigned int v78; // [rsp+70h] [rbp-90h] BYREF
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v80; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v81; // [rsp+88h] [rbp-78h]
  _BYTE v82[432]; // [rsp+90h] [rbp-70h] BYREF

  v76 = a6;
  v77 = a7;
  v17 = PDEV::Allocate(a11);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 3) = v17;
  *(_QWORD *)(*(_QWORD *)this + 1792LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2608LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2612LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3552LL) = 0;
  v18 = *(_QWORD *)this;
  v79 = v18;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1792) + 24LL) != 6 )
    GreCreateSemaphore();
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = 5;
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 1792LL);
  if ( *(_DWORD *)(v20 + 24) == 1 && *(_DWORD *)(v19 + 2612) == 5 )
  {
    if ( (int)IsPanningGetFunctionTableSupported() >= 0 )
    {
      PanningGetFunctionTable(&v80, &v78);
      bFillFunctionTable(v80, v78, (__int64 (**)(void))(*(_QWORD *)this + 2688LL));
    }
  }
  else
  {
    memmove((void *)(v19 + 2688), (const void *)(v20 + 64), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1712LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = a5;
  v21 = a9;
  if ( a9 )
  {
    v22 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    v23 = 2LL;
    do
    {
      *v22 = *(_OWORD *)&v21->ulVersion;
      v22[1] = *(_OWORD *)&v21->ulHorzRes;
      v22[2] = *(_OWORD *)&v21->ulNumColors;
      v22[3] = *(_OWORD *)&v21->flTextCaps;
      v22[4] = *(_OWORD *)&v21->ulAspectX;
      v22[5] = *(_OWORD *)&v21->yStyleStep;
      v22[6] = *(_OWORD *)&v21->szlPhysSize.cx;
      v22 += 8;
      v24 = *(_OWORD *)&v21->ciDevice.Red.y;
      v21 = (struct _GDIINFO *)((char *)v21 + 128);
      *(v22 - 1) = v24;
      --v23;
    }
    while ( v23 );
    v25 = 2LL;
    *v22 = *(_OWORD *)&v21->ulVersion;
    v22[1] = *(_OWORD *)&v21->ulHorzRes;
    v22[2] = *(_OWORD *)&v21->ulNumColors;
    v22[3] = *(_OWORD *)&v21->flTextCaps;
    v27 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v27 = *(_OWORD *)a10;
      v27[1] = *((_OWORD *)a10 + 1);
      v27[2] = *((_OWORD *)a10 + 2);
      v27[3] = *((_OWORD *)a10 + 3);
      v27[4] = *((_OWORD *)a10 + 4);
      v27[5] = *((_OWORD *)a10 + 5);
      v27[6] = *((_OWORD *)a10 + 6);
      v27 += 8;
      v28 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v27 - 1) = v28;
      --v25;
    }
    while ( v25 );
    *v27 = *(_OWORD *)a10;
    v27[1] = *((_OWORD *)a10 + 1);
    v27[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v27 + 6) = *((_QWORD *)a10 + 6);
  }
  v81 = (_DWORD *)(v18 + 40);
  SETFLAG(a11, (volatile unsigned int *)(v18 + 40), 0x8000);
  if ( a11 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = gppdevListUMPDInCreate;
    gppdevListUMPDInCreate = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v29);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  }
  v30 = v77;
  *(_QWORD *)(*(_QWORD *)this + 1800LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v79,
                                            a3,
                                            a4,
                                            *(_QWORD *)this + 2136LL,
                                            (HSURF *)(*(_QWORD *)this + 1456LL),
                                            v74,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2136LL),
                                            v75,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1824LL),
                                            *(HDEV *)this,
                                            v76,
                                            v77);
  v31 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1800LL) )
    goto LABEL_115;
  if ( *(_DWORD *)(*(_QWORD *)(v31 + 1792) + 24LL) == 6 )
  {
LABEL_110:
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    if ( (*v81 & 1) != 0 )
    {
      PDEVOBJ::bDisabled((PDEVOBJ *)&v79, 1);
      vResetSurfacePalette(*(_QWORD **)this);
    }
    v65 = (_QWORD *)(*(_QWORD *)this + 2624LL);
    v65[1] = v65;
    *v65 = v65;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( a11 )
      RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
    **(_QWORD **)this = gppdevList;
    gppdevList = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v66);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    PDEVOBJ::CompletePDEV((PDEVOBJ *)&v79, *(struct DHPDEV__ **)(*(_QWORD *)this + 1800LL), *(HDEV *)this);
    v67 = (_QWORD *)(*(_QWORD *)this + 3528LL);
    v67[1] = v67;
    *v67 = v67;
    return this;
  }
  v32 = *(_DWORD *)(v31 + 2144);
  if ( v32 > 0 )
  {
    v33 = 1000 * v32;
  }
  else
  {
    if ( !v32 )
    {
      *(_DWORD *)(v31 + 2144) = 25400 * (unsigned __int64)*(unsigned int *)(v31 + 2152) / 0x60;
      goto LABEL_27;
    }
    v33 = -v32;
  }
  *(_DWORD *)(v31 + 2144) = v33;
LABEL_27:
  v34 = *(_QWORD *)this;
  v35 = *(_DWORD *)(*(_QWORD *)this + 2148LL);
  if ( v35 > 0 )
  {
    v36 = 1000 * v35;
    goto LABEL_32;
  }
  if ( v35 )
  {
    v36 = -v35;
LABEL_32:
    *(_DWORD *)(v34 + 2148) = v36;
    goto LABEL_33;
  }
  *(_DWORD *)(v34 + 2148) = 25400 * (unsigned __int64)*(unsigned int *)(v34 + 2156) / 0x60;
LABEL_33:
  if ( !a11 )
  {
    v37 = *(_QWORD *)this;
    v38 = *(_DWORD *)(*(_QWORD *)this + 2180LL);
    if ( *(_DWORD *)(*(_QWORD *)this + 2176LL) != v38 )
    {
      if ( (unsigned __int16)(*(_WORD *)(v37 + 2182) - 100) <= 0x190u )
      {
        *(_DWORD *)(v37 + 3552) = v38;
        *(_DWORD *)(*(_QWORD *)this + 2180LL) = *(_DWORD *)(*(_QWORD *)this + 2176LL);
      }
      else
      {
        *(_DWORD *)(v37 + 2180) = 0;
        *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0;
      }
    }
  }
  v39 = *(_DWORD **)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 2176LL) )
  {
    v39[544] = 96;
    v39 = *(_DWORD **)this;
  }
  if ( !v39[545] )
  {
    v39[545] = 96;
    v39 = *(_DWORD **)this;
  }
  if ( v39[535] == 1 )
  {
    v39[553] = 1;
    *(_DWORD *)(*(_QWORD *)this + 2216LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 2220LL) = 3;
    v39 = *(_DWORD **)this;
  }
  v40 = v39[535];
  v41 = 17424;
  if ( (v40 & 0xFFFFFFFB) != 0 )
    v41 = 28313;
  v42 = v41 | 0x1000;
  if ( v40 != 1 )
    v42 = v41;
  v43 = v42 | 0x100;
  if ( (v39[456] & 0x80000) == 0 )
    v43 = v42;
  v39[543] = v43;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v76, *(HPALETTE *)(*(_QWORD *)this + 2120LL));
  v47 = v76;
  if ( !v76 )
    goto LABEL_109;
  if ( (*((_DWORD *)v76 + 6) & 0x1000000) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46);
    if ( (*((_DWORD *)v47 + 6) & 0x1000000) == 0 )
      goto LABEL_109;
  }
  if ( !*((_DWORD *)v47 + 7) )
  {
    v48 = (unsigned int *)*((_QWORD *)v47 + 14);
    v44 = *v48;
    v49 = v48[1];
    v50 = v49 <= (unsigned int)v44;
    if ( v49 < (unsigned int)v44 )
    {
      v46 = v48[2];
      if ( (unsigned int)v44 > (unsigned int)v46 )
      {
        v45 = v49 <= (unsigned int)v46;
LABEL_61:
        *(_DWORD *)(*(_QWORD *)this + 2368LL) = v45;
        goto LABEL_63;
      }
      v50 = v49 <= (unsigned int)v44;
    }
    if ( !v50 )
    {
      v46 = v48[2];
      if ( v49 > (unsigned int)v46 )
      {
        v45 = 3 - (unsigned int)((unsigned int)v46 < (unsigned int)v44);
        goto LABEL_61;
      }
    }
    v45 = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 2368LL) = (v49 < (unsigned int)v44) + 4;
  }
LABEL_63:
  if ( (*(_DWORD *)(*(_QWORD *)this + 2172LL) & 0x100) != 0 )
  {
    if ( !a11 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46), *((_DWORD *)v47 + 7) == 256) )
    {
      if ( !(unsigned int)CreateSurfacePal(
                            v47,
                            v44,
                            *(unsigned int *)(*(_QWORD *)this + 2168LL),
                            *(unsigned int *)(*(_QWORD *)this + 2240LL)) )
      {
LABEL_109:
        EPALOBJ::~EPALOBJ((struct OBJECT **)&v76);
        goto LABEL_115;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 1824LL) &= ~0x80000u;
      *(_DWORD *)(*(_QWORD *)this + 2172LL) &= ~0x100u;
    }
  }
  if ( a11 && !(unsigned int)GreSetPaletteOwner(*(void **)v47, 0) )
    goto LABEL_109;
  v51 = *(_QWORD *)this;
  v76 = 0LL;
  *(_QWORD *)(v51 + 1808) = v47;
  EPALOBJ::~EPALOBJ((struct OBJECT **)&v76);
  v52 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 1456LL) )
  {
    v53 = *(_DWORD *)(*(_QWORD *)(v52 + 1792) + 24LL);
    if ( v53 != 1 && v53 != 4 )
      goto LABEL_79;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v52 + 1792) + 24LL) == 2 )
  {
    if ( (int)IsPDEVOBJ_bCreateHalftoneBrushesSupported() >= 0 )
    {
      HalftoneBrushesWrap = PDEVOBJ_bCreateHalftoneBrushesWrap(this);
      goto LABEL_78;
    }
LABEL_79:
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = v30;
    v55 = *(_QWORD *)this;
    v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL);
    if ( ((v56 - 1) & 0xFFFFFFFD) == 0 || v56 == 4 )
    {
      *(_QWORD *)(v55 + 1736) = *(_QWORD *)(v18 + 2928);
      *(_QWORD *)(*(_QWORD *)this + 1728LL) = *(_QWORD *)(v18 + 2920);
      v77 = ghsemDriverMgmt;
      EngAcquireSemaphore(ghsemDriverMgmt);
      GreCreateSemaphore();
    }
    *(_QWORD *)(v55 + 1768) = *(_QWORD *)(v18 + 2864);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v18 + 2992);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(v18 + 3392);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v18 + 3384);
    if ( (int)IsGetgbFinishDefGUIFontInitSupported() >= 0 )
    {
      pgbFinishDefGUIFontInit = (int *)GetgbFinishDefGUIFontInit();
      if ( *pgbFinishDefGUIFontInit )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL) == 1 )
        {
          if ( (int)IsFinishStockFontInitSupported() >= 0 )
            FinishStockFontInit(*(unsigned int *)(*(_QWORD *)this + 2180LL));
          *pgbFinishDefGUIFontInit = 0;
        }
      }
    }
    v57 = *(_QWORD *)this;
    _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
    do
      v58 = *(_DWORD *)(v57 + 40);
    while ( v58 != _InterlockedCompareExchange((volatile signed __int32 *)(v57 + 40), v58 & 0xFFFFFFBF, v58) );
    v59 = *(_DWORD **)this;
    v60 = 12 * *(_DWORD *)(*(_QWORD *)this + 2180LL) / 0x48u;
    memset(v82, 0, 0x1A4uLL);
    if ( !v59[457] )
    {
      v59[457] = v60;
      v59 = *(_DWORD **)this;
    }
    if ( !v59[480] )
    {
      v59[480] = v60;
      v59 = *(_DWORD **)this;
    }
    if ( !v59[503] )
      v59[503] = v60;
    if ( (int)IsvConvertLogFontWSupported() >= 0 )
      vConvertLogFontW(v82, *(_QWORD *)this + 1828LL);
    v61 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 2140LL) != 1 )
    {
      if ( (int)IshfontCreateSupported() < 0 )
        goto LABEL_103;
      v62 = hfontCreate(v82, 4LL, 2LL, 0LL, 8);
      *(_QWORD *)(*(_QWORD *)this + 1432LL) = v62;
      if ( v62 )
        goto LABEL_103;
      v61 = *(_QWORD *)this;
    }
    *(_QWORD *)(v61 + 1432) = gahStockObjects[13];
LABEL_103:
    if ( (int)IsvConvertLogFontWSupported() >= 0 )
      vConvertLogFontW(v82, *(_QWORD *)this + 1920LL);
    v63 = hfontCreate(v82, 5LL, 2LL, 0LL, 8);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = v63;
    if ( !v63 )
      *(_QWORD *)(*(_QWORD *)this + 1440LL) = gahStockObjects[13];
    vConvertLogFontW(v82, *(_QWORD *)this + 2012LL);
    v64 = hfontCreate(v82, 6LL, 2LL, 0LL, 8);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = v64;
    if ( !v64 )
      *(_QWORD *)(*(_QWORD *)this + 1448LL) = gahStockObjects[16];
    goto LABEL_110;
  }
  if ( (int)IsPDEVOBJ_bCreateDefaultBrushesSupported() < 0 )
    goto LABEL_79;
  HalftoneBrushesWrap = PDEVOBJ_bCreateDefaultBrushesWrap(this);
LABEL_78:
  if ( HalftoneBrushesWrap )
    goto LABEL_79;
LABEL_115:
  if ( a11 )
  {
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v68);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  }
  v69 = *(_QWORD *)this;
  v70 = *(struct _ERESOURCE **)(*(_QWORD *)this + 56LL);
  if ( v70 )
  {
    GreDeleteSemaphore(v70);
    v69 = *(_QWORD *)this;
  }
  v71 = *(struct _ERESOURCE **)(v69 + 48);
  if ( v71 )
  {
    GreDeleteSemaphore(v71);
    v69 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v69 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported(v71) >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(this);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
  v72 = *(struct PDEV **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 1800LL) )
  {
    (*(void (__fastcall **)(_QWORD))(v18 + 2704))(*(_QWORD *)(*(_QWORD *)this + 1800LL));
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = 0LL;
    v72 = *(struct PDEV **)this;
  }
  PDEV::Free(v72);
  *(_QWORD *)this = 0LL;
  return this;
}
