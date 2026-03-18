/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C020C3A8
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0010DF8 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0038E4C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C01FE780 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct _KTHREAD **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  char *v6; // r14
  char *v7; // rax
  struct _KTHREAD *v8; // rsi
  __int64 Current; // rax
  __int64 v10; // r9
  DXGDEVICE *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _KTHREAD *v18; // r9
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rdx
  struct _EX_RUNDOWN_REF *v23; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  D3DKMT_HANDLE AllocationHandle; // r8d
  __int64 v29; // rax
  struct _KTHREAD *v30; // r9
  int v31; // edx
  __int64 v32; // r14
  int v33; // eax
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  struct _KTHREAD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  ULONG_PTR v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  struct _KTHREAD *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rax
  ULONG_PTR v49; // rcx
  __int64 v50; // rax
  struct _KTHREAD *v51; // r9
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rax
  struct _EX_RUNDOWN_REF *v55; // rdx
  struct _EX_RUNDOWN_REF *v56; // rbx
  ULONG_PTR v57; // rdx
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v61; // rax
  struct _KTHREAD *v62; // r9
  int v63; // edx
  __int64 v64; // r15
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  int DriverVersion; // eax
  ULONG_PTR v69; // r14
  int v70; // eax
  unsigned __int64 v71; // r14
  __int64 v72; // rax
  struct _KTHREAD *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r14
  __int64 v76; // rax
  ULONG_PTR v77; // rcx
  struct _EX_RUNDOWN_REF *v78; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v79[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v80[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v81[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v82[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v83[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v84[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v85[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v86[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v87[40]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v88[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v89[32]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v90[104]; // [rsp+148h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EX_RUNDOWN_REF *v93; // [rsp+1D8h] [rbp+D8h] BYREF

  LODWORD(v4) = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v4;
  }
  if ( a1->Evict.AllocationHandle )
  {
    v92 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v81, a2);
    v17 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *((_DWORD *)a2 + 62) )
    {
      v18 = a2[29];
      v19 = *((_DWORD *)v18 + 4 * v17 + 2);
      if ( ((a1->Evict.AllocationHandle >> 25) & 0x60) == (*((_BYTE *)v18 + 16 * v17 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        v20 = v19 & 0x1F;
        if ( (_BYTE)v20 == 5 )
        {
          v22 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v18 + 2 * (unsigned int)v17);
          goto LABEL_24;
        }
        v21 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v21 + 24) = 316LL;
        WdLogEvent5_WdError(v21);
      }
    }
    v22 = 0LL;
LABEL_24:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93, v22);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v92, (struct DXGALLOCATION **)&v93);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93);
    v23 = v92;
    if ( v92 )
    {
      Count = v92[1].Count;
      if ( Count )
      {
        if ( (v92[9].Count & 0x40000) != 0 )
        {
          LODWORD(v4) = -1073741637;
          goto LABEL_33;
        }
        _m_prefetchw((const void *)(Count + 64));
        v25 = *(_QWORD *)(Count + 64);
        while ( v25 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v25 + 1, v25);
          if ( v26 == v25 )
          {
            AllocationHandle = a1->Evict.AllocationHandle;
            v29 = (AllocationHandle >> 6) & 0xFFFFFF;
            if ( (unsigned int)v29 < *((_DWORD *)a2 + 62) )
            {
              v30 = a2[29];
              v31 = *((_DWORD *)v30 + 4 * v29 + 2);
              if ( ((AllocationHandle >> 25) & 0x60) == (*((_BYTE *)v30 + 16 * v29 + 8) & 0x60)
                && (v31 & 0x2000) == 0
                && (v31 & 0x1F) != 0 )
              {
                *((_DWORD *)v30 + 4 * (((unsigned __int64)AllocationHandle >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v81);
            v32 = *(_QWORD *)(v23[1].Count + 16);
            if ( v32 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS(
                (COREADAPTERACCESS *)v85,
                *(struct DXGADAPTER *const *)(v32 + 16),
                0LL);
              v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v85);
              v4 = v33;
              if ( v33 < 0 )
              {
                v34 = a1->Evict.AllocationHandle;
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 26));
                v35 = ((unsigned int)v34 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v35 < *((_DWORD *)a2 + 62) )
                {
                  v36 = a2[29];
                  v37 = ((unsigned int)v34 >> 25) & 0x60;
                  if ( (((unsigned int)v34 >> 25) & 0x60) == (*((_BYTE *)v36 + 16 * v35 + 8) & 0x60)
                    && (*((_DWORD *)v36 + 4 * v35 + 2) & 0x1F) != 0 )
                  {
                    v38 = 2 * ((v34 >> 6) & 0xFFFFFF);
                    if ( (*((_DWORD *)v36 + 2 * v38 + 2) & 0x2000) == 0 )
                    {
                      v39 = WdLogNewEntry5_WdAssertion(v37);
                      *(_QWORD *)(v39 + 24) = 222LL;
                      WdLogEvent5_WdAssertion(v39);
                      v36 = a2[29];
                    }
                    *((_DWORD *)v36 + 2 * v38 + 2) &= ~0x2000u;
                  }
                }
                a2[27] = 0LL;
                ExReleasePushLockExclusiveEx(a2 + 26, 0LL);
                KeLeaveCriticalRegion();
                v40 = v23[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v40 + 16), (struct DXGDEVICE *)v40);
                v41 = WdLogNewEntry5_WdError(v40);
                *(_QWORD *)(v41 + 24) = v4;
                WdLogEvent5_WdError(v41);
                COREACCESS::~COREACCESS((COREACCESS *)v87);
                COREACCESS::~COREACCESS((COREACCESS *)v86);
                goto LABEL_34;
              }
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v23[1].Count + 16) + 16LL)) < 2000 )
                VIDMM_EXPORT::VidMmEvictAllocation(
                  *(VIDMM_EXPORT **)(v32 + 544),
                  *(struct VIDMM_GLOBAL **)(v32 + 552),
                  (struct _VIDMM_MULTI_ALLOC *)v92[3].Count,
                  0LL,
                  0LL);
              else
                LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(v32 + 544) + 8LL)
                                                                                           + 872LL))(
                                *(_QWORD *)(v32 + 552),
                                *(_QWORD *)(v42 + 648),
                                v92[3].Count,
                                0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v87);
              COREACCESS::~COREACCESS((COREACCESS *)v86);
            }
            v43 = a1->Evict.AllocationHandle;
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 26));
            v44 = ((unsigned int)v43 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v44 < *((_DWORD *)a2 + 62) )
            {
              v45 = a2[29];
              v46 = ((unsigned int)v43 >> 25) & 0x60;
              if ( (((unsigned int)v43 >> 25) & 0x60) == (*((_BYTE *)v45 + 16 * v44 + 8) & 0x60)
                && (*((_DWORD *)v45 + 4 * v44 + 2) & 0x1F) != 0 )
              {
                v47 = 2 * ((v43 >> 6) & 0xFFFFFF);
                if ( (*((_DWORD *)v45 + 2 * v47 + 2) & 0x2000) == 0 )
                {
                  v48 = WdLogNewEntry5_WdAssertion(v46);
                  *(_QWORD *)(v48 + 24) = 222LL;
                  WdLogEvent5_WdAssertion(v48);
                  v45 = a2[29];
                }
                *((_DWORD *)v45 + 2 * v47 + 2) &= ~0x2000u;
              }
            }
            a2[27] = 0LL;
            ExReleasePushLockExclusiveEx(a2 + 26, 0LL);
            KeLeaveCriticalRegion();
            v49 = v23[1].Count;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v49 + 16), (struct DXGDEVICE *)v49);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
            if ( !a1->SetFault.Value )
              return (unsigned int)v4;
            goto LABEL_65;
          }
        }
      }
    }
    LODWORD(v4) = -1073741811;
