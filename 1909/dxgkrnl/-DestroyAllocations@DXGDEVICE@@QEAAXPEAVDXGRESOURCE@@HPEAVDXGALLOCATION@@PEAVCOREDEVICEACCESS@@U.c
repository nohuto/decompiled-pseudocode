/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E4D14
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00E2C1C (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E3AB4 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F83F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019FE0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00E5684 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5978 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F121C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00F1470 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C0102DEC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C0102E04 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0143010 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0154154 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0224604 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C02539E4 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  PERESOURCE **v8; // r12
  struct DXGALLOCATION *v9; // r13
  struct DXGRESOURCE *v11; // rsi
  DXGADAPTER *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION *v20; // r14
  __int64 v21; // rcx
  unsigned int v22; // edi
  struct DXGPROCESS *v23; // rax
  __int64 v24; // rax
  struct DXGALLOCATION *v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  ADAPTER_RENDER *v30; // rcx
  DXGOVERLAY *i; // rdi
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rdx
  ADAPTER_RENDER *v40; // rcx
  void *v41; // r12
  char v42; // di
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // r8d
  volatile signed __int32 *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct DXGALLOCATION *v57; // rbx
  int v58; // eax
  struct DXGALLOCATION *v59; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  void *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  DXGADAPTERALLOCATION *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  DXGALLOCATION *v71; // rbx
  char v72; // [rsp+40h] [rbp-C0h]
  void **v74; // [rsp+48h] [rbp-B8h]
  void *v75; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_CLOSEALLOCATION v77; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGALLOCATION *v78; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v79; // [rsp+78h] [rbp-88h]
  struct DXGRESOURCE *v80; // [rsp+80h] [rbp-80h] BYREF
  char v81; // [rsp+88h] [rbp-78h]
  _DXGKARG_DESTROYALLOCATION v82; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v83[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGALLOCATION *v84; // [rsp+C0h] [rbp-40h]
  char v85; // [rsp+D0h] [rbp-30h] BYREF

  v6 = *((_QWORD *)this + 2);
  v8 = a5;
  v9 = a4;
  v79 = a4;
  v11 = a2;
  v12 = *(DXGADAPTER **)(v6 + 16);
  v80 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v15 + 24) = 1269LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  if ( ((unsigned __int64)v11 & -(__int64)(a3 != 0)) == 0
    || (v74 = *(void ***)(((unsigned __int64)v11 & -(__int64)(a3 != 0)) + 0x40)) == 0LL )
  {
    v74 = (void **)&v85;
  }
  *(_QWORD *)&v77.NumAllocations = 0LL;
  v77.pOpenHandleList = 0LL;
  if ( v11 && a3 )
  {
    v16 = WdLogNewEntry5_WdTrace((unsigned __int64)v11 & -(__int64)(a3 != 0), v13);
    *(_QWORD *)(v16 + 24) = v11;
    v13 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 40LL);
    *(_QWORD *)(v16 + 32) = v13;
  }
  v72 = 0;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v17 + 185) && a3 && v11 && *((_DWORD *)v11 + 5) )
  {
    v18 = *((_DWORD *)this + 84);
    Current = DXGPROCESS::GetCurrent();
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
      *((_DWORD *)Current + 92),
      v18,
      *((_DWORD *)v11 + 5),
      0,
      0LL,
      a6);
    *((_DWORD *)v11 + 5) = 0;
    v72 = 1;
  }
  v78 = v9;
  v20 = v9;
  if ( v9 )
  {
    do
    {
      v84 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
      v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v21 + 185) )
      {
        if ( !v72 && *((_DWORD *)v20 + 24) )
        {
          v22 = *((_DWORD *)this + 84);
          v23 = DXGPROCESS::GetCurrent();
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
            *((_DWORD *)v23 + 92),
            v22,
            0,
            1u,
            &v78,
            a6);
        }
        *((_DWORD *)v20 + 24) = 0;
      }
      v24 = WdLogNewEntry5_WdTrace(v21, v13);
      *(_QWORD *)(v24 + 24) = v20;
      v26 = *(_QWORD *)(*((_QWORD *)v20 + 1) + 40LL);
      *(_QWORD *)(v24 + 32) = v26;
      v27 = *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL);
      if ( (v27 & 1) != 0 )
      {
        v28 = (v27 >> 6) & 0xF;
        if ( (unsigned int)v28 >= *((_DWORD *)this + 434) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v28, v26);
          *(_QWORD *)(v29 + 24) = 1365LL;
          WdLogEvent5_WdAssertion(v29);
        }
        DXGDEVICE::RemovePrimaryAllocation(this, v20);
      }
      v30 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v20 + 6) + 4LL);
      if ( ((unsigned __int8)v30 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v83, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v83);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 47); i != (DXGDEVICE *)((char *)this + 376) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v20 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v83);
        if ( v83[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v83);
        v8 = a5;
      }
      v32 = *((_QWORD *)v20 + 6);
      v33 = *(_DWORD *)(v32 + 4);
      if ( (v33 & 0x2000) != 0 && *((_QWORD *)v20 + 3) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v33 >> 6) & 0xF, v20);
        v32 = *((_QWORD *)v20 + 6);
      }
      v34 = *(_DWORD *)(v32 + 4);
      if ( (v34 & 0x2000) != 0 || (v34 & 2) != 0 || (v34 & 8) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, (v34 >> 6) & 0xF, v20, v25);
      if ( *((_QWORD *)v20 + 3) && (*((_DWORD *)v20 + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 232LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
        *((_DWORD *)v20 + 18) &= ~0x800u;
      }
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v30, v20, (struct COREDEVICEACCESS *)v8);
      v13 = *((_QWORD *)v20 + 3);
      if ( v13 )
      {
        Object = 0LL;
        v35 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 168LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                v13,
                &Object,
                a6.Value);
        if ( v35 < 0 )
        {
          if ( v35 != -1071775486 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v36, v13);
            *(_QWORD *)(v37 + 24) = 1443LL;
            WdLogEvent5_WdAssertion(v37);
          }
          v38 = WdLogNewEntry5_WdTrace(v36, v13);
          *(_QWORD *)(v38 + 24) = *((_QWORD *)this + 81);
          *(_QWORD *)(v38 + 32) = *((_QWORD *)v20 + 3);
          if ( v8 && !DXGADAPTER::IsCoreResourceExclusiveOwner(v8[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v8);
            if ( Object )
            {
              if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
              {
                DXGDEVICE::FlushScheduler(this, 3LL);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 608LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                *((_QWORD *)v20 + 3),
                0LL,
                4LL);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((__int64)v8);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                             + 8LL)
                                                                 + 160LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
            *((_QWORD *)v20 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v20 + 3) = 0LL;
      }
      v17 = *((_QWORD *)v20 + 4);
      if ( v17 )
      {
        v74[v77.NumAllocations++] = (void *)v17;
        *((_QWORD *)v20 + 4) = 0LL;
      }
      v78 = v84;
      v20 = v84;
    }
    while ( v84 );
    v11 = v80;
    v9 = v79;
  }
  if ( v77.NumAllocations )
  {
    v39 = (void *)*((_QWORD *)this + 59);
    v40 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v77.pOpenHandleList = v74;
    ADAPTER_RENDER::DdiCloseAllocation(v40, v39, &v77);
  }
  v41 = 0LL;
  v75 = 0LL;
  v42 = 1;
  if ( v11 )
  {
    if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
    {
      v43 = *((_QWORD *)v11 + 7);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v43 + 144);
        if ( v44 )
        {
          if ( *(DXGDEVICE **)(v44 + 72) == this && (*(_DWORD *)(v44 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&v80,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v11 + 7) + 144LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v80);
            v17 = *(_QWORD *)(*((_QWORD *)v11 + 7) + 144LL);
            *(_QWORD *)(v17 + 72) = 0LL;
            if ( v81 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v80);
          }
        }
        v46 = *((_QWORD *)v11 + 7);
        v47 = *(_QWORD *)(v46 + 128);
        v48 = *(unsigned int *)(v47 - 44);
        if ( (v48 & 2) != 0 )
        {
          if ( *(_DWORD *)(v46 + 124) != 1 )
          {
            v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v17 + 256) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
            {
              v49 = WdLogNewEntry5_WdAssertion(v17, v48);
              *(_QWORD *)(v49 + 24) = 1559LL;
              WdLogEvent5_WdAssertion(v49);
              v48 = *(unsigned int *)(v47 - 44);
            }
          }
          if ( (((unsigned int)v48 >> 6) & 0xF) >= *((_DWORD *)this + 434) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v17, v48);
            *(_QWORD *)(v50 + 24) = 1560LL;
            WdLogEvent5_WdAssertion(v50);
            LODWORD(v48) = *(_DWORD *)(v47 - 44);
          }
          v51 = ((unsigned int)v48 >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v51 + 65) == v11 )
            *((_QWORD *)this + v51 + 65) = 0LL;
        }
        v52 = *((_QWORD *)v11 + 3);
        v53 = 0;
        while ( v52 )
        {
          v52 = *(_QWORD *)(v52 + 64);
          ++v53;
        }
        v54 = (volatile signed __int32 *)*((_QWORD *)v11 + 7);
        if ( _InterlockedExchangeAdd(v54 + 15, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v54, v74, v53);
        *((_QWORD *)v11 + 7) = 0LL;
      }
      v42 = 0;
    }
    else
    {
      v41 = (void *)*((_QWORD *)v11 + 7);
      v75 = v41;
    }
  }
  memset(&v82, 0, sizeof(v82));
  v57 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v58 = *((_DWORD *)v57 + 18);
      v59 = (struct DXGALLOCATION *)*((_QWORD *)v57 + 8);
      if ( (v58 & 0x800) != 0 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v56, v55);
        *(_QWORD *)(v60 + 24) = 1612LL;
        WdLogEvent5_WdAssertion(v60);
        v58 = *((_DWORD *)v57 + 18);
      }
      if ( (v58 & 0x7FE) != 0 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v56, v55);
        *(_QWORD *)(v61 + 24) = 1613LL;
        WdLogEvent5_WdAssertion(v61);
      }
      v62 = *((_QWORD *)v57 + 6);
      if ( !v62 )
        break;
      if ( !v42 )
        goto LABEL_102;
      if ( *(_QWORD *)(v62 + 8) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 128LL))(
          *((_QWORD *)this + 81),
          0LL);
        *(_QWORD *)(*((_QWORD *)v57 + 6) + 8LL) = 0LL;
        v62 = *((_QWORD *)v57 + 6);
      }
      v63 = *(void **)(v62 + 16);
      if ( !v63 )
        goto LABEL_108;
      v74[v82.NumAllocations] = v63;
      v56 = 1LL;
      ++v82.NumAllocations;
      *(_QWORD *)(*((_QWORD *)v57 + 6) + 16LL) = 0LL;
