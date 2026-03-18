/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PARAMS@@@Z @ 0x1C0257B40
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027ABE8 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02951F4 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017530 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0107E90 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C014E3FC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C02224A0 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0259A6C (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        struct tagRECT *a8,
        struct COREDEVICEACCESS *a9,
        const struct DXGK_PRESENT_PARAMS *a10)
{
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // edi
  _QWORD *v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  const GUID *v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  _QWORD *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  const GUID *v45; // r8
  int v46; // r9d
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // rax
  struct _EX_RUNDOWN_REF *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  const GUID *v61; // r8
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rbx
  _QWORD *v67; // rax
  UINT bottom; // edx
  UINT right; // ecx
  int v70; // ecx
  signed int Width; // edi
  signed int Height; // r14d
  __int64 v73; // rdx
  struct tagRECT *v74; // rbx
  unsigned int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rbx
  struct DXGPROCESS *Current; // rax
  int v79; // eax
  _QWORD *v80; // rax
  __int64 top; // rcx
  struct DXGDEVICE *v82; // r14
  unsigned int v83; // edi
  struct ADAPTER_RENDER *v84; // rbx
  __int64 v85; // r8
  __int64 v86; // rcx
  unsigned int v87; // edx
  unsigned int v88; // eax
  struct _D3DKMT_PRESENT *v89; // rdi
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  struct tagRECT v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v99; // r8
  __int64 v100; // rax
  int v101; // edx
  int v102; // eax
  int v103; // eax
  unsigned int v104; // r9d
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rbx
  __int64 v110; // rax
  size_t v112; // [rsp+48h] [rbp-B8h]
  struct DXGALLOCATION *v113; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v114; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v115; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v116; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDMM_DMA_BUFFER *v117; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v118; // [rsp+A8h] [rbp-58h]
  struct tagRECT *Src; // [rsp+B0h] [rbp-50h]
  struct COREDEVICEACCESS *v120; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v121; // [rsp+C0h] [rbp-40h]
  struct DXGK_PRESENT_PARAMS *v122; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v123; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v124; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v125; // [rsp+130h] [rbp+30h] BYREF

  v121 = a5;
  Src = a8;
  v120 = a9;
  v122 = a10;
  v11 = *((_QWORD *)this + 2);
  v118 = a4;
  v12 = a3;
  v13 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v11 + 16) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v16 + 24) = 6788LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v17 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *(_DWORD *)(v17 + 200);
      if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, v20);
    }
    ExAcquirePushLockSharedEx(v17 + 184, 0LL);
  }
  v21 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 >= *(_DWORD *)(v17 + 224) )
    goto LABEL_15;
  v22 = *(_QWORD *)(v17 + 208);
  v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
  if ( (((unsigned int)v13 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
    || (v23 & 0x2000) != 0
    || (v23 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v24 = v23 & 0x1F;
  if ( (_BYTE)v24 != 5 )
  {
    v25 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60, v24, 2LL * (unsigned int)v21);
    *(_QWORD *)(v25 + 24) = 267LL;
    WdLogEvent5_WdError(v25);
LABEL_15:
    v26 = 0LL;
    goto LABEL_16;
  }
  v26 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v21);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v114, v26);
  ExReleasePushLockSharedEx(v17 + 184, 0LL);
  KeLeaveCriticalRegion();
  v30 = -1073741811;
  if ( v114 )
  {
    v32 = *((_QWORD *)this + 2);
    v33 = *(_QWORD *)(*((_QWORD *)v114 + 1) + 16LL);
    v34 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
    if ( *(_QWORD *)(v33 + 16) != v34 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v29);
      v31[3] = *((_QWORD *)this + 2);
      v31[4] = v114;
      v31[5] = -1073741811LL;
      goto LABEL_21;
    }
    memset(&v124, 0, sizeof(v124));
    v124.hAllocation = *(HANDLE *)(*((_QWORD *)v114 + 6) + 16LL);
    v37 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 2560LL),
            &v124,
            v36);
    v41 = v37;
    if ( v37 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
      v42[3] = v41;
      v42[4] = this;
      v42[5] = *((unsigned int *)v114 + 4);
      v42[6] = v114;
      v42[7] = (*(_DWORD *)(*((_QWORD *)v114 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v42);
      v30 = v41;
      goto LABEL_91;
    }
    v43 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v43 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v46 = *(_DWORD *)(v43 + 200);
        if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v44, &EventBlockThread, v45, v46);
      }
      ExAcquirePushLockSharedEx(v43 + 184, 0LL);
    }
    v47 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v47 < *(_DWORD *)(v43 + 224) )
    {
      v48 = *(_QWORD *)(v43 + 208);
      v49 = *(_DWORD *)(v48 + 16 * v47 + 8);
      if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60)
        && (v49 & 0x2000) == 0
        && (v49 & 0x1F) != 0 )
      {
        v50 = v49 & 0x1F;
        if ( (_BYTE)v50 == 5 )
        {
          v52 = *(struct _EX_RUNDOWN_REF **)(v48 + 16LL * (unsigned int)v47);
LABEL_37:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v113, v52);
          ExReleasePushLockSharedEx(v43 + 184, 0LL);
          KeLeaveCriticalRegion();
          v30 = -1073741811;
          if ( !v113 )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v55);
            v56[3] = v12;
