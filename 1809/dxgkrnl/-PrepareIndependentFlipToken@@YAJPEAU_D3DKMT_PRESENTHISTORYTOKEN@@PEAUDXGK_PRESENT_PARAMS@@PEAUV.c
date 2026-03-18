/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FBC8C
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0020C94 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C003D370 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0129D58 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C013E22C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C013E55C (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C013EB64 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C013EBDC (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C013EC38 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C01C31CC (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C01FEC20 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0226468 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCoun.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0249A20 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        struct DXGCONTEXT *a4,
        struct _PRESENT_REDIRECTED_PARAMS *a5)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v6; // rdi
  struct _D3DKMT_PRESENTHISTORYTOKEN *v7; // rsi
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // r15
  struct DXGPROCESS *Current; // rcx
  ADAPTER_RENDER *v13; // r12
  unsigned int v14; // r15d
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // ecx
  int v25; // ecx
  DXGADAPTER *v26; // rcx
  int v27; // eax
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  int *v29; // r8
  int v30; // eax
  int v31; // r15d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // edx
  __int64 v33; // rax
  char v34; // cl
  __int64 v35; // rdx
  UINT v36; // r12d
  _BYTE *PoolWithTag; // r9
  __int64 v38; // rcx
  UINT i; // r9d
  DXGADAPTER *v40; // rcx
  UINT *v41; // rcx
  char *pAllocationList; // r9
  int v43; // eax
  char v44; // si
  UINT v45; // edx
  ADAPTER_RENDER *v46; // rdi
  __int64 v47; // r8
  unsigned __int64 v48; // r10
  __int16 v49; // ax
  __int64 v50; // r15
  _QWORD *v51; // rdx
  __int64 v52; // r8
  __int64 (__fastcall *v53)(_QWORD, _QWORD, __int64, _QWORD); // rax
  __int64 v54; // rax
  _QWORD *v55; // rdx
  _QWORD *v56; // r8
  DXGADAPTER *v57; // rax
  UINT v58; // r9d
  _QWORD *v59; // r10
  __int64 v60; // rcx
  __int64 v61; // rax
  struct ADAPTER_DISPLAY *v62; // r8
  __int64 v63; // rcx
  UINT v64; // r8d
  __int64 v65; // rdx
  bool v66; // al
  __int64 v67; // r9
  _QWORD *v68; // rax
  DXGADAPTER *v69; // r12
  void *v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // rax
  unsigned __int8 PostCompositionStretching; // al
  _QWORD *v74; // rax
  bool v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rax
  __int128 v78; // xmm1
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  D3DDDI_HDR_METADATA_TYPE HDRMetaDataType; // ecx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // r15
  unsigned int *v88; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  _QWORD *v90; // rax
  unsigned __int64 v91; // r11
  __int64 v92; // rcx
  _QWORD *v93; // rax
  _QWORD *v94; // r8
  _QWORD *v95; // rdx
  __int64 v96; // r11
  __int64 v97; // r15
  __int64 v98; // rdx
  __int64 v99; // rax
  const struct DXGADAPTER *v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // r12
  __int64 v104; // rax
  unsigned int v105; // r15d
  _QWORD *v106; // rsi
  ADAPTER_RENDER *v107; // rdi
  unsigned int v108; // r12d
  int v109; // ecx
  _QWORD *v110; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v111; // rsi
  int v112; // [rsp+30h] [rbp-3D8h]
  int v113; // [rsp+30h] [rbp-3D8h]
  unsigned __int8 v114; // [rsp+80h] [rbp-388h]
  unsigned int v115; // [rsp+84h] [rbp-384h] BYREF
  struct ADAPTER_DISPLAY *v116; // [rsp+88h] [rbp-380h]
  DXGADAPTER *v117; // [rsp+90h] [rbp-378h]
  _QWORD *v118; // [rsp+98h] [rbp-370h] BYREF
  UINT v119; // [rsp+A0h] [rbp-368h]
  int v120; // [rsp+A4h] [rbp-364h]
  int v121; // [rsp+A8h] [rbp-360h] BYREF
  int v122; // [rsp+ACh] [rbp-35Ch]
  int v123; // [rsp+B0h] [rbp-358h] BYREF
  unsigned __int64 v124; // [rsp+B8h] [rbp-350h]
  unsigned int v125; // [rsp+C0h] [rbp-348h] BYREF
  unsigned int v126; // [rsp+C4h] [rbp-344h]
  __int64 v127; // [rsp+C8h] [rbp-340h]
  _QWORD *v128; // [rsp+D0h] [rbp-338h]
  __int64 v129; // [rsp+D8h] [rbp-330h]
  int v130; // [rsp+E0h] [rbp-328h] BYREF
  int v131; // [rsp+E4h] [rbp-324h] BYREF
  int v132; // [rsp+E8h] [rbp-320h] BYREF
  unsigned int v133; // [rsp+ECh] [rbp-31Ch]
  ADAPTER_RENDER *v134; // [rsp+F0h] [rbp-318h]
  _QWORD *v135; // [rsp+F8h] [rbp-310h]
  int v136; // [rsp+100h] [rbp-308h] BYREF
  __int64 v137; // [rsp+108h] [rbp-300h]
  __int64 v138; // [rsp+110h] [rbp-2F8h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v139; // [rsp+118h] [rbp-2F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v140; // [rsp+120h] [rbp-2E8h]
  __int64 v141; // [rsp+128h] [rbp-2E0h]
  __int64 v142; // [rsp+130h] [rbp-2D8h]
  struct CRefCountedBuffer *v143; // [rsp+138h] [rbp-2D0h] BYREF
  _BYTE v144[16]; // [rsp+140h] [rbp-2C8h] BYREF
  PVOID P; // [rsp+150h] [rbp-2B8h]
  _BYTE v146[32]; // [rsp+158h] [rbp-2B0h] BYREF
  UINT v147; // [rsp+178h] [rbp-290h]
  struct tagRECT v148; // [rsp+180h] [rbp-288h] BYREF
  char v149[4]; // [rsp+190h] [rbp-278h] BYREF
  char v150[4]; // [rsp+194h] [rbp-274h] BYREF
  char v151[4]; // [rsp+198h] [rbp-270h] BYREF
  char v152[4]; // [rsp+19Ch] [rbp-26Ch] BYREF
  struct DXGPROCESS *v153; // [rsp+1A0h] [rbp-268h]
  char v154[8]; // [rsp+1A8h] [rbp-260h] BYREF
  ADAPTER_RENDER *v155; // [rsp+1B0h] [rbp-258h]
  _BYTE *v156; // [rsp+1B8h] [rbp-250h]
  struct VIDSCH_SUBMIT_DATA_BASE *v157; // [rsp+1C0h] [rbp-248h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v158; // [rsp+1C8h] [rbp-240h]
  struct DXGK_PRESENT_PARAMS *v159; // [rsp+1D0h] [rbp-238h]
  struct DXGCONTEXT *v160; // [rsp+1D8h] [rbp-230h]
  char v161[8]; // [rsp+1E0h] [rbp-228h] BYREF
  char v162[8]; // [rsp+1E8h] [rbp-220h] BYREF
  char v163[8]; // [rsp+1F0h] [rbp-218h] BYREF
  char v164[8]; // [rsp+1F8h] [rbp-210h] BYREF
  __int64 v165; // [rsp+200h] [rbp-208h]
  __int64 v166; // [rsp+208h] [rbp-200h]
  __int64 v167; // [rsp+210h] [rbp-1F8h]
  __int64 v168; // [rsp+218h] [rbp-1F0h]
  __int64 v169; // [rsp+220h] [rbp-1E8h]
  _DXGKARG_PRESENT v170; // [rsp+230h] [rbp-1D8h] BYREF
  __int128 v171; // [rsp+2E0h] [rbp-128h] BYREF
  struct tagRECT v172; // [rsp+2F0h] [rbp-118h] BYREF
  _QWORD v173[6]; // [rsp+300h] [rbp-108h] BYREF
  PVOID v174; // [rsp+330h] [rbp-D8h] BYREF
  _BYTE v175[128]; // [rsp+338h] [rbp-D0h] BYREF
  int v176; // [rsp+3B8h] [rbp-50h]

  v6 = a3;
  v140 = a3;
  v124 = (unsigned __int64)a2;
  v7 = a1;
  v139 = a1;
  v158 = a1;
  v159 = a2;
  v157 = a3;
  v160 = a4;
  if ( a1->Model != D3DKMT_PM_REDIRECTED_FLIP )
    return 0LL;
  v9 = 0;
  if ( a4 )
  {
    if ( !a2 )
      return 0LL;
  }
  v10 = 0LL;
  if ( a4 )
  {
    v135 = (_QWORD *)*((_QWORD *)a4 + 2);
    v11 = *(_QWORD *)(v135[2] + 16LL);
  }
  else
  {
    v10 = *(_QWORD *)a5;
    v11 = *((_QWORD *)a5 + 2);
    v135 = (_QWORD *)*((_QWORD *)a5 + 3);
  }
  v141 = v11;
  v117 = (DXGADAPTER *)v11;
  if ( !a4 && !*(_BYTE *)(v11 + 2474) )
    return 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v153 = Current;
  v13 = *(ADAPTER_RENDER **)(v11 + 2528);
  v134 = v13;
  v155 = v13;
  v116 = *(struct ADAPTER_DISPLAY **)(v11 + 2520);
  v137 = v124 & -(__int64)(a4 != 0LL);
  if ( a4 )
    v14 = *(_DWORD *)((v124 & -(__int64)(a4 != 0LL)) + 0x14);
  else
    v14 = *(_DWORD *)(v10 + 1100);
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v118, v14);
  v15 = v118;
  if ( !v118 || *(_QWORD *)(*(_QWORD *)(v118[1] + 16LL) + 16LL) != *(_QWORD *)(v135[2] + 16LL) )
  {
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v118);
    return 0LL;
  }
  v16 = v118[5];
  if ( *((_QWORD *)v6 + 3) && v16 && (*(_DWORD *)(v16 + 4) & 1) != 0 )
    *((_QWORD *)v6 + 4) = *(_QWORD *)(*(_QWORD *)(v16 + 56) + 168LL);
  if ( a4 )
    v17 = *(_QWORD *)(v124 + 1496);
  else
    v17 = 0LL;
  v142 = v17;
  v138 = v17;
  v125 = (*(_DWORD *)(v15[6] + 4LL) >> 6) & 0xF;
  v130 = 0;
  v123 = 0;
  v131 = 0;
  v132 = 0;
  v115 = 0;
  v121 = 0;
  v129 = (__int64)v6 + (*((_BYTE *)v6 + 356) != 0 ? 0xC8 : 0) + 520;
  (*(void (__fastcall **)(_QWORD, unsigned int *, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, UINT64, __int64, int *, int *, unsigned int *, UINT64 *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 408LL))(
    *((_QWORD *)v13 + 66),
    &v125,
    &v7->Token.SurfaceComplete + 7,
    v7->CompositionBindingId,
    v129,
    &v130,
    &v123,
    &v115,
    &v7->Token.Flip.confirmationCookie,
    &v131,
    &v132,
    &v121,
    &v171,
    &v172);
  v18 = v125;
  v7->Token.Flip.VidPnSourceId = v125;
  *((_DWORD *)v6 + 31) = v18;
  RtlCopyLuid((PLUID)v6 + 20, &v7->Token.Flip.compSurfLuid);
  *((_QWORD *)v6 + 21) = v7->CompositionBindingId;
  v19 = *(_DWORD *)v6 & 0xFFFEFFFF;
  *(_DWORD *)v6 = v19;
  if ( a4 )
  {
    v20 = v137;
    v21 = (*(_DWORD *)(v137 + 88) ^ v19) & 4 ^ v19;
    *(_DWORD *)v6 = v21;
    v22 = (v21 ^ (4 * *(_DWORD *)(v20 + 88))) & 0x80000 ^ v21;
    *(_DWORD *)v6 = v22;
    v23 = (v22 ^ (4 * *(_DWORD *)(v20 + 88))) & 0x100000 ^ v22;
    *(_DWORD *)v6 = v23;
    v19 = v23 ^ (v23 ^ (4 * *(_DWORD *)(v20 + 88))) & 0x200000;
    *(_DWORD *)v6 = v19;
  }
  v24 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(v7->Token.Flip.Flags.Value >> 23)) & 8;
  *(_DWORD *)v6 = v24;
  v25 = ((unsigned __int8)v24 ^ (unsigned __int8)(v7->Token.Flip.Flags.Value >> 1)) & 0x10 ^ v24;
  *(_DWORD *)v6 = v25;
  *(_DWORD *)v6 = v25 ^ (v25 ^ (32 * v7->Token.Flip.Flags.Value)) & 0x10000000;
  v26 = v117;
  v7->Token.Flip.dxgContext = (UINT_PTR)v117;
  *((_DWORD *)v6 + 30) = v7->Token.Flip.PresentCount;
  *((_DWORD *)v6 + 48) = v7->Token.Flip.SwapChainIndex;
  *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ (v7->Token.Flip.Flags.Value << 6)) & 0x2000000;
  *((_DWORD *)v6 + 38) = v7->Token.Flip.CustomDuration;
  *((_DWORD *)v6 + 39) = v7->Token.Flip.CustomDurationFlipInterval;
  if ( a4 )
    v27 = *((_DWORD *)a4 + 97);
  else
    v27 = 1;
  *((_DWORD *)v6 + 36) = v27;
  if ( *((_BYTE *)v6 + 356) )
    *((_DWORD *)v6 + 150) = -1;
  if ( bTracingEnabled )
  {
    *((_QWORD *)v6 + 23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v13 + 68) + 8LL) + 336LL))(
                             *((_QWORD *)v13 + 69),
                             v14);
    v26 = v117;
  }
  FlipInterval = v7->Token.Flip.FlipInterval;
  *((_DWORD *)v6 + 33) = FlipInterval;
  v29 = (int *)((char *)v6 + 132);
  v136 = 1;
  if ( FlipInterval == D3DDDI_FLIPINTERVAL_IMMEDIATE
    && ((v7->Token.Flip.Flags.Value & 0x800000) == 0 || (*((_DWORD *)v26 + 471) & 0x40) == 0) )
  {
    v29 = &v136;
  }
  v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 512LL))(
          v135[82],
          v125,
          v29);
  *((_DWORD *)v6 + 32) = v30;
  if ( v30 != 5 && *((_DWORD *)v6 + 33) )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v71[3] = v7;
    v71[4] = v7->Token.Flip.FenceValue;
    v71[5] = v7->Token.Flip.PresentCount;
    v71[6] = *((int *)v6 + 32);
