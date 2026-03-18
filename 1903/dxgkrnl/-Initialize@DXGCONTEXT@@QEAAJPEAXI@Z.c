/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C011D428
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C011F6CC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C5F0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000C7B8 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0pppp @ 0x1C003C140 (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C003C1E0 (McTemplateK0pqqqqqqqqppp.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00E21C4 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FB100 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C0141CF4 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C022325C (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rdx
  DXGCONTEXT *v20; // rax
  __int64 v21; // r10
  __int64 v22; // r9
  char v23; // r11
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r11
  char v28; // al
  __int64 v29; // rcx
  int Context; // eax
  __int64 v31; // rdx
  unsigned __int64 AllocationListSize; // rdx
  __m128i v33; // xmm1
  char v34; // r10
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // al
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r9d
  __int64 v44; // r10
  unsigned __int64 *v45; // rdx
  __int64 v46; // rcx
  GUID *v47; // r8
  SIZE_T *v48; // r15
  ULONG64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  SIZE_T *v52; // r15
  NTSTATUS v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r12
  HANDLE v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  SIZE_T *v62; // rbx
  NTSTATUS v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r15
  HANDLE v68; // rax
  __int64 v69; // rdx
  struct DXGADAPTER *v70; // rbx
  struct DXGGLOBAL *v71; // rax
  __int64 v72; // r14
  unsigned __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 result; // rax
  NTSTATUS v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rcx
  struct DXGADAPTER *v84; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v86; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v88; // r8
  __int64 v89; // r9
  NTSTATUS VirtualMemory; // eax
  unsigned __int64 *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  SIZE_T v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v98; // ebx
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // r15
  unsigned __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // r15
  __int64 v114; // rcx
  __int64 v115; // rcx
  bool v116; // al
  __int64 v117; // rax
  __m128i v118; // xmm1
  __m128i v119; // xmm1
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  const GUID *v127; // r8
  __int64 v128; // rax
  PVOID v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rcx
  _QWORD *v133; // rax
  PVOID v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  ULONG AllocationType[2]; // [rsp+20h] [rbp-188h]
  ULONG AllocationTypea[2]; // [rsp+20h] [rbp-188h]
  ULONG Protect[2]; // [rsp+28h] [rbp-180h]
  enum _D3DKMT_CLIENTHINT v141[2]; // [rsp+30h] [rbp-178h]
  __int64 v142; // [rsp+38h] [rbp-170h]
  void *v143; // [rsp+40h] [rbp-168h]
  _BYTE v144[16]; // [rsp+88h] [rbp-120h] BYREF
  __int64 v145; // [rsp+98h] [rbp-110h]
  unsigned __int64 v146; // [rsp+A0h] [rbp-108h]
  _BYTE v147[56]; // [rsp+A8h] [rbp-100h] BYREF
  _DXGKARG_CREATECONTEXT v148; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v149; // [rsp+130h] [rbp-78h] BYREF
  __int128 v150; // [rsp+140h] [rbp-68h]
  __int64 v151; // [rsp+150h] [rbp-58h] BYREF
  int v152; // [rsp+158h] [rbp-50h]
  __int64 v153; // [rsp+15Ch] [rbp-4Ch]
  int v154; // [rsp+164h] [rbp-44h]
  int v155; // [rsp+168h] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v6, this, 1, *((_DWORD *)this + 100));
  if ( *(int *)(v6 + 2184) >= 9472 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
    if ( PoolWithTag )
    {
      v8 = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
    }
    *((_QWORD *)this + 60) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v93 = WdLogNewEntry5_WdLowResource(v8, v7, v88, v89);
      *(_QWORD *)(v93 + 24) = this;
      WdLogEvent5_WdLowResource(v93);
      return 3221225495LL;
    }
    *PoolWithTag = this;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v144, Current);
  v10 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 208LL),
          (__int64)this,
          7,
          0,
          0);
  v13 = v10;
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    v96 = WdLogNewEntry5_WdWarning(0LL, v11, v12);
    *(_QWORD *)(v96 + 24) = this;
    *(_QWORD *)(v96 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v96);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v144);
    return 3221225495LL;
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v15 = (v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 224) )
  {
    v16 = *(_QWORD *)(v14 + 208);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( v13 >> 30 == ((v17 >> 5) & 3) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      *(_DWORD *)(v16 + 16LL * ((v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v144);
  if ( *(_BYTE *)(v6 + 185) )
  {
    *((_BYTE *)this + 449) = 1;
    v97 = *((_QWORD *)this + 2);
    v98 = *(_DWORD *)(v97 + 336);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v97 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4144),
                       HostProcess,
                       v98,
                       *((_DWORD *)this + 100),
                       *((_DWORD *)this + 101),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 412),
                       *((enum _D3DKMT_CLIENTHINT *)this + 36),
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v106 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v107 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v106 + 184));
      v108 = ((unsigned int)v107 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v108 < *(_DWORD *)(v106 + 224) )
      {
        v109 = *(_QWORD *)(v106 + 208);
        v110 = ((unsigned int)v107 >> 25) & 0x60;
        if ( (((unsigned int)v107 >> 25) & 0x60) == (*(_BYTE *)(v109 + 16 * v108 + 8) & 0x60)
          && (*(_DWORD *)(v109 + 16 * v108 + 8) & 0x1F) != 0 )
        {
          v111 = 2 * ((v107 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v109 + 8 * v111 + 8) & 0x2000) == 0 )
          {
            v112 = WdLogNewEntry5_WdAssertion(v110, v109);
            *(_QWORD *)(v112 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v112);
            v109 = *(_QWORD *)(v106 + 208);
          }
          *(_DWORD *)(v109 + 8 * v111 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v106 + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v106 + 184, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v149 = *(_OWORD *)((char *)this + 200);
        v150 = *(_OWORD *)((char *)this + 216);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v143) = DWORD2(v149);
          LODWORD(v142) = DWORD1(v149);
          v141[0] = v149;
          Protect[0] = *((_DWORD *)this + 101);
          AllocationTypea[0] = *((_DWORD *)this + 100);
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v149),
            &EventCreateContext,
            (const GUID *)v149,
            *((_QWORD *)this + 2),
            *(_QWORD *)AllocationTypea,
            *(_QWORD *)Protect,
            *(_QWORD *)v141,
            v142,
            v143,
            HIDWORD(v149),
            (_DWORD)v150,
            0,
            this,
            *((unsigned int *)this + 6),
            0LL);
        }
      }
      return 0LL;
    }
    v104 = WdLogNewEntry5_WdError(v102, v101, v103);
    *(_QWORD *)(v104 + 24) = 970LL;
    goto LABEL_120;
  }
  LODWORD(v18) = 0;
  memset(&v148, 0, sizeof(v148));
  if ( *(int *)(v6 + 2184) >= 9472 )
  {
    v20 = (DXGCONTEXT *)*((_QWORD *)this + 60);
    *((_QWORD *)this + 24) = v20;
  }
  else
  {
    *((_QWORD *)this + 24) = this;
    v20 = this;
  }
  v148.hContext = v20;
  v21 = *((unsigned int *)this + 100);
  v148.NodeOrdinal = *((_DWORD *)this + 100);
  v148.EngineAffinity = *((_DWORD *)this + 101);
  v148.pPrivateDriverData = a2;
  v148.PrivateDriverDataSize = a3;
  v22 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v22 + 328) == 2 || *((_DWORD *)this + 36) == 2 )
    v148.Flags.Value |= 2u;
  v23 = *((_BYTE *)this + 446);
  v148.Flags.Value ^= (*(_BYTE *)&v148.Flags.0 ^ (unsigned __int8)(4 * v23)) & 4;
  v24 = *((unsigned int *)this + 103);
  if ( (v24 & 8) != 0 )
  {
    v24 = (unsigned int)v24 & 0xFFFFFFEF;
    *((_DWORD *)this + 103) = v24;
    goto LABEL_18;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( (v24 & 0x10) == 0 )
  {
    v26 = *(_QWORD *)(v25 + 2440) + 352LL * *((unsigned int *)this + 102);
    v27 = *(_QWORD *)(v26 + 24);
    if ( v27 )
    {
      v25 = 74 * v21;
      v28 = *(_BYTE *)(74 * v21 + v27 + 68) & 1;
    }
    else
    {
      v28 = 0;
    }
    if ( !v28 )
      goto LABEL_18;
    v104 = WdLogNewEntry5_WdError(v25, v26, v24);
    *(_QWORD *)(v104 + 24) = 1069LL;
LABEL_120:
    WdLogEvent5_WdError(v104);
    return 3221225473LL;
  }
  if ( *(int *)(v25 + 2452) < 2500 )
  {
    v104 = WdLogNewEntry5_WdError(v25, v19, v24);
    *(_QWORD *)(v104 + 24) = 1039LL;
    goto LABEL_120;
  }
  v113 = 352LL * *((unsigned int *)this + 102);
  v114 = *(_QWORD *)(v113 + *(_QWORD *)(v25 + 2440) + 24);
  if ( !v114 || (v19 = 74 * v21, (*(_BYTE *)(74 * v21 + v114 + 68) & 1) == 0) )
  {
    v104 = WdLogNewEntry5_WdError(v114, v19, v24);
    *(_QWORD *)(v104 + 24) = 1045LL;
    goto LABEL_120;
  }
  if ( !v23 )
  {
    v104 = WdLogNewEntry5_WdError(v114, v19, v24);
    *(_QWORD *)(v104 + 24) = 1051LL;
    goto LABEL_120;
  }
  if ( (unsigned int)v24 >= 0x20 )
  {
    v104 = WdLogNewEntry5_WdError(v114, v19, v24);
    *(_QWORD *)(v104 + 24) = 1057LL;
    goto LABEL_120;
  }
  v148.Flags.Value |= 0x10u;
  v115 = *(_QWORD *)(v113 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 2440LL) + 24);
  if ( v115 )
    v116 = (*(_BYTE *)(v19 + v115 + 68) & 2) != 0;
  else
    v116 = 0;
  *((_BYTE *)this + 312) = v116;
