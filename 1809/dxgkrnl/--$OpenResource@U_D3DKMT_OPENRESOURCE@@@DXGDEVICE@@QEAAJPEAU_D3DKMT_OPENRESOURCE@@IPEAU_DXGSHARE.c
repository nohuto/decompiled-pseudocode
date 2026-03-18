/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3358
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C00B1870 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0225358 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0225910 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C01F547C (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // rbx
  struct COREDEVICEACCESS *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  struct COREDEVICEACCESS *v16; // r13
  char v17; // r15
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  unsigned __int64 v25; // rcx
  char v26; // r15
  unsigned int v27; // eax
  SIZE_T v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v31; // r9
  size_t v32; // rcx
  __int64 v33; // rdx
  char *v34; // r12
  unsigned int v35; // r10d
  _QWORD *v36; // r15
  unsigned int v37; // r9d
  size_t v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  const void *v41; // rdx
  PERESOURCE **v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  D3DKMT_HANDLE hResource; // eax
  unsigned int v51; // r10d
  _DWORD *v52; // r9
  __int64 v53; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  bool v58; // zf
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  struct DXGPROCESS *Current; // r15
  SIZE_T v70; // rax
  __int64 v71; // rcx
  unsigned int *v72; // r12
  unsigned int v73; // edx
  __int64 v74; // rax
  unsigned int v75; // edx
  unsigned int v76; // r8d
  __int64 v77; // rax
  __int64 v78; // r9
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rax
  struct DXGRESOURCE *v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  unsigned int v87; // esi
  __int64 v88; // rax
  __int64 v89; // r9
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rax
  struct DXGALLOCATION *v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  _BYTE v98[8]; // [rsp+80h] [rbp-79h] BYREF
  char v99; // [rsp+88h] [rbp-71h]
  _BYTE v100[32]; // [rsp+90h] [rbp-69h] BYREF
  struct _D3DKMT_CREATEALLOCATION v101; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v102; // [rsp+140h] [rbp+47h] BYREF
  __int64 v103; // [rsp+158h] [rbp+5Fh] BYREF

  v103 = a4;
  v10 = a3;
  v13 = 0LL;
  memset(&v101, 0, sizeof(v101));
  v14 = *((_QWORD *)this + 2);
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v55 + 24) = 7438LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v16 = (struct COREDEVICEACCESS *)a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v17 = *((_BYTE *)DXGPROCESS::GetCurrent() + 323);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v98);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v98);
  if ( (_DWORD)v10 )
  {
    Global = DXGGLOBAL::GetGlobal(v18);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v10, 2);
    v24 = ObjectA;
    if ( ObjectA )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(ObjectA + 128) - 44LL) & 2) != 0
        && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 104LL) + 208LL))() )
      {
        v61 = WdLogNewEntry5_WdEvent(v60, v21);
        LODWORD(v10) = -1073741790;
        *(_QWORD *)(v61 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v61);
        goto LABEL_47;
      }
      v25 = *(unsigned int *)(a2 + 8);
      if ( *(_DWORD *)(v24 + 124) == (_DWORD)v25 )
      {
        if ( (*(_DWORD *)(v24 + 12) & 4) == 0 )
        {
          v26 = v17 & 8;
          if ( v26 )
            goto LABEL_16;
          v27 = *(_DWORD *)(v24 + 104);
          if ( *(_DWORD *)(a2 + 32) == v27 )
          {
            if ( v27 )
            {
              memmove(*(void **)(a2 + 24), *(const void **)(v24 + 96), v27);
              v25 = *(unsigned int *)(a2 + 8);
            }
LABEL_16:
            v28 = 96 * v25;
            if ( !is_mul_ok(v25, 0x60uLL) )
              v28 = -1LL;
            a6 = (PERESOURCE **)operator new(v28, 0x4B677844u, PagedPool);
            if ( a6 )
            {
              v31 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
              v32 = *(unsigned int *)(a2 + 48);
              v33 = *(unsigned int *)(a2 + 8);
              v101.hDevice = *(_DWORD *)a2;
              v101.hGlobalShare = v10;
              v101.pStandardAllocation = v31;
              v101.PrivateDriverDataSize = v32;
              v101.NumAllocations = v33;
              v101.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)a6;
              v101.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v101.Flags & 0xFFFFFF3E | 1);
              if ( v26 || (_DWORD)v32 == *(_DWORD *)(v24 + 120) )
              {
                if ( (_DWORD)v32 )
                {
                  memmove(v31, *(const void **)(v24 + 112), v32);
                  LODWORD(v33) = *(_DWORD *)(a2 + 8);
                }
                v34 = *(char **)(a2 + 56);
                v35 = 0;
                v36 = *(_QWORD **)(v24 + 128);
                LODWORD(v103) = 0;
                if ( (_DWORD)v33 )
                {
                  v37 = 0;
                  while ( 1 )
                  {
                    v38 = *((unsigned int *)v36 - 2);
                    v39 = 0xFFFFFFFFLL;
                    v40 = (unsigned int)v38 + v37;
                    if ( (unsigned int)v40 >= v37 )
                      v39 = (unsigned int)v40;
                    v10 = (unsigned int)v40 < v37 ? (int)0xC0000095 : 0;
                    if ( (unsigned int)v40 < v37 )
                      break;
                    if ( (unsigned int)v39 > *(_DWORD *)(a2 + 64) )
                    {
                      v65 = WdLogNewEntry5_WdWarning(v40, v39, v38);
                      *(_QWORD *)(v65 + 24) = this;
                      *(_QWORD *)(v65 + 32) = -1073741801LL;
                      WdLogEvent5_WdWarning(v65);
                      LODWORD(v10) = -1073741801;
                      goto LABEL_58;
                    }
                    v41 = (const void *)*(v36 - 2);
                    if ( v41 )
                    {
                      memmove(v34, v41, v38);
                      v37 = a7;
                      v35 = v103;
                    }
                    v42 = a6;
                    v43 = v35++;
                    LODWORD(v103) = v35;
                    v44 = 12 * v43;
                    LODWORD(a6[v44]) = 0;
                    v42[v44 + 1] = 0LL;
                    LODWORD(v43) = *((_DWORD *)v36 - 11);
                    LODWORD(v42[v44 + 4]) = 0;
                    HIDWORD(v42[v44 + 3]) = ((unsigned int)v43 >> 6) & 0xF;
                    LODWORD(v43) = *((_DWORD *)v36 - 11);
                    v42[v44 + 2] = (PERESOURCE *)v34;
                    LODWORD(v42[v44 + 4]) = v43 & 1 | ((((unsigned int)v43 | ((unsigned int)v43 >> 12)) & 2) != 0);
                    LODWORD(v42[v44 + 3]) = *((_DWORD *)v36 - 2);
                    v45 = *((unsigned int *)v36 - 2);
                    v36 = (_QWORD *)*v36;
                    v37 += v45;
                    v34 += v45;
                    a7 = v37;
                    if ( v35 >= *(_DWORD *)(a2 + 8) )
                      goto LABEL_32;
                  }
                  v66 = WdLogNewEntry5_WdWarning(v40, v39, v38);
                  *(_QWORD *)(v66 + 24) = this;
                  *(_QWORD *)(v66 + 32) = v10;
                  WdLogEvent5_WdWarning(v66);
LABEL_58:
                  v64 = v99 == 0;
                  goto LABEL_59;
                }
LABEL_32:
                if ( v99 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v98);
                v46 = DXGDEVICE::CreateAllocation(this, &v101, 0, 1u, 0LL, 0LL, v16, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
                v10 = v46;
                if ( v46 < 0 )
                {
                  v67 = WdLogNewEntry5_WdWarning(v48, v47, v49);
                  *(_QWORD *)(v67 + 24) = v10;
                  WdLogEvent5_WdWarning(v67);
LABEL_40:
                  v13 = (struct COREDEVICEACCESS *)a6;
                  goto LABEL_41;
                }
                hResource = v101.hResource;
                if ( !v101.hResource )
                {
                  v68 = WdLogNewEntry5_WdAssertion(v48);
                  *(_QWORD *)(v68 + 24) = 7645LL;
                  WdLogEvent5_WdAssertion(v68);
                  hResource = v101.hResource;
                }
                v51 = 0;
                v52 = *(_DWORD **)(a2 + 16);
                *(_DWORD *)(a2 + 64) = a7;
                for ( *(_DWORD *)(a2 + 68) = hResource;
                      v51 < *(_DWORD *)(a2 + 8);
                      *(v52 - 16) = *(&v101.pAllocationInfo->PrivateDriverDataSize + 24 * v53) )
                {
                  v53 = v51++;
                  *v52 = *(&v101.pAllocationInfo->hAllocation + 24 * v53);
                  v52 += 20;
                  *((_QWORD *)v52 - 9) = *(_QWORD *)(a2 + 56)
                                       + (unsigned int)(*((_DWORD *)&v101.pAllocationInfo->pPrivateDriverData + 24 * v53)
                                                      - *(_DWORD *)(a2 + 56));
                }
                if ( (*((_BYTE *)this + 1749) & 1) == 0 )
                  goto LABEL_40;
                Current = DXGPROCESS::GetCurrent();
                v70 = 4LL * *(unsigned int *)(a2 + 8);
                if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
                  v70 = -1LL;
                v72 = (unsigned int *)operator new(v70, 0x4B677844u, PagedPool);
                if ( !v72 )
                {
                  LODWORD(v10) = -1073741801;
                  goto LABEL_40;
                }
                v73 = *(_DWORD *)(v24 + 12);
                if ( (v73 & 8) != 0 )
                {
                  v74 = WdLogNewEntry5_WdAssertion(v71);
                  *(_QWORD *)(v74 + 24) = 7675LL;
                  WdLogEvent5_WdAssertion(v74);
                  v73 = *(_DWORD *)(v24 + 12);
                }
                v75 = v73 >> 3;
                if ( (v75 & 1) != 0 )
                  v76 = MEMORY[0x28];
                else
                  v76 = *(_DWORD *)(v24 + 28);
                LODWORD(v10) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4152LL),
                                 Current,
                                 this,
                                 v75 & 1,
                                 v76,
                                 *(_DWORD *)(a2 + 8),
                                 *(_DWORD *)(a2 + 64),
                                 &a7,
                                 v72);
                if ( (int)v10 < 0 )
                  goto LABEL_97;
                DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                  (DXGHANDLETABLELOCKSHARED *)v100,
                  (struct _KTHREAD **)Current);
                v77 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v77 < *((_DWORD *)Current + 62) )
                {
                  v78 = *((_QWORD *)Current + 29);
                  v79 = *(_DWORD *)(v78 + 16 * v77 + 8);
                  if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v78 + 16 * v77 + 8) & 0x60)
                    && (v79 & 0x2000) == 0
                    && (v79 & 0x1F) != 0 )
                  {
                    v80 = v79 & 0x1F;
                    if ( (_BYTE)v80 == 4 )
                    {
                      v82 = *(struct DXGRESOURCE **)(v78 + 16LL * (unsigned int)v77);
                      goto LABEL_80;
                    }
                    v81 = WdLogNewEntry5_WdError(v80);
                    *(_QWORD *)(v81 + 24) = 316LL;
                    WdLogEvent5_WdError(v81);
                  }
                }
                v82 = 0LL;
