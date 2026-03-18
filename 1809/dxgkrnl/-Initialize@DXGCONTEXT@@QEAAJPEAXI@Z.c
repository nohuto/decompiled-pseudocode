/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6380
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000FCCC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pppp @ 0x1C0035B6C (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0035C0C (McTemplateK0pqqqqqqqqppp.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00E00B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00E5EE4 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C011D290 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C01F352C (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // r15
  struct _KTHREAD **Current; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rbx
  DXGCONTEXT *v17; // rax
  __int64 v18; // r10
  __int64 v19; // r9
  int v20; // r8d
  DXGADAPTER *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  int Context; // eax
  unsigned __int64 AllocationListSize; // rdx
  __m128i v26; // xmm1
  char v27; // r10
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r9d
  __int64 v38; // r10
  unsigned __int64 *v39; // rdx
  __int64 v40; // rcx
  GUID *v41; // r8
  SIZE_T *v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  SIZE_T *v45; // r15
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r12
  HANDLE v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  SIZE_T *v55; // rbx
  NTSTATUS v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r15
  HANDLE v61; // rax
  struct DXGADAPTER *v62; // rbx
  struct DXGGLOBAL *v63; // rax
  __int64 v64; // r14
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v72; // rcx
  NTSTATUS VirtualMemory; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned __int64 *v77; // rax
  __int64 v78; // rax
  NTSTATUS v79; // eax
  __int64 v80; // rcx
  struct DXGADAPTER *v81; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  SIZE_T v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned int v88; // ebx
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // r15
  unsigned __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r10
  char v103; // r11
  __int64 v104; // r15
  __int64 v105; // rcx
  __int64 v106; // rcx
  bool v107; // al
  __int64 v108; // rax
  __m128i v109; // xmm1
  __m128i v110; // xmm1
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  const GUID *v118; // r8
  __int64 v119; // rcx
  __int64 v120; // rax
  PVOID v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  PVOID v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-198h]
  ULONG AllocationTypea[2]; // [rsp+20h] [rbp-198h]
  ULONG Protect[2]; // [rsp+28h] [rbp-190h]
  enum _D3DKMT_CLIENTHINT v135[2]; // [rsp+30h] [rbp-188h]
  __int64 v136; // [rsp+38h] [rbp-180h]
  void *v137; // [rsp+40h] [rbp-178h]
  _BYTE v138[16]; // [rsp+88h] [rbp-130h] BYREF
  __int64 v139; // [rsp+98h] [rbp-120h]
  unsigned __int64 v140; // [rsp+A0h] [rbp-118h]
  _BYTE v141[56]; // [rsp+A8h] [rbp-110h] BYREF
  _DXGKARG_CREATECONTEXT v142; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v143; // [rsp+130h] [rbp-88h] BYREF
  __int128 v144; // [rsp+140h] [rbp-78h]
  __int64 v145; // [rsp+150h] [rbp-68h] BYREF
  __int64 v146; // [rsp+158h] [rbp-60h]
  __int64 v147; // [rsp+160h] [rbp-58h]
  int v148; // [rsp+168h] [rbp-50h]

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v6, this, 1, *((_DWORD *)this + 96));
  if ( *(int *)(v6 + 2160) >= 9472 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
    if ( PoolWithTag )
    {
      v72 = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
    }
    *((_QWORD *)this + 58) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v83 = WdLogNewEntry5_WdLowResource(v72);
      *(_QWORD *)(v83 + 24) = this;
      WdLogEvent5_WdLowResource(v83);
      return 3221225495LL;
    }
    *PoolWithTag = this;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v138, Current);
  v8 = HMGRTABLE::AllocHandle(
         (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 232LL),
         (__int64)this,
         7,
         0,
         0);
  v11 = v8;
  *((_DWORD *)this + 6) = v8;
  if ( !v8 )
  {
    v86 = WdLogNewEntry5_WdWarning(0LL, v9, v10);
    *(_QWORD *)(v86 + 24) = this;
    *(_QWORD *)(v86 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v86);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
    return 3221225495LL;
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v13 = (v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(v12 + 248) )
  {
    v14 = *(_QWORD *)(v12 + 232);
    v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
    if ( v11 >> 30 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      *(_DWORD *)(v14 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
  if ( *(_BYTE *)(v6 + 185) )
  {
    *((_BYTE *)this + 433) = 1;
    v87 = *((_QWORD *)this + 2);
    v88 = *(_DWORD *)(v87 + 336);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v87 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4152),
                       HostProcess,
                       v88,
                       *((_DWORD *)this + 96),
                       *((_DWORD *)this + 97),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 396),
                       *((enum _D3DKMT_CLIENTHINT *)this + 36),
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v94 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v95 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v94 + 208));
      v96 = ((unsigned int)v95 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v96 < *(_DWORD *)(v94 + 248) )
      {
        v97 = *(_QWORD *)(v94 + 232);
        v98 = ((unsigned int)v95 >> 25) & 0x60;
        if ( (((unsigned int)v95 >> 25) & 0x60) == (*(_BYTE *)(v97 + 16 * v96 + 8) & 0x60)
          && (*(_DWORD *)(v97 + 16 * v96 + 8) & 0x1F) != 0 )
        {
          v99 = 2 * ((v95 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v97 + 8 * v99 + 8) & 0x2000) == 0 )
          {
            v100 = WdLogNewEntry5_WdAssertion(v98);
            *(_QWORD *)(v100 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v100);
            v97 = *(_QWORD *)(v94 + 232);
          }
          *(_DWORD *)(v97 + 8 * v99 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v94 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v94 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v143 = *(_OWORD *)((char *)this + 200);
        v144 = *(_OWORD *)((char *)this + 216);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v137) = DWORD2(v143);
          LODWORD(v136) = DWORD1(v143);
          v135[0] = v143;
          Protect[0] = *((_DWORD *)this + 97);
          AllocationTypea[0] = *((_DWORD *)this + 96);
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v143),
            &EventCreateContext,
            (const GUID *)v143,
            *((_QWORD *)this + 2),
            *(_QWORD *)AllocationTypea,
            *(_QWORD *)Protect,
            *(_QWORD *)v135,
            v136,
            v137,
            HIDWORD(v143),
            (_DWORD)v144,
            0,
            this,
            *((unsigned int *)this + 6),
            0LL);
        }
      }
      return 0LL;
    }
    v92 = WdLogNewEntry5_WdError(v91);
    *(_QWORD *)(v92 + 24) = 964LL;
    goto LABEL_119;
  }
  LODWORD(v16) = 0;
  memset(&v142, 0, sizeof(v142));
  if ( *(int *)(v6 + 2160) >= 9472 )
    v17 = (DXGCONTEXT *)*((_QWORD *)this + 58);
  else
    v17 = this;
  *((_QWORD *)this + 24) = v17;
  v142.hContext = v17;
  v18 = *((unsigned int *)this + 96);
  v142.NodeOrdinal = *((_DWORD *)this + 96);
  v142.EngineAffinity = *((_DWORD *)this + 97);
  v142.pPrivateDriverData = a2;
  v142.PrivateDriverDataSize = a3;
  v19 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v19 + 328) == 2 || *((_DWORD *)this + 36) == 2 )
    v142.Flags.Value |= 2u;
  v142.Flags.Value ^= (*(_BYTE *)&v142.Flags.0 ^ (unsigned __int8)(4 * *((_BYTE *)this + 430))) & 4;
  v20 = *((_DWORD *)this + 99);
  if ( (v20 & 8) != 0 )
  {
    v22 = v20 & 0xFFFFFFEF;
    *((_DWORD *)this + 99) = v22;
    goto LABEL_17;
  }
  v21 = *(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( (v20 & 0x10) == 0 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)v21 + 302) + 352LL * *((unsigned int *)this + 98) + 24);
    if ( !v22 || (*(_BYTE *)(74 * v18 + v22 + 68) & 1) == 0 )
      goto LABEL_17;
    v92 = WdLogNewEntry5_WdError(74 * v18);
    *(_QWORD *)(v92 + 24) = 1063LL;
