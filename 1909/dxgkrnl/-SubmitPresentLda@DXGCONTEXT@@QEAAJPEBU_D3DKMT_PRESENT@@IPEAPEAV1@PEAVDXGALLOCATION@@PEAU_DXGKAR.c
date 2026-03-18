/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C025B6CC
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0152D64 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C0154934 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C020E280 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
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
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *PoolWithTag; // r12
  ULONG_PTR Count; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  UINT v18; // edi
  ULONG_PTR v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // edi
  struct _EX_RUNDOWN_REF *v24; // r13
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  __int64 v27; // rdi
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  char *v34; // r14
  char *v35; // r8
  __int64 v36; // rdx
  unsigned int v37; // edx
  __int64 v38; // r10
  int v39; // r8d
  UINT v40; // edi
  __int64 *v41; // rdx
  ULONG_PTR v42; // rcx
  bool v43; // al
  __int64 v44; // r8
  char *v45; // rdx
  char *v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rcx
  __int64 v50; // rdx
  unsigned int v51; // esi
  unsigned int v52; // r13d
  struct _DXGKARG_PRESENT *v53; // r8
  PVOID Ptr; // r9
  ULONG_PTR v55; // rdx
  __int64 v56; // rdx
  UINT i; // r14d
  struct _KTHREAD **v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  struct _EX_RUNDOWN_REF *v62; // [rsp+30h] [rbp-1A8h] BYREF
  UINT v63; // [rsp+38h] [rbp-1A0h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+40h] [rbp-198h]
  int v65; // [rsp+48h] [rbp-190h] BYREF
  unsigned int v66; // [rsp+4Ch] [rbp-18Ch]
  unsigned int v67; // [rsp+50h] [rbp-188h]
  __int64 v68; // [rsp+58h] [rbp-180h] BYREF
  struct _EX_RUNDOWN_REF *v69; // [rsp+60h] [rbp-178h]
  UINT v70; // [rsp+68h] [rbp-170h]
  DXGPROCESS *v71; // [rsp+70h] [rbp-168h]
  struct _EX_RUNDOWN_REF *v72; // [rsp+78h] [rbp-160h]
  __int64 v73; // [rsp+80h] [rbp-158h]
  unsigned int v74; // [rsp+88h] [rbp-150h]
  struct DXGALLOCATION *v75; // [rsp+90h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v76; // [rsp+98h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v77[4]; // [rsp+A0h] [rbp-138h] BYREF
  struct _DXGKARG_PRESENT *v78; // [rsp+C0h] [rbp-118h]
  PVOID P; // [rsp+C8h] [rbp-110h]
  _BYTE v80[32]; // [rsp+D0h] [rbp-108h] BYREF
  UINT v81; // [rsp+F0h] [rbp-E8h]
  PVOID v82; // [rsp+100h] [rbp-D8h] BYREF
  char v83; // [rsp+108h] [rbp-D0h] BYREF
  int v84; // [rsp+188h] [rbp-50h]

  v7 = a4;
  v64 = a4;
  v76 = a2;
  v77[3] = this;
  v77[2] = a4;
  v75 = a5;
  v78 = a6;
  v71 = *(DXGPROCESS **)(this[2].Count + 40);
  v9 = a3 + 1;
  v70 = a3 + 1;
  v66 = 0;
  v82 = 0LL;
  v84 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v82, a3 + 1);
  v69 = (struct _EX_RUNDOWN_REF *)v82;
  PoolWithTag = 0LL;
  P = 0LL;
  v81 = 0;
  if ( v9 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v80;
    P = v80;
  }
  else
  {
    v10 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    P = PoolWithTag;
  }
  v81 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v9);
    PoolWithTag = (struct _EX_RUNDOWN_REF *)P;
  }