LABEL_42:
            WdLogEvent5_WdError(v56);
LABEL_90:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v113, v60);
            goto LABEL_91;
          }
          v57 = *((_QWORD *)this + 2);
          v58 = *(_QWORD *)(*((_QWORD *)v113 + 1) + 16LL);
          v59 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL);
          if ( *(_QWORD *)(v58 + 16) != v59 )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58, v55);
            v56[3] = *((_QWORD *)this + 2);
            v56[4] = v113;
            v56[5] = -1073741811LL;
            goto LABEL_42;
          }
          memset(&v123, 0, sizeof(v123));
          v123.hAllocation = *(HANDLE *)(*((_QWORD *)v113 + 6) + 16LL);
          v62 = ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL) + 2560LL),
                  &v123,
                  v61);
          v66 = v62;
          if ( v62 < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63, v65);
            v67[3] = v66;
            v67[4] = this;
            v67[5] = *((unsigned int *)v113 + 4);
            v67[6] = v113;
            v67[7] = (*(_DWORD *)(*((_QWORD *)v113 + 6) + 4LL) >> 6) & 0xF;
LABEL_77:
            WdLogEvent5_WdError(v67);
            v30 = v66;
            goto LABEL_90;
          }
          *(_QWORD *)&v116.left = 0LL;
          *(_QWORD *)&v115.left = 0LL;
          *(_QWORD *)&v115.right = 0LL;
          if ( a6 )
          {
            v115 = *a6;
            bottom = v115.bottom;
            right = v115.right;
          }
          else
          {
            right = v124.Width;
            bottom = v124.Height;
          }
          v70 = right - v115.left;
          Width = v123.Width;
          Height = v123.Height;
          if ( v70 < (int)v123.Width )
            Width = v70;
          v73 = bottom - v115.top;
          v74 = Src;
          v116.right = Width;
          if ( (int)v73 < (int)v123.Height )
            Height = v73;
          v115.right = Width + v115.left;
          v116.bottom = Height;
          v115.bottom = Height + v115.top;
          v75 = 0;
          if ( a7 )
          {
            while ( v74->left >= 0 && v74->top >= 0 )
            {
              if ( v74->right > Width || v74->bottom > Height )
              {
                v80 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v115.top, v73, v65);
                v80[3] = v74->right;
                v80[4] = v74->bottom;
                v80[5] = Width;
                v80[6] = Height;
                goto LABEL_62;
              }
              ++v75;
              ++v74;
              if ( v75 >= a7 )
                goto LABEL_58;
            }
            v80 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v115.top, v73, v65);
            v80[3] = v74->left;
            top = v74->top;
            v80[5] = 0LL;
            v80[6] = 0LL;
            v80[4] = top;
LABEL_62:
            WdLogEvent5_WdError(v80);
            v30 = -1073741811;
            goto LABEL_90;
          }
