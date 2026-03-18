/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450
 * Callers:
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001BC74 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E580 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     GreCreateSemaphore @ 0x1C002D3D0 (GreCreateSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C003E2C4 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C0056CF0 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005F588 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0061E28 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     GreSetPaletteOwner @ 0x1C008B2F0 (GreSetPaletteOwner.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C008B43C (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C008C770 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C008DBA0 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C008FE34 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00933B0 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _lambda_49808adf2e8287706ad80fa46f25ee96_::operator() @ 0x1C00A9E58 (_lambda_49808adf2e8287706ad80fa46f25ee96_--operator().c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0108D5C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *Src,
        void *a7,
        struct tagREMOTETYPEONENODE *a8,
        struct _GDIINFO *a9,
        struct tagDEVINFO *a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  struct PDEV *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // ebx
  void *v23; // rcx
  struct _GDIINFO *v24; // rcx
  _OWORD *v25; // rax
  __int64 v26; // rdx
  __int128 v27; // xmm1
  __int64 v28; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int64 v32; // r8
  void *v33; // r15
  struct _GDIINFO *v34; // r9
  struct DHPDEV__ *v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  int v38; // eax
  __int64 v39; // r8
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // edx
  _DWORD *v44; // r8
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int16 *v52; // rbx
  unsigned int *v54; // rcx
  unsigned int v55; // eax
  bool v56; // cc
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // edx
  int HalftoneBrushesWrap; // eax
  __int64 v61; // rcx
  int v62; // edx
  __int64 v63; // rdx
  signed __int32 v64; // ett
  _DWORD *v65; // rbx
  unsigned int v66; // edi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r8
  _QWORD *v73; // rax
  HSURF *v74; // [rsp+20h] [rbp-E0h]
  unsigned int v75; // [rsp+28h] [rbp-D8h]
  unsigned int v76; // [rsp+38h] [rbp-C8h]
  struct tagDEVINFO *v77; // [rsp+40h] [rbp-C0h]
  HDEV v78; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v79; // [rsp+60h] [rbp-A0h] BYREF
  char v80; // [rsp+68h] [rbp-98h]
  void *v81; // [rsp+70h] [rbp-90h]
  unsigned int v82; // [rsp+78h] [rbp-88h] BYREF
  __int64 v83; // [rsp+80h] [rbp-80h] BYREF
  struct _DRVFN *v84; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v85; // [rsp+90h] [rbp-70h]
  _QWORD v86[4]; // [rsp+98h] [rbp-68h] BYREF
  int v87; // [rsp+B8h] [rbp-48h]
  _BYTE v88[432]; // [rsp+C0h] [rbp-40h] BYREF

  v81 = a7;
  v79 = a4;
  if ( gdwDirectDrawContext + 3580 <= gdwDirectDrawContext )
    return this;
  v16 = PDEV::Allocate(gdwDirectDrawContext + 3580LL, a11);
  *(_QWORD *)this = v16;
  if ( !v16 )
    return this;
  *((_QWORD *)v16 + 3) = v16;
  v17 = *(_QWORD *)this;
  v80 = 0;
  *(_QWORD *)(v17 + 1792) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2608LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2612LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3528LL) = 0;
  v18 = *(_QWORD *)this;
  v83 = v18;
  *(_QWORD *)(v18 + 3560) = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL) != 6 )
    GreCreateSemaphore();
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = 5;
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 1792LL);
  if ( *(_DWORD *)(v20 + 24) == 1 && *(_DWORD *)(v19 + 2612) == 5 )
  {
    if ( (int)IsPanningGetFunctionTableSupported() >= 0 )
    {
      PanningGetFunctionTable(&v84, &v82);
      bFillFunctionTable(v84, v82, (__int64 (**)(void))(*(_QWORD *)this + 2688LL));
    }
  }
  else
  {
    memmove((void *)(v19 + 2688), (const void *)(v20 + 64), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1712LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = a5;
  if ( Src )
  {
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( Src[v21] );
      v22 = 2 * v21 + 2;
      *(_QWORD *)(*(_QWORD *)this + 3560LL) = PALLOCMEM2(v22, 1886221639LL, 1);
      v23 = *(void **)(*(_QWORD *)this + 3560LL);
      if ( v23 )
        memmove(v23, Src, v22);
    }
  }
  v24 = a9;
  if ( a9 )
  {
    v25 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    v26 = 2LL;
    do
    {
      *v25 = *(_OWORD *)&v24->ulVersion;
      v25[1] = *(_OWORD *)&v24->ulHorzRes;
      v25[2] = *(_OWORD *)&v24->ulNumColors;
      v25[3] = *(_OWORD *)&v24->flTextCaps;
      v25[4] = *(_OWORD *)&v24->ulAspectX;
      v25[5] = *(_OWORD *)&v24->yStyleStep;
      v25[6] = *(_OWORD *)&v24->szlPhysSize.cx;
      v25 += 8;
      v27 = *(_OWORD *)&v24->ciDevice.Red.y;
      v24 = (struct _GDIINFO *)((char *)v24 + 128);
      *(v25 - 1) = v27;
      --v26;
    }
    while ( v26 );
    v28 = 2LL;
    *v25 = *(_OWORD *)&v24->ulVersion;
    v25[1] = *(_OWORD *)&v24->ulHorzRes;
    v25[2] = *(_OWORD *)&v24->ulNumColors;
    v25[3] = *(_OWORD *)&v24->flTextCaps;
    v30 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v30 = *(_OWORD *)a10;
      v30[1] = *((_OWORD *)a10 + 1);
      v30[2] = *((_OWORD *)a10 + 2);
      v30[3] = *((_OWORD *)a10 + 3);
      v30[4] = *((_OWORD *)a10 + 4);
      v30[5] = *((_OWORD *)a10 + 5);
      v30[6] = *((_OWORD *)a10 + 6);
      v30 += 8;
      v31 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v30 - 1) = v31;
      --v28;
    }
    while ( v28 );
    *v30 = *(_OWORD *)a10;
    v30[1] = *((_OWORD *)a10 + 1);
    v30[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v30 + 6) = *((_QWORD *)a10 + 6);
  }
  v85 = (_DWORD *)(v18 + 40);
  SETFLAG(a11, (volatile unsigned int *)(v18 + 40), 0x8000);
  if ( a11 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = gppdevListUMPDInCreate;
    gppdevListUMPDInCreate = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v32);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  }
  v87 = 0;
  PushThreadGuardedObject(v86, (__int64)this, (__int64)lambda_49808adf2e8287706ad80fa46f25ee96_::_lambda_invoker_cdecl_);
  v33 = v81;
  v78 = *(HDEV *)this;
  v34 = (struct _GDIINFO *)(*(_QWORD *)this + 2136LL);
  v77 = (struct tagDEVINFO *)(*(_QWORD *)this + 1824LL);
  v74 = (HSURF *)(*(_QWORD *)this + 1456LL);
  v87 = 1;
  v35 = PDEVOBJ::EnablePDEV((PDEVOBJ *)&v83, a3, v79, (__int64)v34, v74, v75, v34, v76, v77, v78, Src, v81);
  *(_QWORD *)(*(_QWORD *)this + 1800LL) = v35;
  if ( v87 )
  {
    PopThreadGuardedObject(v86);
    v87 = 0;
  }
  v36 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1800LL) )
    goto LABEL_61;
  if ( *(_DWORD *)(*(_QWORD *)(v36 + 1792) + 24LL) != 6 )
  {
    v37 = *(_DWORD *)(v36 + 2144);
    if ( v37 > 0 )
    {
      v38 = 1000 * v37;
    }
    else
    {
      if ( !v37 )
      {
        *(_DWORD *)(v36 + 2144) = 25400 * (unsigned __int64)*(unsigned int *)(v36 + 2152) / 0x60;
        goto LABEL_36;
      }
      v38 = -v37;
    }
    *(_DWORD *)(v36 + 2144) = v38;
LABEL_36:
    v39 = *(_QWORD *)this;
    v40 = *(_DWORD *)(*(_QWORD *)this + 2148LL);
    if ( v40 > 0 )
    {
      v41 = 1000 * v40;
    }
    else
    {
      if ( !v40 )
      {
        *(_DWORD *)(v39 + 2148) = 25400 * (unsigned __int64)*(unsigned int *)(v39 + 2156) / 0x60;
LABEL_42:
        if ( !a11 )
        {
          v42 = *(_QWORD *)this;
          v43 = *(_DWORD *)(*(_QWORD *)this + 2180LL);
          if ( *(_DWORD *)(*(_QWORD *)this + 2176LL) != v43 )
          {
            if ( HIWORD(v43) - 100 <= 0x190u )
            {
              *(_DWORD *)(v42 + 3528) = v43;
              *(_DWORD *)(*(_QWORD *)this + 2180LL) = *(_DWORD *)(*(_QWORD *)this + 2176LL);
            }
            else
            {
              *(_DWORD *)(v42 + 2180) = 0;
              *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0;
            }
          }
        }
        v44 = *(_DWORD **)this;
        if ( !*(_DWORD *)(*(_QWORD *)this + 2176LL) )
        {
          v44[544] = 96;
          v44 = *(_DWORD **)this;
        }
        if ( !v44[545] )
        {
          v44[545] = 96;
          v44 = *(_DWORD **)this;
        }
        if ( v44[535] == 1 )
        {
          v44[553] = 1;
          *(_DWORD *)(*(_QWORD *)this + 2216LL) = 1;
          *(_DWORD *)(*(_QWORD *)this + 2220LL) = 3;
          v44 = *(_DWORD **)this;
        }
        v45 = v44[535];
        v46 = 17424;
        if ( (v45 & 0xFFFFFFFB) != 0 )
          v46 = 28313;
        v47 = v46 | 0x1000;
        if ( v45 != 1 )
          v47 = v46;
        v48 = v47 | 0x100;
        if ( (v44[456] & 0x80000) == 0 )
          v48 = v47;
        v44[543] = v48;
        EPALOBJ::EPALOBJ((EPALOBJ *)&v79, *(HPALETTE *)(*(_QWORD *)this + 2120LL));
        v52 = v79;
        if ( !v79 )
          goto LABEL_60;
        if ( (*((_DWORD *)v79 + 6) & 0x1000000) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51);
          if ( (*((_DWORD *)v52 + 6) & 0x1000000) == 0 )
            goto LABEL_60;
        }
        if ( !*((_DWORD *)v52 + 7) )
        {
          v54 = (unsigned int *)*((_QWORD *)v52 + 14);
          v49 = *v54;
          v55 = v54[1];
          v56 = v55 <= (unsigned int)v49;
          if ( v55 < (unsigned int)v49 )
          {
            v51 = v54[2];
            if ( (unsigned int)v49 > (unsigned int)v51 )
            {
              v50 = v55 <= (unsigned int)v51;
LABEL_73:
              *(_DWORD *)(*(_QWORD *)this + 2368LL) = v50;
              goto LABEL_75;
            }
            v56 = v55 <= (unsigned int)v49;
          }
          if ( !v56 )
          {
            v51 = v54[2];
            if ( v55 > (unsigned int)v51 )
            {
              v50 = 3 - (unsigned int)((unsigned int)v51 < (unsigned int)v49);
              goto LABEL_73;
            }
          }
          v50 = *(_QWORD *)this;
          *(_DWORD *)(*(_QWORD *)this + 2368LL) = (v55 < (unsigned int)v49) + 4;
        }
LABEL_75:
        if ( (*(_DWORD *)(*(_QWORD *)this + 2172LL) & 0x100) != 0 )
        {
          if ( !a11 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51), *((_DWORD *)v52 + 7) == 256) )
          {
            if ( !(unsigned int)CreateSurfacePal(
                                  v52,
                                  v49,
                                  *(unsigned int *)(*(_QWORD *)this + 2168LL),
                                  *(unsigned int *)(*(_QWORD *)this + 2240LL)) )
              goto LABEL_60;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)this + 1824LL) &= ~0x80000u;
            *(_DWORD *)(*(_QWORD *)this + 2172LL) &= ~0x100u;
          }
        }
        if ( !a11 || (unsigned int)GreSetPaletteOwner(*(void **)v52, 0) )
        {
          v57 = *(_QWORD *)this;
          v79 = 0LL;
          *(_QWORD *)(v57 + 1808) = v52;
          EPALOBJ::~EPALOBJ((struct OBJECT **)&v79);
          v58 = *(_QWORD *)this;
          if ( !*(_QWORD *)(*(_QWORD *)this + 1456LL)
            || (v59 = *(_DWORD *)(*(_QWORD *)(v58 + 1792) + 24LL), v59 == 1)
            || v59 == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v58 + 1792) + 24LL) == 2 )
            {
              if ( (int)IsPDEVOBJ_bCreateHalftoneBrushesSupported() >= 0 )
              {
                HalftoneBrushesWrap = PDEVOBJ_bCreateHalftoneBrushesWrap(this);
                goto LABEL_90;
              }
            }
            else if ( (int)IsPDEVOBJ_bCreateDefaultBrushesSupported() >= 0 )
            {
              HalftoneBrushesWrap = PDEVOBJ_bCreateDefaultBrushesWrap(this);
LABEL_90:
              if ( HalftoneBrushesWrap )
                goto LABEL_91;
LABEL_61:
              lambda_49808adf2e8287706ad80fa46f25ee96_::operator()(v35, this);
              return this;
            }
          }
