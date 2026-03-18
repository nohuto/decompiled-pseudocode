/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C024576C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C01F27D0 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0225214 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
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
        struct COREDEVICEACCESS *a9)
{
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  _QWORD *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // edx
  __int64 v35; // rax
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // r14
  __int64 v40; // rcx
  const GUID *v41; // r8
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  _QWORD *v45; // rax
  UINT bottom; // edx
  UINT right; // r8d
  __int64 top; // rcx
  LONG left; // eax
  signed int Width; // edi
  __int64 v51; // r8
  signed int Height; // r14d
  struct tagRECT *v53; // rbx
  int v54; // edx
  unsigned int v55; // eax
  __int64 v56; // rbx
  struct DXGPROCESS *Current; // rax
  int v58; // eax
  _QWORD *v59; // rax
  __int64 v60; // rcx
  struct DXGDEVICE *v61; // r14
  unsigned int v62; // edi
  struct ADAPTER_RENDER *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rcx
  unsigned int v66; // edx
  unsigned int v67; // eax
  struct _D3DKMT_PRESENT *v68; // rdi
  int v69; // eax
  __int64 v70; // rcx
  struct tagRECT v71; // xmm0
  __int64 v72; // rax
  __int64 v73; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v74; // r8
  __int64 v75; // rax
  int v76; // edx
  int v77; // eax
  int v78; // eax
  unsigned int v79; // r9d
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rax
  size_t v85; // [rsp+48h] [rbp-B8h]
  struct DXGALLOCATION *v86; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v87; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v88; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v89; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDMM_DMA_BUFFER *v90; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v91; // [rsp+A8h] [rbp-58h]
  struct tagRECT *Src; // [rsp+B0h] [rbp-50h]
  struct COREDEVICEACCESS *v93; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v94; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_DESCRIBEALLOCATION v95; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v96; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v97; // [rsp+130h] [rbp+30h] BYREF

  v94 = a5;
  Src = a8;
  v93 = a9;
  v10 = *((_QWORD *)this + 2);
  v91 = a4;
  v11 = a3;
  v12 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 6628LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 208));
  v16 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 248) )
    goto LABEL_9;
  v17 = *(_QWORD *)(v15 + 232);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( (((unsigned int)v12 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( (v18 & 0x1F) != 5 )
  {
    v19 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60);
    *(_QWORD *)(v19 + 24) = 316LL;
    WdLogEvent5_WdError(v19);
LABEL_9:
    v20 = 0LL;
    goto LABEL_10;
  }
  v20 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87, v20);
  ExReleasePushLockSharedEx(v15 + 208, 0LL);
  KeLeaveCriticalRegion();
  v22 = -1073741811;
  if ( v87 )
  {
    v24 = *((_QWORD *)this + 2);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v87 + 1) + 16LL) + 16LL) != v25 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v23[3] = *((_QWORD *)this + 2);
      v23[4] = v87;
      v23[5] = -1073741811LL;
      goto LABEL_15;
    }
    memset(&v96, 0, sizeof(v96));
    v96.hAllocation = *(HANDLE *)(*((_QWORD *)v87 + 6) + 16LL);
    v27 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 2528LL),
            &v96,
            v26);
    v29 = v27;
    if ( v27 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v30[3] = v29;
      v30[4] = this;
      v30[5] = *((unsigned int *)v87 + 4);
      v30[6] = v87;
      v30[7] = (*(_DWORD *)(*((_QWORD *)v87 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v30);
      v22 = v29;
      goto LABEL_79;
    }
    v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v31 + 208));
    v32 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *(_DWORD *)(v31 + 248) )
    {
      v33 = *(_QWORD *)(v31 + 232);
      v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
      if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60)
        && (v34 & 0x2000) == 0
        && (v34 & 0x1F) != 0 )
      {
        if ( (v34 & 0x1F) == 5 )
        {
          v36 = *(struct _EX_RUNDOWN_REF **)(v33 + 16LL * (unsigned int)v32);
LABEL_25:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v36);
          ExReleasePushLockSharedEx(v31 + 208, 0LL);
          KeLeaveCriticalRegion();
          v22 = -1073741811;
          if ( !v86 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v37);
            v38[3] = v11;
LABEL_30:
            WdLogEvent5_WdError(v38);
LABEL_78:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v86);
            goto LABEL_79;
          }
          v39 = *((_QWORD *)this + 2);
          v40 = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v86 + 1) + 16LL) + 16LL) != v40 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v40);
            v38[3] = *((_QWORD *)this + 2);
            v38[4] = v86;
            v38[5] = -1073741811LL;
            goto LABEL_30;
          }
          memset(&v95, 0, sizeof(v95));
          v95.hAllocation = *(HANDLE *)(*((_QWORD *)v86 + 6) + 16LL);
          v42 = ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 2528LL),
                  &v95,
                  v41);
          v44 = v42;
          if ( v42 < 0 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v43);
            v45[3] = v44;
            v45[4] = this;
            v45[5] = *((unsigned int *)v86 + 4);
            v45[6] = v86;
            v45[7] = (*(_DWORD *)(*((_QWORD *)v86 + 6) + 4LL) >> 6) & 0xF;
