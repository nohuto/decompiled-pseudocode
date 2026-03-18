/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0628
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F09B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020C150 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273F2C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C0225B00 (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        struct DXGDEVICE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  D3DDDI_ALLOCATIONINFO *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct COREDEVICEACCESS *v17; // r15
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned __int64 v26; // rcx
  char v27; // bl
  unsigned int v28; // eax
  SIZE_T v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  D3DDDI_ALLOCATIONINFO *v33; // r10
  D3DKMT_CREATESTANDARDALLOCATION *v34; // r9
  size_t v35; // rcx
  __int64 v36; // rdx
  char *v37; // r12
  __int64 v38; // r8
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  const void *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbx
  D3DKMT_HANDLE hResource; // eax
  __int64 v52; // r10
  _DWORD *v53; // r9
  __int64 v54; // r8
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  bool v59; // zf
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  bool v65; // zf
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  struct DXGPROCESS *Current; // r15
  SIZE_T v71; // rax
  unsigned int *v72; // r12
  unsigned int v73; // r8d
  __int64 v74; // rax
  __int64 v75; // r9
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rax
  struct DXGRESOURCE *v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // r9
  int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rax
  struct DXGALLOCATION *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  _BYTE v95[8]; // [rsp+80h] [rbp-79h] BYREF
  char v96; // [rsp+88h] [rbp-71h]
  _BYTE v97[32]; // [rsp+90h] [rbp-69h] BYREF
  struct _D3DKMT_CREATEALLOCATION v98; // [rsp+B0h] [rbp-49h] BYREF
  D3DDDI_ALLOCATIONINFO *v99; // [rsp+140h] [rbp+47h]
  unsigned int v100; // [rsp+150h] [rbp+57h] BYREF
  __int64 v101; // [rsp+158h] [rbp+5Fh] BYREF

  v100 = a3;
  v13 = 0LL;
  memset(&v98, 0, sizeof(v98));
  v14 = *((_QWORD *)a1 + 2);
  v100 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v56 + 24) = 7407LL;
    WdLogEvent5_WdAssertion(v56);
  }
  if ( !*((_DWORD *)a1 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a1 + 13));
  v17 = a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a6 + 3));
  v18 = *((_BYTE *)DXGPROCESS::GetCurrent() + 299);
  Global = DXGGLOBAL::GetGlobal(v20, v19);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v95, (struct DXGGLOBAL *)((char *)Global + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
  if ( a4 )
  {
    v25 = *(_QWORD *)(a4 + 16);
    if ( v25 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 128) - 44LL) & 2) != 0
        && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 208LL))() )
      {
        v62 = WdLogNewEntry5_WdEvent(v61);
        LODWORD(v50) = -1073741790;
        *(_QWORD *)(v62 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v62);
        goto LABEL_45;
      }
      v26 = *(unsigned int *)(a2 + 16);
      if ( *(_DWORD *)(v25 + 124) == (_DWORD)v26 )
      {
        if ( (*(_DWORD *)(v25 + 12) & 4) == 0 )
        {
          v27 = v18 & 8;
          if ( v27 )
            goto LABEL_16;
          v28 = *(_DWORD *)(v25 + 104);
          if ( *(_DWORD *)(a2 + 32) == v28 )
          {
            if ( v28 )
            {
              memmove(*(void **)(a2 + 40), *(const void **)(v25 + 96), v28);
              v26 = *(unsigned int *)(a2 + 16);
            }
LABEL_16:
            v29 = 96 * v26;
            if ( !is_mul_ok(v26, 0x60uLL) )
              v29 = -1LL;
            v99 = (D3DDDI_ALLOCATIONINFO *)operator new[](v29, 0x4B677844u, PagedPool);
            v33 = v99;
            if ( v99 )
            {
              v34 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
              v35 = *(unsigned int *)(a2 + 48);
              v36 = *(unsigned int *)(a2 + 16);
              v98.hDevice = *(_DWORD *)a2;
              v98.hGlobalShare = 0;
              v98.pStandardAllocation = v34;
              v98.PrivateDriverDataSize = v35;
              v98.NumAllocations = v36;
              v98.pAllocationInfo = v99;
              v98.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v98.Flags ^ (*(_BYTE *)&v98.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
              if ( v27 || (_DWORD)v35 == *(_DWORD *)(v25 + 120) )
              {
                if ( (_DWORD)v35 )
                {
                  memmove(v34, *(const void **)(v25 + 112), v35);
                  LODWORD(v36) = *(_DWORD *)(a2 + 16);
                  v33 = v99;
                }
                v37 = *(char **)(a2 + 72);
                v38 = 0LL;
                v39 = *(_QWORD **)(v25 + 128);
                LODWORD(a6) = 0;
                if ( (_DWORD)v36 )
                {
                  v40 = v100;
                  while ( 1 )
                  {
                    v41 = *((unsigned int *)v39 - 2);
                    if ( (int)v41 + (int)v40 < (unsigned int)v40 )
                      break;
                    if ( (unsigned int)(v41 + v40) > *(_DWORD *)(a2 + 64) )
                    {
                      v66 = WdLogNewEntry5_WdWarning(v41, v40, v38);
                      *(_QWORD *)(v66 + 24) = a1;
                      *(_QWORD *)(v66 + 32) = -1073741801LL;
                      WdLogEvent5_WdWarning(v66);
                      LODWORD(v50) = -1073741801;
                      goto LABEL_56;
                    }
                    v42 = (const void *)*(v39 - 2);
                    if ( v42 )
                    {
                      memmove(v37, v42, (unsigned int)v41);
                      LODWORD(v38) = (_DWORD)a6;
                      v33 = v99;
                    }
                    v43 = (unsigned int)v38;
                    v38 = (unsigned int)(v38 + 1);
                    LODWORD(a6) = v38;
                    v44 = 96 * v43;
                    *(D3DKMT_HANDLE *)((char *)&v33->hAllocation + v44) = 0;
                    *(const void **)((char *)&v33->pSystemMem + v44) = 0LL;
                    LODWORD(v43) = *((_DWORD *)v39 - 11);
                    *(UINT *)((char *)&v33->Flags.Value + v44) = 0;
                    *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v33->VidPnSourceId + v44) = ((unsigned int)v43 >> 6) & 0xF;
                    LODWORD(v43) = *((_DWORD *)v39 - 11);
                    *(void **)((char *)&v33->pPrivateDriverData + v44) = v37;
                    *(UINT *)((char *)&v33->Flags.Value + v44) = v43 & 1 | ((((unsigned int)v43 | ((unsigned int)v43 >> 12)) & 2) != 0);
                    *(UINT *)((char *)&v33->PrivateDriverDataSize + v44) = *((_DWORD *)v39 - 2);
                    v45 = *((unsigned int *)v39 - 2);
                    v37 += v45;
                    v39 = (_QWORD *)*v39;
                    v40 = (unsigned int)v45 + v100;
                    v100 += v45;
                    if ( (unsigned int)v38 >= *(_DWORD *)(a2 + 16) )
                      goto LABEL_30;
                  }
                  LODWORD(v50) = -1073741675;
                  v67 = WdLogNewEntry5_WdWarning(v41, v40, v38);
                  *(_QWORD *)(v67 + 24) = a1;
                  *(_QWORD *)(v67 + 32) = -1073741675LL;
                  WdLogEvent5_WdWarning(v67);
LABEL_56:
                  v65 = v96 == 0;
                  goto LABEL_57;
                }
LABEL_30:
                if ( v96 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
                v46 = DXGDEVICE::CreateAllocation(
                        a1,
                        &v98,
                        0,
                        1u,
                        (struct _DXGSHAREDALLOCOBJECT *)a4,
                        0LL,
                        v17,
                        a5,
                        a8,
                        a9,
                        a10,
                        0LL,
                        0LL,
                        0LL,
                        0);
                v50 = v46;
                if ( v46 < 0 )
                {
                  v68 = WdLogNewEntry5_WdWarning(v48, v47, v49);
                  *(_QWORD *)(v68 + 24) = v50;
                  WdLogEvent5_WdWarning(v68);
LABEL_38:
                  v13 = v99;
                  goto LABEL_39;
                }
                hResource = v98.hResource;
                if ( !v98.hResource )
                {
                  v69 = WdLogNewEntry5_WdAssertion(v48, v47);
                  *(_QWORD *)(v69 + 24) = 7614LL;
                  WdLogEvent5_WdAssertion(v69);
                  hResource = v98.hResource;
                }
                v52 = 0LL;
                v53 = *(_DWORD **)(a2 + 24);
                *(_DWORD *)(a2 + 64) = v100;
                for ( *(_DWORD *)(a2 + 80) = hResource;
                      (unsigned int)v52 < *(_DWORD *)(a2 + 16);
                      *(v53 - 16) = *(UINT *)((char *)&v98.pAllocationInfo->PrivateDriverDataSize + v54) )
                {
                  v54 = 96 * v52;
                  v52 = (unsigned int)(v52 + 1);
                  *v53 = *(D3DKMT_HANDLE *)((char *)&v98.pAllocationInfo->hAllocation + v54);
                  v53 += 20;
                  *((_QWORD *)v53 - 9) = *(_QWORD *)(a2 + 72)
                                       + (unsigned int)(*(_DWORD *)((char *)&v98.pAllocationInfo->pPrivateDriverData
                                                                  + v54)
                                                      - *(_DWORD *)(a2 + 72));
                }
                if ( (*((_BYTE *)a1 + 1749) & 1) == 0 )
                  goto LABEL_38;
                Current = DXGPROCESS::GetCurrent();
                v71 = 4LL * *(unsigned int *)(a2 + 16);
                if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 4uLL) )
                  v71 = -1LL;
                v72 = (unsigned int *)operator new[](v71, 0x4B677844u, PagedPool);
                if ( !v72 )
                {
                  LODWORD(v50) = -1073741801;
                  goto LABEL_38;
                }
                if ( (*(_DWORD *)(v25 + 12) & 8) != 0 )
                  v73 = *(_DWORD *)(a4 + 40);
                else
                  v73 = *(_DWORD *)(v25 + 28);
                LODWORD(v50) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 4144LL),
                                 Current,
                                 a1,
                                 (*(_DWORD *)(v25 + 12) & 8) != 0,
                                 v73,
                                 *(_DWORD *)(a2 + 16),
                                 *(_DWORD *)(a2 + 64),
                                 &v100,
                                 v72);
                if ( (int)v50 < 0 )
                  goto LABEL_93;
                DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                  (DXGHANDLETABLELOCKSHARED *)v97,
                  (struct _KTHREAD **)Current);
                v74 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v74 < *((_DWORD *)Current + 56) )
                {
                  v75 = *((_QWORD *)Current + 26);
                  v76 = *(_DWORD *)(v75 + 16 * v74 + 8);
                  if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v75 + 16 * v74 + 8) & 0x60)
                    && (v76 & 0x2000) == 0
                    && (v76 & 0x1F) != 0 )
                  {
                    v77 = v76 & 0x1F;
                    if ( (_BYTE)v77 == 4 )
                    {
                      v79 = *(struct DXGRESOURCE **)(v75 + 16LL * (unsigned int)v74);
                      goto LABEL_76;
                    }
                    v78 = WdLogNewEntry5_WdError(v77, (*(_DWORD *)(a2 + 80) >> 25) & 0x60, 2LL * (unsigned int)v74);
                    *(_QWORD *)(v78 + 24) = 267LL;
                    WdLogEvent5_WdError(v78);
                  }
                }
                v79 = 0LL;
