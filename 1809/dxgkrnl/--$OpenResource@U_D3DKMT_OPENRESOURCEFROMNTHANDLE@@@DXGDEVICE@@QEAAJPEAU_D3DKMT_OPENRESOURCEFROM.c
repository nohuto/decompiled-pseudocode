/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0B28
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01DCFE0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E4EC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  D3DDDI_ALLOCATIONINFO *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  struct COREDEVICEACCESS *v16; // r12
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  char v23; // bl
  unsigned int v24; // eax
  SIZE_T v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  D3DKMT_HANDLE v28; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v29; // r9
  size_t v30; // rcx
  __int64 v31; // rdx
  char *v32; // r9
  unsigned int v33; // r11d
  _QWORD *v34; // r15
  unsigned int v35; // r10d
  size_t v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  const void *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  D3DKMT_HANDLE hResource; // eax
  __int64 v49; // r10
  _DWORD *v50; // r9
  __int64 v51; // r8
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  bool v56; // zf
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  struct DXGPROCESS *Current; // r15
  SIZE_T v68; // rax
  unsigned int *v69; // r12
  unsigned int v70; // r8d
  __int64 v71; // rax
  __int64 v72; // r9
  int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rax
  struct DXGRESOURCE *v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // r9
  int v84; // ecx
  __int64 v85; // rcx
  __int64 v86; // rax
  struct DXGALLOCATION *v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  _BYTE v92[8]; // [rsp+80h] [rbp-79h] BYREF
  char v93; // [rsp+88h] [rbp-71h]
  _BYTE v94[32]; // [rsp+90h] [rbp-69h] BYREF
  struct _D3DKMT_CREATEALLOCATION v95; // [rsp+B0h] [rbp-49h] BYREF
  D3DDDI_ALLOCATIONINFO *v96; // [rsp+140h] [rbp+47h]
  unsigned int v97; // [rsp+150h] [rbp+57h] BYREF
  char *v98; // [rsp+158h] [rbp+5Fh] BYREF

  v97 = a3;
  v13 = 0LL;
  memset(&v95, 0, sizeof(v95));
  v14 = *((_QWORD *)this + 2);
  v97 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v53 + 24) = 7438LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v16 = (struct COREDEVICEACCESS *)a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v17 = *((_BYTE *)DXGPROCESS::GetCurrent() + 323);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v92);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v92);
  if ( a4 )
  {
    v21 = *(_QWORD *)(a4 + 16);
    if ( v21 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 128) - 44LL) & 2) != 0
        && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 104LL) + 208LL))() )
      {
        v59 = WdLogNewEntry5_WdEvent(v58, v18);
        LODWORD(v39) = -1073741790;
        *(_QWORD *)(v59 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v59);
        goto LABEL_47;
      }
      v22 = *(unsigned int *)(a2 + 16);
      if ( *(_DWORD *)(v21 + 124) == (_DWORD)v22 )
      {
        if ( (*(_DWORD *)(v21 + 12) & 4) == 0 )
        {
          v23 = v17 & 8;
          if ( v23 )
            goto LABEL_16;
          v24 = *(_DWORD *)(v21 + 104);
          if ( *(_DWORD *)(a2 + 32) == v24 )
          {
            if ( v24 )
            {
              memmove(*(void **)(a2 + 40), *(const void **)(v21 + 96), v24);
              v22 = *(unsigned int *)(a2 + 16);
            }
LABEL_16:
            v25 = 96 * v22;
            if ( !is_mul_ok(v22, 0x60uLL) )
              v25 = -1LL;
            v96 = (D3DDDI_ALLOCATIONINFO *)operator new(v25, 0x4B677844u, PagedPool);
            if ( v96 )
            {
              v28 = *(_DWORD *)a2;
              v95.hGlobalShare = 0;
              v29 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
              v30 = *(unsigned int *)(a2 + 48);
              v31 = *(unsigned int *)(a2 + 16);
              v95.hDevice = v28;
              v95.pStandardAllocation = v29;
              v95.PrivateDriverDataSize = v30;
              v95.NumAllocations = v31;
              v95.pAllocationInfo = v96;
              v95.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v95.Flags ^ (*(_BYTE *)&v95.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
              if ( v23 || (_DWORD)v30 == *(_DWORD *)(v21 + 120) )
              {
                if ( (_DWORD)v30 )
                {
                  memmove(v29, *(const void **)(v21 + 112), v30);
                  LODWORD(v31) = *(_DWORD *)(a2 + 16);
                }
                v32 = *(char **)(a2 + 72);
                v33 = 0;
                v34 = *(_QWORD **)(v21 + 128);
                v98 = v32;
                LODWORD(a6) = 0;
                if ( (_DWORD)v31 )
                {
                  v35 = 0;
                  while ( 1 )
                  {
                    v36 = *((unsigned int *)v34 - 2);
                    v37 = 0xFFFFFFFFLL;
                    v38 = (unsigned int)v36 + v35;
                    if ( (unsigned int)v38 >= v35 )
                      v37 = (unsigned int)v38;
                    v39 = (unsigned int)v38 < v35 ? (int)0xC0000095 : 0;
                    if ( (unsigned int)v38 < v35 )
                      break;
                    if ( (unsigned int)v37 > *(_DWORD *)(a2 + 64) )
                    {
                      v63 = WdLogNewEntry5_WdWarning(v38, v37, v36);
                      *(_QWORD *)(v63 + 24) = this;
                      *(_QWORD *)(v63 + 32) = -1073741801LL;
                      WdLogEvent5_WdWarning(v63);
                      LODWORD(v39) = -1073741801;
                      goto LABEL_58;
                    }
                    v40 = (const void *)*(v34 - 2);
                    if ( v40 )
                    {
                      memmove(v32, v40, v36);
                      v32 = v98;
                      v35 = v97;
                      v33 = (unsigned int)a6;
                    }
                    v41 = v33++;
                    LODWORD(a6) = v33;
                    v42 = 96 * v41;
                    *(D3DKMT_HANDLE *)((char *)&v96->hAllocation + v42) = 0;
                    *(const void **)((char *)&v96->pSystemMem + v42) = 0LL;
                    LODWORD(v41) = *((_DWORD *)v34 - 11);
                    *(UINT *)((char *)&v96->Flags.Value + v42) = 0;
                    *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v96->VidPnSourceId + v42) = ((unsigned int)v41 >> 6) & 0xF;
                    LODWORD(v41) = *((_DWORD *)v34 - 11);
                    *(void **)((char *)&v96->pPrivateDriverData + v42) = v32;
                    *(UINT *)((char *)&v96->Flags.Value + v42) = v41 & 1 | ((((unsigned int)v41 | ((unsigned int)v41 >> 12)) & 2) != 0);
                    *(UINT *)((char *)&v96->PrivateDriverDataSize + v42) = *((_DWORD *)v34 - 2);
                    v43 = *((unsigned int *)v34 - 2);
                    v34 = (_QWORD *)*v34;
                    v35 += v43;
                    v32 += v43;
                    v97 = v35;
                    v98 = v32;
                    if ( v33 >= *(_DWORD *)(a2 + 16) )
                      goto LABEL_32;
                  }
                  v64 = WdLogNewEntry5_WdWarning(v38, v37, v36);
                  *(_QWORD *)(v64 + 24) = this;
                  *(_QWORD *)(v64 + 32) = v39;
                  WdLogEvent5_WdWarning(v64);
LABEL_58:
                  v62 = v93 == 0;
                  goto LABEL_59;
                }
LABEL_32:
                if ( v93 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92);
                v44 = DXGDEVICE::CreateAllocation(
                        this,
                        &v95,
                        0,
                        1u,
                        (struct _DXGSHAREDALLOCOBJECT *)a4,
                        0LL,
                        v16,
                        a5,
                        a8,
                        a9,
                        a10,
                        0LL,
                        0LL,
                        0LL,
                        0);
                v39 = v44;
                if ( v44 < 0 )
                {
                  v65 = WdLogNewEntry5_WdWarning(v46, v45, v47);
                  *(_QWORD *)(v65 + 24) = v39;
                  WdLogEvent5_WdWarning(v65);
LABEL_40:
                  v13 = v96;
                  goto LABEL_41;
                }
                hResource = v95.hResource;
                if ( !v95.hResource )
                {
                  v66 = WdLogNewEntry5_WdAssertion(v46);
                  *(_QWORD *)(v66 + 24) = 7645LL;
                  WdLogEvent5_WdAssertion(v66);
                  hResource = v95.hResource;
                }
                v49 = 0LL;
                v50 = *(_DWORD **)(a2 + 24);
                *(_DWORD *)(a2 + 64) = v97;
                for ( *(_DWORD *)(a2 + 80) = hResource;
                      (unsigned int)v49 < *(_DWORD *)(a2 + 16);
                      *(v50 - 16) = *(UINT *)((char *)&v95.pAllocationInfo->PrivateDriverDataSize + v51) )
                {
                  v51 = 96 * v49;
                  v49 = (unsigned int)(v49 + 1);
                  *v50 = *(D3DKMT_HANDLE *)((char *)&v95.pAllocationInfo->hAllocation + v51);
                  v50 += 20;
                  *((_QWORD *)v50 - 9) = *(_QWORD *)(a2 + 72)
                                       + (unsigned int)(*(_DWORD *)((char *)&v95.pAllocationInfo->pPrivateDriverData
                                                                  + v51)
                                                      - *(_DWORD *)(a2 + 72));
                }
                if ( (*((_BYTE *)this + 1749) & 1) == 0 )
                  goto LABEL_40;
                Current = DXGPROCESS::GetCurrent();
                v68 = 4LL * *(unsigned int *)(a2 + 16);
                if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 4uLL) )
                  v68 = -1LL;
                v69 = (unsigned int *)operator new(v68, 0x4B677844u, PagedPool);
                if ( !v69 )
                {
                  LODWORD(v39) = -1073741801;
                  goto LABEL_40;
                }
                if ( (*(_DWORD *)(v21 + 12) & 8) != 0 )
                  v70 = *(_DWORD *)(a4 + 40);
                else
                  v70 = *(_DWORD *)(v21 + 28);
                LODWORD(v39) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4152LL),
                                 Current,
                                 this,
                                 (*(_DWORD *)(v21 + 12) & 8) != 0,
                                 v70,
                                 *(_DWORD *)(a2 + 16),
                                 *(_DWORD *)(a2 + 64),
                                 &v97,
                                 v69);
                if ( (int)v39 < 0 )
                  goto LABEL_95;
                DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                  (DXGHANDLETABLELOCKSHARED *)v94,
                  (struct _KTHREAD **)Current);
                v71 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v71 < *((_DWORD *)Current + 62) )
                {
                  v72 = *((_QWORD *)Current + 29);
                  v73 = *(_DWORD *)(v72 + 16 * v71 + 8);
                  if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v72 + 16 * v71 + 8) & 0x60)
                    && (v73 & 0x2000) == 0
                    && (v73 & 0x1F) != 0 )
                  {
                    v74 = v73 & 0x1F;
                    if ( (_BYTE)v74 == 4 )
                    {
                      v76 = *(struct DXGRESOURCE **)(v72 + 16LL * (unsigned int)v71);
                      goto LABEL_78;
                    }
                    v75 = WdLogNewEntry5_WdError(v74);
                    *(_QWORD *)(v75 + 24) = 316LL;
                    WdLogEvent5_WdError(v75);
                  }
                }
                v76 = 0LL;
