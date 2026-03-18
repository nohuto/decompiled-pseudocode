/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02266C0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00122E8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C013E22C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C013EBDC (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01DEB48 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct _EX_RUNDOWN_REF *v7; // r14
  UINT v9; // r13d
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF *PoolWithTag; // r12
  __int64 v12; // rcx
  UINT v13; // edi
  ULONG_PTR Count; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  int v17; // edi
  struct _EX_RUNDOWN_REF *v18; // r13
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  char *v24; // r14
  char *v25; // r8
  unsigned int v26; // edx
  __int64 v27; // r10
  int v28; // r8d
  UINT v29; // edi
  __int64 *v30; // rdx
  ULONG_PTR v31; // rcx
  bool v32; // al
  __int64 v33; // r8
  char *v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rax
  struct _EX_RUNDOWN_REF *v37; // rcx
  unsigned int v38; // esi
  unsigned int v39; // r13d
  struct _DXGKARG_PRESENT *v40; // r8
  PVOID Ptr; // r9
  ULONG_PTR v42; // rdx
  UINT i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v48; // [rsp+30h] [rbp-1A8h] BYREF
  UINT v49; // [rsp+38h] [rbp-1A0h]
  int v50; // [rsp+3Ch] [rbp-19Ch] BYREF
  unsigned int v51; // [rsp+40h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v52; // [rsp+48h] [rbp-190h]
  unsigned int v53; // [rsp+50h] [rbp-188h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+58h] [rbp-180h]
  UINT v55; // [rsp+60h] [rbp-178h]
  __int64 v56; // [rsp+68h] [rbp-170h] BYREF
  DXGPROCESS *v57; // [rsp+70h] [rbp-168h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+78h] [rbp-160h]
  __int64 v59; // [rsp+80h] [rbp-158h]
  unsigned int v60; // [rsp+88h] [rbp-150h]
  struct DXGALLOCATION *v61; // [rsp+90h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v62; // [rsp+98h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v63[4]; // [rsp+A0h] [rbp-138h] BYREF
  struct _DXGKARG_PRESENT *v64; // [rsp+C0h] [rbp-118h]
  PVOID P; // [rsp+C8h] [rbp-110h]
  _BYTE v66[32]; // [rsp+D0h] [rbp-108h] BYREF
  UINT v67; // [rsp+F0h] [rbp-E8h]
  PVOID v68; // [rsp+100h] [rbp-D8h] BYREF
  char v69; // [rsp+108h] [rbp-D0h] BYREF
  int v70; // [rsp+188h] [rbp-50h]

  v7 = a4;
  v52 = a4;
  v62 = a2;
  v63[3] = this;
  v63[2] = a4;
  v61 = a5;
  v64 = a6;
  v57 = *(DXGPROCESS **)(this[2].Count + 40);
  v9 = a3 + 1;
  v55 = a3 + 1;
  v51 = 0;
  v68 = 0LL;
  v70 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v68, a3 + 1);
  v54 = (struct _EX_RUNDOWN_REF *)v68;
  PoolWithTag = 0LL;
  P = 0LL;
  v67 = 0;
  if ( v9 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v66;
    P = v66;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    P = PoolWithTag;
  }
  v67 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v9);
    PoolWithTag = (struct _EX_RUNDOWN_REF *)P;
  }
