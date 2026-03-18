/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C023F690
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F2F4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0006B3C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C022F088 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct _KTHREAD **a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  char *v7; // r14
  char *v8; // rax
  struct _KTHREAD *v9; // rsi
  __int64 Current; // rax
  __int64 v11; // r9
  DXGDEVICE *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KTHREAD *v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // rdx
  struct _EX_RUNDOWN_REF *v27; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int64 v31; // rdx
  D3DKMT_HANDLE AllocationHandle; // r8d
  __int64 v34; // rax
  struct _KTHREAD *v35; // r9
  int v36; // edx
  __int64 v37; // r14
  __int64 v38; // r8
  int v39; // eax
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  struct _KTHREAD *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  ULONG_PTR v48; // rcx
  __int64 v49; // rax
  ULONG_PTR v50; // rdx
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  struct _KTHREAD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // rdx
  ULONG_PTR v58; // rcx
  __int64 v59; // rax
  struct _KTHREAD *v60; // r9
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct _EX_RUNDOWN_REF *v64; // rdx
  __int64 v65; // rdx
  struct _EX_RUNDOWN_REF *v66; // rbx
  ULONG_PTR v67; // rdx
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  __int64 v70; // rdx
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v72; // rax
  struct _KTHREAD *v73; // r9
  int v74; // edx
  __int64 v75; // r15
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  ULONG_PTR v82; // r14
  int v83; // eax
  unsigned __int64 v84; // r14
  __int64 v85; // rax
  struct _KTHREAD *v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r14
  __int64 v89; // rax
  __int64 v90; // rdx
  ULONG_PTR v91; // rcx
  struct _EX_RUNDOWN_REF *v92; // [rsp+30h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v93; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+40h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v95; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v96[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v97[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v98[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v99[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v100[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v101[72]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v102[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v103[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v104[72]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v105[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v106[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v107[88]; // [rsp+1F8h] [rbp+F8h] BYREF

  LODWORD(v5) = 0;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    LODWORD(v5) = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return (unsigned int)v5;
  }
  if ( a1->Evict.AllocationHandle )
  {
    v93 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v98, a2);
    v20 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *((_DWORD *)a2 + 56) )
    {
      v21 = a2[26];
      v22 = *((_DWORD *)v21 + 4 * v20 + 2);
      if ( ((a1->Evict.AllocationHandle >> 25) & 0x60) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v23 = v22 & 0x1F;
        if ( (_BYTE)v23 == 5 )
        {
          v25 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v21 + 2 * (unsigned int)v20);
          goto LABEL_24;
        }
        v24 = WdLogNewEntry5_WdError(v23, (a1->Evict.AllocationHandle >> 25) & 0x60, 2LL * (unsigned int)v20);
        *(_QWORD *)(v24 + 24) = 267LL;
        WdLogEvent5_WdError(v24);
      }
    }
    v25 = 0LL;