LABEL_80:
                DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v102, v82);
                if ( !v102 )
                {
                  v86 = WdLogNewEntry5_WdWarning(v84, v83, v85);
                  *(_QWORD *)(v86 + 24) = 7692LL;
                  WdLogEvent5_WdWarning(v86);
                  LODWORD(v10) = -1073741811;
                  goto LABEL_96;
                }
                v87 = 0;
                *(_DWORD *)(v102 + 20) = a7;
                if ( *(_DWORD *)(a2 + 8) )
                {
                  while ( 1 )
                  {
                    v88 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v87) >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v88 >= *((_DWORD *)Current + 62) )
                      goto LABEL_90;
                    v89 = *((_QWORD *)Current + 29);
                    v90 = *(_DWORD *)(v89 + 16 * v88 + 8);
                    if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v87) >> 25) & 0x60) != (*(_BYTE *)(v89 + 16 * v88 + 8) & 0x60)
                      || (v90 & 0x2000) != 0
                      || (v90 & 0x1F) == 0 )
                    {
                      goto LABEL_90;
                    }
                    v91 = v90 & 0x1F;
                    if ( (_BYTE)v91 != 5 )
                      break;
                    v93 = *(struct DXGALLOCATION **)(v89 + 16LL * (unsigned int)v88);