LABEL_76:
                DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v101, v79);
                if ( !v101 )
                {
                  v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
                  *(_QWORD *)(v83 + 24) = 7661LL;
                  WdLogEvent5_WdWarning(v83);
                  LODWORD(v50) = -1073741811;
                  goto LABEL_92;
                }
                v84 = 0LL;
                *(_DWORD *)(v101 + 20) = v100;
                if ( *(_DWORD *)(a2 + 16) )
                {
                  while ( 1 )
                  {
                    v85 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v84) >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v85 >= *((_DWORD *)Current + 56) )
                      goto LABEL_86;
                    v86 = *((_QWORD *)Current + 26);
                    v87 = *(_DWORD *)(v86 + 16 * v85 + 8);
                    if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v84) >> 25) & 0x60) != (*(_BYTE *)(v86 + 16 * v85 + 8) & 0x60)
                      || (v87 & 0x2000) != 0
                      || (v87 & 0x1F) == 0 )
                    {
                      goto LABEL_86;
                    }
                    v88 = v87 & 0x1F;
                    if ( (_BYTE)v88 != 5 )
                      break;
                    v90 = *(struct DXGALLOCATION **)(v86 + 16LL * (unsigned int)v85);
LABEL_87:
                    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6, v90);
                    if ( !a6 )
                    {
                      v94 = WdLogNewEntry5_WdWarning(v92, v91, v93);
                      *(_QWORD *)(v94 + 24) = 7672LL;
                      WdLogEvent5_WdWarning(v94);
                      LODWORD(v50) = -1073741811;
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6);
                      goto LABEL_92;
                    }
                    *((_DWORD *)a6 + 24) = v72[v84];
                    *((_DWORD *)a6 + 25) = v72[v84];
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6);
                    v84 = (unsigned int)(v84 + 1);
                    if ( (unsigned int)v84 >= *(_DWORD *)(a2 + 16) )
                      goto LABEL_92;
                  }
                  v89 = WdLogNewEntry5_WdError(
                          v88,
                          (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v84) >> 25) & 0x60,
                          2LL * (unsigned int)v85);
                  *(_QWORD *)(v89 + 24) = 267LL;
                  WdLogEvent5_WdError(v89);