LABEL_65:
            WdLogEvent5_WdError(v45);
            v22 = v44;
            goto LABEL_78;
          }
          *(_QWORD *)&v89.left = 0LL;
          if ( a6 )
          {
            v88 = *a6;
            bottom = v88.bottom;
            right = v88.right;
            top = (unsigned int)v88.top;
            left = v88.left;
          }
          else
          {
            right = v96.Width;
            left = 0;
            bottom = v96.Height;
            top = 0LL;
            v88.left = 0;
            v88.top = 0;
          }
          Width = v95.Width;
          v51 = right - left;
          Height = v95.Height;
          v53 = Src;
          if ( (int)v51 < (int)v95.Width )
            Width = v51;
          v54 = bottom - top;
          v89.right = Width;
          if ( v54 < (int)v95.Height )
            Height = v54;
          v88.right = Width + left;
          v89.bottom = Height;
          v88.bottom = Height + top;
          v55 = 0;
          if ( a7 )
          {
            while ( v53->left >= 0 && v53->top >= 0 )
            {
              if ( v53->right > Width || v53->bottom > Height )
              {
                v59 = (_QWORD *)WdLogNewEntry5_WdError(top);
                v59[3] = v53->right;
                v59[4] = v53->bottom;
                v59[5] = Width;
                v59[6] = Height;
                goto LABEL_50;
              }
              ++v55;
              ++v53;
              if ( v55 >= a7 )
                goto LABEL_46;
            }
            v59 = (_QWORD *)WdLogNewEntry5_WdError(top);
            v59[3] = v53->left;
            v60 = v53->top;
            v59[5] = 0LL;
            v59[6] = 0LL;
            v59[4] = v60;
LABEL_50:
            WdLogEvent5_WdError(v59);
            v22 = -1073741811;
            goto LABEL_78;
          }
