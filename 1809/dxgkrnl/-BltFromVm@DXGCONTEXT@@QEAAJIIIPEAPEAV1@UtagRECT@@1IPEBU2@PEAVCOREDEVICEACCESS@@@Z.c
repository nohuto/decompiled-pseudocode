/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223C84
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAA20 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0225214 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
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
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // edx
  __int64 v34; // rax
  struct _EX_RUNDOWN_REF *v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  _QWORD *v45; // rax
  struct DXGDEVICE *v46; // r14
  unsigned int v47; // edi
  struct ADAPTER_RENDER *v48; // rbx
  __int64 v49; // r8
  int v50; // eax
  __int64 right; // rcx
  LONG v52; // eax
  LONG left; // r9d
  int v54; // edx
  LONG top; // r10d
  LONG bottom; // r8d
  __int64 v57; // rcx
  const RECT *v58; // rax
  int v59; // ebx
  LONG v60; // r11d
  LONG v61; // eax
  __int64 v62; // rcx
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  RECT v68; // xmm0
  RECT v69; // xmm1
  __int64 v70; // rax
  __int64 v71; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v72; // rbx
  __int64 v73; // rax
  int v74; // edx
  int v75; // eax
  int v76; // eax
  const RECT *v77; // rdx
  DXGCONTEXT *v78; // rcx
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rax
  struct DXGALLOCATION *v85; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v86; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v87; // [rsp+80h] [rbp-80h] BYREF
  const RECT *v88; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-70h]
  struct COREDEVICEACCESS *v90; // [rsp+98h] [rbp-68h]
  struct VIDSCH_SUBMIT_DATA_BASE *v91[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGCONTEXT **v92; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_DESCRIBEALLOCATION v93; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v94; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v95[192]; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_PRESENT v96; // [rsp+720h] [rbp+620h] BYREF

  v92 = a5;
  v88 = a9;
  v90 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a2;
  v13 = a3;
  v89 = a2;
  v14 = *(_QWORD *)(v11 + 40);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 208));
  v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 248) )
    goto LABEL_7;
  v16 = *(_QWORD *)(v14 + 232);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( (((unsigned int)v12 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
    || (v17 & 0x2000) != 0
    || (v17 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  if ( (v17 & 0x1F) != 5 )
  {
    v18 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60);
    *(_QWORD *)(v18 + 24) = 316LL;
    WdLogEvent5_WdError(v18);
LABEL_7:
    v19 = 0LL;
    goto LABEL_8;
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v19);
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v21) = -1073741811;
  if ( v86 )
  {
    v23 = *((_QWORD *)this + 2);
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v86 + 1) + 16LL) + 16LL) != v24 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v22[3] = *((_QWORD *)this + 2);
      v22[4] = v86;
      v22[5] = -1073741811LL;
      goto LABEL_13;
    }
    memset(&v94, 0, sizeof(v94));
    v94.hAllocation = *(HANDLE *)(*((_QWORD *)v86 + 6) + 16LL);
    v26 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 2528LL),
            &v94,
            v25);
    v28 = v26;
    if ( v26 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v29[3] = v28;
      v29[4] = this;
      v29[5] = *((unsigned int *)v86 + 4);
      v29[6] = v86;
      v29[7] = (*(_DWORD *)(*((_QWORD *)v86 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v29);
      LODWORD(v21) = v28;
      goto LABEL_87;
    }
    v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 208));
    v31 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v30 + 248) )
    {
      v32 = *(_QWORD *)(v30 + 232);
      v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60)
        && (v33 & 0x2000) == 0
        && (v33 & 0x1F) != 0 )
      {
        if ( (v33 & 0x1F) == 5 )
        {
          v35 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * (unsigned int)v31);
LABEL_23:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v85, v35);
          ExReleasePushLockSharedEx(v30 + 208, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v21) = -1073741811;
          if ( !v85 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v36);
            v37[3] = v13;
LABEL_28:
            WdLogEvent5_WdError(v37);
