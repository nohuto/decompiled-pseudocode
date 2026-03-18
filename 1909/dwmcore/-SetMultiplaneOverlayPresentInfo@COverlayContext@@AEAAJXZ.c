/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18005A9E0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180052034 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memcmp_0 @ 0x1800F01FF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?DbgSaveOverlayPlaneNeedsPresent@COverlayContext@@AEAAXI_N@Z @ 0x180184098 (-DbgSaveOverlayPlaneNeedsPresent@COverlayContext@@AEAAXI_N@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180184C30 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180185D78 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this)
{
  unsigned int v2; // esi
  __int64 v3; // r13
  unsigned int v4; // r12d
  _DWORD *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r14
  unsigned int v8; // ecx
  _QWORD *v9; // r15
  unsigned int v10; // ecx
  unsigned int j; // r8d
  __int64 v12; // r9
  char v13; // al
  unsigned int v14; // ecx
  SIZE_T v15; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  __int64 v18; // r8
  unsigned int v19; // eax
  unsigned int *v20; // rcx
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  __int128 v24; // xmm0
  enum DXGI_COLOR_SPACE_TYPE v25; // r14d
  float v26; // xmm0_4
  int v27; // eax
  void *v28; // r10
  unsigned int v29; // r13d
  bool v30; // r13
  __int64 v31; // r15
  int v32; // r12d
  __int64 v33; // r14
  char *v34; // rdx
  unsigned int v35; // r14d
  int v36; // r15d
  int v37; // eax
  unsigned int v38; // ecx
  void *v39; // r15
  char *v40; // rbp
  HANDLE v41; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  _QWORD *v46; // rcx
  __int128 *v47; // rdx
  __int128 v48; // xmm0
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  int v58; // r8d
  int v59; // eax
  unsigned int v60; // r9d
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  __int128 v65; // xmm0
  __int64 v66; // r15
  __int64 v67; // rcx
  __int64 v68; // rcx
  bool v69; // al
  __int64 v70; // rcx
  char v71; // al
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // eax
  bool v76; // cf
  __int64 v77; // rcx
  bool v78; // r8
  int v79; // eax
  unsigned int v80; // ecx
  int v81; // ecx
  int SingleDXGIResourceAndSubResourceIndex; // eax
  unsigned int v83; // ecx
  __int64 v84; // rax
  unsigned int v85; // r11d
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  int v90; // edx
  unsigned int v91; // r8d
  char v92; // r9
  unsigned int v93; // ecx
  _DWORD *v94; // rax
  unsigned int v95; // ecx
  _DWORD *v96; // rax
  __int64 v97; // rcx
  bool v98; // al
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // xmm1_8
  __int64 v102; // r14
  __int64 v103; // rax
  unsigned __int64 v104; // r8
  char *v105; // rcx
  __int128 *v106; // rdx
  __int128 v107; // xmm0
  __int64 v108; // rcx
  _QWORD *v109; // rdi
  __int64 v110; // rsi
  bool v111; // [rsp+40h] [rbp-A8h]
  char v112; // [rsp+41h] [rbp-A7h]
  unsigned int v113; // [rsp+44h] [rbp-A4h]
  unsigned int v114; // [rsp+44h] [rbp-A4h]
  unsigned int v115; // [rsp+44h] [rbp-A4h]
  int v116; // [rsp+48h] [rbp-A0h]
  void *v117; // [rsp+50h] [rbp-98h]
  unsigned __int64 v118; // [rsp+58h] [rbp-90h]
  bool v119; // [rsp+60h] [rbp-88h]
  unsigned int v120; // [rsp+64h] [rbp-84h]
  unsigned int i; // [rsp+68h] [rbp-80h]
  int v122; // [rsp+68h] [rbp-80h]
  __int64 v123; // [rsp+68h] [rbp-80h]
  __int64 v124; // [rsp+70h] [rbp-78h]
  __int64 v125; // [rsp+70h] [rbp-78h]
  int v126; // [rsp+78h] [rbp-70h]
  _DWORD *lpMem; // [rsp+80h] [rbp-68h]
  int v128; // [rsp+88h] [rbp-60h]
  __int64 v129; // [rsp+90h] [rbp-58h]
  __int128 Buf1; // [rsp+98h] [rbp-50h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-40h]
  int v132; // [rsp+B0h] [rbp-38h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 0;
  v3 = (__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8;
  v4 = 0;
  lpMem = 0LL;
  v5 = 0LL;
  v117 = 0LL;
  v126 = v3;
  v6 = 0;
  LODWORD(v118) = 0;
  v120 = 0;
  v7 = (*((_QWORD *)this + 1570) - *((_QWORD *)this + 1569)) / 120LL;
  v128 = v7;
  v8 = (*((_DWORD *)this + 5398) + 1) % 6u;
  *((_DWORD *)this + 5398) = v8;
  v9 = (_QWORD *)((char *)this + 1352 * (int)v8 + 13480);
  memset_0(v9, 0, 0x548uLL);
  *v9 = *(_QWORD *)(*((_QWORD *)this + 1682) + 384LL);
  v10 = 0;
  for ( i = 0; v10 < (unsigned int)((__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8); i = v10 )
  {
    if ( v10 >= 2 )
      break;
    v43 = 68LL * v10;
    v44 = 2LL;
    v45 = (unsigned __int64)v10 << 8;
    v46 = &v9[v43 + 1];
    v47 = (__int128 *)(v45 + *((_QWORD *)this + 1054));
    do
    {
      v46 += 16;
      v48 = *v47;
      v47 += 8;
      *((_OWORD *)v46 - 8) = v48;
      *((_OWORD *)v46 - 7) = *(v47 - 7);
      *((_OWORD *)v46 - 6) = *(v47 - 6);
      *((_OWORD *)v46 - 5) = *(v47 - 5);
      *((_OWORD *)v46 - 4) = *(v47 - 4);
      *((_OWORD *)v46 - 3) = *(v47 - 3);
      *((_OWORD *)v46 - 2) = *(v47 - 2);
      *((_OWORD *)v46 - 1) = *(v47 - 1);
      --v44;
    }
    while ( v44 );
    v9[v43 + 65] = &v9[v43 + 1];
    v49 = *(_QWORD *)(v45 + *((_QWORD *)this + 1054) + 24);
    LODWORD(v9[v43 + 67]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 232LL))(v49);
    ++*((_DWORD *)v9 + 274);
    v10 = i + 1;
  }
  for ( j = 0; ; ++j )
  {
    v12 = *((_QWORD *)this + 1569);
    if ( j >= (unsigned int)((*((_QWORD *)this + 1570) - v12) / 120) || j >= 2 )
      break;
    v50 = 15LL * j;
    *(_OWORD *)&v9[v50 + 138] = *(_OWORD *)(v12 + v50 * 8);
    *(_OWORD *)&v9[v50 + 140] = *(_OWORD *)(v12 + v50 * 8 + 16);
    *(_OWORD *)&v9[v50 + 142] = *(_OWORD *)(v12 + v50 * 8 + 32);
    *(_OWORD *)&v9[v50 + 144] = *(_OWORD *)(v12 + v50 * 8 + 48);
    *(_OWORD *)&v9[v50 + 146] = *(_OWORD *)(v12 + v50 * 8 + 64);
    *(_OWORD *)&v9[v50 + 148] = *(_OWORD *)(v12 + v50 * 8 + 80);
    *(_OWORD *)&v9[v50 + 150] = *(_OWORD *)(v12 + v50 * 8 + 96);
    v9[v50 + 152] = *(_QWORD *)(v12 + v50 * 8 + 112);
    ++*((_DWORD *)v9 + 336);
  }
  *((_BYTE *)v9 + 1348) = *((_BYTE *)this + 13434);
  if ( (_DWORD)v3 || *((_BYTE *)this + 13439) )
  {
    v51 = 1;
    if ( *((_DWORD *)this + 3355) > 1u )
      v51 = *((_DWORD *)this + 3355);
    v52 = 1;
    if ( (unsigned int)v7 > 1 )
      v52 = v7;
    v53 = *((_DWORD *)this + 3354) + v51;
    v54 = v3 + v52;
    if ( v54 <= v53 )
      v54 = v53;
    v118 = v54;
    v5 = operator new(saturated_mul(v54, 0x88uLL));
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, -2147024882, 0xA9Du, 0LL);
      v29 = v118;
      v39 = 0LL;
      goto LABEL_36;
    }
    lpMem = operator new(saturated_mul(v118, 4uLL));
    if ( !lpMem )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, -2147024882, 0xAA0u, 0LL);
      v29 = v118;
      v39 = 0LL;
      goto LABEL_36;
    }
    v117 = operator new(saturated_mul(v118, 8uLL));
    v39 = v117;
    if ( !v117 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, -2147024882, 0xAA3u, 0LL);
      v29 = v118;
      goto LABEL_36;
    }
    memset_0(v5, 0, 136 * v118);
    memset_0(v117, 0, 8 * v118);
    if ( (_DWORD)v3
      && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*((COverlayContext::OverlayPlaneInfo **)this + 1054)) )
    {
      v58 = v3;
      v59 = 0;
    }
    else
    {
      v59 = 1;
      v58 = 0;
      if ( (unsigned int)v7 > 1 )
        v59 = v7;
    }
    v116 = v59;
    if ( (_DWORD)v7 )
    {
      v60 = 0;
      v61 = 0LL;
      do
      {
        v61 += 120LL;
        v62 = 34LL * v6;
        v63 = v60 + v58;
        ++v6;
        ++v60;
        v5[v62] = v63;
        v5[v62 + 1] = 1;
        v5[v62 + 4] = 0;
        v64 = *((_QWORD *)this + 1569);
        *(_OWORD *)&v5[v62 + 6] = *(_OWORD *)(v64 + v61 - 120);
        *(_OWORD *)&v5[v62 + 10] = *(_OWORD *)(v64 + v61 - 104);
        *(_OWORD *)&v5[v62 + 14] = *(_OWORD *)(v64 + v61 - 88);
        *(_OWORD *)&v5[v62 + 18] = *(_OWORD *)(v64 + v61 - 72);
        *(_OWORD *)&v5[v62 + 22] = *(_OWORD *)(v64 + v61 - 56);
        *(_OWORD *)&v5[v62 + 26] = *(_OWORD *)(v64 + v61 - 40);
        v65 = *(_OWORD *)(v64 + v61 - 24);
        *(_QWORD *)&v5[v62 + 2] = 0LL;
        *(_OWORD *)&v5[v62 + 30] = v65;
      }
      while ( v60 < (unsigned int)v7 );
      v59 = v116;
    }
    else
    {
      *v5 = v58;
      v6 = 1;
      v5[1] = 0;
      *((_QWORD *)v5 + 1) = 0LL;
      v5[4] = 0;
    }
    if ( (_DWORD)v3 )
    {
      v66 = 0LL;
      v122 = -v59;
      do
      {
        v67 = *(_QWORD *)(v66 + *((_QWORD *)this + 1054) + 24);
        v124 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 40LL))(v67);
        v112 = 0;
        v111 = 0;
        v68 = *(_QWORD *)(v66 + *((_QWORD *)this + 1054) + 24);
        v69 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v68 + 232LL))(v68) >= 3;
        v119 = v69;
        v114 = *(_DWORD *)(v124 + 276);
        v70 = *((_QWORD *)this + 1054);
        if ( (!*(_BYTE *)(v66 + v70 + 224) || v69 && *(_BYTE *)(v66 + v70 + 225))
          && *(_DWORD *)(v66 + v70 + 228) == v116 )
        {
          v71 = 0;
        }
        else
        {
          v71 = 1;
          v112 = 1;
        }
        if ( *((_BYTE *)this + 13437)
          || v71
          || *(_BYTE *)(v66 + v70 + 236)
          || (v72 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v66 + v70 + 24) + 224LL))(*(_QWORD *)(v66 + v70 + 24)),
              v73 = *((_QWORD *)this + 1054),
              *(_DWORD *)(v73 + v66 + 240) != v72)
          && !v119 )
        {
          *((_BYTE *)this + 13433) = 1;
          v73 = *((_QWORD *)this + 1054);
          v111 = 1;
        }
        *(_DWORD *)(v73 + v66 + 204) = v114;
        *(_DWORD *)(v66 + *((_QWORD *)this + 1054) + 228) = v116;
        *(_BYTE *)(v66 + *((_QWORD *)this + 1054) + 224) = 0;
        *(_BYTE *)(v66 + *((_QWORD *)this + 1054) + 236) = v111;
        v74 = *(_QWORD *)(v66 + *((_QWORD *)this + 1054) + 24);
        v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 224LL))(v74);
        v76 = CCommonRegistryData::m_dwOverlayTestMode < 3;
        *(_DWORD *)(v66 + *((_QWORD *)this + 1054) + 240) = v75;
        if ( v76 )
        {
          v78 = 0;
          if ( !v112 )
          {
            v77 = *(_QWORD *)(v66 + *((_QWORD *)this + 1054) + 24);
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v77 + 232LL))(v77) != -1
              && !*((_BYTE *)this + 13437) )
            {
              v78 = 1;
            }
          }
          v115 = v122 + v116;
          v79 = COverlayContext::EnsureIndependentFlipState(
                  this,
                  (struct COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 1054)
                                                             + ((unsigned __int64)(unsigned int)(v122 + v116) << 8)),
                  v78,
                  0);
          v4 = v79;
          if ( v79 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0xB1Bu, 0LL);
            goto LABEL_34;
          }
          v81 = v116;
        }
        else
        {
          v81 = v116;
          v115 = v116 + v122;
        }
        if ( v111 )
        {
          v129 = 34LL * v6;
          v5[v129] = v81;
          v5[v129 + 1] = 1;
          SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                    *(struct CCompositionSurfaceInfo **)(v66
                                                                                       + *((_QWORD *)this + 1054)
                                                                                       + 24),
                                                    (struct IDXGIResource **)&v5[v129 + 2],
                                                    &v5[v129 + 4]);
          v4 = SingleDXGIResourceAndSubResourceIndex;
          if ( SingleDXGIResourceAndSubResourceIndex < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0xB28u, 0LL);
            goto LABEL_34;
          }
          v84 = *((_QWORD *)this + 1054);
          *(_OWORD *)&v5[v129 + 6] = *(_OWORD *)(v66 + v84 + 40);
          *(_OWORD *)&v5[v129 + 10] = *(_OWORD *)(v66 + v84 + 56);
          *(_OWORD *)&v5[v129 + 14] = *(_OWORD *)(v66 + v84 + 72);
          *(_OWORD *)&v5[v129 + 18] = *(_OWORD *)(v66 + v84 + 88);
          *(_OWORD *)&v5[v129 + 22] = *(_OWORD *)(v66 + v84 + 104);
          *(_OWORD *)&v5[v129 + 26] = *(_OWORD *)(v66 + v84 + 120);
          *(_OWORD *)&v5[v129 + 30] = *(_OWORD *)(v66 + v84 + 136);
          *((_QWORD *)v117 + v6) = v124;
          COverlayContext::DbgSaveOverlayPlaneNeedsPresent(this, v115, v111);
          v81 = v116;
          ++v6;
          v85 = v120;
        }
        else
        {
          v28 = v117;
          lpMem[v120] = v81;
          v85 = ++v120;
        }
        v116 = v81 + 1;
        v66 += 256LL;
      }
      while ( v81 + 1 + v122 < (unsigned int)v3 );
      v86 = 0LL;
      v87 = (unsigned int)v3;
      do
      {
        v88 = *((_QWORD *)this + 1054);
        if ( *(_BYTE *)(v86 + v88 + 236) && !*((_BYTE *)this + 13434) )
          *(_BYTE *)(v86 + v88 + 236) = 0;
        v86 += 256LL;
        --v87;
      }
      while ( v87 );
    }
    else
    {
      v28 = v117;
      v85 = 0;
    }
    v89 = 1;
    v90 = 0;
    if ( (unsigned int)v7 > 1 )
      v89 = v7;
    v91 = v89 + v3;
    v29 = v118;
    if ( v91 < (unsigned int)v118 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v92 = 0;
          v93 = 0;
          if ( v6 )
          {
            v94 = v5;
            while ( *v94 != v90 )
            {
              ++v93;
              v94 += 34;
              if ( v93 >= v6 )
                goto LABEL_125;
            }
            ++v90;
            v92 = 1;
          }
LABEL_125:
          v95 = 0;
          if ( !v85 )
            break;
          v96 = lpMem;
          while ( *v96 != v90 )
          {
            ++v95;
            ++v96;
            if ( v95 >= v85 )
              goto LABEL_129;
          }
          ++v90;
        }