LABEL_18:
  v29 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 1912LL);
  if ( (v29 & 1) != 0 )
  {
    if ( (v24 & 8) != 0 )
    {
      v148.hContext = 0LL;
    }
    else
    {
      Context = ADAPTER_RENDER::DdiCreateContext(
                  *(ADAPTER_RENDER **)(v22 + 16),
                  *(void **)(v22 + 472),
                  (const GUID *)&v148);
      v18 = Context;
      if ( Context < 0 )
      {
        v117 = WdLogNewEntry5_WdError(v29, v31, v24);
        *(_QWORD *)(v117 + 24) = v18;
        WdLogEvent5_WdError(v117);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v148.ContextInfo.AllocationListSize;
  }
  else
  {
    v148.hContext = *(HANDLE *)(v22 + 472);
    v118 = *(__m128i *)(v22 + 480);
    v145 = *(_QWORD *)(v22 + 496);
    v148.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v118);
    v145 = *(_QWORD *)(v22 + 496);
    v148.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v22 + 480));
    v119 = *(__m128i *)(v22 + 480);
    v145 = *(_QWORD *)(v22 + 496);
    v119.m128i_i64[0] = _mm_srli_si128(v119, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v119.m128i_i64[0]);
    v148.ContextInfo.AllocationListSize = v119.m128i_u32[1];
    v145 = *(_QWORD *)(v22 + 496);
    v148.ContextInfo.PatchLocationListSize = v145;
    v148.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v22 + 480), 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v18 < 0 )
    return (unsigned int)v18;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v121 = WdLogNewEntry5_WdWarning(v29, AllocationListSize, v24);
    *(_QWORD *)(v121 + 24) = 256LL;
    *(_QWORD *)(v121 + 32) = v148.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v121);
    v148.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v148.hContext;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)&v148.ContextInfo.DmaBufferSize;
  v33 = *(__m128i *)&v148.ContextInfo.PatchLocationListSize;
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)&v148.ContextInfo.PatchLocationListSize;
  v34 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
  if ( (v34 & 2) != 0 )
  {
    v35 = *((_QWORD *)this + 2);
    *(_BYTE *)(v35 + 1751) = 1;
    *(_BYTE *)(*(_QWORD *)(v35 + 40) + 265LL) = 1;
    v34 = (char)v148.ContextInfo.Caps.0;
  }
  LOBYTE(v24) = *((_BYTE *)this + 446);
  if ( (_BYTE)v24 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2440LL)
        + 352LL * *((unsigned int *)this + 102);
    v37 = *(_QWORD *)(v36 + 24);
    if ( v37 )
    {
      v36 = 74LL * *((unsigned int *)this + 100);
      LOBYTE(v22) = *(_BYTE *)(v36 + v37 + 73);
    }
    else
    {
      LOBYTE(v22) = 0;
    }
    if ( v37 )
    {
      v36 = 74LL * *((unsigned int *)this + 100);
      v38 = *(_BYTE *)(v36 + v37 + 72);
    }
    else
    {
      v38 = 0;
    }
    if ( (v34 & 4) != 0 || (_BYTE)v22 && !v38 )
    {
      if ( !(_BYTE)v22 )
      {
        v105 = WdLogNewEntry5_WdWarning(v36, v37, v24);
        *(_QWORD *)(v105 + 24) = 1145LL;
        WdLogEvent5_WdWarning(v105);
        return 3221225473LL;
      }
      *((_BYTE *)this + 447) = 1;
    }
    else
    {
      *((_BYTE *)this + 448) = 1;
    }
  }
  else
  {
    LOBYTE(v24) = 0;
    if ( !*((_DWORD *)this + 50) )
    {
      v122 = WdLogNewEntry5_WdAssertion(v29, AllocationListSize);
      *(_QWORD *)(v122 + 24) = 1156LL;
      WdLogEvent5_WdAssertion(v122);
      LOBYTE(v24) = *((_BYTE *)this + 446);
    }
    if ( !(_BYTE)v24 )
    {
      if ( !*((_DWORD *)this + 53) )
      {
        v123 = WdLogNewEntry5_WdAssertion(v29, AllocationListSize);
        *(_QWORD *)(v123 + 24) = 1157LL;
        WdLogEvent5_WdAssertion(v123);
        LOBYTE(v24) = *((_BYTE *)this + 446);
      }
      if ( !(_BYTE)v24 && !*((_DWORD *)this + 54) )
      {
        v124 = WdLogNewEntry5_WdAssertion(v29, AllocationListSize);
        *(_QWORD *)(v124 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v124);
      }
    }
  }
  if ( bTracingEnabled )
  {
    v149 = *(_OWORD *)((char *)this + 200);
    v150 = *(_OWORD *)((char *)this + 216);
    v22 = *((_QWORD *)this + 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      AllocationType[0] = *((_DWORD *)this + 100);
      McTemplateK0pqqqqqqqqppp(
        DWORD1(v149),
        &EventCreateContext,
        (const GUID *)v149,
        v22,
        *(_QWORD *)AllocationType,
        *((_DWORD *)this + 101),
        (_DWORD)v149,
        DWORD1(v149),
        DWORD2(v149),
        HIDWORD(v149),
        (_DWORD)v150,
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  if ( (*((_DWORD *)this + 103) & 0x10) == 0 )
  {
    v151 = 0LL;
    v152 = 0;
    v154 = 0;
    v155 = 0;
    v153 = 0LL;
    v154 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 304LL);
    HIDWORD(v151) = *((_DWORD *)this + 100);
    v152 = *((_DWORD *)this + 102);
    v39 = (2 * (unsigned __int8)*((_DWORD *)this + 103)) & 2;
    LODWORD(v151) = v39;
    if ( *((_BYTE *)this + 446) )
      LODWORD(v151) = v39 | 0x80;
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
LABEL_45:
      v46 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v42 + 520) + 8LL) + 216LL))(
              this,
              &v151);
      *((_QWORD *)this + 34) = v46;
      if ( v46 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp(v46, (__int64)v45, v47, this, v46, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
LABEL_48:
        if ( !*((_BYTE *)this + 446) || *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2 )
        {
          result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
          if ( (int)result < 0 )
            return result;
        }
        v48 = (SIZE_T *)((char *)this + 48);
        *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
        *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
        *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
        if ( *((_BYTE *)this + 446) )
        {
          if ( *((_QWORD *)this + 45) )
          {
            v128 = WdLogNewEntry5_WdAssertion(v46, v45);
            *(_QWORD *)(v128 + 24) = 1284LL;
            WdLogEvent5_WdAssertion(v128);
          }
          v49 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 308LL);
          if ( (v49 & 0x10) == 0 || !a2 || a3 != 16 )
            goto LABEL_55;
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)this + 7,
                            0LL,
                            (PSIZE_T)this + 6,
                            0x3000u,
                            4u);
          v18 = VirtualMemory;
          if ( VirtualMemory >= 0 )
          {
            v45 = (unsigned __int64 *)a2[1];
            v47 = (GUID *)*a2;
            v146 = 0LL;
            v91 = v45;
            if ( (unsigned __int64)v45 >= MmUserProbeAddress )
              v91 = (unsigned __int64 *)MmUserProbeAddress;
            v146 = *v91;
            if ( !v45 || v146 < 8 || !v47 )
            {
              v92 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v45, v47);
              *(_QWORD *)(v92 + 24) = this;
              *(_QWORD *)(v92 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v92);
              return 3221225485LL;
            }
            if ( (unsigned __int64)v47 >= MmUserProbeAddress )
              v47 = (GUID *)MmUserProbeAddress;
            *(_QWORD *)&v47->Data1 = *((_QWORD *)this + 7);
            v49 = MmUserProbeAddress;
            if ( (unsigned __int64)v45 >= MmUserProbeAddress )
              v45 = (unsigned __int64 *)MmUserProbeAddress;
            *v45 = *v48;
            goto LABEL_55;
          }
        }
        else
        {
          v79 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 7,
                  0LL,
                  (PSIZE_T)this + 6,
                  0x3000u,
                  4u);
          v18 = v79;
          if ( v79 >= 0 )
          {
            v83 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v84 = *(struct DXGADAPTER **)(v83 + 16);
            Global = DXGGLOBAL::GetGlobal(v83, v80);
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)Global + 1284),
                   v84) )
            {
              v129 = ExAllocatePoolWithTag(PagedPool, *v48, 0x4B677844u);
              *((_QWORD *)this + 8) = v129;
              if ( !v129 )
              {
                v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v45, v47);
                v94[3] = this;
                v95 = *v48;
LABEL_113:
                v94[4] = v95;
                v94[5] = -1073741801LL;
LABEL_114:
                WdLogEvent5_WdWarning(v94);
                return 3221225495LL;
              }
            }