LABEL_78:
                DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v98, v76);
                if ( !v98 )
                {
                  v80 = WdLogNewEntry5_WdWarning(v78, v77, v79);
                  *(_QWORD *)(v80 + 24) = 7692LL;
                  WdLogEvent5_WdWarning(v80);
                  LODWORD(v39) = -1073741811;
                  goto LABEL_94;
                }
                v81 = 0LL;
                *((_DWORD *)v98 + 5) = v97;
                if ( *(_DWORD *)(a2 + 16) )
                {
                  while ( 1 )
                  {
                    v82 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v81) >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v82 >= *((_DWORD *)Current + 62) )
                      goto LABEL_88;
                    v83 = *((_QWORD *)Current + 29);
                    v84 = *(_DWORD *)(v83 + 16 * v82 + 8);
                    if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v81) >> 25) & 0x60) != (*(_BYTE *)(v83 + 16 * v82 + 8) & 0x60)
                      || (v84 & 0x2000) != 0
                      || (v84 & 0x1F) == 0 )
                    {
                      goto LABEL_88;
                    }
                    v85 = v84 & 0x1F;
                    if ( (_BYTE)v85 != 5 )
                      break;
                    v87 = *(struct DXGALLOCATION **)(v83 + 16LL * (unsigned int)v82);