LABEL_7:
  v63[1] = PoolWithTag;
  if ( v54 && PoolWithTag )
  {
    if ( *(_QWORD *)(this[2].Count + 1728) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL)
      || DXGPROCESS::IsRemoteConnection(v57) )
    {
      *((_DWORD *)a7 + 31) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 37) = v9;
    v12 = *((_BYTE *)a7 + 356) != 0 ? 0x48 : 0;
    *(_DWORD *)((char *)a7 + v12 + 488) = *(_DWORD *)((_BYTE *)a7 + v12 + 488) & 0xFFFFFC00 | 1;
    v13 = 0;
    while ( 1 )
    {
      v49 = v13;
      if ( v13 >= v9 )
        break;
      v59 = v13;
      Count = v7[v13].Count;
      v15 = *(_DWORD *)(Count + 392);
      v53 = v15;
      v48 = 0LL;
      if ( !*(_BYTE *)(Count + 430) )
      {
        v16 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v16 + 24) = 7876LL;
LABEL_16:
        WdLogEvent5_WdError(v16);
        v17 = -1073741811;
        goto LABEL_17;
      }
      if ( v13 )
      {
        if ( v15 <= *(_DWORD *)(v7[v13 - 1].Count + 392) )
        {
          v16 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v16 + 24) = 7892LL;
          goto LABEL_16;
        }
        v19 = &v62->BroadcastSrcAllocation[v13 - 1];
        if ( v19 + 1 < v19 || (unsigned __int64)(v19 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v60 = *v19;
        v20 = v60;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v57,
                                                    (DXGALLOCATIONREFERENCE *)v63,
                                                    v60);
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v48, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v63);
        v18 = v48;
        if ( !v48 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v23[3] = v20;
          v17 = -1073741811;
          v23[4] = -1073741811LL;
          goto LABEL_27;
        }
        v12 = *(_QWORD *)(this[2].Count + 16);
        if ( *(_QWORD *)(*(_QWORD *)(v48[1].Count + 16) + 16LL) != *(_QWORD *)(v12 + 16) )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v23[3] = this[2].Count;
          v23[4] = v18;
          v17 = -1073741811;
          v23[5] = -1073741811LL;
LABEL_27:
          WdLogEvent5_WdError(v23);