LABEL_91:
                    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v103, v93);
                    if ( !v103 )
                    {
                      v97 = WdLogNewEntry5_WdWarning(v95, v94, v96);
                      *(_QWORD *)(v97 + 24) = 7703LL;
                      WdLogEvent5_WdWarning(v97);
                      LODWORD(v10) = -1073741811;
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v103);
                      goto LABEL_96;
                    }
                    *(_DWORD *)(v103 + 96) = v72[v87];
                    *(_DWORD *)(v103 + 100) = v72[v87];
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v103);
                    if ( ++v87 >= *(_DWORD *)(a2 + 8) )
                      goto LABEL_96;
                  }
                  v92 = WdLogNewEntry5_WdError(v91);
                  *(_QWORD *)(v92 + 24) = 316LL;
                  WdLogEvent5_WdError(v92);
LABEL_90:
                  v93 = 0LL;
                  goto LABEL_91;
                }
LABEL_96:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v102);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
LABEL_97:
                operator delete[](v72);
                goto LABEL_40;
              }
              v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v33, a6);
              LODWORD(v10) = -1073741811;
              v63[3] = this;
              v63[4] = *(unsigned int *)(a2 + 48);
              v63[5] = *(unsigned int *)(v24 + 120);
              v63[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v63);
            }
            else
            {
              v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, 0LL);
              v62[3] = this;
              v62[4] = *(unsigned int *)(a2 + 8);
              v62[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v62);
              LODWORD(v10) = -1073741801;
            }
            v64 = v99 == 0;