LABEL_89:
                    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6, v87);
                    if ( !a6 )
                    {
                      v91 = WdLogNewEntry5_WdWarning(v89, v88, v90);
                      *(_QWORD *)(v91 + 24) = 7703LL;
                      WdLogEvent5_WdWarning(v91);
                      LODWORD(v39) = -1073741811;
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6);
                      goto LABEL_94;
                    }
                    *((_DWORD *)a6 + 24) = v69[v81];
                    *((_DWORD *)a6 + 25) = v69[v81];
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6);
                    v81 = (unsigned int)(v81 + 1);
                    if ( (unsigned int)v81 >= *(_DWORD *)(a2 + 16) )
                      goto LABEL_94;
                  }
                  v86 = WdLogNewEntry5_WdError(v85);
                  *(_QWORD *)(v86 + 24) = 316LL;
                  WdLogEvent5_WdError(v86);
LABEL_88:
                  v87 = 0LL;
                  goto LABEL_89;
                }
LABEL_94:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v98);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v94);
LABEL_95:
                operator delete[](v69);
                goto LABEL_40;
              }
              v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v31, v96);
              LODWORD(v39) = -1073741811;
              v61[3] = this;
              v61[4] = *(unsigned int *)(a2 + 48);
              v61[5] = *(unsigned int *)(v21 + 120);
              v61[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v61);
            }
            else
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, 0LL);
              v60[3] = this;
              v60[4] = *(unsigned int *)(a2 + 16);
              v60[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v60);
              LODWORD(v39) = -1073741801;
            }
            v62 = v93 == 0;