LABEL_91:
          *(_QWORD *)(*(_QWORD *)this + 2560LL) = v33;
          v61 = *(_QWORD *)this;
          v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL);
          if ( ((v62 - 1) & 0xFFFFFFFD) == 0 || v62 == 4 )
          {
            *(_QWORD *)(v61 + 1736) = *(_QWORD *)(v18 + 2928);
            *(_QWORD *)(*(_QWORD *)this + 1728LL) = *(_QWORD *)(v18 + 2920);
            v81 = ghsemDriverMgmt;
            EngAcquireSemaphore(ghsemDriverMgmt);
            GreCreateSemaphore();
          }
          *(_QWORD *)(v61 + 1768) = *(_QWORD *)(v18 + 2864);
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
          v63 = *(_QWORD *)this;
          _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
          do
            v64 = *(_DWORD *)(v63 + 40);
          while ( v64 != _InterlockedCompareExchange((volatile signed __int32 *)(v63 + 40), v64 & 0xFFFFFFBF, v64) );
          *(_DWORD *)(*(_QWORD *)this + 3568LL) = 0;
          v65 = *(_DWORD **)this;
          v66 = 12 * *(_DWORD *)(*(_QWORD *)this + 2180LL) / 0x48u;
          memset(v88, 0, 0x1A4uLL);
          if ( !v65[457] )
          {
            v65[457] = v66;
            v65 = *(_DWORD **)this;
          }
          if ( !v65[480] )
          {
            v65[480] = v66;
            v65 = *(_DWORD **)this;
          }
          if ( !v65[503] )
            v65[503] = v66;
          if ( (int)IsvConvertLogFontWSupported() >= 0 )
            vConvertLogFontW(v88, *(_QWORD *)this + 1828LL);
          v67 = *(_QWORD *)this;
          if ( *(_DWORD *)(*(_QWORD *)this + 2140LL) != 1 )
          {
            if ( (int)IshfontCreateSupported() < 0 )
              goto LABEL_115;
            v68 = hfontCreate(v88, 4LL, 2LL, 0LL, 8);
            *(_QWORD *)(*(_QWORD *)this + 1432LL) = v68;
            if ( v68 )
              goto LABEL_115;
            v67 = *(_QWORD *)this;
          }
          *(_QWORD *)(v67 + 1432) = gahStockObjects[13];