LABEL_112:
    WdLogEvent5_WdPresentTokenEvent(v71);
    goto LABEL_28;
  }
  if ( !v130 )
  {
    if ( v131 )
    {
      LOBYTE(v112) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 400LL))(
        *((_QWORD *)v13 + 66),
        (unsigned int)(1 << *((_DWORD *)v6 + 31)),
        &v7->Token.SurfaceComplete + 7,
        *((_QWORD *)v6 + 21),
        &v115,
        0,
        v112,
        v149,
        v161);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v116, *((_DWORD *)v6 + 31), v115, 0);
    }
    else if ( !v132 )
    {
      goto LABEL_28;
    }
    v7->Token.Flip.Flags.Value |= 0x1000000u;
    goto LABEL_28;
  }
  *((_QWORD *)v6 + 22) = v7->Token.Flip.confirmationCookie;
  v31 = 0;
  v122 = 0;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v7->Token.Flip.Flags.Value;
  if ( (*(_DWORD *)&Value & 0x200000) == 0 )
  {
    LOBYTE(v112) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 400LL))(
      *((_QWORD *)v13 + 66),
      (unsigned int)(1 << *((_DWORD *)v6 + 31)),
      &v7->Token.SurfaceComplete + 7,
      *((_QWORD *)v6 + 21),
      &v115,
      0,
      v112,
      v150,
      v162);
    v7->Token.Flip.Flags.Value |= 0x1000000u;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v116, *((_DWORD *)v6 + 31), v115, 0);
    v72 = WdLogNewEntry5_WdPresentTokenEvent();
    *(_QWORD *)(v72 + 24) = 1788LL;
    v71 = (_QWORD *)v72;
    goto LABEL_112;
  }
  if ( v123 || (v33 = *((_QWORD *)v13 + 2), *(_QWORD *)(v33 + 904)) && *(_BYTE *)(v33 + 2466) )
  {
    if ( (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v144, v116);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    (DXGADAPTER **)v116,
                                    *((_DWORD *)v6 + 31));
      v114 = PostCompositionStretching;
      if ( PostCompositionStretching )
      {
        if ( IsYUVAllocation(*(void **)(v118[6] + 16LL), v13)
          || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)v116 + 14)
                                                                         + 3760LL * *((unsigned int *)v6 + 31))) > 1 )
        {
          PostCompositionStretching = 0;
          v114 = 0;
        }
        else
        {
          PostCompositionStretching = v114;
        }
      }
      *(_QWORD *)&v148.left = 0LL;
      *(_QWORD *)&v148.right = 0LL;
      if ( v115 || (v75 = 1, !PostCompositionStretching) )
        v75 = 0;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v6 + 31),
              v115,
              &v7->Token.Flip,
              v75,
              v13,
              v116,
              &v148) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v144);
        LOBYTE(v113) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 400LL))(
          *((_QWORD *)v13 + 66),
          (unsigned int)(1 << *((_DWORD *)v6 + 31)),
          &v7->Token.SurfaceComplete + 7,
          *((_QWORD *)v6 + 21),
          &v115,
          0,
          v113,
          v152,
          v164);
        v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
        *(_QWORD *)(v83 + 24) = v115;
        WdLogEvent5_WdWarning(v83);
        v7->Token.Flip.Flags.Value |= 0x1000000u;
        ADAPTER_DISPLAY::UpdateIndependentFlipState(v116, *((_DWORD *)v6 + 31), v115, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v144);
        goto LABEL_28;
      }
      v76 = v129;
      *(_WORD *)v129 = *((_WORD *)&v7->Token.SurfaceComplete + 362);
      *(_WORD *)(v76 + 4) = *((_WORD *)&v7->Token.SurfaceComplete + 364);
      *(_WORD *)(v76 + 2) = *((_WORD *)&v7->Token.SurfaceComplete + 366);
      *(_WORD *)(v76 + 6) = *((_WORD *)&v7->Token.SurfaceComplete + 368);
      *(_DWORD *)(v76 + 24) = v7->Token.Flip.ColorSpace;
      if ( v114 )
      {
        v77 = *(_QWORD *)v76;
        *(_QWORD *)(v76 + 8) = *(_QWORD *)v76;
        *(_QWORD *)(v76 + 16) = v77;
        v78 = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 724);
        v171 = v78;
        v172 = v148;
        if ( (_DWORD)v78 != v148.left
          || __PAIR64__(DWORD2(v171), DWORD1(v78)) != *(_QWORD *)&v148.top
          || (v79 = 0LL, HIDWORD(v171) != v148.bottom) )
        {
          v79 = 1LL;
        }
        v121 = v79;
        if ( !(_DWORD)v79 )
        {
          v171 = 0uLL;
          v172 = (struct tagRECT)0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v13 + 65)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *((_QWORD *)v13 + 66),
          *((unsigned int *)v6 + 31),
          v79,
          &v171,
          &v172);
        UpdatePostComposition(*((_DWORD *)v6 + 31), v121 != 0, DWORD2(v171) - v171, HIDWORD(v171) - DWORD1(v171), v116);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 416LL))(
        *((_QWORD *)v13 + 66),
        *((unsigned int *)v6 + 31),
        v129,
        v115);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v144);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v144);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v116, *((_DWORD *)v6 + 31), v115, 1u);
    }
    *(_DWORD *)v6 = (v121 << 31) | (*(_DWORD *)v6 ^ (*(_DWORD *)v6 ^ (v123 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v6 + 436) = v171;
    *(struct tagRECT *)((char *)v6 + 452) = v172;
  }
  else
  {
    if ( v7->Token.Flip.SourceRect.right - v7->Token.Flip.SourceRect.left != v7->Token.Flip.DestWidth
      || v7->Token.Flip.SourceRect.bottom - v7->Token.Flip.SourceRect.top != v7->Token.Flip.DestHeight
      || (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      LOBYTE(v112) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v13 + 65) + 8LL) + 400LL))(
        *((_QWORD *)v13 + 66),
        (unsigned int)(1 << *((_DWORD *)v6 + 31)),
        &v7->Token.SurfaceComplete + 7,
        *((_QWORD *)v6 + 21),
        &v115,
        0,
        v112,
        v151,
        v163);
      v74 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v74[3] = v7->Token.Flip.SourceRect.right - v7->Token.Flip.SourceRect.left;
      v74[4] = v7->Token.Flip.SourceRect.bottom - v7->Token.Flip.SourceRect.top;
      v74[5] = v7->Token.Flip.DestWidth;
      v74[6] = v7->Token.Flip.DestHeight;
      WdLogEvent5_WdPresentTokenEvent(v74);
      v7->Token.Flip.Flags.Value |= 0x1000000u;
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v116, *((_DWORD *)v6 + 31), 0, 0);
LABEL_151:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v118);
      return v9;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v116, *((_DWORD *)v6 + 31), 0, 1u);
  }
  if ( (v7->Token.Flip.Flags.Value & 0x40) != 0 )
  {
    *(_DWORD *)v6 |= 0x40000000u;
    HDRMetaDataType = v7->Token.Flip.HDRMetaDataType;
    *((_DWORD *)v6 + 90) = HDRMetaDataType;
    if ( HDRMetaDataType )
    {
      v85 = (unsigned int)(HDRMetaDataType - 1);
      if ( (_DWORD)v85 )
      {
        if ( (_DWORD)v85 == 1 )
        {
          *(_OWORD *)((char *)v6 + 364) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 148);
          *(_OWORD *)((char *)v6 + 380) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 164);
          *(_OWORD *)((char *)v6 + 396) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 180);
          *(_OWORD *)((char *)v6 + 412) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 196);
          *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)v6 + 428) = *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)&v7->Token.SurfaceComplete + 212);
        }
        else
        {
          v86 = WdLogNewEntry5_WdAssertion(v85);
          *(_QWORD *)(v86 + 24) = 1989LL;
          WdLogEvent5_WdAssertion(v86);
          *(_DWORD *)v6 &= ~0x40000000u;
        }
      }
      else
      {
        *(_OWORD *)((char *)v6 + 364) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 148);
        *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)v6 + 380) = *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)&v7->Token.SurfaceComplete + 164);
        *((_DWORD *)v6 + 97) = v7->Token.Flip.ScatterBlts.Blts[0].SourceRect.top;
      }
    }
  }
  v34 = v115;
  v7->Token.Flip.PlaneIndex = v115;
  v35 = *((_BYTE *)v6 + 356) != 0 ? 0x48 : 0;
  *(_DWORD *)((char *)v6 + v35 + 488) ^= (*(_DWORD *)((char *)v6 + v35 + 488) ^ (1 << v34)) & 0x3FF;
  v36 = 1;
  v120 = 1;
  if ( DXGADAPTER::IsDxgmms2(v117) && a4 )
  {
    v36 = *(_DWORD *)(v137 + 92) + 1;
    v120 = v36;
  }
  v126 = 0;
  PoolWithTag = 0LL;
  v128 = 0LL;
  P = 0LL;
  v147 = 0;
  v38 = v36;
  if ( v36 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v36 < 8 )
      goto LABEL_52;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v36, 0x4B677844u);
    v38 = v36;
  }
  else
  {
    PoolWithTag = v146;
  }
  P = PoolWithTag;
  v128 = PoolWithTag;
  v147 = v36;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v38);
    PoolWithTag = P;
    v128 = P;
  }