LABEL_33:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v81);
LABEL_34:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
    return (unsigned int)v4;
  }
  if ( !a1->SetFault.Value )
  {
    v6 = (char *)(a2 + 21);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v7 = (char *)(a2 + 34);
    v8 = a2[34];
    v79[0] = v7;
    while ( 1 )
    {
      v79[1] = v8;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v79);
      v11 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1749) & 1) == 0 )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v88, Current, 0, v10, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v88);
        v4 = v12;
        if ( v12 < 0
          || ((int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL)) < 2000
            ? (v15 = DXGDEVICE::EvictAllAllocations(v11))
            : (v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 544) + 8LL)
                                                                               + 872LL))(
                       *(_QWORD *)(v14 + 552),
                       *((_QWORD *)v11 + 81),
                       0LL,
                       0LL)),
              v4 = v15,
              v15 < 0) )
        {
          v16 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v16 + 24) = v4;
          WdLogEvent5_WdError(v16);
          COREACCESS::~COREACCESS((COREACCESS *)v90);
          COREACCESS::~COREACCESS((COREACCESS *)v89);
          break;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v90);
        COREACCESS::~COREACCESS((COREACCESS *)v89);
      }
      v8 = *(struct _KTHREAD **)v8;
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v4;
  }
LABEL_65:
  v91 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v80, a2);
  v50 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
  if ( (unsigned int)v50 >= *((_DWORD *)a2 + 62) )
    goto LABEL_71;
  v51 = a2[29];
  v52 = *((_DWORD *)v51 + 4 * v50 + 2);
  if ( ((a1->SetFault.Value >> 25) & 0x60) != (*((_BYTE *)v51 + 16 * v50 + 8) & 0x60)
    || (v52 & 0x2000) != 0
    || (v52 & 0x1F) == 0 )
  {
    goto LABEL_71;
  }
  v53 = v52 & 0x1F;
  if ( (_BYTE)v53 != 4 )
  {
    v54 = WdLogNewEntry5_WdError(v53);
    *(_QWORD *)(v54 + 24) = 316LL;
    WdLogEvent5_WdError(v54);
LABEL_71:
    v55 = 0LL;
    goto LABEL_72;
  }
  v55 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v51 + 2 * (unsigned int)v50);