LABEL_7:
  v77[1] = PoolWithTag;
  if ( v69 && PoolWithTag )
  {
    Count = this[2].Count;
    v16 = *(_QWORD *)(Count + 1728);
    if ( v16 != *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) || DXGPROCESS::IsRemoteConnection(v71) )
      *((_DWORD *)a7 + 31) = 0;
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 37) = v9;
    v17 = *((_BYTE *)a7 + 356) != 0 ? 0x40 : 0;
    *(_DWORD *)((char *)a7 + v17 + 488) = *(_DWORD *)((_BYTE *)a7 + v17 + 488) & 0xFFFFFC00 | 1;
    v18 = 0;
    while ( 1 )
    {
      v63 = v18;
      if ( v18 >= v9 )
        break;
      v73 = v18;
      v19 = v7[v18].Count;
      v20 = *(unsigned int *)(v19 + 408);
      v67 = *(_DWORD *)(v19 + 408);
      v62 = 0LL;
      if ( !*(_BYTE *)(v19 + 446) )
      {
        v21 = WdLogNewEntry5_WdError(v17, v16, v20);
        *(_QWORD *)(v21 + 24) = 8041LL;
LABEL_16:
        WdLogEvent5_WdError(v21);
        v23 = -1073741811;
        goto LABEL_17;
      }
      if ( v18 )
      {
        v25 = v18 - 1;
        if ( (unsigned int)v20 <= *(_DWORD *)(v7[v25].Count + 408) )
        {
          v21 = WdLogNewEntry5_WdError(v17, v25, v20);
          *(_QWORD *)(v21 + 24) = 8057LL;
          goto LABEL_16;
        }
        v26 = &v76->BroadcastSrcAllocation[v25];
        if ( v26 + 1 < v26 || (unsigned __int64)(v26 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v74 = *v26;
        v27 = v74;
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v71,
                                                      (DXGALLOCATIONREFERENCE *)v77,
                                                      v74);
        DXGALLOCATIONREFERENCE::MoveAssign(&v62, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v77, v29);
        v24 = v62;
        if ( !v62 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
          v33[3] = v27;
          v23 = -1073741811;
          v33[4] = -1073741811LL;
          goto LABEL_27;
        }
        v16 = *(_QWORD *)(v62[1].Count + 16);
        v17 = *(_QWORD *)(this[2].Count + 16);
        if ( *(_QWORD *)(v16 + 16) != *(_QWORD *)(v17 + 16) )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v32);
          v33[3] = this[2].Count;
          v33[4] = v24;
          v23 = -1073741811;
          v33[5] = -1073741811LL;
LABEL_27:
          WdLogEvent5_WdError(v33);
LABEL_17:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62, v22);
          goto LABEL_68;
        }
        v18 = v63;
        v20 = v67;
      }
      else
      {
        v24 = (struct _EX_RUNDOWN_REF *)v75;
      }
      if ( ((LODWORD(v24[9].Count) >> 12) & 0x3F) != (_DWORD)v20 )
      {
        v21 = WdLogNewEntry5_WdError(v17, v16, v20);
        *(_QWORD *)(v21 + 24) = v24;
        goto LABEL_16;
      }
      v34 = (char *)a7 + 552;
      if ( *((_BYTE *)a7 + 356) )
        v35 = &v34[64 * (unsigned __int64)(v18 * *((_DWORD *)a7 + 139))
                 + 48
                 + *((_DWORD *)a7 + 139) * ((8 * *((_DWORD *)a7 + 140) + 191) & 0xFFFFFFF8)];
      else
        v35 = (char *)a7 + 496;
      v72 = (struct _EX_RUNDOWN_REF *)v35;
      v23 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                 + 544LL)
                                                                     + 8LL)
                                                         + 408LL))(
              *(_QWORD *)(this[2].Count + 648),
              v24[3].Count);
      if ( v23 < 0 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62, v36);
        goto LABEL_67;
      }
      v37 = v66;
      PoolWithTag[v66] = (struct _EX_RUNDOWN_REF)v72->Count;
      v66 = v37 + 1;
      v68 = 0LL;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
      {
        v39 = 0xFFFF;
        v65 = 0xFFFF;
        v68 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v38 + 544) + 8LL)
                                                                         + 216LL))(
          *(_QWORD *)(v38 + 552),
          *(_QWORD *)(v24[6].Count + 8),
          &v65,
          &v68,
          0LL);
        v39 = v65;
      }
      v40 = v63;
      if ( *((_BYTE *)a7 + 356) )
        *(_WORD *)&v34[64 * (unsigned __int64)(v63 * *((_DWORD *)a7 + 139))
                     + 32
                     + *((_DWORD *)a7 + 139) * ((8 * *((_DWORD *)a7 + 140) + 191) & 0xFFFFFFF8)] = v39;
      else
        *((_DWORD *)a7 + 137) ^= (*((_DWORD *)a7 + 137) ^ (v39 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 356) )
        v41 = (__int64 *)&v34[64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 139))
                            + 40
                            + *((_DWORD *)a7 + 139) * ((8 * *((_DWORD *)a7 + 140) + 191) & 0xFFFFFFF8)];
      else
        v41 = (__int64 *)((char *)a7 + 512);
      *v41 = v68;
      v42 = v24[5].Count;
      if ( v42 )
        v43 = (*(_DWORD *)(v42 + 4) & 8) != 0;
      else
        v43 = 0;
      if ( v43 )
        v44 = *(_QWORD *)(*(_QWORD *)(v42 + 56) + 176LL);
      else
        v44 = 0LL;
      if ( *((_BYTE *)a7 + 356) )
        *(_QWORD *)((char *)a7
                  + 64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 139))
                  + *((_DWORD *)a7 + 139) * ((8 * *((_DWORD *)a7 + 140) + 191) & 0xFFFFFFF8)
                  + 608) = v44;
      else
        *((_QWORD *)a7 + 71) = v44;
      if ( *((_BYTE *)a7 + 356) )
        v45 = &v34[64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 139))
                 + 24
                 + *((_DWORD *)a7 + 139) * ((8 * *((_DWORD *)a7 + 140) + 191) & 0xFFFFFFF8)];
      else
        v45 = (char *)a7 + 504;
      *(_QWORD *)v45 = *(_QWORD *)(v24[6].Count + 16);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2506LL) )
      {
        v44 = *(_QWORD *)(v64[v73].Count + 184);
        if ( *((_BYTE *)a7 + 356) )
          v46 = &v34[64 * (unsigned __int64)(v40 * *((_DWORD *)a7 + 139))
                   + 16
                   + *((_DWORD *)a7 + 139) * ((8 * *((_DWORD *)a7 + 140) + 191) & 0xFFFFFFF8)];
        else
          v46 = (char *)a7 + 560;
        *(_QWORD *)v46 = v44;
      }
      if ( *((_BYTE *)a7 + 356) )
        *((_DWORD *)a7 + 148) = -1;
      v47 = 4 * v73;
      v69[4 * v73] = v24[4];
      LOBYTE(v44) = HIBYTE(this[55].Ptr);
      v48 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 248LL))(
              *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 552LL),
              v24[3].Count,
              v44,
              v67);
      v49 = v69;
      v69[v47 + 1].Count = v48;
      v49[v47 + 2].Count = v68;
      LOWORD(v49[v47 + 3].Count) = v65;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62, v50);
      v18 = v40 + 1;
      v9 = v70;
      v7 = v64;
    }
    v53 = v78;
    v78->NumSrcAllocations = v9;
    v53->pAllocationList = (DXGK_ALLOCATIONLIST *)v69;
    Ptr = 0LL;
    v55 = this[2].Count;
    if ( (v53->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL) + 2506LL) )
      Ptr = this[23].Ptr;
    v23 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v55 + 16), Ptr, (const GUID *)v53);
    if ( v23 >= 0 )
    {
      for ( i = 0; i < v9; ++i )
      {
        v58 = (struct _KTHREAD **)v64[i].Count;
        if ( v58[58] != KeGetCurrentThread() )
        {
          v59 = WdLogNewEntry5_WdAssertion(v58, v56);
          *(_QWORD *)(v59 + 24) = 8227LL;
          WdLogEvent5_WdAssertion(v59);
          v58 = (struct _KTHREAD **)v64[i].Count;
        }
        if ( (HIDWORD(this[51].Ptr) & 0x10) != 0 )
        {
          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)v58, 0LL, 0, a7, 0);
          v58 = (struct _KTHREAD **)v64[i].Count;
        }
        v23 = DXGCONTEXT::SubmitCommandToImplicitQueue((DXGCONTEXT *)v58, a7);
        if ( v23 < 0 )
          break;
        *(_DWORD *)a7 &= ~0x800u;
      }
LABEL_67:
      v7 = v64;
    }
  }
  else
  {
    v60 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v60 + 24) = 8001LL;
    WdLogEvent5_WdLowResource(v60);
    v23 = -1073741801;
  }
LABEL_68:
  if ( v23 < 0 )
  {
    v51 = 0;
    v52 = v66;
    while ( v51 < v52 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 424LL))(
        *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 552LL),
        (unsigned int)(1 << *(_DWORD *)(v7[v51].Count + 408)),
        PoolWithTag[v51].Count,
        0LL);
      ++v51;
    }
  }
  if ( P != v80 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v81 = 0;
  if ( v82 != &v83 && v82 )
    ExFreePoolWithTag(v82, 0);
  return (unsigned int)v23;
}