LABEL_55:
            v50 = *((unsigned int *)this + 18);
            if ( (_DWORD)v50 )
            {
              v51 = 8 * v50;
              if ( v51 > 0xFFFFFFFF )
              {
                v131 = WdLogNewEntry5_WdWarning(v49, v45, v47);
                *(_QWORD *)(v131 + 24) = this;
                v132 = *((unsigned int *)this + 18);
                goto LABEL_163;
              }
              v52 = (SIZE_T *)((char *)this + 80);
              *((_QWORD *)this + 10) = (unsigned int)v51;
              v53 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 11,
                      0LL,
                      (PSIZE_T)this + 10,
                      0x3000u,
                      4u);
              v57 = v53;
              if ( v53 < 0 )
              {
                v130 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56);
                v130[3] = this;
                v130[4] = *v52;
                v130[5] = v57;
                WdLogEvent5_WdWarning(v130);
                return (unsigned int)v57;
              }
              v58 = MmSecureVirtualMemory(*((PVOID *)this + 11), *v52, 4u);
              *((_QWORD *)this + 12) = v58;
              if ( !v58 )
                goto LABEL_160;
            }
            v60 = *((unsigned int *)this + 26);
            if ( !(_DWORD)v60 )
            {
LABEL_64:
              v72 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
              v73 = *((unsigned int *)this + 6);
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v72 + 184));
              v74 = ((unsigned int)v73 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v74 < *(_DWORD *)(v72 + 224) )
              {
                v75 = *(_QWORD *)(v72 + 208);
                v76 = ((unsigned int)v73 >> 25) & 0x60;
                if ( (((unsigned int)v73 >> 25) & 0x60) == (*(_BYTE *)(v75 + 16 * v74 + 8) & 0x60)
                  && (*(_DWORD *)(v75 + 16 * v74 + 8) & 0x1F) != 0 )
                {
                  v77 = 2 * ((v73 >> 6) & 0xFFFFFF);
                  if ( (*(_DWORD *)(v75 + 8 * v77 + 8) & 0x2000) == 0 )
                  {
                    v86 = WdLogNewEntry5_WdAssertion(v76, v75);
                    *(_QWORD *)(v86 + 24) = 217LL;
                    WdLogEvent5_WdAssertion(v86);
                    v75 = *(_QWORD *)(v72 + 208);
                  }
                  *(_DWORD *)(v75 + 8 * v77 + 8) &= ~0x2000u;
                }
              }
              *(_QWORD *)(v72 + 192) = 0LL;
              ExReleasePushLockExclusiveEx(v72 + 184, 0LL);
              KeLeaveCriticalRegion();
              return 0LL;
            }
            v61 = 24 * v60;
            if ( (unsigned __int64)(24 * v60) <= 0xFFFFFFFF )
            {
              v62 = (SIZE_T *)((char *)this + 112);
              *((_QWORD *)this + 14) = (unsigned int)v61;
              v63 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 15,
                      0LL,
                      (PSIZE_T)this + 14,
                      0x3000u,
                      4u);
              v67 = v63;
              if ( v63 < 0 )
              {
                v133 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64, v66);
                v133[3] = this;
                v133[4] = *v62;
                v133[5] = v67;
                WdLogEvent5_WdWarning(v133);
                return (unsigned int)v67;
              }
              v68 = MmSecureVirtualMemory(*((PVOID *)this + 15), *v62, 4u);
              *((_QWORD *)this + 17) = v68;
              if ( v68 )
              {
                v69 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                v70 = *(struct DXGADAPTER **)(v69 + 16);
                v71 = DXGGLOBAL::GetGlobal(v59, v69);
                if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)v71 + 1284),
                       v70) )
                {
                  v134 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
                  *((_QWORD *)this + 16) = v134;
                  if ( !v134 )
                  {
                    v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v136, v135, v137);
                    v94[3] = this;
                    v95 = *((_QWORD *)this + 14);
                    goto LABEL_113;
                  }
                }
                goto LABEL_64;
              }