LABEL_86:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v85);
            goto LABEL_87;
          }
          v38 = *((_QWORD *)this + 2);
          v39 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 1) + 16LL) + 16LL) != v39 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v37[3] = *((_QWORD *)this + 2);
            v37[4] = v85;
            v37[5] = -1073741811LL;
            goto LABEL_28;
          }
          memset(&v93, 0, sizeof(v93));
          v93.hAllocation = *(HANDLE *)(*((_QWORD *)v85 + 6) + 16LL);
          v41 = ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 2528LL),
                  &v93,
                  v40);
          v44 = v41;
          if ( v41 < 0 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v42);
            v45[3] = v44;
            v45[4] = this;
            v45[5] = *((unsigned int *)v85 + 4);
            v45[6] = v85;
            v45[7] = (*(_DWORD *)(*((_QWORD *)v85 + 6) + 4LL) >> 6) & 0xF;
            WdLogEvent5_WdError(v45);
            LODWORD(v21) = v44;
            goto LABEL_86;
          }
          if ( *((_BYTE *)this + 430) )
          {
            if ( (v46 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                  v47 = *((_DWORD *)this + 98),
                  LOBYTE(v43) = *((_BYTE *)this + 431),
                  v48 = (struct ADAPTER_RENDER *)*((_QWORD *)v46 + 2),
                  !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v48 + 68) + 8LL)
                                                                              + 248LL))(
                     *((_QWORD *)v48 + 69),
                     *((_QWORD *)v85 + 3),
                     v43,
                     v47))
              && (v50 = MapGpuVaForAllocation(v48, v46, v47, v85), v50 < 0)
              || (LOBYTE(v49) = *((_BYTE *)this + 431),
                  !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                     *((_QWORD *)v48 + 69),
                     *((_QWORD *)v86 + 3),
                     v49,
                     v47))
              && (v50 = MapGpuVaForAllocation(v48, v46, v47, v86), v50 < 0) )
            {
              LODWORD(v21) = v50;
              goto LABEL_86;
            }
          }
          right = (unsigned int)a6->right;
          if ( a6->left >= (int)right
            || a6->left < 0
            || (int)right > (int)v94.Width
            || (v52 = a6->top, right = (unsigned int)a6->bottom, v52 >= (int)right)
            || v52 < 0
            || (int)right > (int)v94.Height )
          {
            v65 = WdLogNewEntry5_WdError(right);
            *(_QWORD *)(v65 + 24) = 6982LL;
          }
          else
          {
            left = a7->left;
            v54 = a7->right;
            if ( a7->left < v54 && left >= 0 && v54 <= (int)v93.Width )
            {
              top = a7->top;
              bottom = a7->bottom;
              if ( top < bottom && top >= 0 && bottom <= (int)v93.Height )
              {
                v57 = 0LL;
                if ( a8 )
                {
                  while ( 1 )
                  {
                    v58 = &v88[(unsigned int)v57];
                    v59 = v58->right;
                    if ( v58->left >= v59 )
                      break;
                    if ( v58->left < left )
                      break;
                    if ( v59 > v54 )
                      break;
                    v60 = v58->top;
                    v61 = v58->bottom;
                    if ( v60 >= v61 || v60 < top || v61 > bottom )
                      break;
                    v57 = (unsigned int)(v57 + 1);
                    if ( (unsigned int)v57 >= a8 )
                      goto LABEL_57;
                  }
                  v65 = WdLogNewEntry5_WdError(v57);
                  *(_QWORD *)(v65 + 24) = 7005LL;
                  goto LABEL_85;
                }
LABEL_57:
                v87 = 0LL;
                v62 = *((_QWORD *)this + 45);
                if ( !v62 )
                  goto LABEL_64;
                v63 = *((_DWORD *)this + 92);
                v64 = 0LL;
                if ( !v63 )
                  goto LABEL_64;
                while ( !*(_QWORD *)(v62 + 8 * v64) )
                {
                  v64 = (unsigned int)(v64 + 1);
                  if ( (unsigned int)v64 >= v63 )
                    goto LABEL_64;
                }
                v87 = *(struct _VIDMM_DMA_BUFFER **)(v62 + 8 * v64);
                *(_QWORD *)(v62 + 8 * v64) = 0LL;
                if ( !v87 )
                {
LABEL_64:
                  v66 = DXGCONTEXT::AcquireDmaBuffer(this, &v87, v90, 1);
                  v21 = v66;
                  if ( v66 < 0 )
                  {
                    v37 = (_QWORD *)WdLogNewEntry5_WdError(v67);
                    v37[3] = v21;
                    goto LABEL_28;
                  }
                }
                memset(&v96, 0, sizeof(v96));
                v68 = *a7;
                v69 = *a6;
                v96.Flags.Value |= 1u;
                v91[0] = 0LL;
                v96.pDstSubRects = v88;
                v70 = *((_QWORD *)this + 2);
                v96.DstRect = v68;
                v96.SubRectCnt = a8;
                v96.SrcRect = v69;
                v91[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v70 + 16);
                CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v91);
                v72 = v91[0];
                if ( !v91[0] )
                {
                  v73 = WdLogNewEntry5_WdLowResource(v71);
                  *(_QWORD *)(v73 + 24) = 7049LL;
                  WdLogEvent5_WdLowResource(v73);
                  LODWORD(v21) = -1073741801;
LABEL_82:
                  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v91);
                  goto LABEL_86;
                }
                v74 = *(_DWORD *)v91[0] | 0x10000;
                *(_DWORD *)v91[0] = v74;
                v75 = *(_DWORD *)(*((_QWORD *)v85 + 6) + 4LL);
                if ( (v75 & 2) != 0
                  || (v75 & 1) != 0
                  || (v76 = *(_DWORD *)(*((_QWORD *)v86 + 6) + 4LL), (v76 & 2) != 0)
                  || (v76 & 1) != 0 )
                {
                  v74 |= 1u;
                  *(_DWORD *)v72 = v74;
                }
                *(_DWORD *)v72 = v74 | 0x120;
                memset(v95, 0, 0x5F8uLL);
                if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
                {
                  v77 = 0LL;
                  v78 = (DXGCONTEXT *)*((_QWORD *)this + 50);
                  if ( v78 != (DXGCONTEXT *)((char *)this + 400) )
                    v77 = (const RECT *)*((_QWORD *)this + 50);
                  v88 = v77;
                  if ( !v77 )
                  {
                    v79 = WdLogNewEntry5_WdError(v78);
                    *(_QWORD *)(v79 + 24) = this;
                    WdLogEvent5_WdError(v79);
                    LODWORD(v21) = -1073741823;
                    goto LABEL_82;
                  }
                  v95[188] = &v88;
                }
                v80 = DXGCONTEXT::SubmitPresent(
                        this,
                        0LL,
                        (const struct DXGK_PRESENT_PARAMS *)v95,
                        0,
                        v92,
                        0LL,
                        v89,
                        v13,
                        &v96,
                        0LL,
                        v87,
                        v72,
                        v93.Format,
                        (struct _D3DKMT_PRESENT *)v90);
                v82 = v80;
                if ( v80 < 0 )
                {
                  v83 = WdLogNewEntry5_WdError(v81);
                  *(_QWORD *)(v83 + 24) = v82;
                  WdLogEvent5_WdError(v83);
                }
                LODWORD(v21) = v82;
                goto LABEL_82;
              }
            }
            v65 = WdLogNewEntry5_WdError(right);
            *(_QWORD *)(v65 + 24) = 6992LL;
          }
LABEL_85:
          WdLogEvent5_WdError(v65);
          LODWORD(v21) = -1073741811;
          goto LABEL_86;
        }
        v34 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60);
        *(_QWORD *)(v34 + 24) = 316LL;
        WdLogEvent5_WdError(v34);
      }
    }
    v35 = 0LL;
    goto LABEL_23;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v22[3] = v12;
LABEL_13:
  WdLogEvent5_WdError(v22);
LABEL_87:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v86);
  return (unsigned int)v21;
}