LABEL_52:
  v156 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_150:
    P = 0LL;
    v147 = 0;
    v9 = -1073741801;
    goto LABEL_151;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v173, v36);
  v127 = v173[0];
  if ( !v173[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v173);
    if ( P != v146 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_150;
  }
  for ( i = 0; ; i = v119 + 1 )
  {
    v119 = i;
    if ( i >= v36 )
      goto LABEL_56;
    if ( !i )
    {
      v129 = (__int64)v118;
      v55 = (_QWORD *)((char *)v6 + 560);
      if ( *((_BYTE *)v6 + 356) )
        v56 = (_QWORD *)((char *)v6 + *((_DWORD *)v6 + 141) * ((8 * *((_DWORD *)v6 + 142) + 191) & 0xFFFFFFF8) + 584);
      else
        v56 = (_QWORD *)((char *)v6 + 504);
      *v56 = *(_QWORD *)(v118[6] + 16LL);
      v57 = v117;
      if ( !*((_BYTE *)v117 + 2474) )
      {
        if ( *((_BYTE *)v6 + 356) )
        {
          v55 = (_QWORD *)((char *)v6 + *((_DWORD *)v6 + 141) * ((8 * *((_DWORD *)v6 + 142) + 191) & 0xFFFFFFF8) + 576);
          v57 = v117;
        }
        *v55 = *((_QWORD *)a4 + 23);
      }
      if ( DXGADAPTER::IsDxgmms2(v57) && a4 && (*((_DWORD *)a4 + 99) & 0x10) == 0 )
      {
        v60 = *((unsigned int *)v6 + 134);
        v61 = *((_QWORD *)a4 + 32);
LABEL_84:
        *(_QWORD *)((char *)v6 + v60) = v61;
        goto LABEL_85;
      }
      goto LABEL_85;
    }
    v87 = i;
    LODWORD(v116) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 1496) + 8LL * i) + 392LL);
    v133 = 0;
    v88 = (unsigned int *)(*(_QWORD *)(v137 + 1456) + 4LL * (i - 1));
    if ( v88 + 1 < v88 || (unsigned __int64)(v88 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v133 = *v88;
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v153,
                                                (DXGALLOCATIONREFERENCE *)v154,
                                                v133);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)(v127 + 8 * v87), AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v154);
    v59 = *(_QWORD **)(v127 + 8 * v87);
    v129 = (__int64)v59;
    if ( !v59 )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v127);
      v90[3] = v133;
      v90[4] = -1073741811LL;
      v90[5] = 2063LL;
      WdLogEvent5_WdError(v90);
      v31 = -1073741811;
      v122 = -1073741811;
      v40 = v117;
      goto LABEL_57;
    }
    v91 = v124;
    v165 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 1496) + 8 * v87) + 16LL);
    v166 = *(_QWORD *)(v59[1] + 16LL);
    v167 = *(_QWORD *)(v166 + 16);
    v168 = *(_QWORD *)(v165 + 16);
    v92 = *(_QWORD *)(v168 + 16);
    v169 = v92;
    if ( v167 != v92 )
      break;
    v94 = (_QWORD *)((char *)v6 + 560);
    v58 = v119;
    if ( *((_BYTE *)v6 + 356) )
      v95 = (_QWORD *)((char *)&v94[8 * (unsigned __int64)(v119 * *((_DWORD *)v6 + 141)) + 3]
                     + *((_DWORD *)v6 + 141) * ((8 * *((_DWORD *)v6 + 142) + 191) & 0xFFFFFFF8));
    else
      v95 = (_QWORD *)((char *)v6 + 504);
    *v95 = *(_QWORD *)(v59[6] + 16LL);
    if ( !*((_BYTE *)v117 + 2474) )
    {
      v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v91 + 1496) + 8 * v87) + 184LL);
      if ( *((_BYTE *)v6 + 356) )
        v94 = (_QWORD *)((char *)v6
                       + 64 * (unsigned __int64)(v58 * *((_DWORD *)v6 + 141))
                       + *((_DWORD *)v6 + 141) * ((8 * *((_DWORD *)v6 + 142) + 191) & 0xFFFFFFF8)
                       + 576);
      *v94 = v96;
      v91 = v124;
    }
    *((_DWORD *)v6 + 36) |= 1 << (char)v116;
    v97 = 8 * v87;
    v98 = *(_QWORD *)(v97 + *(_QWORD *)(v91 + 1496));
    if ( (*(_DWORD *)(v98 + 396) & 0x10) == 0 )
    {
      v60 = v97 + *((unsigned int *)v6 + 134);
      v61 = *(_QWORD *)(v98 + 256);
      goto LABEL_84;
    }