LABEL_119:
    WdLogEvent5_WdError(v92);
    return 3221225473LL;
  }
  if ( (int)DXGADAPTER::GetDriverVersion(v21) < 2500 )
  {
    v92 = WdLogNewEntry5_WdError(v101);
    *(_QWORD *)(v92 + 24) = 1033LL;
    goto LABEL_119;
  }
  v104 = 352LL * *((unsigned int *)this + 98);
  v105 = *(_QWORD *)(v104 + *(_QWORD *)(v101 + 2416) + 24);
  if ( !v105 || (*(_BYTE *)(74 * v102 + v105 + 68) & 1) == 0 )
  {
    v92 = WdLogNewEntry5_WdError(v105);
    *(_QWORD *)(v92 + 24) = 1039LL;
    goto LABEL_119;
  }
  if ( !v103 )
  {
    v92 = WdLogNewEntry5_WdError(v105);
    *(_QWORD *)(v92 + 24) = 1045LL;
    goto LABEL_119;
  }
  if ( (unsigned int)v22 >= 0x20 )
  {
    v92 = WdLogNewEntry5_WdError(v105);
    *(_QWORD *)(v92 + 24) = 1051LL;
    goto LABEL_119;
  }
  v142.Flags.Value |= 0x10u;
  v106 = *(_QWORD *)(v104 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 2416LL) + 24);
  if ( v106 )
    v107 = (*(_BYTE *)(74 * v102 + v106 + 68) & 2) != 0;
  else
    v107 = 0;
  *((_BYTE *)this + 296) = v107;