LABEL_115:
          if ( (int)IsvConvertLogFontWSupported() >= 0 )
            vConvertLogFontW(v88, *(_QWORD *)this + 1920LL);
          v69 = hfontCreate(v88, 5LL, 2LL, 0LL, 8);
          *(_QWORD *)(*(_QWORD *)this + 1440LL) = v69;
          if ( !v69 )
            *(_QWORD *)(*(_QWORD *)this + 1440LL) = gahStockObjects[13];
          vConvertLogFontW(v88, *(_QWORD *)this + 2012LL);
          v70 = hfontCreate(v88, 6LL, 2LL, 0LL, 8);
          *(_QWORD *)(*(_QWORD *)this + 1448LL) = v70;
          if ( !v70 )
            *(_QWORD *)(*(_QWORD *)this + 1448LL) = gahStockObjects[16];
          goto LABEL_121;
        }
LABEL_60:
        EPALOBJ::~EPALOBJ((struct OBJECT **)&v79);
        goto LABEL_61;
      }
      v41 = -v40;
    }
    *(_DWORD *)(v39 + 2148) = v41;
    goto LABEL_42;
  }
LABEL_121:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*v85 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v83, 1);
    vResetSurfacePalette(*(_QWORD **)this);
  }
  v71 = (_QWORD *)(*(_QWORD *)this + 2624LL);
  v71[1] = v71;
  *v71 = v71;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( a11 )
    RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
  **(_QWORD **)this = gppdevList;
  gppdevList = *(struct PDEV **)this;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v72);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v83, *(struct DHPDEV__ **)(*(_QWORD *)this + 1800LL), *(HDEV *)this);
  v73 = (_QWORD *)(*(_QWORD *)this + 3536LL);
  v73[1] = v73;
  *v73 = v73;
  return this;
}