LABEL_129:
        if ( !v92 )
        {
          ++v91;
          v97 = 34LL * v6++;
          v5[v97] = v90;
          v5[v97 + 1] = 0;
          *((_BYTE *)this + 13433) = 1;
          if ( v91 >= (unsigned int)v118 )
            break;
        }
      }
      v28 = v117;
    }
    v98 = v6 <= 1 && !*((_BYTE *)this + 13436) && !(_DWORD)v7;
    *((_BYTE *)this + 13435) = v98;
    v13 = *((_BYTE *)this + 13434);
    if ( !v13 )
      *((_BYTE *)this + 13436) = (_DWORD)v7 != 0;
    *((_BYTE *)this + 13437) = 0;
  }
  else
  {
    v13 = *((_BYTE *)this + 13434);
    if ( v13 )
    {
      v29 = 0;
      v28 = 0LL;
      *((_BYTE *)this + 13435) = 1;
    }
    else
    {
      v14 = *((_DWORD *)this + 3355);
      if ( v14 <= 1 )
        v14 = 1;
      v6 = v14 + *((_DWORD *)this + 3354);
      v15 = 136LL * v6;
      if ( !is_mul_ok(v6, 0x88uLL) )
        v15 = -1LL;
      ProcessHeap = GetProcessHeap();
      v17 = HeapAlloc(ProcessHeap, 0, v15);
      v5 = v17;
      if ( !v17 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr, v18);
      memset_0(v17, 0, 136LL * v6);
      v19 = 0;
      if ( v6 )
      {
        v20 = v5;
        do
        {
          *v20 = v19;
          v20 += 34;
          ++v19;
        }
        while ( v19 < v6 );
      }
      *(_QWORD *)(v5 + 7) = 0LL;
      v5[1] = 1;
      v21 = (float)(*((float *)this + 12) - *((float *)this + 10)) + 6291456.25;
      v5[9] = (int)(LODWORD(v21) << 10) >> 11;
      v22 = *((float *)this + 13) - *((float *)this + 11);
      *(_QWORD *)(v5 + 19) = 1LL;
      v5[24] = 0;
      v23 = v22 + 6291456.25;
      v5[10] = (int)(LODWORD(v23) << 10) >> 11;
      v24 = *(_OWORD *)(v5 + 7);
      *(_OWORD *)(v5 + 11) = v24;
      *(_OWORD *)(v5 + 15) = v24;
      v5[25] = *((_DWORD *)this + 25);
      v5[26] = 0;
      v5[30] = 2;
      v25 = *((_DWORD *)this + 25);
      v26 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2));
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm) < 0.0000011920929
        || IsDXGIColorSpaceHDR(v25) )
      {
        v27 = 0;
      }
      else
      {
        v27 = (int)(float)(v26 * 80.0);
      }
      v5[32] = v27;
      if ( v6 > 1 || !*((_BYTE *)this + 13436) )
        *((_BYTE *)this + 13433) = 1;
      v13 = *((_BYTE *)this + 13434);
      v28 = 0LL;
      v29 = 0;
      v128 = 1;
      *(_WORD *)((char *)this + 13435) = 256;
    }
  }
  if ( !*((_BYTE *)this + 13435) && !v13 )
  {
    v30 = v6 != 0;
    v31 = 0LL;
    v32 = 0;
    v33 = (__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8;
    v34 = 0LL;
    Buf1 = 0uLL;
    v131 = 0LL;
    v132 = 0;
    v113 = 0;
    if ( (_DWORD)v33 )
    {
      v99 = 0LL;
      v123 = 0LL;
      do
      {
        v125 = *(_QWORD *)(v99 + *((_QWORD *)this + 1054) + 24);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v125 + 240LL))(v125, &Buf1) )
        {
          if ( v31 && v31 != v125 )
          {
            LODWORD(v31) = 0;
            v32 = 0;
            Buf1 = 0uLL;
            v131 = 0LL;
            v132 = 0;
            goto LABEL_149;
          }
          v32 = 1;
          v31 = v125;
        }
        v99 = v123 + 256;
        ++v113;
        v123 += 256LL;
      }
      while ( v113 < (unsigned int)v33 );
      LODWORD(v31) = v132;