LABEL_17:
  v23 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 1888LL);
  if ( (v23 & 1) != 0 )
  {
    if ( (*((_DWORD *)this + 99) & 8) != 0 )
    {
      v142.hContext = 0LL;
    }
    else
    {
      Context = ADAPTER_RENDER::DdiCreateContext(
                  *(ADAPTER_RENDER **)(v19 + 16),
                  *(void **)(v19 + 472),
                  (const GUID *)&v142);
      v16 = Context;
      if ( Context < 0 )
      {
        v108 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v108 + 24) = v16;
        WdLogEvent5_WdError(v108);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v142.ContextInfo.AllocationListSize;
  }
  else
  {
    v142.hContext = *(HANDLE *)(v19 + 472);
    v109 = *(__m128i *)(v19 + 480);
    v139 = *(_QWORD *)(v19 + 496);
    v142.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v109);
    v139 = *(_QWORD *)(v19 + 496);
    v142.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v19 + 480));
    v110 = *(__m128i *)(v19 + 480);
    v139 = *(_QWORD *)(v19 + 496);
    v110.m128i_i64[0] = _mm_srli_si128(v110, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v110.m128i_i64[0]);
    v142.ContextInfo.AllocationListSize = v110.m128i_u32[1];
    v139 = *(_QWORD *)(v19 + 496);
    v142.ContextInfo.PatchLocationListSize = v139;
    v142.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v19 + 480), 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v16 < 0 )
    return (unsigned int)v16;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v112 = WdLogNewEntry5_WdWarning(v23, AllocationListSize, v22);
    *(_QWORD *)(v112 + 24) = 256LL;
    *(_QWORD *)(v112 + 32) = v142.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v112);
    v142.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v142.hContext;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)&v142.ContextInfo.DmaBufferSize;
  v26 = *(__m128i *)&v142.ContextInfo.PatchLocationListSize;
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)&v142.ContextInfo.PatchLocationListSize;
  v27 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
  if ( (v27 & 2) != 0 )
  {
    v28 = *((_QWORD *)this + 2);
    *(_BYTE *)(v28 + 1751) = 1;
    *(_BYTE *)(*(_QWORD *)(v28 + 40) + 289LL) = 1;
    v27 = (char)v142.ContextInfo.Caps.0;
  }
  LOBYTE(v22) = *((_BYTE *)this + 430);
  if ( (_BYTE)v22 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2416LL)
        + 352LL * *((unsigned int *)this + 98);
    v30 = *(_QWORD *)(v29 + 24);
    if ( v30 )
    {
      v29 = 74LL * *((unsigned int *)this + 96);
      LOBYTE(v19) = *(_BYTE *)(v29 + v30 + 73);
    }
    else
    {
      LOBYTE(v19) = 0;
    }
    if ( v30 )
    {
      v29 = 74LL * *((unsigned int *)this + 96);
      v31 = *(_BYTE *)(v29 + v30 + 72);
    }
    else
    {
      v31 = 0;
    }
    if ( (v27 & 4) != 0 || (_BYTE)v19 && !v31 )
    {
      if ( !(_BYTE)v19 )
      {
        v93 = WdLogNewEntry5_WdWarning(v29, v30, v22);
        *(_QWORD *)(v93 + 24) = 1139LL;
        WdLogEvent5_WdWarning(v93);
        return 3221225473LL;
      }
      *((_BYTE *)this + 431) = 1;
    }
    else
    {
      *((_BYTE *)this + 432) = 1;
    }
  }
  else
  {
    LOBYTE(v22) = 0;
    if ( !*((_DWORD *)this + 50) )
    {
      v113 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v113 + 24) = 1150LL;
      WdLogEvent5_WdAssertion(v113);
      LOBYTE(v22) = *((_BYTE *)this + 430);
    }
    if ( !(_BYTE)v22 )
    {
      LOBYTE(v22) = 0;
      if ( !*((_DWORD *)this + 53) )
      {
        v114 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v114 + 24) = 1151LL;
        WdLogEvent5_WdAssertion(v114);
        LOBYTE(v22) = *((_BYTE *)this + 430);
      }
      if ( !(_BYTE)v22 && !*((_DWORD *)this + 54) )
      {
        v115 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v115 + 24) = 1152LL;
        WdLogEvent5_WdAssertion(v115);
      }
    }
  }
  if ( bTracingEnabled )
  {
    v143 = *(_OWORD *)((char *)this + 200);
    v144 = *(_OWORD *)((char *)this + 216);
    v19 = *((_QWORD *)this + 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      AllocationType[0] = *((_DWORD *)this + 96);
      McTemplateK0pqqqqqqqqppp(
        DWORD1(v143),
        &EventCreateContext,
        (const GUID *)v143,
        v19,
        *(_QWORD *)AllocationType,
        *((_DWORD *)this + 97),
        (_DWORD)v143,
        DWORD1(v143),
        DWORD2(v143),
        HIDWORD(v143),
        (_DWORD)v144,
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  v32 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 99) & 0x10) == 0 )
  {
    v145 = 0LL;
    v146 = 0LL;
    v147 = 0LL;
    v148 = 0;
    HIDWORD(v147) = *(_DWORD *)(*(_QWORD *)(v32 + 40) + 328LL);
    HIDWORD(v145) = *((_DWORD *)this + 96);
    LODWORD(v146) = *((_DWORD *)this + 98);
    v33 = (2 * (unsigned __int8)*((_DWORD *)this + 99)) & 2;
    LODWORD(v145) = v33;
    if ( *((_BYTE *)this + 430) )
      LODWORD(v145) = v33 | 0x80;
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
LABEL_44:
      v40 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v36 + 520) + 8LL) + 216LL))(
              this,
              &v145);
      *((_QWORD *)this + 32) = v40;
      if ( v40 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp(v40, (__int64)v39, v41, this, v40, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
LABEL_47:
        if ( !*((_BYTE *)this + 430) || *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2 )
        {
          result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
          if ( (int)result < 0 )
            return result;
        }
        v42 = (SIZE_T *)((char *)this + 48);
        *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
        *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
        *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
        if ( *((_BYTE *)this + 430) )
        {
          if ( *((_QWORD *)this + 43) )
          {
            v120 = WdLogNewEntry5_WdAssertion(v40);
            *(_QWORD *)(v120 + 24) = 1278LL;
            WdLogEvent5_WdAssertion(v120);
          }
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 308LL) & 0x10) == 0
            || !a2
            || a3 != 16 )
          {
            goto LABEL_54;
          }
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)this + 7,
                            0LL,
                            (PSIZE_T)this + 6,
                            0x3000u,
                            4u);
          v16 = VirtualMemory;
          if ( VirtualMemory >= 0 )
          {
            v39 = (unsigned __int64 *)a2[1];
            v41 = (GUID *)*a2;
            v140 = 0LL;
            v77 = v39;
            if ( (unsigned __int64)v39 >= MmUserProbeAddress )
              v77 = (unsigned __int64 *)MmUserProbeAddress;
            v140 = *v77;
            if ( !v39 || v140 < 8 || !v41 )
            {
              v78 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v39, v41);
              *(_QWORD *)(v78 + 24) = this;
              *(_QWORD *)(v78 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v78);
              return 3221225485LL;
            }
            if ( (unsigned __int64)v41 >= MmUserProbeAddress )
              v41 = (GUID *)MmUserProbeAddress;
            *(_QWORD *)&v41->Data1 = *((_QWORD *)this + 7);
            if ( (unsigned __int64)v39 >= MmUserProbeAddress )
              v39 = (unsigned __int64 *)MmUserProbeAddress;
            *v39 = *v42;
            goto LABEL_54;
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
          v16 = v79;
          if ( v79 >= 0 )
          {
            v80 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v81 = *(struct DXGADAPTER **)(v80 + 16);
            Global = DXGGLOBAL::GetGlobal(v80);
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)Global + 1316),
                   v81) )
            {
              v121 = ExAllocatePoolWithTag(PagedPool, *v42, 0x4B677844u);
              *((_QWORD *)this + 8) = v121;
              if ( !v121 )
              {
                v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v122, v39, v41);
                v84[3] = this;
                v85 = *v42;
LABEL_112:
                v84[4] = v85;
                v84[5] = -1073741801LL;
LABEL_113:
                WdLogEvent5_WdWarning(v84);
                return 3221225495LL;
              }
            }