LABEL_86:
                  v90 = 0LL;
                  goto LABEL_87;
                }
LABEL_92:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v101);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
LABEL_93:
                operator delete[](v72);
                goto LABEL_38;
              }
              v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v36, v32);
              LODWORD(v50) = -1073741811;
              v64[3] = a1;
              v64[4] = *(unsigned int *)(a2 + 48);
              v64[5] = *(unsigned int *)(v25 + 120);
              v64[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v64);
            }
            else
            {
              v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
              v63[3] = a1;
              v63[4] = *(unsigned int *)(a2 + 16);
              v63[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v63);
              LODWORD(v50) = -1073741801;
            }
            v65 = v96 == 0;
LABEL_57:
            if ( !v65 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
            goto LABEL_38;
          }
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v22, v24);
          LODWORD(v50) = -1073741811;
          v57[3] = a1;
          v57[4] = *(unsigned int *)(a2 + 32);
          v57[5] = *(unsigned int *)(v25 + 104);
          v57[6] = -1073741811LL;
          goto LABEL_42;
        }
        v58 = (_QWORD *)WdLogNewEntry5_WdError(v26, v22, v24);
        LODWORD(v50) = -1073741811;
        v58[3] = a1;
        v58[4] = -1073741811LL;
      }
      else
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdError(v26, v22, v24);
        LODWORD(v50) = -1073741811;
        v58[3] = a1;
        v58[4] = *(unsigned int *)(v25 + 124);
        v58[5] = *(unsigned int *)(a2 + 16);
        v58[6] = -1073741811LL;
      }
      WdLogEvent5_WdError(v58);
      goto LABEL_45;
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    LODWORD(v50) = -1073741811;
    v57[3] = a1;
    v57[4] = a4;
    v57[5] = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdWarning(v57);
LABEL_45:
    v59 = v96 == 0;
    goto LABEL_47;
  }
  v60 = WdLogNewEntry5_WdError(v23, v22, v24);
  LODWORD(v50) = -1073741811;
  *(_QWORD *)(v60 + 24) = a1;
  *(_QWORD *)(v60 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v60);
  v59 = v96 == 0;
LABEL_47:
  if ( !v59 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
LABEL_39:
  operator delete[](v13);
  return (unsigned int)v50;
}
