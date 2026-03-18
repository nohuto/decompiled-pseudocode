/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960
 * Callers:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00032C4 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C000CB9C (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00107D4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C00108D0 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0082390 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0087EAC (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C017C054 (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0001B64 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001312C (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x1C0019A1C (DirectComposition--Memory--AllocateAndClear.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0019CE4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0037E0C (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C007665C (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167E80 (--0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167EA8 (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167EF4 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F18 (--0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F3C (--0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0167F60 (--0CSpatialVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C016E9D8 (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0172A10 (--0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  struct DirectComposition::CResourceMarshaler **v3; // r14
  char *v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  void *v11; // rax
  __int64 v12; // rbx
  void **v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  char *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  void *v21; // rax
  void *v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  void *v28; // rax
  __int64 v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // edx
  __int64 v40; // rax
  void *v41; // rax
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax
  __int64 v45; // rax
  void *v46; // rax
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // edx
  void *v52; // rax
  void *v53; // rax
  void *v54; // rax
  __int64 v55; // rax
  void *v56; // rax
  __int64 v57; // rax
  void *v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // edx
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rax
  void **v66; // rax
  void *v67; // rax
  __int64 v68; // rax
  void *v69; // rax
  DirectComposition::CCursorVisualMarshaler *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  __int64 v78; // rax
  void *v79; // rax
  void *v80; // rax
  void *v81; // rax
  void *v82; // rax
  void *v83; // rax
  void *v84; // rax
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // edx
  unsigned int v88; // edx
  unsigned int v89; // edx
  void *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  void *v93; // rax
  void *v94; // rax
  void *v95; // rax
  __int64 v96; // rax
  unsigned int v97; // edx
  unsigned int v98; // edx
  unsigned int v99; // edx
  unsigned int v100; // edx
  unsigned int v101; // edx
  DirectComposition::CInteractionTrackerMarshaler *v102; // rax
  DirectComposition::CInteractionMarshaler *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  void *v106; // rax
  void *v107; // rax
  __int64 v108; // rax
  unsigned int v109; // edx
  unsigned int v110; // edx
  unsigned int v111; // edx
  unsigned int v112; // edx
  unsigned int v113; // edx
  void *v114; // rax
  __int64 v115; // rax
  void *v116; // rax
  void *v117; // rax
  void *v118; // rax
  void *v119; // rax
  void *v120; // rax
  unsigned int v121; // edx
  unsigned int v122; // edx
  unsigned int v123; // edx
  unsigned int v124; // edx
  unsigned int v125; // edx
  DirectComposition::CParticleEmitterVisualMarshaler *v126; // rax
  DirectComposition::CParticleEmitterVisualMarshaler *v127; // rdi
  void *v128; // rax
  void *v129; // rax
  DirectComposition::CNaturalAnimationMarshaler *v130; // rax
  void *v131; // rax
  void *v132; // rax
  void *v133; // rax
  unsigned int v134; // edx
  unsigned int v135; // edx
  unsigned int v136; // edx
  unsigned int v137; // edx
  unsigned int v138; // edx
  __int64 v139; // rax
  _QWORD *v140; // rax
  DirectComposition::CProjectedShadowCasterMarshaler *v141; // rax
  void *v142; // rax
  __int64 v143; // rax
  void *v144; // rax
  _QWORD *v145; // rax
  unsigned int v146; // edx
  unsigned int v147; // edx
  unsigned int v148; // edx
  unsigned int v149; // edx
  unsigned int v150; // edx
  void *v151; // rax
  void *v152; // rax
  __int64 v153; // rax
  DirectComposition::CRedirectVisualMarshaler *v154; // rax
  DirectComposition::CRedirectVisualMarshaler *v155; // rdi
  void *v156; // rax
  void *v157; // rax
  void *v158; // rax
  unsigned int v159; // edx
  unsigned int v160; // edx
  unsigned int v161; // edx
  unsigned int v162; // edx
  unsigned int v163; // edx
  void *v164; // rax
  void *v165; // rax
  __int64 v166; // rax
  void *v167; // rax
  void *v168; // rax
  _QWORD *v169; // rax
  _QWORD *v170; // rbx
  void *v171; // rax
  unsigned int v172; // edx
  unsigned int v173; // edx
  unsigned int v174; // edx
  unsigned int v175; // edx
  unsigned int v176; // edx
  void *v177; // rax
  void *v178; // rax
  DirectComposition::CSpatialVisualMarshaler *v179; // rax
  DirectComposition::CSpatialVisualMarshaler *v180; // rdi
  DirectComposition::CSpatialRemarshalerMarshaler *v181; // rax
  DirectComposition::CSpatialRemarshalerMarshaler *v182; // rdi
  void *v183; // rax
  void *v184; // rax
  void *v185; // rax
  unsigned int v186; // edx
  unsigned int v187; // edx
  unsigned int v188; // edx
  unsigned int v189; // edx
  unsigned int v190; // edx
  void *v191; // rax
  void *v192; // rax
  void *v193; // rax
  void *v194; // rax
  void *v195; // rax
  void *v196; // rax
  void *v197; // rax
  unsigned int v198; // edx
  unsigned int v199; // edx
  unsigned int v200; // edx
  unsigned int v201; // edx
  unsigned int v202; // edx
  int v203; // edi
  void *v204; // rax
  void *v205; // rax
  void *v206; // rax
  void *v207; // rax
  DirectComposition::CVisualMarshaler *v208; // rax
  DirectComposition::CVisualMarshaler *v209; // rdi
  void *v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rax

  v3 = a3;
  v5 = 0LL;
  if ( a2 > 0x55 )
  {
    if ( a2 > 0x81 )
    {
      if ( a2 > 0x91 )
      {
        if ( a2 <= 0x9A )
        {
          if ( a2 == 154 )
          {
            v197 = (void *)Win32AllocPoolWithQuotaZInit(0x88uLL);
            v12 = (__int64)v197;
            if ( v197 )
            {
              memset(v197, 0, 0x88uLL);
              *(_QWORD *)(v12 + 20) = 1LL;
              v13 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
              *(_QWORD *)(v12 + 40) = 0LL;
              *(_BYTE *)(v12 + 48) = 0;
              *(_DWORD *)(v12 + 56) = 0;
              *(_QWORD *)(v12 + 64) = 0LL;
              *(_QWORD *)(v12 + 72) = 0LL;
              *(_QWORD *)(v12 + 80) = 0LL;
              *(_DWORD *)(v12 + 88) = 0;
              goto LABEL_18;
            }
            return (unsigned int)-1073741801;
          }
          v186 = a2 - 146;
          if ( !v186 )
          {
            v196 = (void *)Win32AllocPoolWithQuotaZInit(0xA8uLL);
            v12 = (__int64)v196;
            if ( v196 )
            {
              memset(v196, 0, 0xA8uLL);
              *(_QWORD *)(v12 + 20) = 1LL;
              v13 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
              *(_QWORD *)(v12 + 40) = 0LL;
              *(_BYTE *)(v12 + 48) = 0;
              *(_DWORD *)(v12 + 56) = 0;
              *(_QWORD *)(v12 + 64) = 0LL;
              *(_QWORD *)(v12 + 72) = 0LL;
              *(_QWORD *)(v12 + 80) = 0LL;
              *(_DWORD *)(v12 + 88) = 0;
              goto LABEL_18;
            }
            return (unsigned int)-1073741801;
          }
          v187 = v186 - 1;
          if ( v187 )
          {
            v188 = v187 - 3;
            if ( !v188 )
            {
              v194 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (__int64)v194;
              if ( v194 )
              {
                memset(v194, 0, 0x48uLL);
                v13 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            v189 = v188 - 1;
            if ( !v189 )
            {
              v193 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (__int64)v193;
              if ( v193 )
              {
                memset(v193, 0, 0x48uLL);
                v13 = &DirectComposition::CTransformGroupMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            v190 = v189 - 1;
            if ( !v190 )
            {
              v192 = (void *)Win32AllocPoolWithQuotaZInit(0x40uLL);
              v12 = (__int64)v192;
              if ( v192 )
              {
                memset(v192, 0, 0x40uLL);
                v13 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            if ( v190 == 1 )
            {
              v191 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (__int64)v191;
              if ( v191 )
              {
                memset(v191, 0, 0x48uLL);
                v13 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            return (unsigned int)-1073741811;
          }
          LOBYTE(a3) = 1;
          v195 = (void *)DirectComposition::Memory::AllocateAndClear(120LL, 2020885316LL, a3);
          v12 = (__int64)v195;
          if ( !v195 )
            return (unsigned int)-1073741801;
          memset(v195, 0, 0x78uLL);
          *(_QWORD *)(v12 + 20) = 1LL;
          *(_QWORD *)v12 = &DirectComposition::CTextBrushMarshaler::`vftable';
          *(_QWORD *)(v12 + 56) = 0LL;
          *(_QWORD *)(v12 + 64) = 0LL;
          *(_QWORD *)(v12 + 72) = 0LL;
          *(_QWORD *)(v12 + 80) = 0LL;
          *(_DWORD *)(v12 + 88) = 0;
          goto LABEL_363;
        }
        v198 = a2 - 156;
        if ( !v198 )
        {
          v210 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
          v12 = (__int64)v210;
          if ( v210 )
          {
            memset(v210, 0, 0x48uLL);
            v13 = &DirectComposition::CViewBoxMarshaler::`vftable';
            goto LABEL_17;
          }
          v12 = 0LL;
          goto LABEL_363;
        }
        v199 = v198 - 1;
        if ( v199 )
        {
          v200 = v199 - 1;
          if ( !v200 )
          {
            v207 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v12 = (__int64)v207;
            if ( v207 )
            {
              memset(v207, 0, 0x60uLL);
              v13 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v201 = v200 - 3;
          if ( !v201 )
          {
            v206 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
            v12 = (__int64)v206;
            if ( v206 )
            {
              memset(v206, 0, 0x30uLL);
              v13 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v202 = v201 - 2;
          if ( !v202 )
          {
            v205 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v12 = (__int64)v205;
            if ( v205 )
            {
              memset(v205, 0, 0x38uLL);
              v13 = &DirectComposition::CWindowBackdropBrushMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          if ( v202 == 3 )
          {
            v204 = (void *)Win32AllocPoolWithQuotaZInit(0x40uLL);
            v12 = (__int64)v204;
            if ( v204 )
            {
              memset(v204, 0, 0x40uLL);
              v13 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          return (unsigned int)-1073741811;
        }
        v208 = (DirectComposition::CVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x160uLL);
        v209 = v208;
        if ( !v208 )
          return (unsigned int)-1073741801;
        memset(v208, 0, 0x160uLL);
        v71 = DirectComposition::CVisualMarshaler::CVisualMarshaler(v209);
      }
      else
      {
        if ( a2 == 145 )
        {
          v185 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
          v12 = (__int64)v185;
          if ( v185 )
          {
            memset(v185, 0, 0x68uLL);
            v13 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        if ( a2 <= 0x88 )
        {
          if ( a2 == 136 )
          {
            v171 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v12 = (__int64)v171;
            if ( v171 )
            {
              memset(v171, 0, 0x38uLL);
              v13 = &DirectComposition::CSharedSectionMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v159 = a2 - 130;
          if ( v159 )
          {
            v160 = v159 - 1;
            if ( !v160 )
            {
              v168 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (__int64)v168;
              if ( v168 )
              {
                memset(v168, 0, 0x48uLL);
                v13 = &DirectComposition::CScaleTransformMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            v161 = v160 - 1;
            if ( !v161 )
            {
              v167 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
              v12 = (__int64)v167;
              if ( v167 )
              {
                memset(v167, 0, 0x50uLL);
                v13 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            v162 = v161 - 1;
            if ( !v162 )
            {
              v166 = Win32AllocPoolWithQuotaZInit(0x30uLL);
              v12 = v166;
              if ( v166 )
              {
                *(_QWORD *)(v166 + 20) = 1LL;
                v13 = &DirectComposition::CScreenCursorMarshaler::`vftable';
                goto LABEL_18;
              }
              return (unsigned int)-1073741801;
            }
            v163 = v162 - 1;
            if ( !v163 )
            {
              v165 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
              v12 = (__int64)v165;
              if ( v165 )
              {
                memset(v165, 0, 0x78uLL);
                *(_QWORD *)(v12 + 20) = 1LL;
                v13 = &DirectComposition::CShadowEffectMarshaler::`vftable';
                *(_QWORD *)(v12 + 40) = 0LL;
                *(_BYTE *)(v12 + 48) = 0;
                *(_DWORD *)(v12 + 56) = 0;
                *(_QWORD *)(v12 + 64) = 0LL;
                *(_QWORD *)(v12 + 72) = 0LL;
                *(_QWORD *)(v12 + 80) = 0LL;
                *(_DWORD *)(v12 + 88) = 0;
                goto LABEL_18;
              }
              return (unsigned int)-1073741801;
            }
            if ( v163 != 1 )
              return (unsigned int)-1073741811;
            v164 = (void *)Win32AllocPoolWithQuotaZInit(0x180uLL);
            v12 = (__int64)v164;
            if ( !v164 )
              return (unsigned int)-1073741801;
            memset(v164, 0, 0x180uLL);
            DirectComposition::CVisualMarshaler::CVisualMarshaler((DirectComposition::CVisualMarshaler *)v12);
            *(_DWORD *)(v12 + 376) = 0;
            *(_QWORD *)v12 = &DirectComposition::CShapeVisualMarshaler::`vftable';
          }
          else
          {
            v169 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x40uLL);
            v170 = v169;
            if ( v169 )
            {
              memset(v169, 0, 0x40uLL);
              *(_QWORD *)((char *)v170 + 36) = 1LL;
              *v170 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
              v170[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
            }
            else
            {
              v170 = 0LL;
            }
            v12 = (unsigned __int64)(v170 + 2) & -(__int64)(v170 != 0LL);
          }
          goto LABEL_363;
        }
        v172 = a2 - 138;
        if ( !v172 )
        {
          v184 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
          v12 = (__int64)v184;
          if ( v184 )
          {
            memset(v184, 0, 0x48uLL);
            v13 = &DirectComposition::CSkewTransformMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v173 = v172 - 1;
        if ( !v173 )
        {
          v183 = (void *)Win32AllocPoolWithQuotaZInit(0x80uLL);
          v12 = (__int64)v183;
          if ( v183 )
          {
            memset(v183, 0, 0x80uLL);
            v13 = &DirectComposition::CSnapshotMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v174 = v173 - 2;
        if ( v174 )
        {
          v175 = v174 - 1;
          if ( v175 )
          {
            v176 = v175 - 1;
            if ( !v176 )
            {
              v178 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
              v12 = (__int64)v178;
              if ( v178 )
              {
                memset(v178, 0, 0x78uLL);
                v13 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            if ( v176 != 1 )
              return (unsigned int)-1073741811;
            v177 = (void *)Win32AllocPoolWithQuotaZInit(0x178uLL);
            v12 = (__int64)v177;
            if ( !v177 )
              return (unsigned int)-1073741801;
            memset(v177, 0, 0x178uLL);
            DirectComposition::CVisualMarshaler::CVisualMarshaler((DirectComposition::CVisualMarshaler *)v12);
            *(_DWORD *)(v12 + 368) = 0;
            *(_QWORD *)v12 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
            goto LABEL_363;
          }
          LOBYTE(a3) = 1;
          v179 = (DirectComposition::CSpatialVisualMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                 360LL,
                                                                 1868972868LL,
                                                                 a3);
          v180 = v179;
          if ( !v179 )
            return (unsigned int)-1073741801;
          memset(v179, 0, 0x168uLL);
          v71 = DirectComposition::CSpatialVisualMarshaler::CSpatialVisualMarshaler(v180);
        }
        else
        {
          LOBYTE(a3) = 1;
          v181 = (DirectComposition::CSpatialRemarshalerMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                      352LL,
                                                                      2020885316LL,
                                                                      a3);
          v182 = v181;
          if ( !v181 )
            return (unsigned int)-1073741801;
          memset(v181, 0, 0x160uLL);
          v71 = DirectComposition::CSpatialRemarshalerMarshaler::CSpatialRemarshalerMarshaler(v182);
        }
      }
    }
    else
    {
      if ( a2 == 129 )
      {
        v158 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v12 = (__int64)v158;
        if ( v158 )
        {
          memset(v158, 0, 0x68uLL);
          *(_QWORD *)(v12 + 20) = 1LL;
          v13 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
          *(_QWORD *)(v12 + 40) = 0LL;
          *(_BYTE *)(v12 + 48) = 0;
          *(_DWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 64) = 0LL;
          *(_QWORD *)(v12 + 72) = 0LL;
          *(_QWORD *)(v12 + 80) = 0LL;
          *(_DWORD *)(v12 + 88) = 0;
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      if ( a2 > 0x6A )
      {
        if ( a2 > 0x74 )
        {
          v146 = a2 - 117;
          if ( !v146 )
          {
            LOBYTE(a3) = 1;
            v157 = (void *)DirectComposition::Memory::AllocateAndClear(96LL, 1885750084LL, a3);
            v12 = (__int64)v157;
            if ( v157 )
            {
              memset(v157, 0, 0x60uLL);
              v13 = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v147 = v146 - 2;
          if ( !v147 )
          {
            v156 = (void *)Win32AllocPoolWithQuotaZInit(0x88uLL);
            v12 = (__int64)v156;
            if ( v156 )
            {
              memset(v156, 0, 0x88uLL);
              v13 = &DirectComposition::CRectangleClipMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v148 = v147 - 3;
          if ( v148 )
          {
            v149 = v148 - 1;
            if ( !v149 )
            {
              v153 = Win32AllocPoolWithQuotaZInit(0x50uLL);
              v12 = v153;
              if ( v153 )
              {
                *(_QWORD *)(v153 + 20) = 1LL;
                v13 = &DirectComposition::CRemotingRenderTargetMarshaler::`vftable';
                goto LABEL_18;
              }
              return (unsigned int)-1073741801;
            }
            v150 = v149 - 4;
            if ( !v150 )
            {
              v152 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
              v12 = (__int64)v152;
              if ( v152 )
              {
                memset(v152, 0, 0x48uLL);
                v13 = &DirectComposition::CRotateTransformMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            if ( v150 == 1 )
            {
              v151 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
              v12 = (__int64)v151;
              if ( v151 )
              {
                memset(v151, 0, 0x58uLL);
                v13 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            return (unsigned int)-1073741811;
          }
          v154 = (DirectComposition::CRedirectVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x168uLL);
          v155 = v154;
          if ( !v154 )
            return (unsigned int)-1073741801;
          memset(v154, 0, 0x168uLL);
          v71 = DirectComposition::CRedirectVisualMarshaler::CRedirectVisualMarshaler(v155);
        }
        else
        {
          if ( a2 == 116 )
          {
            v145 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v12 = (__int64)v145;
            if ( !v145 )
              return (unsigned int)-1073741801;
            *(_QWORD *)((char *)v145 + 20) = 1LL;
            *v145 = &DirectComposition::CPropertySetMarshaler::`vftable';
            v145[7] = 0LL;
            v145[8] = 0LL;
            v145[9] = 0LL;
            v145[10] = 0LL;
            goto LABEL_363;
          }
          v134 = a2 - 108;
          if ( !v134 )
          {
            v144 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v12 = (__int64)v144;
            if ( v144 )
            {
              memset(v144, 0, 0x38uLL);
              v13 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v135 = v134 - 1;
          if ( !v135 )
          {
            v143 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
            v12 = v143;
            if ( v143 )
            {
              *(_QWORD *)(v143 + 20) = 1LL;
              *(_QWORD *)(v143 + 40) = 0LL;
              *(_BYTE *)(v143 + 48) = 0;
              v13 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
              goto LABEL_18;
            }
            return (unsigned int)-1073741801;
          }
          v136 = v135 - 1;
          if ( !v136 )
          {
            v142 = (void *)Win32AllocPoolWithQuotaZInit(0xC8uLL);
            v12 = (__int64)v142;
            if ( v142 )
            {
              memset(v142, 0, 0xC8uLL);
              v13 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
              *(_QWORD *)(v12 + 40) = 0LL;
              *(_BYTE *)(v12 + 48) = 0;
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v137 = v136 - 2;
          if ( v137 )
          {
            v138 = v137 - 1;
            if ( v138 )
            {
              if ( v138 != 1 )
                return (unsigned int)-1073741811;
              v139 = Win32AllocPoolWithQuotaZInit(0x78uLL);
              v12 = v139;
              if ( !v139 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v139 + 20) = 1LL;
              *(_QWORD *)v139 = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
              *(_DWORD *)(v139 + 88) = 1065353216;
              *(_QWORD *)(v139 + 96) = 1065353216LL;
              *(_DWORD *)(v139 + 92) = 2139095039;
              *(_DWORD *)(v139 + 104) = 0;
              *(_DWORD *)(v139 + 108) = 1120403456;
            }
            else
            {
              v140 = (_QWORD *)Win32AllocPoolWithQuotaZInit(0x50uLL);
              v12 = (__int64)v140;
              if ( !v140 )
                return (unsigned int)-1073741801;
              *(_QWORD *)((char *)v140 + 20) = 1LL;
              *v140 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
              v140[8] = 0LL;
            }
            goto LABEL_363;
          }
          v141 = (DirectComposition::CProjectedShadowCasterMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
          if ( !v141 )
            return (unsigned int)-1073741801;
          v71 = DirectComposition::CProjectedShadowCasterMarshaler::CProjectedShadowCasterMarshaler(v141);
        }
      }
      else
      {
        if ( a2 == 106 )
        {
          v133 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
          v12 = (__int64)v133;
          if ( v133 )
          {
            memset(v133, 0, 0x60uLL);
            v13 = &DirectComposition::CPathGeometryMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        if ( a2 <= 0x5F )
        {
          if ( a2 == 95 )
          {
            v120 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
            v12 = (__int64)v120;
            if ( v120 )
            {
              memset(v120, 0, 0x48uLL);
              v13 = &DirectComposition::CMaskBrushMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v109 = a2 - 86;
          if ( v109 )
          {
            v110 = v109 - 2;
            if ( !v110 )
            {
              v118 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
              v12 = (__int64)v118;
              if ( v118 )
              {
                memset(v118, 0, 0x70uLL);
                v13 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
                *(_QWORD *)(v12 + 56) = 2LL;
                *(_DWORD *)(v12 + 64) = 1;
                *(_QWORD *)(v12 + 72) = 0LL;
                *(_QWORD *)(v12 + 80) = 0LL;
                *(_QWORD *)(v12 + 88) = 0LL;
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            v111 = v110 - 2;
            if ( !v111 )
            {
              v117 = (void *)Win32AllocPoolWithQuotaZInit(0x88uLL);
              v12 = (__int64)v117;
              if ( v117 )
              {
                memset(v117, 0, 0x88uLL);
                *(_QWORD *)(v12 + 20) = 1LL;
                v13 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
                *(_QWORD *)(v12 + 40) = 0LL;
                *(_BYTE *)(v12 + 48) = 0;
                *(_DWORD *)(v12 + 56) = 0;
                *(_QWORD *)(v12 + 64) = 0LL;
                *(_QWORD *)(v12 + 72) = 0LL;
                *(_QWORD *)(v12 + 80) = 0LL;
                *(_DWORD *)(v12 + 88) = 0;
                goto LABEL_18;
              }
              return (unsigned int)-1073741801;
            }
            v112 = v111 - 1;
            if ( !v112 )
            {
              v116 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
              v12 = (__int64)v116;
              if ( v116 )
              {
                memset(v116, 0, 0x60uLL);
                v13 = &DirectComposition::CLineGeometryMarshaler::`vftable';
                goto LABEL_17;
              }
              return (unsigned int)-1073741801;
            }
            v113 = v112 - 2;
            if ( v113 )
            {
              if ( v113 == 1 )
              {
                v114 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
                v12 = (__int64)v114;
                if ( v114 )
                {
                  memset(v114, 0, 0x70uLL);
                  v13 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
                  goto LABEL_17;
                }
                return (unsigned int)-1073741801;
              }
              return (unsigned int)-1073741811;
            }
            v115 = Win32AllocPoolWithQuotaZInit(0x138uLL);
            v12 = v115;
            if ( !v115 )
              return (unsigned int)-1073741801;
            *(_BYTE *)(v115 + 92) &= 0xF8u;
            *(_QWORD *)(v115 + 20) = 1LL;
            *(_QWORD *)v115 = &DirectComposition::CManipulationMarshaler::`vftable';
            *(_QWORD *)(v115 + 96) = 0LL;
            *(_DWORD *)(v115 + 104) = 0;
            *(_QWORD *)(v115 + 112) = 0LL;
            *(_QWORD *)(v115 + 120) = 0LL;
          }
          else
          {
            v119 = (void *)Win32AllocPoolWithQuotaZInit(0x178uLL);
            v12 = (__int64)v119;
            if ( !v119 )
              return (unsigned int)-1073741801;
            memset(v119, 0, 0x178uLL);
            DirectComposition::CVisualMarshaler::CVisualMarshaler((DirectComposition::CVisualMarshaler *)v12);
            *(_DWORD *)(v12 + 372) = 0;
            *(_QWORD *)v12 = &DirectComposition::CLayerVisualMarshaler::`vftable';
          }
          goto LABEL_363;
        }
        v121 = a2 - 97;
        if ( !v121 )
        {
          v132 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = (__int64)v132;
          if ( v132 )
          {
            memset(v132, 0, 0x50uLL);
            v13 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v122 = v121 - 1;
        if ( !v122 )
        {
          v131 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
          v12 = (__int64)v131;
          if ( v131 )
          {
            memset(v131, 0, 0x68uLL);
            v13 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v123 = v122 - 2;
        if ( v123 )
        {
          v124 = v123 - 1;
          if ( !v124 )
          {
            v129 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
            v12 = (__int64)v129;
            if ( v129 )
            {
              memset(v129, 0, 0x68uLL);
              v13 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v125 = v124 - 2;
          if ( !v125 )
          {
            v128 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
            v12 = (__int64)v128;
            if ( v128 )
            {
              memset(v128, 0, 0x48uLL);
              v13 = &DirectComposition::COverlayRenderTargetMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          if ( v125 != 2 )
            return (unsigned int)-1073741811;
          LOBYTE(a3) = 1;
          v126 = (DirectComposition::CParticleEmitterVisualMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                         360LL,
                                                                         1987068740LL,
                                                                         a3);
          v127 = v126;
          if ( !v126 )
            return (unsigned int)-1073741801;
          memset(v126, 0, 0x168uLL);
          v71 = DirectComposition::CParticleEmitterVisualMarshaler::CParticleEmitterVisualMarshaler(v127);
        }
        else
        {
          v130 = (DirectComposition::CNaturalAnimationMarshaler *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
          if ( !v130 )
            return (unsigned int)-1073741801;
          v71 = DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(v130);
        }
      }
    }
    goto LABEL_122;
  }
  if ( a2 == 85 )
  {
    v108 = Win32AllocPoolWithQuotaZInit(0x130uLL);
    v12 = v108;
    if ( !v108 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v108 + 20) = 1LL;
    *(_QWORD *)v108 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
    *(_DWORD *)(v108 + 212) = 1065353216;
    *(_DWORD *)(v108 + 296) = 1065353216;
    goto LABEL_363;
  }
  if ( a2 > 0x27 )
  {
    if ( a2 > 0x3E )
    {
      if ( a2 <= 0x49 )
      {
        if ( a2 == 73 )
        {
          v96 = Win32AllocPoolWithQuotaZInit(0x28uLL);
          v12 = v96;
          if ( v96 )
          {
            *(_QWORD *)(v96 + 20) = 1LL;
            v13 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
            goto LABEL_18;
          }
          return (unsigned int)-1073741801;
        }
        v85 = a2 - 65;
        if ( !v85 )
        {
          v95 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = (__int64)v95;
          if ( v95 )
          {
            memset(v95, 0, 0x50uLL);
            v13 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v86 = v85 - 1;
        if ( !v86 )
        {
          v94 = (void *)Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = (__int64)v94;
          if ( v94 )
          {
            memset(v94, 0, 0x50uLL);
            v13 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v87 = v86 - 1;
        if ( !v87 )
        {
          v93 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
          v12 = (__int64)v93;
          if ( v93 )
          {
            memset(v93, 0, 0x30uLL);
            v13 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v88 = v87 - 1;
        if ( v88 )
        {
          v89 = v88 - 2;
          if ( v89 )
          {
            if ( v89 != 1 )
              return (unsigned int)-1073741811;
            v90 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
            v12 = (__int64)v90;
            if ( !v90 )
              return (unsigned int)-1073741801;
            memset(v90, 0, 0x70uLL);
            *(_QWORD *)(v12 + 20) = 1LL;
            *(_QWORD *)v12 = &DirectComposition::CHolographicViewerMarshaler::`vftable';
            *(_QWORD *)(v12 + 40) = 0LL;
            *(_QWORD *)(v12 + 48) = 0LL;
            *(_QWORD *)(v12 + 56) = 0LL;
            *(_QWORD *)(v12 + 64) = 0LL;
            *(_QWORD *)(v12 + 72) = 0LL;
            *(_QWORD *)(v12 + 80) = 0LL;
            *(_DWORD *)(v12 + 88) = 0;
            *(_QWORD *)(v12 + 92) = 0LL;
            *(_QWORD *)(v12 + 104) = 0LL;
            goto LABEL_363;
          }
          v91 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v12 = v91;
          if ( !v91 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v91 + 20) = 1LL;
          v66 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
        }
        else
        {
          v92 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v12 = v92;
          if ( !v92 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v92 + 20) = 1LL;
          v66 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
        }
        goto LABEL_113;
      }
      v97 = a2 - 74;
      if ( !v97 )
      {
        v107 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v12 = (__int64)v107;
        if ( v107 )
        {
          memset(v107, 0, 0x68uLL);
          *(_QWORD *)(v12 + 20) = 1LL;
          v13 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
          *(_QWORD *)(v12 + 40) = 0LL;
          *(_BYTE *)(v12 + 48) = 0;
          *(_DWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 64) = 0LL;
          *(_QWORD *)(v12 + 72) = 0LL;
          *(_QWORD *)(v12 + 80) = 0LL;
          *(_DWORD *)(v12 + 88) = 0;
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v98 = v97 - 1;
      if ( !v98 )
      {
        v106 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
        v12 = (__int64)v106;
        if ( v106 )
        {
          memset(v106, 0, 0x30uLL);
          v13 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v99 = v98 - 6;
      if ( !v99 )
      {
        v105 = Win32AllocPoolWithQuotaZInit(0x88uLL);
        v12 = v105;
        if ( v105 )
        {
          *(_QWORD *)(v105 + 20) = 1LL;
          v13 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v100 = v99 - 1;
      if ( !v100 )
      {
        v104 = Win32AllocPoolWithQuotaZInit(0x90uLL);
        v12 = v104;
        if ( !v104 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v104 + 20) = 1LL;
        *(_QWORD *)v104 = &DirectComposition::CInkMarshaler::`vftable';
        *(_BYTE *)(v104 + 104) = 1;
        *(_QWORD *)(v104 + 128) = 36LL;
        goto LABEL_363;
      }
      v101 = v100 - 1;
      if ( v101 )
      {
        if ( v101 != 1 )
          return (unsigned int)-1073741811;
        v102 = (DirectComposition::CInteractionTrackerMarshaler *)Win32AllocPoolWithQuotaZInit(0x1C0uLL);
        if ( !v102 )
          return (unsigned int)-1073741801;
        v71 = DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v102);
      }
      else
      {
        v103 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x140uLL);
        if ( !v103 )
          return (unsigned int)-1073741801;
        v71 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v103);
      }
    }
    else
    {
      if ( a2 == 62 )
      {
        v84 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
        v12 = (__int64)v84;
        if ( v84 )
        {
          memset(v84, 0, 0x60uLL);
          v13 = &DirectComposition::CClipGroupMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      if ( a2 > 0x32 )
      {
        v73 = a2 - 51;
        if ( !v73 )
        {
          v83 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v12 = (__int64)v83;
          if ( v83 )
          {
            memset(v83, 0, 0x38uLL);
            v13 = &DirectComposition::CEffectGroupMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v74 = v73 - 1;
        if ( !v74 )
        {
          v82 = (void *)Win32AllocPoolWithQuotaZInit(0x60uLL);
          v12 = (__int64)v82;
          if ( v82 )
          {
            memset(v82, 0, 0x60uLL);
            v13 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v75 = v74 - 1;
        if ( !v75 )
        {
          v81 = (void *)Win32AllocPoolWithQuotaZInit(0xD0uLL);
          v12 = (__int64)v81;
          if ( v81 )
          {
            memset(v81, 0, 0xD0uLL);
            v13 = &DirectComposition::CExpressionMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v76 = v75 - 2;
        if ( !v76 )
        {
          v80 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
          v12 = (__int64)v80;
          if ( v80 )
          {
            memset(v80, 0, 0x70uLL);
            *(_QWORD *)(v12 + 20) = 1LL;
            v13 = &DirectComposition::CFloodEffectMarshaler::`vftable';
            *(_QWORD *)(v12 + 40) = 0LL;
            *(_BYTE *)(v12 + 48) = 0;
            *(_DWORD *)(v12 + 56) = 0;
            *(_QWORD *)(v12 + 64) = 0LL;
            *(_QWORD *)(v12 + 72) = 0LL;
            *(_QWORD *)(v12 + 80) = 0LL;
            *(_DWORD *)(v12 + 88) = 0;
            goto LABEL_18;
          }
          return (unsigned int)-1073741801;
        }
        v77 = v76 - 1;
        if ( !v77 )
        {
          v79 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
          v12 = (__int64)v79;
          if ( v79 )
          {
            memset(v79, 0, 0x70uLL);
            *(_QWORD *)(v12 + 20) = 1LL;
            v13 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
            *(_QWORD *)(v12 + 40) = 0LL;
            *(_BYTE *)(v12 + 48) = 0;
            *(_DWORD *)(v12 + 56) = 0;
            *(_QWORD *)(v12 + 64) = 0LL;
            *(_QWORD *)(v12 + 72) = 0LL;
            *(_QWORD *)(v12 + 80) = 0LL;
            *(_DWORD *)(v12 + 88) = 0;
            goto LABEL_18;
          }
          return (unsigned int)-1073741801;
        }
        if ( v77 != 2 )
          return (unsigned int)-1073741811;
        v78 = Win32AllocPoolWithQuotaZInit(0xA8uLL);
        v12 = v78;
        if ( !v78 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v78 + 20) = 1LL;
        *(_QWORD *)v78 = &DirectComposition::CGenericInkMarshaler::`vftable';
        *(_BYTE *)(v78 + 48) = 1;
        *(_QWORD *)(v78 + 72) = 1LL;
        *(_BYTE *)(v78 + 88) = 1;
        *(_QWORD *)(v78 + 112) = 1LL;
        goto LABEL_363;
      }
      if ( a2 == 50 )
      {
        v72 = Win32AllocPoolWithQuotaZInit(0x58uLL);
        v12 = v72;
        if ( v72 )
        {
          *(_QWORD *)(v72 + 20) = 1LL;
          v13 = &DirectComposition::CEffectBrushMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v59 = a2 - 41;
      if ( v59 )
      {
        v60 = v59 - 1;
        if ( !v60 )
        {
          LOBYTE(a3) = 1;
          v69 = (void *)DirectComposition::Memory::AllocateAndClear(56LL, 1920156740LL, a3);
          v12 = (__int64)v69;
          if ( v69 )
          {
            memset(v69, 0, 0x38uLL);
            v13 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v61 = v60 - 1;
        if ( v61 )
        {
          v62 = v61 - 1;
          if ( !v62 )
          {
            v67 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v12 = (__int64)v67;
            if ( v67 )
            {
              memset(v67, 0, 0x38uLL);
              v13 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
              goto LABEL_17;
            }
            return (unsigned int)-1073741801;
          }
          v63 = v62 - 1;
          if ( v63 )
          {
            if ( v63 != 3 )
              return (unsigned int)-1073741811;
            v64 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v12 = v64;
            if ( !v64 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v64 + 20) = 1LL;
            *(_QWORD *)v64 = &DirectComposition::CDropShadowMarshaler::`vftable';
            *(_QWORD *)(v64 + 96) = 1065353216LL;
            *(_DWORD *)(v64 + 76) = 1065353216;
            *(_DWORD *)(v64 + 80) = 1091567616;
            goto LABEL_363;
          }
          v65 = Win32AllocPoolWithQuotaZInit(0x60uLL);
          v12 = v65;
          if ( !v65 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v65 + 20) = 1LL;
          v66 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
        }
        else
        {
          v68 = Win32AllocPoolWithQuotaZInit(0x80uLL);
          v12 = v68;
          if ( !v68 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v68 + 20) = 1LL;
          v66 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
        }
LABEL_113:
        *(_QWORD *)v12 = v66;
        *(_DWORD *)(v12 + 16) |= 0x20u;
        goto LABEL_363;
      }
      v70 = (DirectComposition::CCursorVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x180uLL);
      if ( !v70 )
        return (unsigned int)-1073741801;
      v71 = DirectComposition::CCursorVisualMarshaler::CCursorVisualMarshaler(v70);
    }
LABEL_122:
    v12 = v71;
    goto LABEL_363;
  }
  if ( a2 == 39 )
  {
    v58 = (void *)Win32AllocPoolWithQuotaZInit(0x40uLL);
    v12 = (__int64)v58;
    if ( v58 )
    {
      memset(v58, 0, 0x40uLL);
      v13 = &DirectComposition::CContainerShapeMarshaler::`vftable';
      goto LABEL_17;
    }
    return (unsigned int)-1073741801;
  }
  if ( a2 > 0x15 )
  {
    if ( a2 > 0x1F )
    {
      v47 = a2 - 32;
      if ( !v47 )
      {
        v57 = Win32AllocPoolWithQuotaZInit(0x50uLL);
        v12 = v57;
        if ( v57 )
        {
          *(_QWORD *)(v57 + 20) = 1LL;
          v13 = &DirectComposition::CCompositionLightMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v48 = v47 - 1;
      if ( !v48 )
      {
        v56 = (void *)Win32AllocPoolWithQuotaZInit(0x90uLL);
        v12 = (__int64)v56;
        if ( v56 )
        {
          memset(v56, 0, 0x90uLL);
          v13 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v49 = v48 - 2;
      if ( !v49 )
      {
        v55 = Win32AllocPoolWithQuotaZInit(0x60uLL);
        v12 = v55;
        if ( v55 )
        {
          *(_QWORD *)(v55 + 20) = 1LL;
          v13 = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v50 = v49 - 1;
      if ( !v50 )
      {
        v54 = (void *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
        v12 = (__int64)v54;
        if ( v54 )
        {
          memset(v54, 0, 0xB8uLL);
          v13 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        v53 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
        v12 = (__int64)v53;
        if ( v53 )
        {
          memset(v53, 0, 0x38uLL);
          v13 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      if ( v51 == 1 )
      {
        v52 = (void *)Win32AllocPoolWithQuotaZInit(0x90uLL);
        v12 = (__int64)v52;
        if ( v52 )
        {
          memset(v52, 0, 0x90uLL);
          v13 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      if ( a2 == 31 )
      {
        v46 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
        v12 = (__int64)v46;
        if ( v46 )
        {
          memset(v46, 0, 0x78uLL);
          v13 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v35 = a2 - 25;
      if ( !v35 )
      {
        v45 = Win32AllocPoolWithQuotaZInit(0x58uLL);
        v12 = v45;
        if ( v45 )
        {
          *(_QWORD *)(v45 + 20) = 1LL;
          v13 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        v44 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
        v12 = (__int64)v44;
        if ( v44 )
        {
          memset(v44, 0, 0x78uLL);
          v13 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        v43 = (void *)Win32AllocPoolWithQuotaZInit(0xC8uLL);
        v12 = (__int64)v43;
        if ( v43 )
        {
          memset(v43, 0, 0xC8uLL);
          v13 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        v42 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v12 = (__int64)v42;
        if ( v42 )
        {
          memset(v42, 0, 0x68uLL);
          *(_QWORD *)(v12 + 20) = 1LL;
          v13 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
          *(_QWORD *)(v12 + 40) = 0LL;
          *(_BYTE *)(v12 + 48) = 0;
          *(_DWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 64) = 0LL;
          *(_QWORD *)(v12 + 72) = 0LL;
          *(_QWORD *)(v12 + 80) = 0LL;
          *(_DWORD *)(v12 + 88) = 0;
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        v41 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v12 = (__int64)v41;
        if ( v41 )
        {
          memset(v41, 0, 0x68uLL);
          v13 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      if ( v39 == 1 )
      {
        v40 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v40;
        if ( v40 )
        {
          *(_QWORD *)(v40 + 20) = 1LL;
          v13 = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 21 )
  {
    v34 = (void *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
    v12 = (__int64)v34;
    if ( v34 )
    {
      memset(v34, 0, 0xB8uLL);
      *(_QWORD *)(v12 + 20) = 1LL;
      v13 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
      *(_QWORD *)(v12 + 40) = 0LL;
      *(_BYTE *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      *(_QWORD *)(v12 + 64) = 0LL;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      *(_DWORD *)(v12 + 88) = 0;
      goto LABEL_18;
    }
    return (unsigned int)-1073741801;
  }
  if ( a2 > 0xC )
  {
    v23 = a2 - 13;
    if ( !v23 )
    {
      v33 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
      v12 = (__int64)v33;
      if ( v33 )
      {
        memset(v33, 0, 0x70uLL);
        *(_QWORD *)(v12 + 20) = 1LL;
        v13 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_BYTE *)(v12 + 48) = 0;
        *(_DWORD *)(v12 + 56) = 0;
        *(_QWORD *)(v12 + 64) = 0LL;
        *(_QWORD *)(v12 + 72) = 0LL;
        *(_QWORD *)(v12 + 80) = 0LL;
        *(_DWORD *)(v12 + 88) = 0;
        goto LABEL_18;
      }
      return (unsigned int)-1073741801;
    }
    v24 = v23 - 2;
    if ( !v24 )
    {
      v32 = (void *)Win32AllocPoolWithQuotaZInit(0x58uLL);
      v12 = (__int64)v32;
      if ( v32 )
      {
        memset(v32, 0, 0x58uLL);
        v13 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
        goto LABEL_17;
      }
      return (unsigned int)-1073741801;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
        v30 = (void *)Win32AllocPoolWithQuotaZInit(0x70uLL);
        v12 = (__int64)v30;
        if ( v30 )
        {
          memset(v30, 0, 0x70uLL);
          v13 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v27 = v26 - 2;
      if ( !v27 )
      {
        v29 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v12 = v29;
        if ( v29 )
        {
          *(_QWORD *)(v29 + 20) = 1LL;
          v13 = &DirectComposition::CColorBrushMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
      if ( v27 == 1 )
      {
        v28 = (void *)Win32AllocPoolWithQuotaZInit(0x40uLL);
        v12 = (__int64)v28;
        if ( v28 )
        {
          memset(v28, 0, 0x40uLL);
          v13 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      return (unsigned int)-1073741811;
    }
    v31 = (void *)Win32AllocPoolWithQuotaZInit(0x48uLL);
    v12 = (__int64)v31;
    if ( !v31 )
      return (unsigned int)-1073741801;
    memset(v31, 0, 0x48uLL);
    *(_QWORD *)(v12 + 20) = 1LL;
    *(_QWORD *)v12 = &DirectComposition::CCaptureControllerMarshaler::`vftable';
    *(_WORD *)(v12 + 56) = 257;
  }
  else
  {
    if ( a2 == 12 )
    {
      v22 = (void *)Win32AllocPoolWithQuotaZInit(0x68uLL);
      v12 = (__int64)v22;
      if ( v22 )
      {
        memset(v22, 0, 0x68uLL);
        *(_QWORD *)(v12 + 20) = 1LL;
        v13 = &DirectComposition::CBlendEffectMarshaler::`vftable';
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_BYTE *)(v12 + 48) = 0;
        *(_DWORD *)(v12 + 56) = 0;
        *(_QWORD *)(v12 + 64) = 0LL;
        *(_QWORD *)(v12 + 72) = 0LL;
        *(_QWORD *)(v12 + 80) = 0LL;
        *(_DWORD *)(v12 + 88) = 0;
        goto LABEL_18;
      }
      return (unsigned int)-1073741801;
    }
    v6 = a2 - 1;
    if ( !v6 )
    {
      v21 = (void *)Win32AllocPoolWithQuotaZInit(0x88uLL);
      v12 = (__int64)v21;
      if ( v21 )
      {
        memset(v21, 0, 0x88uLL);
        *(_QWORD *)(v12 + 20) = 1LL;
        v13 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_BYTE *)(v12 + 48) = 0;
        *(_DWORD *)(v12 + 56) = 0;
        *(_QWORD *)(v12 + 64) = 0LL;
        *(_QWORD *)(v12 + 72) = 0LL;
        *(_QWORD *)(v12 + 80) = 0LL;
        *(_DWORD *)(v12 + 88) = 0;
        goto LABEL_18;
      }
      return (unsigned int)-1073741801;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( !v9 )
        {
          v15 = (void *)Win32AllocPoolWithQuotaZInit(0x30uLL);
          v12 = (__int64)v15;
          if ( v15 )
          {
            memset(v15, 0, 0x30uLL);
            v13 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
        v10 = v9 - 1;
        if ( !v10 )
        {
          v14 = (void *)Win32AllocPoolWithQuotaZInit(0x78uLL);
          v12 = (__int64)v14;
          if ( v14 )
          {
            memset(v14, 0, 0x78uLL);
            *(_QWORD *)(v12 + 20) = 1LL;
            v13 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
            *(_QWORD *)(v12 + 40) = 0LL;
            *(_BYTE *)(v12 + 48) = 0;
            *(_DWORD *)(v12 + 56) = 0;
            *(_QWORD *)(v12 + 64) = 0LL;
            *(_QWORD *)(v12 + 72) = 0LL;
            *(_QWORD *)(v12 + 80) = 0LL;
            *(_DWORD *)(v12 + 88) = 0;
            goto LABEL_18;
          }
          return (unsigned int)-1073741801;
        }
        if ( v10 == 3 )
        {
          v11 = (void *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v12 = (__int64)v11;
          if ( v11 )
          {
            memset(v11, 0, 0x38uLL);
            v13 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
LABEL_17:
            *(_QWORD *)(v12 + 20) = 1LL;
LABEL_18:
            *(_QWORD *)v12 = v13;
            goto LABEL_363;
          }
          return (unsigned int)-1073741801;
        }
        return (unsigned int)-1073741811;
      }
      v16 = Win32AllocPoolWithQuotaZInit(0xF8uLL);
      v12 = v16;
      if ( !v16 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v16 + 20) = 1LL;
      *(_QWORD *)v16 = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
      *(_BYTE *)(v16 + 48) = 1;
      *(_QWORD *)(v16 + 72) = 12LL;
      *(_BYTE *)(v16 + 96) = 1;
      *(_QWORD *)(v16 + 120) = 12LL;
      *(_BYTE *)(v16 + 144) = 1;
      *(_QWORD *)(v16 + 168) = 16LL;
      *(_BYTE *)(v16 + 192) = 1;
      *(_QWORD *)(v16 + 216) = 8LL;
      *(_BYTE *)(v16 + 240) &= 0xFCu;
      *(_QWORD *)(v16 + 232) = 0LL;
      *(_DWORD *)(v16 + 244) = 1065353216;
    }
    else
    {
      v17 = (char *)Win32AllocPoolWithQuotaZInit(0x100uLL);
      v5 = v17;
      if ( v17 )
      {
        memset(v17, 0, 0x100uLL);
        *(_QWORD *)(v5 + 36) = 1LL;
        *((_QWORD *)v5 + 7) = 0LL;
        v5[64] = 0;
        *(_QWORD *)v5 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
        *((_QWORD *)v5 + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
      }
      else
      {
        v5 = 0LL;
      }
      if ( v5 )
      {
        v18 = (_QWORD *)((char *)this + 336);
        v19 = *((_QWORD *)this + 42);
        v20 = v5 + 128;
        if ( *(DirectComposition::CApplicationChannel **)(v19 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
          __fastfail(3u);
        *v20 = v19;
        *((_QWORD *)v5 + 17) = v18;
        *(_QWORD *)(v19 + 8) = v20;
        *v18 = v20;
      }
      v12 = (unsigned __int64)(v5 + 16) & -(__int64)(v5 != 0LL);
    }
  }
LABEL_363:
  if ( !v12 )
    return (unsigned int)-1073741801;
  v203 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
           this,
           (struct DirectComposition::CResourceMarshaler *)v12);
  v211 = v12;
  v212 = *(_QWORD *)v12;
  if ( v203 < 0 )
  {
LABEL_372:
    (*(void (__fastcall **)(__int64, __int64))(v212 + 104))(v211, 1LL);
    return (unsigned int)v203;
  }
  v203 = (*(__int64 (__fastcall **)(__int64, char *))(v212 + 8))(v12, (char *)this + 472);
  if ( v203 < 0
    || (v203 = DirectComposition::CApplicationChannel::RegisterResource(
                 this,
                 (struct DirectComposition::CResourceMarshaler *)v12),
        v203 < 0) )
  {
    v212 = *(_QWORD *)v12;
    v211 = v12;
    goto LABEL_372;
  }
  if ( v5 )
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      this,
      *((struct DirectComposition::CAnimationTimeList **)v5 + 10));
  *v3 = (struct DirectComposition::CResourceMarshaler *)v12;
  return (unsigned int)v203;
}