LABEL_54:
            v43 = *((unsigned int *)this + 18);
            if ( (_DWORD)v43 )
            {
              v44 = 8 * v43;
              if ( v44 > 0xFFFFFFFF )
              {
                v123 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v39, v41);
                *(_QWORD *)(v123 + 24) = this;
                v124 = *((unsigned int *)this + 18);
                goto LABEL_159;
              }
              v45 = (SIZE_T *)((char *)this + 80);
              *((_QWORD *)this + 10) = (unsigned int)v44;
              v46 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 11,
                      0LL,
                      (PSIZE_T)this + 10,
                      0x3000u,
                      4u);
              v50 = v46;
              if ( v46 < 0 )
              {
                v125 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
                v125[3] = this;
                v125[4] = *v45;
                v125[5] = v50;
                WdLogEvent5_WdWarning(v125);
                return (unsigned int)v50;
              }
              v51 = MmSecureVirtualMemory(*((PVOID *)this + 11), *v45, 4u);
              *((_QWORD *)this + 12) = v51;
              if ( !v51 )
                goto LABEL_161;
            }
            v53 = *((unsigned int *)this + 26);
            if ( !(_DWORD)v53 )
            {
LABEL_63:
              v64 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
              v65 = *((unsigned int *)this + 6);
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v64 + 208));
              v66 = ((unsigned int)v65 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v66 < *(_DWORD *)(v64 + 248) )
              {
                v67 = *(_QWORD *)(v64 + 232);
                v68 = ((unsigned int)v65 >> 25) & 0x60;
                if ( (((unsigned int)v65 >> 25) & 0x60) == (*(_BYTE *)(v67 + 16 * v66 + 8) & 0x60)
                  && (*(_DWORD *)(v67 + 16 * v66 + 8) & 0x1F) != 0 )
                {
                  v69 = 2 * ((v65 >> 6) & 0xFFFFFF);
                  if ( (*(_DWORD *)(v67 + 8 * v69 + 8) & 0x2000) == 0 )
                  {
                    v131 = WdLogNewEntry5_WdAssertion(v68);
                    *(_QWORD *)(v131 + 24) = 222LL;
                    WdLogEvent5_WdAssertion(v131);
                    v67 = *(_QWORD *)(v64 + 232);
                  }
                  *(_DWORD *)(v67 + 8 * v69 + 8) &= ~0x2000u;
                }
              }
              *(_QWORD *)(v64 + 216) = 0LL;
              ExReleasePushLockExclusiveEx(v64 + 208, 0LL);
              KeLeaveCriticalRegion();
              return 0LL;
            }
            v54 = 24 * v53;
            if ( (unsigned __int64)(24 * v53) <= 0xFFFFFFFF )
            {
              v55 = (SIZE_T *)((char *)this + 112);
              *((_QWORD *)this + 14) = (unsigned int)v54;
              v56 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 15,
                      0LL,
                      (PSIZE_T)this + 14,
                      0x3000u,
                      4u);
              v60 = v56;
              if ( v56 < 0 )
              {
                v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
                v126[3] = this;
                v126[4] = *v55;
                v126[5] = v60;
                WdLogEvent5_WdWarning(v126);
                return (unsigned int)v60;
              }
              v61 = MmSecureVirtualMemory(*((PVOID *)this + 15), *v55, 4u);
              *((_QWORD *)this + 17) = v61;
              if ( v61 )
              {
                v62 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                v63 = DXGGLOBAL::GetGlobal(v52);
                if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)v63 + 1316),
                       v62) )
                {
                  v127 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
                  *((_QWORD *)this + 16) = v127;
                  if ( !v127 )
                  {
                    v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v129, v128, v130);
                    v84[3] = this;
                    v85 = *((_QWORD *)this + 14);
                    goto LABEL_112;
                  }
                }
                goto LABEL_63;
              }