LABEL_160:
              v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v45, v47);
              v94[3] = this;
              v94[4] = -1073741801LL;
              goto LABEL_114;
            }
            v131 = WdLogNewEntry5_WdWarning(v61, v45, v47);
            *(_QWORD *)(v131 + 24) = this;
            v132 = *((unsigned int *)this + 26);
LABEL_163:
            *(_QWORD *)(v131 + 32) = v132;
            WdLogEvent5_WdWarning(v131);
            return 3221225621LL;
          }
        }
        v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v80, v82);
        v120[3] = this;
        v120[4] = *v48;
        v120[5] = v18;
        WdLogEvent5_WdWarning(v120);
        return (unsigned int)v18;
      }
      return 3221225495LL;
    }
    if ( v43 < 0x20 )
    {
      LODWORD(v151) = ((unsigned __int8)v40 ^ (unsigned __int8)(8 * v43)) & 0x20 ^ v40;
      v42 = *(_QWORD *)(v44 + 16);
      goto LABEL_45;
    }
    v104 = WdLogNewEntry5_WdError(v41, v40, v42);
    *(_QWORD *)(v104 + 24) = 1239LL;
    goto LABEL_120;
  }
  v149 = 0uLL;
  *(_QWORD *)&v150 = 0LL;
  DWORD2(v150) = 0;
  DWORD1(v150) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 304LL);
  DWORD1(v149) = *((_DWORD *)this + 100);
  DWORD2(v149) = *((_DWORD *)this + 102);
  LODWORD(v149) = 2 * (*((_DWORD *)this + 103) & 1 | (4 * (*((_DWORD *)this + 103) & 4 | 0x110)));
  v126 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int128 *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                           + 8LL)
                                                                               + 224LL))(
           this,
           &v149,
           v24,
           v22);
  *((_QWORD *)this + 37) = v126;
  if ( !v126 )
    return 3221225495LL;
  *(_QWORD *)(*((_QWORD *)this + 60) + 8LL) = v126;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppp(v126, v125, v127, this, *((_QWORD *)this + 37), *((_QWORD *)this + 23), *((_QWORD *)this + 24));
  memset(v147, 0, 0x30uLL);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 520LL)
                                                                                  + 8LL)
                                                                      + 232LL))(
             0LL,
             *((_QWORD *)this + 37),
             v147,
             (char *)this + 304);
  if ( (int)result >= 0 )
    goto LABEL_48;
  return result;
}