LABEL_17:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v48);
          goto LABEL_67;
        }
        v13 = v49;
        v15 = v53;
      }
      else
      {
        v18 = (struct _EX_RUNDOWN_REF *)v61;
      }
      if ( ((LODWORD(v18[9].Count) >> 12) & 0x3F) != v15 )
      {
        v16 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v16 + 24) = v18;
        goto LABEL_16;
      }
      v24 = (char *)a7 + 560;
      if ( *((_BYTE *)a7 + 356) )
        v25 = &v24[64 * (unsigned __int64)(v13 * *((_DWORD *)a7 + 141))
                 + 48
                 + *((_DWORD *)a7 + 141) * ((8 * *((_DWORD *)a7 + 142) + 191) & 0xFFFFFFF8)];
      else
        v25 = (char *)a7 + 496;
      v58 = (struct _EX_RUNDOWN_REF *)v25;
      v17 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                 + 544LL)
                                                                     + 8LL)
                                                         + 408LL))(
              *(_QWORD *)(this[2].Count + 648),
              v18[3].Count);
      if ( v17 < 0 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v48);
        goto LABEL_66;
      }
      v26 = v51;
      PoolWithTag[v51] = (struct _EX_RUNDOWN_REF)v58->Count;
      v51 = v26 + 1;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
      {
        v28 = 0xFFFF;
        v50 = 0xFFFF;
        v56 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v27 + 544) + 8LL) + 216LL))(
          *(_QWORD *)(v27 + 552),
          *(_QWORD *)(v18[6].Count + 8),
          &v50,
          &v56);
        v28 = v50;
      }
      v29 = v49;
      if ( *((_BYTE *)a7 + 356) )
        *(_WORD *)&v24[64 * (unsigned __int64)(v49 * *((_DWORD *)a7 + 141))
                     + 32
                     + *((_DWORD *)a7 + 141) * ((8 * *((_DWORD *)a7 + 142) + 191) & 0xFFFFFFF8)] = v28;
      else
        *((_DWORD *)a7 + 137) ^= (*((_DWORD *)a7 + 137) ^ (v28 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 356) )
        v30 = (__int64 *)&v24[64 * (unsigned __int64)(v29 * *((_DWORD *)a7 + 141))
                            + 40
                            + *((_DWORD *)a7 + 141) * ((8 * *((_DWORD *)a7 + 142) + 191) & 0xFFFFFFF8)];
      else
        v30 = (__int64 *)((char *)a7 + 512);
      *v30 = v56;
      v31 = v18[5].Count;
      if ( v31 )
        v32 = (*(_DWORD *)(v31 + 4) & 8) != 0;
      else
        v32 = 0;
      if ( v32 )
        v33 = *(_QWORD *)(*(_QWORD *)(v31 + 56) + 176LL);
      else
        v33 = 0LL;
      if ( *((_BYTE *)a7 + 356) )
        *(_QWORD *)((char *)a7
                  + 64 * (unsigned __int64)(v29 * *((_DWORD *)a7 + 141))
                  + *((_DWORD *)a7 + 141) * ((8 * *((_DWORD *)a7 + 142) + 191) & 0xFFFFFFF8)
                  + 616) = v33;
      else
        *((_QWORD *)a7 + 71) = v33;
      if ( *((_BYTE *)a7 + 356) )
        v34 = &v24[64 * (unsigned __int64)(v29 * *((_DWORD *)a7 + 141))
                 + 24
                 + *((_DWORD *)a7 + 141) * ((8 * *((_DWORD *)a7 + 142) + 191) & 0xFFFFFFF8)];
      else
        v34 = (char *)a7 + 504;
      *(_QWORD *)v34 = *(_QWORD *)(v18[6].Count + 16);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2474LL) )
      {
        v33 = *(_QWORD *)(v52[v59].Count + 184);
        if ( *((_BYTE *)a7 + 356) )
          v24 = (char *)a7
              + 64 * (unsigned __int64)(v29 * *((_DWORD *)a7 + 141))
              + *((_DWORD *)a7 + 141) * ((8 * *((_DWORD *)a7 + 142) + 191) & 0xFFFFFFF8)
              + 576;
        *(_QWORD *)v24 = v33;
      }
      if ( *((_BYTE *)a7 + 356) )
        *((_DWORD *)a7 + 150) = -1;
      v35 = 4 * v59;
      v54[4 * v59] = v18[4];
      LOBYTE(v33) = HIBYTE(this[53].Ptr);
      v36 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 248LL))(
              *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 552LL),
              v18[3].Count,
              v33,
              v53);
      v37 = v54;
      v54[v35 + 1].Count = v36;
      v37[v35 + 2].Count = v56;
      LOWORD(v37[v35 + 3].Count) = v50;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v48);
      v13 = v29 + 1;
      v9 = v55;
      v7 = v52;
    }
    v40 = v64;
    v64->NumSrcAllocations = v9;
    v40->pAllocationList = (DXGK_ALLOCATIONLIST *)v54;
    Ptr = 0LL;
    v42 = this[2].Count;
    if ( (v40->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 2474LL) )
      Ptr = this[23].Ptr;
    v17 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v42 + 16), Ptr, (const GUID *)v40);
    if ( v17 >= 0 )
    {
      for ( i = 0; i < v9; ++i )
      {
        CurrentThread = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(v52[i].Count + 448) != CurrentThread )
        {
          v45 = WdLogNewEntry5_WdAssertion(CurrentThread);
          *(_QWORD *)(v45 + 24) = 8062LL;
          WdLogEvent5_WdAssertion(v45);
        }
        if ( (HIDWORD(this[49].Ptr) & 0x10) != 0 )
          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)this, 0LL, 0, a7);
        v17 = DXGCONTEXT::SubmitCommandToImplicitQueue((DXGCONTEXT *)v52[i].Count, a7);
        if ( v17 < 0 )
          break;
        *(_DWORD *)a7 &= ~0x800u;
      }
LABEL_66:
      v7 = v52;
    }
  }
  else
  {
    v46 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v46 + 24) = 7836LL;
    WdLogEvent5_WdLowResource(v46);
    v17 = -1073741801;
  }
LABEL_67:
  if ( v17 < 0 )
  {
    v38 = 0;
    v39 = v51;
    while ( v38 < v39 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 424LL))(
        *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 552LL),
        (unsigned int)(1 << *(_DWORD *)(v7[v38].Count + 392)),
        PoolWithTag[v38].Count,
        0LL);
      ++v38;
    }
  }
  if ( P != v66 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v67 = 0;
  if ( v68 != &v69 && v68 )
    ExFreePoolWithTag(v68, 0);
  return (unsigned int)v17;
}