LABEL_149:
      v28 = v117;
      v34 = 0LL;
    }
    v35 = *((_DWORD *)this + 28);
    if ( v32 != v35 || v32 == 1 && (v100 = memcmp_0(&Buf1, (char *)this + 116, 0x1CuLL), v28 = v117, v34 = 0LL, v100) )
    {
      v101 = v131;
      v35 = v32;
      *((_DWORD *)this + 28) = v32;
      *(_OWORD *)((char *)this + 116) = Buf1;
      *(_QWORD *)((char *)this + 132) = v101;
      *((_DWORD *)this + 35) = v31;
      if ( v32 == 1 )
        v34 = (char *)this + 116;
    }
    if ( *((int *)this + 3356) < 2200 || *((_BYTE *)this + 13431) )
    {
      v36 = v126;
      if ( v6 && v5[1] == 1 && !*((_QWORD *)v5 + 1) && !v126 && !*((_BYTE *)this + 13439) )
        v30 = 0;
    }
    else
    {
      v36 = v126;
    }
    v37 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD, char *, unsigned int, _DWORD *, void *))(**((_QWORD **)this + 2)
                                                                                                  + 464LL))(
            *((_QWORD *)this + 2),
            v30,
            v35,
            v34,
            v6,
            v5,
            v28);
    v4 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xBDAu, 0LL);
    }
    else
    {
      *((_DWORD *)this + 3355) = v128;
      *((_BYTE *)this + 13440) = *((_BYTE *)this + 13439);
      *((_DWORD *)this + 3354) = v36;
    }