LABEL_46:
          if ( *((_BYTE *)this + 433) )
          {
            v56 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
            Current = DXGPROCESS::GetCurrent();
            LODWORD(v85) = 0;
            v58 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v56 + 4152),
                    Current,
                    this,
                    *((_DWORD *)v87 + 24),
                    *((_DWORD *)v86 + 24),
                    &v88,
                    &v89,
                    a7,
                    Src,
                    v85,
                    0LL);
          }
          else if ( !*((_BYTE *)this + 430)
                 || ((v61 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                      v62 = *((_DWORD *)this + 98),
                      LOBYTE(v51) = *((_BYTE *)this + 431),
                      v63 = (struct ADAPTER_RENDER *)*((_QWORD *)v61 + 2),
                      (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v63 + 68)
                                                                                             + 8LL)
                                                                                 + 248LL))(
                        *((_QWORD *)v63 + 69),
                        *((_QWORD *)v86 + 3),
                        v51,
                        v62))
                  || (v58 = MapGpuVaForAllocation(v63, v61, v62, v86), v58 >= 0))
                 && ((LOBYTE(v64) = *((_BYTE *)this + 431),
                      (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                             + 8LL)
                                                                                 + 248LL))(
                        *((_QWORD *)v63 + 69),
                        *((_QWORD *)v87 + 3),
                        v64,
                        v62))
                  || (v58 = MapGpuVaForAllocation(v63, v61, v62, v87), v58 >= 0)) )
          {
            v65 = *((_QWORD *)this + 45);
            v90 = 0LL;
            if ( !v65 )
              goto LABEL_63;
            v66 = *((_DWORD *)this + 92);
            v67 = 0;
            if ( !v66 )
              goto LABEL_63;
            while ( !*(_QWORD *)(v65 + 8LL * v67) )
            {
              if ( ++v67 >= v66 )
                goto LABEL_63;
            }
            v90 = *(struct _VIDMM_DMA_BUFFER **)(v65 + 8LL * v67);
            *(_QWORD *)(v65 + 8LL * v67) = 0LL;
            if ( v90 )
            {
              v68 = (struct _D3DKMT_PRESENT *)v93;
            }
            else
            {
LABEL_63:
              v68 = (struct _D3DKMT_PRESENT *)v93;
              v69 = DXGCONTEXT::AcquireDmaBuffer(this, &v90, v93, 1);
              v44 = v69;
              if ( v69 < 0 )
              {
                v45 = (_QWORD *)WdLogNewEntry5_WdError(v70);
                v45[3] = v44;
                goto LABEL_65;
              }
            }
            memset(&v97, 0, sizeof(v97));
            v71 = v89;
            v97.Flags.Value |= 1u;
            *(_QWORD *)&v89.left = 0LL;
            v97.pDstSubRects = Src;
            v72 = *((_QWORD *)this + 2);
            v97.DstRect = v71;
            v97.SubRectCnt = a7;
            v97.SrcRect = v88;
            *(_QWORD *)&v89.right = *(_QWORD *)(v72 + 16);
            CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v89);
            v74 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v89.left;
            if ( *(_QWORD *)&v89.left )
            {
              v76 = **(_DWORD **)&v89.left | 0x10000;
              **(_DWORD **)&v89.left = v76;
              v77 = *(_DWORD *)(*((_QWORD *)v86 + 6) + 4LL);
              if ( (v77 & 2) != 0
                || (v77 & 1) != 0
                || (v78 = *(_DWORD *)(*((_QWORD *)v87 + 6) + 4LL), (v78 & 2) != 0)
                || (v78 & 1) != 0 )
              {
                v76 |= 1u;
                *(_DWORD *)v74 = v76;
              }
              v79 = v91;
              *(_DWORD *)v74 = v76 | 0x100;
              v80 = DXGCONTEXT::SubmitPresent(
                      this,
                      0LL,
                      0LL,
                      v79,
                      v94,
                      0LL,
                      v12,
                      v11,
                      &v97,
                      0LL,
                      v90,
                      v74,
                      v95.Format,
                      v68);
              v82 = v80;
              if ( v80 < 0 )
              {
                v83 = WdLogNewEntry5_WdError(v81);
                *(_QWORD *)(v83 + 24) = v82;
                WdLogEvent5_WdError(v83);
              }
              v22 = v82;
            }
            else
            {
              v75 = WdLogNewEntry5_WdLowResource(v73);
              *(_QWORD *)(v75 + 24) = 6824LL;
              WdLogEvent5_WdLowResource(v75);
              v22 = -1073741801;
            }
            CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v89);
            goto LABEL_78;
          }
          v22 = v58;
          goto LABEL_78;
        }
        v35 = WdLogNewEntry5_WdError(((unsigned int)v11 >> 25) & 0x60);
        *(_QWORD *)(v35 + 24) = 316LL;
        WdLogEvent5_WdError(v35);
      }
    }
    v36 = 0LL;
    goto LABEL_25;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v23[3] = v12;
LABEL_15:
  WdLogEvent5_WdError(v23);
LABEL_79:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v87);
  return v22;
}