LABEL_58:
          if ( *((_BYTE *)this + 449) )
          {
            v76 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v77 = *(_QWORD *)(v76 + 16);
            Current = DXGPROCESS::GetCurrent(v76, v73);
            LODWORD(v112) = 0;
            v79 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v77 + 4144),
                    Current,
                    this,
                    *((_DWORD *)v114 + 24),
                    *((_DWORD *)v113 + 24),
                    &v115,
                    &v116,
                    a7,
                    Src,
                    v112,
                    0LL);
          }
          else if ( !*((_BYTE *)this + 446)
                 || ((v82 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                      v83 = *((_DWORD *)this + 102),
                      LOBYTE(v65) = *((_BYTE *)this + 447),
                      v84 = (struct ADAPTER_RENDER *)*((_QWORD *)v82 + 2),
                      (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v84 + 68)
                                                                                             + 8LL)
                                                                                 + 248LL))(
                        *((_QWORD *)v84 + 69),
                        *((_QWORD *)v113 + 3),
                        v65,
                        v83))
                  || (v79 = MapGpuVaForAllocation(v84, v82, v83, v113), v79 >= 0))
                 && ((LOBYTE(v85) = *((_BYTE *)this + 447),
                      (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                             + 8LL)
                                                                                 + 248LL))(
                        *((_QWORD *)v84 + 69),
                        *((_QWORD *)v114 + 3),
                        v85,
                        v83))
                  || (v79 = MapGpuVaForAllocation(v84, v82, v83, v114), v79 >= 0)) )
          {
            v86 = *((_QWORD *)this + 47);
            v117 = 0LL;
            if ( !v86 )
              goto LABEL_75;
            v87 = *((_DWORD *)this + 96);
            v88 = 0;
            if ( !v87 )
              goto LABEL_75;
            while ( !*(_QWORD *)(v86 + 8LL * v88) )
            {
              if ( ++v88 >= v87 )
                goto LABEL_75;
            }
            v117 = *(struct _VIDMM_DMA_BUFFER **)(v86 + 8LL * v88);
            *(_QWORD *)(v86 + 8LL * v88) = 0LL;
            if ( v117 )
            {
              v89 = (struct _D3DKMT_PRESENT *)v120;
            }
            else
            {
LABEL_75:
              v89 = (struct _D3DKMT_PRESENT *)v120;
              v90 = DXGCONTEXT::AcquireDmaBuffer(this, &v117, v120, 1);
              v66 = v90;
              if ( v90 < 0 )
              {
                v67 = (_QWORD *)WdLogNewEntry5_WdError(v92, v91, v93);
                v67[3] = v66;
                goto LABEL_77;
              }
            }
            memset(&v125, 0, sizeof(v125));
            v94 = v116;
            v125.Flags.Value |= 1u;
            *(_QWORD *)&v116.left = 0LL;
            v125.pDstSubRects = Src;
            v95 = *((_QWORD *)this + 2);
            v125.DstRect = v94;
            v125.SubRectCnt = a7;
            v125.SrcRect = v115;
            *(_QWORD *)&v116.right = *(_QWORD *)(v95 + 16);
            CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v116);
            v99 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v116.left;
            if ( *(_QWORD *)&v116.left )
            {
              v101 = **(_DWORD **)&v116.left | 0x10000;
              **(_DWORD **)&v116.left = v101;
              v102 = *(_DWORD *)(*((_QWORD *)v113 + 6) + 4LL);
              if ( (v102 & 2) != 0
                || (v102 & 1) != 0
                || (v103 = *(_DWORD *)(*((_QWORD *)v114 + 6) + 4LL), (v103 & 2) != 0)
                || (v103 & 1) != 0 )
              {
                v101 |= 1u;
                *(_DWORD *)v99 = v101;
              }
              v104 = v118;
              *(_DWORD *)v99 = v101 | 0x100;
              v105 = DXGCONTEXT::SubmitPresent(
                       this,
                       0LL,
                       v122,
                       v104,
                       v121,
                       0LL,
                       v13,
                       v12,
                       &v125,
                       0LL,
                       v117,
                       v99,
                       v123.Format,
                       v89);
              v109 = v105;
              if ( v105 < 0 )
              {
                v110 = WdLogNewEntry5_WdError(v107, v106, v108);
                *(_QWORD *)(v110 + 24) = v109;
                WdLogEvent5_WdError(v110);
              }
              v30 = v109;
            }
            else
            {
              v100 = WdLogNewEntry5_WdLowResource(v97, v96, 0LL, v98);
              *(_QWORD *)(v100 + 24) = 6984LL;
              WdLogEvent5_WdLowResource(v100);
              v30 = -1073741801;
            }
            CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v116);
            goto LABEL_90;
          }
          v30 = v79;
          goto LABEL_90;
        }
        v51 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60, v50, 2LL * (unsigned int)v47);
        *(_QWORD *)(v51 + 24) = 267LL;
        WdLogEvent5_WdError(v51);
      }
    }
    v52 = 0LL;
    goto LABEL_37;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
  v31[3] = v13;
LABEL_21:
  WdLogEvent5_WdError(v31);
LABEL_91:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v114, v35);
  return v30;
}