LABEL_34:
    v29 = v118;
  }
  v39 = v117;
LABEL_36:
  v40 = (char *)this + 1352 * *((int *)this + 5398);
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8) )
  {
    do
    {
      if ( v2 >= 2 )
        break;
      v102 = 544LL * v2;
      v103 = 2LL;
      v104 = (unsigned __int64)v2 << 8;
      v105 = &v40[v102 + 13744];
      v106 = (__int128 *)(v104 + *((_QWORD *)this + 1054));
      do
      {
        v105 += 128;
        v107 = *v106;
        v106 += 8;
        *((_OWORD *)v105 - 8) = v107;
        *((_OWORD *)v105 - 7) = *(v106 - 7);
        *((_OWORD *)v105 - 6) = *(v106 - 6);
        *((_OWORD *)v105 - 5) = *(v106 - 5);
        *((_OWORD *)v105 - 4) = *(v106 - 4);
        *((_OWORD *)v105 - 3) = *(v106 - 3);
        *((_OWORD *)v105 - 2) = *(v106 - 2);
        *((_OWORD *)v105 - 1) = *(v106 - 1);
        --v103;
      }
      while ( v103 );
      *(_QWORD *)&v40[v102 + 14008] = &v40[v102 + 13744];
      v108 = *(_QWORD *)(v104 + *((_QWORD *)this + 1054) + 24);
      *(_DWORD *)&v40[v102 + 14020] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 232LL))(v108);
      ++v2;
    }
    while ( v2 < (unsigned int)((__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8) );
  }
  v40[14829] = *((_BYTE *)this + 13434);
  if ( v5 )
  {
    if ( v29 )
    {
      v109 = v5 + 2;
      v110 = v29;
      do
      {
        if ( *v109 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v109 + 16LL))(*v109);
        v109 += 17;
        --v110;
      }
      while ( v110 );
    }
    v41 = GetProcessHeap();
    HeapFree(v41, 0, v5);
  }
  if ( lpMem )
    operator delete(lpMem);
  if ( v39 )
    operator delete(v39);
  return v4;
}