LABEL_109:
      v67 = (DXGADAPTERALLOCATION *)*((_QWORD *)v57 + 6);
      if ( (!v11 || (*((_DWORD *)v11 + 1) & 1) == 0) && v67 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v67);
        operator delete(v67);
      }
      v57 = v59;
      if ( !v59 )
      {
        v9 = v79;
        v41 = v75;
        goto LABEL_115;
      }
    }
    if ( !v42 )
    {
LABEL_102:
      if ( !v11 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v56, v55);
        *(_QWORD *)(v64 + 24) = 1641LL;
        WdLogEvent5_WdAssertion(v64);
      }
      v56 = 1LL;
      if ( (*((_DWORD *)v11 + 1) & 1) == 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(1LL, v55);
        *(_QWORD *)(v65 + 24) = 1642LL;
        WdLogEvent5_WdAssertion(v65);
        v56 = 1LL;
      }
      if ( a3 )
        goto LABEL_109;
      v66 = WdLogNewEntry5_WdAssertion(1LL, v55);
      *(_QWORD *)(v66 + 24) = 1643LL;
      WdLogEvent5_WdAssertion(v66);
    }
LABEL_108:
    v56 = 1LL;
    goto LABEL_109;
  }
LABEL_115:
  if ( v42 )
  {
    v82.Flags.Value = 0;
    if ( v11 )
      v82.Flags.Value = a3 != 0;
    v82.hResource = v41;
    if ( v82.NumAllocations )
    {
      v82.pAllocationList = v74;
    }
    else
    {
      v82.pAllocationList = 0LL;
      if ( !a3 || !v41 )
        goto LABEL_128;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v82);
    if ( v11 && !a3 )
    {
      if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v69, v68);
        *(_QWORD *)(v70 + 24) = 1691LL;
        WdLogEvent5_WdAssertion(v70);
      }
      *((_QWORD *)v11 + 7) = v82.hResource;
    }
  }
LABEL_128:
  if ( v9 )
  {
    v71 = v9;
    do
    {
      v9 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      if ( v71 )
      {
        DXGALLOCATION::~DXGALLOCATION(v71);
        ExFreePoolWithTag(v71, 0);
      }
      v71 = v9;
    }
    while ( v9 );
  }
}