LABEL_24:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v93, &v95);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95, v26);
    v27 = v93;
    if ( v93 )
    {
      Count = v93[1].Count;
      if ( Count )
      {
        if ( (v93[9].Count & 0x40000) != 0 )
        {
          LODWORD(v5) = -1073741637;
          goto LABEL_33;
        }
        _m_prefetchw((const void *)(Count + 64));
        v29 = *(_QWORD *)(Count + 64);
        while ( v29 )
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v29 + 1, v29);
          if ( v30 == v29 )
          {
            AllocationHandle = a1->Evict.AllocationHandle;
            v34 = (AllocationHandle >> 6) & 0xFFFFFF;
            if ( (unsigned int)v34 < *((_DWORD *)a2 + 56) )
            {
              v35 = a2[26];
              v36 = *((_DWORD *)v35 + 4 * v34 + 2);
              if ( ((AllocationHandle >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v34 + 8) & 0x60)
                && (v36 & 0x2000) == 0
                && (v36 & 0x1F) != 0 )
              {
                *((_DWORD *)v35 + 4 * (((unsigned __int64)AllocationHandle >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
            v37 = *(_QWORD *)(v27[1].Count + 16);
            if ( v37 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS(
                (COREADAPTERACCESS *)v102,
                *(struct DXGADAPTER *const *)(v37 + 16),
                0LL);
              v39 = COREADAPTERACCESS::AcquireShared((__int64)v102, 0xFFFFFFFFLL, v38);
              v5 = v39;
              if ( v39 < 0 )
              {
                v40 = a1->Evict.AllocationHandle;
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 23));
                v41 = ((unsigned int)v40 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v41 < *((_DWORD *)a2 + 56) )
                {
                  v42 = a2[26];
                  v43 = ((unsigned int)v40 >> 25) & 0x60;
                  if ( (((unsigned int)v40 >> 25) & 0x60) == (*((_BYTE *)v42 + 16 * v41 + 8) & 0x60)
                    && (*((_DWORD *)v42 + 4 * v41 + 2) & 0x1F) != 0 )
                  {
                    v44 = 2 * ((v40 >> 6) & 0xFFFFFF);
                    if ( (*((_DWORD *)v42 + 2 * v44 + 2) & 0x2000) == 0 )
                    {
                      v45 = WdLogNewEntry5_WdAssertion(v43, v42);
                      *(_QWORD *)(v45 + 24) = 217LL;
                      WdLogEvent5_WdAssertion(v45);
                      v42 = a2[26];
                    }
                    *((_DWORD *)v42 + 2 * v44 + 2) &= ~0x2000u;
                  }
                }
                a2[24] = 0LL;
                ExReleasePushLockExclusiveEx(a2 + 23, 0LL);
                KeLeaveCriticalRegion();
                v48 = v27[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v48 + 16), (struct DXGDEVICE *)v48);
                v49 = WdLogNewEntry5_WdError(v48, v46, v47);
                *(_QWORD *)(v49 + 24) = v5;
                WdLogEvent5_WdError(v49);
                COREACCESS::~COREACCESS((COREACCESS *)v104);
                COREACCESS::~COREACCESS((COREACCESS *)v103);
                goto LABEL_34;
              }
              v50 = v27[1].Count;
              if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL) + 2452LL) < 2000 )
                (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v37 + 544) + 8LL)
                                                                          + 720LL))(
                  *(_QWORD *)(v37 + 552),
                  v93[3].Count,
                  0LL,
                  0LL);
              else
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(v37 + 544) + 8LL)
                                                                                           + 872LL))(
                                *(_QWORD *)(v37 + 552),
                                *(_QWORD *)(v50 + 648),
                                v93[3].Count,
                                0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v104);
              COREACCESS::~COREACCESS((COREACCESS *)v103);
            }
            v51 = a1->Evict.AllocationHandle;
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 23));
            v52 = ((unsigned int)v51 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v52 < *((_DWORD *)a2 + 56) )
            {
              v53 = a2[26];
              v54 = ((unsigned int)v51 >> 25) & 0x60;
              if ( (((unsigned int)v51 >> 25) & 0x60) == (*((_BYTE *)v53 + 16 * v52 + 8) & 0x60)
                && (*((_DWORD *)v53 + 4 * v52 + 2) & 0x1F) != 0 )
              {
                v55 = 2 * ((v51 >> 6) & 0xFFFFFF);
                if ( (*((_DWORD *)v53 + 2 * v55 + 2) & 0x2000) == 0 )
                {
                  v56 = WdLogNewEntry5_WdAssertion(v54, v53);
                  *(_QWORD *)(v56 + 24) = 217LL;
                  WdLogEvent5_WdAssertion(v56);
                  v53 = a2[26];
                }
                *((_DWORD *)v53 + 2 * v55 + 2) &= ~0x2000u;
              }
            }
            a2[24] = 0LL;
            ExReleasePushLockExclusiveEx(a2 + 23, 0LL);
            KeLeaveCriticalRegion();
            v58 = v27[1].Count;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v58 + 16), (struct DXGDEVICE *)v58);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v57);
            if ( !a1->SetFault.Value )
              return (unsigned int)v5;
            goto LABEL_65;
          }
        }
      }
    }
    LODWORD(v5) = -1073741811;
LABEL_33:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
LABEL_34:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v31);
    return (unsigned int)v5;
  }
  if ( !a1->SetFault.Value )
  {
    v7 = (char *)(a2 + 20);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v8 = (char *)(a2 + 31);
    v9 = a2[31];
    v96[0] = v8;
    while ( 1 )
    {
      v96[1] = v9;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v96);
      v12 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1749) & 1) == 0 )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v105, Current, 0, v11, 0);
        v13 = COREDEVICEACCESS::AcquireShared((__int64)v105, 0xFFFFFFFF, 0LL);
        v5 = v13;
        if ( v13 < 0
          || ((v17 = (_QWORD *)*((_QWORD *)v12 + 2), *(int *)(v17[2] + 2452LL) < 2000)
            ? (v18 = DXGDEVICE::EvictAllAllocations(v12, v14))
            : (v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v17[68] + 8LL) + 872LL))(
                       v17[69],
                       *((_QWORD *)v12 + 81),
                       0LL,
                       0LL)),
              v5 = v18,
              v18 < 0) )
        {
          v19 = WdLogNewEntry5_WdError(v15, v14, v16);
          *(_QWORD *)(v19 + 24) = v5;
          WdLogEvent5_WdError(v19);
          COREACCESS::~COREACCESS((COREACCESS *)v107);
          COREACCESS::~COREACCESS((COREACCESS *)v106);
          break;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v107);
        COREACCESS::~COREACCESS((COREACCESS *)v106);
      }
      v9 = *(struct _KTHREAD **)v9;
    }
    *((_QWORD *)v7 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v5;
  }