LABEL_59:
            if ( !v64 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v98);
            goto LABEL_40;
          }
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v23);
          LODWORD(v10) = -1073741811;
          v56[3] = this;
          v56[4] = *(unsigned int *)(a2 + 32);
          v56[5] = *(unsigned int *)(v24 + 104);
          v56[6] = -1073741811LL;
          goto LABEL_44;
        }
        v57 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        LODWORD(v10) = -1073741811;
        v57[3] = this;
        v57[4] = -1073741811LL;
      }
      else
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        LODWORD(v10) = -1073741811;
        v57[3] = this;
        v57[4] = *(unsigned int *)(v24 + 124);
        v57[5] = *(unsigned int *)(a2 + 8);
        v57[6] = -1073741811LL;
      }
      WdLogEvent5_WdError(v57);
      goto LABEL_47;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v56[4] = v10;
    LODWORD(v10) = -1073741811;
    v56[5] = -1073741811LL;
    v56[3] = this;
LABEL_44:
    WdLogEvent5_WdWarning(v56);
LABEL_47:
    v58 = v99 == 0;
    goto LABEL_49;
  }
  v59 = WdLogNewEntry5_WdError(v18);
  LODWORD(v10) = -1073741811;
  *(_QWORD *)(v59 + 24) = this;
  *(_QWORD *)(v59 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v59);
  v58 = v99 == 0;
LABEL_49:
  if ( !v58 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v98);
LABEL_41:
  operator delete[](v13);
  return (unsigned int)v10;
}