LABEL_72:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v78, v55);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v91, (struct DXGRESOURCE **)&v78);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v78);
  v56 = v91;
  if ( v91 )
  {
    v57 = v91[1].Count;
    if ( v57 )
    {
      _m_prefetchw((const void *)(v57 + 64));
      v58 = *(_QWORD *)(v57 + 64);
      while ( v58 )
      {
        v59 = v58;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 64), v58 + 1, v58);
        if ( v59 == v58 )
        {
          Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
          v61 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
          if ( (unsigned int)v61 < *((_DWORD *)a2 + 62) )
          {
            v62 = a2[29];
            v63 = *((_DWORD *)v62 + 4 * v61 + 2);
            if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*((_BYTE *)v62 + 16 * v61 + 8) & 0x60)
              && (v63 & 0x2000) == 0
              && (v63 & 0x1F) != 0 )
            {
              *((_DWORD *)v62 + 4 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v80);
          v64 = *(_QWORD *)(v56[1].Count + 16);
          if ( v64 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, *(struct DXGADAPTER *const *)(v64 + 16), 0LL);
            v65 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82);
            v4 = v65;
            if ( v65 >= 0 )
            {
              DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v56[1].Count + 16) + 16LL));
              v69 = v91[3].Count;
              if ( DriverVersion < 2000 )
              {
                while ( v69 )
                {
                  VIDMM_EXPORT::VidMmEvictAllocation(
                    *(VIDMM_EXPORT **)(v64 + 544),
                    *(struct VIDMM_GLOBAL **)(v64 + 552),
                    *(struct _VIDMM_MULTI_ALLOC **)(v69 + 24),
                    0LL,
                    0LL);
                  v69 = *(_QWORD *)(v69 + 64);
                }
              }
              else
              {
                while ( v69 )
                {
                  v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v64 + 544)
                                                                                              + 8LL)
                                                                                  + 872LL))(
                          *(_QWORD *)(v64 + 552),
                          *(_QWORD *)(v56[1].Count + 648),
                          *(_QWORD *)(v69 + 24),
                          0LL);
                  v4 = v70;
                  if ( v70 < 0 )
                    goto LABEL_86;
                  v69 = *(_QWORD *)(v69 + 64);
                }
              }
            }
            else
            {
LABEL_86:
              v67 = WdLogNewEntry5_WdError(v66);
              *(_QWORD *)(v67 + 24) = v4;
              WdLogEvent5_WdError(v67);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v84);
            COREACCESS::~COREACCESS((COREACCESS *)v83);
          }
          v71 = a1->SetFault.Value;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 26));
          v72 = ((unsigned int)v71 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v72 < *((_DWORD *)a2 + 62) )
          {
            v73 = a2[29];
            v74 = ((unsigned int)v71 >> 25) & 0x60;
            if ( (((unsigned int)v71 >> 25) & 0x60) == (*((_BYTE *)v73 + 16 * v72 + 8) & 0x60)
              && (*((_DWORD *)v73 + 4 * v72 + 2) & 0x1F) != 0 )
            {
              v75 = 2 * ((v71 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v73 + 2 * v75 + 2) & 0x2000) == 0 )
              {
                v76 = WdLogNewEntry5_WdAssertion(v74);
                *(_QWORD *)(v76 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v76);
                v73 = a2[29];
              }
              *((_DWORD *)v73 + 2 * v75 + 2) &= ~0x2000u;
            }
          }
          a2[27] = 0LL;
          ExReleasePushLockExclusiveEx(a2 + 26, 0LL);
          KeLeaveCriticalRegion();
          v77 = v56[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v77 + 16), (struct DXGDEVICE *)v77);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v91);
          return (unsigned int)v4;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v80);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v91);
  return -1073741811LL;
}