LABEL_65:
  v92 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v97, a2);
  v59 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
  if ( (unsigned int)v59 >= *((_DWORD *)a2 + 56) )
    goto LABEL_71;
  v60 = a2[26];
  v61 = *((_DWORD *)v60 + 4 * v59 + 2);
  if ( ((a1->SetFault.Value >> 25) & 0x60) != (*((_BYTE *)v60 + 16 * v59 + 8) & 0x60)
    || (v61 & 0x2000) != 0
    || (v61 & 0x1F) == 0 )
  {
    goto LABEL_71;
  }
  v62 = v61 & 0x1F;
  if ( (_BYTE)v62 != 4 )
  {
    v63 = WdLogNewEntry5_WdError(v62, (a1->SetFault.Value >> 25) & 0x60, 2LL * (unsigned int)v59);
    *(_QWORD *)(v63 + 24) = 267LL;
    WdLogEvent5_WdError(v63);
LABEL_71:
    v64 = 0LL;
    goto LABEL_72;
  }
  v64 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v60 + 2 * (unsigned int)v59);
LABEL_72:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v94, v64);
  DXGRESOURCEREFERENCE::MoveAssign(&v92, &v94);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v65);
  v66 = v92;
  if ( v92 )
  {
    v67 = v92[1].Count;
    if ( v67 )
    {
      _m_prefetchw((const void *)(v67 + 64));
      v68 = *(_QWORD *)(v67 + 64);
      while ( v68 )
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 64), v68 + 1, v68);
        if ( v69 == v68 )
        {
          Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
          v72 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
          if ( (unsigned int)v72 < *((_DWORD *)a2 + 56) )
          {
            v73 = a2[26];
            v74 = *((_DWORD *)v73 + 4 * v72 + 2);
            if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*((_BYTE *)v73 + 16 * v72 + 8) & 0x60)
              && (v74 & 0x2000) == 0
              && (v74 & 0x1F) != 0 )
            {
              *((_DWORD *)v73 + 4 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
          v75 = *(_QWORD *)(v66[1].Count + 16);
          if ( v75 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v99, *(struct DXGADAPTER *const *)(v75 + 16), 0LL);
            v77 = COREADAPTERACCESS::AcquireShared((__int64)v99, 0xFFFFFFFFLL, v76);
            v5 = v77;
            if ( v77 >= 0 )
            {
              v82 = v92[3].Count;
              if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v66[1].Count + 16) + 16LL) + 2452LL) < 2000 )
              {
                while ( v82 )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v75 + 544) + 8LL)
                                                                         + 720LL))(
                    *(_QWORD *)(v75 + 552),
                    *(_QWORD *)(v82 + 24),
                    0LL,
                    0LL);
                  v82 = *(_QWORD *)(v82 + 64);
                }
              }
              else
              {
                while ( v82 )
                {
                  v83 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v75 + 544)
                                                                                              + 8LL)
                                                                                  + 872LL))(
                          *(_QWORD *)(v75 + 552),
                          *(_QWORD *)(v66[1].Count + 648),
                          *(_QWORD *)(v82 + 24),
                          0LL);
                  v5 = v83;
                  if ( v83 < 0 )
                    goto LABEL_86;
                  v82 = *(_QWORD *)(v82 + 64);
                }
              }
            }
            else
            {
LABEL_86:
              v81 = WdLogNewEntry5_WdError(v79, v78, v80);
              *(_QWORD *)(v81 + 24) = v5;
              WdLogEvent5_WdError(v81);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v101);
            COREACCESS::~COREACCESS((COREACCESS *)v100);
          }
          v84 = a1->SetFault.Value;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 23));
          v85 = ((unsigned int)v84 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v85 < *((_DWORD *)a2 + 56) )
          {
            v86 = a2[26];
            v87 = ((unsigned int)v84 >> 25) & 0x60;
            if ( (((unsigned int)v84 >> 25) & 0x60) == (*((_BYTE *)v86 + 16 * v85 + 8) & 0x60)
              && (*((_DWORD *)v86 + 4 * v85 + 2) & 0x1F) != 0 )
            {
              v88 = 2 * ((v84 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v86 + 2 * v88 + 2) & 0x2000) == 0 )
              {
                v89 = WdLogNewEntry5_WdAssertion(v87, v86);
                *(_QWORD *)(v89 + 24) = 217LL;
                WdLogEvent5_WdAssertion(v89);
                v86 = a2[26];
              }
              *((_DWORD *)v86 + 2 * v88 + 2) &= ~0x2000u;
            }
          }
          a2[24] = 0LL;
          ExReleasePushLockExclusiveEx(a2 + 23, 0LL);
          KeLeaveCriticalRegion();
          v91 = v66[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v91 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v91 + 16), (struct DXGDEVICE *)v91);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v92, v90);
          return (unsigned int)v5;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v92, v70);
  return -1073741811LL;
}