LABEL_161:
              v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v39, v41);
              v84[3] = this;
              v84[4] = -1073741801LL;
              goto LABEL_113;
            }
            v123 = WdLogNewEntry5_WdWarning(v54, v39, v41);
            *(_QWORD *)(v123 + 24) = this;
            v124 = *((unsigned int *)this + 26);
LABEL_159:
            *(_QWORD *)(v123 + 32) = v124;
            WdLogEvent5_WdWarning(v123);
            return 3221225621LL;
          }
        }
        v111 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v76);
        v111[3] = this;
        v111[4] = *v42;
        v111[5] = v16;
        WdLogEvent5_WdWarning(v111);
        return (unsigned int)v16;
      }
      return 3221225495LL;
    }
    if ( v37 < 0x20 )
    {
      LODWORD(v145) = ((unsigned __int8)v34 ^ (unsigned __int8)(8 * v37)) & 0x20 ^ v34;
      v36 = *(_QWORD *)(v38 + 16);
      goto LABEL_44;
    }
    v92 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v92 + 24) = 1233LL;
    goto LABEL_119;
  }
  v143 = 0uLL;
  *(_QWORD *)&v144 = 0LL;
  DWORD2(v144) = 0;
  DWORD1(v144) = *(_DWORD *)(*(_QWORD *)(v32 + 40) + 328LL);
  DWORD1(v143) = *((_DWORD *)this + 96);
  DWORD2(v143) = *((_DWORD *)this + 98);
  LODWORD(v143) = 2 * (*((_DWORD *)this + 99) & 1 | (4 * (*((_DWORD *)this + 99) & 4 | 0x110)));
  v116 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int128 *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                           + 8LL)
                                                                               + 224LL))(
           this,
           &v143,
           v22,
           v19);
  *((_QWORD *)this + 35) = v116;
  if ( !v116 )
    return 3221225495LL;
  v119 = *((_QWORD *)this + 58);
  *(_QWORD *)(v119 + 8) = v116;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppp(v119, v117, v118, this, *((_QWORD *)this + 35), *((_QWORD *)this + 23), *((_QWORD *)this + 24));
  memset(v141, 0, 0x30uLL);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 520LL)
                                                                                  + 8LL)
                                                                      + 232LL))(
             0LL,
             *((_QWORD *)this + 35),
             v141,
             (char *)this + 288);
  if ( (int)result >= 0 )
    goto LABEL_47;
  return result;
}