LABEL_59:
            if ( !v62 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92);
            goto LABEL_40;
          }
          v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v18, v20);
          LODWORD(v39) = -1073741811;
          v54[3] = this;
          v54[4] = *(unsigned int *)(a2 + 32);
          v54[5] = *(unsigned int *)(v21 + 104);
          v54[6] = -1073741811LL;
          goto LABEL_44;
        }
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        LODWORD(v39) = -1073741811;
        v55[3] = this;
        v55[4] = -1073741811LL;
      }
      else
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        LODWORD(v39) = -1073741811;
        v55[3] = this;
        v55[4] = *(unsigned int *)(v21 + 124);
        v55[5] = *(unsigned int *)(a2 + 16);
        v55[6] = -1073741811LL;
      }
      WdLogEvent5_WdError(v55);
      goto LABEL_47;
    }
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    LODWORD(v39) = -1073741811;
    v54[3] = this;
    v54[4] = a4;
    v54[5] = -1073741811LL;
LABEL_44:
    WdLogEvent5_WdWarning(v54);
LABEL_47:
    v56 = v93 == 0;
    goto LABEL_49;
  }
  v57 = WdLogNewEntry5_WdError(v19);
  LODWORD(v39) = -1073741811;
  *(_QWORD *)(v57 + 24) = this;
  *(_QWORD *)(v57 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v57);
  v56 = v93 == 0;
LABEL_49:
  if ( !v56 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92);
LABEL_41:
  operator delete[](v13);
  return (unsigned int)v39;
}