LABEL_85:
    if ( *((_BYTE *)v6 + 356) )
      v62 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v6
                                             + 64 * (unsigned __int64)(v58 * *((_DWORD *)v6 + 141))
                                             + *((_DWORD *)v6 + 141) * ((8 * *((_DWORD *)v6 + 142) + 191) & 0xFFFFFFF8)
                                             + 608);
    else
      v62 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v6 + 496);
    v116 = v62;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ADAPTER_DISPLAY *, _QWORD))(*(_QWORD *)(*((_QWORD *)v134 + 68)
                                                                                                  + 8LL)
                                                                                      + 416LL))(
            v135[81],
            v59[3],
            v62,
            *((_QWORD *)v134 + 69));
    v122 = v31;
    if ( v31 < 0 )
    {
      v99 = WdLogNewEntry5_WdError(v63);
      *(_QWORD *)(v99 + 24) = v129;
      *(_QWORD *)(v99 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v99);
LABEL_56:
      v40 = v117;
      goto LABEL_57;
    }
    v64 = v119;
    v128[v119] = *(_QWORD *)v116;
    ++v126;
    v65 = *(_QWORD *)(v129 + 40);
    if ( v65 )
      v66 = (*(_DWORD *)(v65 + 4) & 8) != 0;
    else
      v66 = 0;
    if ( v66 )
      v67 = *(_QWORD *)(*(_QWORD *)(v65 + 56) + 176LL);
    else
      v67 = 0LL;
    if ( *((_BYTE *)v6 + 356) )
      *(_QWORD *)((char *)v6
                + 64 * (unsigned __int64)(v64 * *((_DWORD *)v6 + 141))
                + *((_DWORD *)v6 + 141) * ((8 * *((_DWORD *)v6 + 142) + 191) & 0xFFFFFFF8)
                + 616) = v67;
    else
      *((_QWORD *)v6 + 71) = v67;
    *(_DWORD *)v6 |= 0x1000000u;
    v68 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v68[3] = v7;
    v68[4] = v7->Token.Flip.FenceValue;
    v68[5] = v7->Token.Flip.PresentCount;
    v68[6] = *((_QWORD *)&v7->Token.SurfaceComplete + 7);
    v68[7] = v7->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v68);
    if ( !a4 && (v7->Token.Gdi.ScrollRect.left & 2) != 0 )
    {
      *((_DWORD *)v6 + 1) |= 2u;
      *((_QWORD *)v6 + 60) = v7->Token.Flip.hLogicalSurface;
    }
  }
  _mm_lfence();
  v93 = (_QWORD *)WdLogNewEntry5_WdError(v92);
  v93[3] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 1496) + 8 * v87) + 16LL);
  v93[4] = *(_QWORD *)(v127 + 8 * v87);
  v93[5] = -1073741811LL;
  WdLogEvent5_WdError(v93);
  v31 = -1073741811;
  v122 = -1073741811;
  v40 = v117;
