/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0258ACC
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021A9D0 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017DA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01522BC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C025A108 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        UINT a8,
        const struct tagRECT *a9,
        struct COREDEVICEACCESS *a10)
{
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  const GUID *v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v51; // rax
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  const GUID *v56; // r8
  int v57; // eax
  __int64 v58; // rcx
  __int64 bottom; // r8
  __int64 v60; // rbx
  _QWORD *v61; // rax
  struct DXGDEVICE *v62; // r14
  unsigned int v63; // edi
  struct ADAPTER_RENDER *v64; // rbx
  __int64 v65; // r8
  int v66; // eax
  __int64 right; // rcx
  LONG v68; // eax
  LONG left; // r9d
  __int64 v70; // rdx
  LONG top; // r10d
  __int64 v72; // rcx
  const RECT *v73; // rax
  int v74; // ebx
  int v75; // r11d
  int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  RECT v85; // xmm0
  RECT v86; // xmm1
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v92; // rbx
  __int64 v93; // rax
  int v94; // edx
  int v95; // eax
  int v96; // eax
  __int64 v97; // r8
  const RECT *v98; // rdx
  DXGCONTEXT *v99; // rcx
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rbx
  __int64 v106; // rax
  struct DXGALLOCATION *v108; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v109; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v110; // [rsp+80h] [rbp-80h] BYREF
  const RECT *v111; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v112; // [rsp+90h] [rbp-70h]
  struct COREDEVICEACCESS *v113; // [rsp+98h] [rbp-68h]
  struct VIDSCH_SUBMIT_DATA_BASE *v114[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGCONTEXT **v115; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_DESCRIBEALLOCATION v116; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v117; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v118[192]; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_PRESENT v119; // [rsp+720h] [rbp+620h] BYREF

  v115 = a5;
  v111 = a9;
  v113 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a2;
  v13 = a3;
  v112 = a2;
  v14 = *(_QWORD *)(v11 + 40);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *(_DWORD *)(v14 + 200);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx(v14 + 184, 0LL);
  }
  v18 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *(_DWORD *)(v14 + 224) )
    goto LABEL_13;
  v19 = *(_QWORD *)(v14 + 208);
  v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
  if ( (((unsigned int)v12 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v21 = v20 & 0x1F;
  if ( (_BYTE)v21 != 5 )
  {
    v22 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60, v21, 2LL * (unsigned int)v18);
    *(_QWORD *)(v22 + 24) = 267LL;
    WdLogEvent5_WdError(v22);
LABEL_13:
    v23 = 0LL;
    goto LABEL_14;
  }
  v23 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * (unsigned int)v18);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v109, v23);
  ExReleasePushLockSharedEx(v14 + 184, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v14) = -1073741811;
  if ( v109 )
  {
    v28 = *((_QWORD *)this + 2);
    v29 = *(_QWORD *)(*((_QWORD *)v109 + 1) + 16LL);
    v30 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
    if ( *(_QWORD *)(v29 + 16) != v30 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v26);
      v27[3] = *((_QWORD *)this + 2);
      v27[4] = v109;
      v27[5] = -1073741811LL;
      goto LABEL_19;
    }
    memset(&v117, 0, sizeof(v117));
    v117.hAllocation = *(HANDLE *)(*((_QWORD *)v109 + 6) + 16LL);
    v33 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 2560LL),
            &v117,
            v32);
    v37 = v33;
    if ( v33 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
      v38[3] = v37;
      v38[4] = this;
      v38[5] = *((unsigned int *)v109 + 4);
      v38[6] = v109;
      v38[7] = (*(_DWORD *)(*((_QWORD *)v109 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v38);
      LODWORD(v14) = v37;
      goto LABEL_99;
    }
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v41 = *(_DWORD *)(v14 + 200);
        if ( v41 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v39, &EventBlockThread, v40, v41);
      }
      ExAcquirePushLockSharedEx(v14 + 184, 0LL);
    }
    v42 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v42 < *(_DWORD *)(v14 + 224) )
    {
      v43 = *(_QWORD *)(v14 + 208);
      v44 = *(_DWORD *)(v43 + 16 * v42 + 8);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
        && (v44 & 0x2000) == 0
        && (v44 & 0x1F) != 0 )
      {
        v45 = v44 & 0x1F;
        if ( (_BYTE)v45 == 5 )
        {
          v47 = *(struct _EX_RUNDOWN_REF **)(v43 + 16LL * (unsigned int)v42);
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v108, v47);
          ExReleasePushLockSharedEx(v14 + 184, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v14) = -1073741811;
          if ( !v108 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48, v50);
            v51[3] = v13;
LABEL_40:
            WdLogEvent5_WdError(v51);
LABEL_98:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v108, v55);
            goto LABEL_99;
          }
          v52 = *((_QWORD *)this + 2);
          v53 = *(_QWORD *)(*((_QWORD *)v108 + 1) + 16LL);
          v54 = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL);
          if ( *(_QWORD *)(v53 + 16) != v54 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v50);
            v51[3] = *((_QWORD *)this + 2);
            v51[4] = v108;
            v51[5] = -1073741811LL;
            goto LABEL_40;
          }
          memset(&v116, 0, sizeof(v116));
          v116.hAllocation = *(HANDLE *)(*((_QWORD *)v108 + 6) + 16LL);
          v57 = ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL) + 2560LL),
                  &v116,
                  v56);
          v60 = v57;
          if ( v57 < 0 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v58, v55, bottom);
            v61[3] = v60;
            v61[4] = this;
            v61[5] = *((unsigned int *)v108 + 4);
            v61[6] = v108;
            v61[7] = (*(_DWORD *)(*((_QWORD *)v108 + 6) + 4LL) >> 6) & 0xF;
            WdLogEvent5_WdError(v61);
            LODWORD(v14) = v60;
            goto LABEL_98;
          }
          if ( *((_BYTE *)this + 446) )
          {
            if ( (v62 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                  v63 = *((_DWORD *)this + 102),
                  LOBYTE(bottom) = *((_BYTE *)this + 447),
                  v64 = (struct ADAPTER_RENDER *)*((_QWORD *)v62 + 2),
                  !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v64 + 68) + 8LL)
                                                                              + 248LL))(
                     *((_QWORD *)v64 + 69),
                     *((_QWORD *)v108 + 3),
                     bottom,
                     v63))
              && (v66 = MapGpuVaForAllocation(v64, v62, v63, v108), v66 < 0)
              || (LOBYTE(v65) = *((_BYTE *)this + 447),
                  !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                     *((_QWORD *)v64 + 69),
                     *((_QWORD *)v109 + 3),
                     v65,
                     v63))
              && (v66 = MapGpuVaForAllocation(v64, v62, v63, v109), v66 < 0) )
            {
              LODWORD(v14) = v66;
              goto LABEL_98;
            }
          }
          right = (unsigned int)a6->right;
          if ( a6->left >= (int)right
            || a6->left < 0
            || (int)right > (int)v117.Width
            || (v68 = a6->top, right = (unsigned int)a6->bottom, v68 >= (int)right)
            || v68 < 0
            || (int)right > (int)v117.Height )
          {
            v80 = WdLogNewEntry5_WdError(right, v55, bottom);
            *(_QWORD *)(v80 + 24) = 7147LL;
          }
          else
          {
            left = a7->left;
            v70 = (unsigned int)a7->right;
            if ( a7->left < (int)v70 && left >= 0 && (int)v70 <= (int)v116.Width )
            {
              top = a7->top;
              bottom = (unsigned int)a7->bottom;
              if ( top < (int)bottom && top >= 0 && (int)bottom <= (int)v116.Height )
              {
                v72 = 0LL;
                if ( a8 )
                {
                  while ( 1 )
                  {
                    v73 = &v111[(unsigned int)v72];
                    v74 = v73->right;
                    if ( v73->left >= v74 )
                      break;
                    if ( v73->left < left )
                      break;
                    if ( v74 > (int)v70 )
                      break;
                    v75 = v73->top;
                    v76 = v73->bottom;
                    if ( v75 >= v76 || v75 < top || v76 > (int)bottom )
                      break;
                    v72 = (unsigned int)(v72 + 1);
                    if ( (unsigned int)v72 >= a8 )
                      goto LABEL_69;
                  }
                  v80 = WdLogNewEntry5_WdError(v72, v70, bottom);
                  *(_QWORD *)(v80 + 24) = 7170LL;
                  goto LABEL_97;
                }
LABEL_69:
                v110 = 0LL;
                v77 = *((_QWORD *)this + 47);
                if ( !v77 )
                  goto LABEL_76;
                v78 = *((_DWORD *)this + 96);
                v79 = 0LL;
                if ( !v78 )
                  goto LABEL_76;
                while ( !*(_QWORD *)(v77 + 8 * v79) )
                {
                  v79 = (unsigned int)(v79 + 1);
                  if ( (unsigned int)v79 >= v78 )
                    goto LABEL_76;
                }
                v110 = *(struct _VIDMM_DMA_BUFFER **)(v77 + 8 * v79);
                *(_QWORD *)(v77 + 8 * v79) = 0LL;
                if ( !v110 )
                {
LABEL_76:
                  v81 = DXGCONTEXT::AcquireDmaBuffer(this, &v110, v113, 1);
                  v14 = v81;
                  if ( v81 < 0 )
                  {
                    v51 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82, v84);
                    v51[3] = v14;
                    goto LABEL_40;
                  }
                }
                memset(&v119, 0, sizeof(v119));
                v85 = *a7;
                v86 = *a6;
                v119.Flags.Value |= 1u;
                v114[0] = 0LL;
                v119.pDstSubRects = v111;
                v87 = *((_QWORD *)this + 2);
                v119.DstRect = v85;
                v119.SubRectCnt = a8;
                v119.SrcRect = v86;
                v114[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v87 + 16);
                CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v114);
                v92 = v114[0];
                if ( !v114[0] )
                {
                  v93 = WdLogNewEntry5_WdLowResource(v89, v88, v90, v91);
                  *(_QWORD *)(v93 + 24) = 7214LL;
                  WdLogEvent5_WdLowResource(v93);
                  LODWORD(v14) = -1073741801;
LABEL_94:
                  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v114);
                  goto LABEL_98;
                }
                v94 = *(_DWORD *)v114[0] | 0x10000;
                *(_DWORD *)v114[0] = v94;
                v95 = *(_DWORD *)(*((_QWORD *)v108 + 6) + 4LL);
                if ( (v95 & 2) != 0
                  || (v95 & 1) != 0
                  || (v96 = *(_DWORD *)(*((_QWORD *)v109 + 6) + 4LL), (v96 & 2) != 0)
                  || (v96 & 1) != 0 )
                {
                  v94 |= 1u;
                  *(_DWORD *)v92 = v94;
                }
                *(_DWORD *)v92 = v94 | 0x120;
                memset(v118, 0, 0x5F8uLL);
                if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
                {
                  v98 = 0LL;
                  v99 = (DXGCONTEXT *)*((_QWORD *)this + 52);
                  if ( v99 != (DXGCONTEXT *)((char *)this + 416) )
                    v98 = (const RECT *)*((_QWORD *)this + 52);
                  v111 = v98;
                  if ( !v98 )
                  {
                    v100 = WdLogNewEntry5_WdError(v99, 0LL, v97);
                    *(_QWORD *)(v100 + 24) = this;
                    WdLogEvent5_WdError(v100);
                    LODWORD(v14) = -1073741823;
                    goto LABEL_94;
                  }
                  v118[188] = &v111;
                }
                v101 = DXGCONTEXT::SubmitPresent(
                         this,
                         0LL,
                         (const struct DXGK_PRESENT_PARAMS *)v118,
                         0,
                         v115,
                         0LL,
                         v112,
                         v13,
                         &v119,
                         0LL,
                         v110,
                         v92,
                         v116.Format,
                         (struct _D3DKMT_PRESENT *)v113);
                v105 = v101;
                if ( v101 < 0 )
                {
                  v106 = WdLogNewEntry5_WdError(v103, v102, v104);
                  *(_QWORD *)(v106 + 24) = v105;
                  WdLogEvent5_WdError(v106);
                }
                LODWORD(v14) = v105;
                goto LABEL_94;
              }
            }
            v80 = WdLogNewEntry5_WdError(right, v70, bottom);
            *(_QWORD *)(v80 + 24) = 7157LL;
          }
LABEL_97:
          WdLogEvent5_WdError(v80);
          LODWORD(v14) = -1073741811;
          goto LABEL_98;
        }
        v46 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60, v45, 2LL * (unsigned int)v42);
        *(_QWORD *)(v46 + 24) = 267LL;
        WdLogEvent5_WdError(v46);
      }
    }
    v47 = 0LL;
    goto LABEL_35;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
  v27[3] = v12;
LABEL_19:
  WdLogEvent5_WdError(v27);
LABEL_99:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v109, v31);
  return (unsigned int)v14;
}