LABEL_57:
  *((_DWORD *)v6 + 37) = v36;
  if ( v31 < 0 || (*((_DWORD *)v40 + 471) & 0x20) == 0 )
  {
    v69 = v117;
    goto LABEL_100;
  }
  memset(&v170, 0, sizeof(v170));
  v170.Flags.Value = 0x2000;
  v41 = (UINT *)*((_QWORD *)v6 + 3);
  if ( v41 )
  {
    v170.PrivateDriverDataSize = *v41;
    v170.pPrivateDriverData = v41 + 2;
  }
  v174 = 0LL;
  v176 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v174, v36);
  pAllocationList = (char *)v174;
  v170.pAllocationList = (DXGK_ALLOCATIONLIST *)v174;
  if ( v174 )
  {
    v43 = *((_DWORD *)v117 + 473);
    if ( (v43 & 0x80u) == 0 || (v44 = 1, (v43 & 0x40) != 0) )
      v44 = 0;
    v45 = 0;
    v46 = v134;
    while ( 1 )
    {
      v120 = v45;
      if ( v45 >= v36 )
        break;
      v47 = v45;
      v48 = v124;
      if ( a4 )
        v49 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 1496) + 8LL * v45) + 392LL);
      else
        v49 = 0;
      v50 = 32LL * v45;
      *(_WORD *)&pAllocationList[v50 + 26] = v49;
      if ( v45 )
        v51 = *(_QWORD **)(v127 + 8LL * v45);
      else
        v51 = v118;
      if ( a4 )
        v44 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v48 + 1496) + 8 * v47) + 431LL);
      *((_QWORD *)&v170.pAllocationList->hDeviceSpecificAllocation + 4 * v47) = v51[4];
      v52 = *((_QWORD *)v46 + 68);
      v53 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(v52 + 8) + 248LL);
      LOBYTE(v52) = v44;
      v54 = v53(
              *((_QWORD *)v46 + 69),
              v51[3],
              v52,
              *(unsigned __int16 *)((char *)&v170.pAllocationList[1].hDeviceSpecificAllocation + v50 + 2));
      *(_QWORD *)((char *)&v170.pAllocationList->8 + v50) = v54;
      v45 = v120 + 1;
      pAllocationList = (char *)v170.pAllocationList;
    }
    v6 = v140;
    v170.FlipInterval = *((_DWORD *)v140 + 33);
    v170.Flags.Value ^= (*(_WORD *)&v170.Flags.0 ^ (unsigned __int16)(*(_DWORD *)v140 >> 11)) & 0x1700;
    v170.NumSrcAllocations = v36;
    v69 = v117;
    v70 = 0LL;
    if ( !*((_BYTE *)v117 + 2474) )
      v70 = (void *)*((_QWORD *)a4 + 23);
    v31 = ADAPTER_RENDER::DdiPresent(v134, v70, &v170);
    v7 = v139;
    if ( v31 < 0 )
    {
      if ( v174 != v175 && v174 )
        ExFreePoolWithTag(v174, 0);
    }
    else
    {
      if ( v174 != v175 && v174 )
        ExFreePoolWithTag(v174, 0);
LABEL_100:
      if ( v123 && (*(_DWORD *)v6 & 0x1000000) != 0 )
      {
        v143 = 0LL;
        if ( (int)DXGADAPTER::GetDriverVersion(v69) < 2500
          || (v101 = ReadPresentDirtyRectsData(v100, v115, v7, &v143), v103 = v101, v101 >= 0) )
        {
          *((_QWORD *)v6 + 5) = v143;
        }
        else
        {
          v104 = WdLogNewEntry5_WdError(v102);
          *(_QWORD *)(v104 + 24) = v103;
          WdLogEvent5_WdError(v104);
        }
      }
    }
  }
  if ( v31 < 0 )
  {
    v105 = 0;
    v106 = v128;
    v107 = v134;
    v108 = v126;
    while ( v105 < v108 )
    {
      if ( a4 )
        v109 = *(_DWORD *)(*(_QWORD *)(v138 + 8LL * v105) + 392LL);
      else
        LOBYTE(v109) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v107 + 68) + 8LL) + 424LL))(
        *((_QWORD *)v107 + 69),
        (unsigned int)(1 << v109),
        v106[v105++],
        0LL);
    }
    v110 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v111 = v139;
    v110[3] = v139;
    v110[4] = v111->Token.Flip.FenceValue;
    v110[5] = v111->Token.Flip.PresentCount;
    v110[6] = *((_QWORD *)&v111->Token.SurfaceComplete + 7);
    v110[7] = v111->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v110);
    v111->Token.Flip.Flags.Value |= 0x1000000u;
    *(_DWORD *)v140 &= ~0x1000000u;
    v31 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v173);
  if ( P != v146 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v147 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v118);
  return (unsigned int)v31;
}
