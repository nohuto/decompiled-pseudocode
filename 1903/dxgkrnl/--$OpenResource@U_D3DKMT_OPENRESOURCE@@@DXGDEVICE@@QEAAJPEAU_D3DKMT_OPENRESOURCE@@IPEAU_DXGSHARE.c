/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0DB4
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EFBC8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020B720 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0259BB0 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C025A164 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C0225490 (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        struct DXGDEVICE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct COREDEVICEACCESS *v16; // r13
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGGLOBAL *v24; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // r14
  char v32; // r12
  unsigned int v33; // eax
  SIZE_T v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  D3DDDI_ALLOCATIONINFO *v37; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v38; // r9
  size_t v39; // rcx
  __int64 v40; // rdx
  char *v41; // r15
  __int64 v42; // r12
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  const void *v46; // rdx
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rbx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v57; // r10d
  _DWORD *v58; // r9
  __int64 v59; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  struct DXGPROCESS *Current; // r13
  SIZE_T v74; // rax
  __int64 v75; // rcx
  unsigned int *v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // r8d
  __int64 v81; // rax
  __int64 v82; // r9
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rax
  struct DXGRESOURCE *v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned int v91; // esi
  __int64 v92; // rax
  __int64 v93; // r9
  int v94; // ecx
  __int64 v95; // rcx
  __int64 v96; // rax
  struct DXGALLOCATION *v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  _BYTE v102[8]; // [rsp+80h] [rbp-80h] BYREF
  char v103; // [rsp+88h] [rbp-78h]
  _QWORD v104[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION v105; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v106[80]; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_ALLOCATIONINFO *v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+168h] [rbp+68h] BYREF

  v108 = a4;
  v10 = a3;
  v107 = 0LL;
  memset(&v105, 0, sizeof(v105));
  v13 = *((_QWORD *)a1 + 2);
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v13 + 16)) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v63 + 24) = 7373LL;
    WdLogEvent5_WdAssertion(v63);
  }
  if ( !*((_DWORD *)a1 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a1 + 13));
  v16 = a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a6 + 3));
  v17 = *((_BYTE *)DXGPROCESS::GetCurrent() + 299);
  Global = DXGGLOBAL::GetGlobal(v19, v18);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v102, (struct DXGGLOBAL *)((char *)Global + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v102);
  if ( !(_DWORD)v10 )
    goto LABEL_98;
  v24 = DXGGLOBAL::GetGlobal(v22, v21);
  CurrentThread = KeGetCurrentThread();
  v26 = v24;
  if ( *((struct _KTHREAD **)v24 + 19) != CurrentThread )
  {
    v61 = WdLogNewEntry5_WdAssertion(CurrentThread, v21);
    *(_QWORD *)(v61 + 24) = 1029LL;
    WdLogEvent5_WdAssertion(v61);
  }
  v27 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 >= *((_DWORD *)v26 + 48) )
    goto LABEL_46;
  v23 = *((_QWORD *)v26 + 22);
  v28 = 2LL * (unsigned int)v27;
  v29 = (unsigned int)v27;
  v27 = ((unsigned int)v10 >> 25) & 0x60;
  v21 = *(unsigned int *)(v23 + 8 * v28 + 8);
  if ( (((unsigned int)v10 >> 25) & 0x60) != (*(_BYTE *)(v23 + 8 * v28 + 8) & 0x60)
    || (v21 & 0x2000) != 0
    || (v21 & 0x1F) == 0 )
  {
    goto LABEL_46;
  }
  v30 = 2 * v29;
  v21 &= 0x1Fu;
  if ( (_BYTE)v21 != 2 )
  {
    v64 = WdLogNewEntry5_WdError(v27, v21, v23);
    *(_QWORD *)(v64 + 24) = 267LL;
    WdLogEvent5_WdError(v64);
    goto LABEL_46;
  }
  v31 = *(_QWORD *)(v23 + 8 * v30);
  if ( !v31 )
  {
LABEL_46:
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v21, v23);
    v62[3] = a1;
    v62[4] = v10;
    v62[5] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v62);
LABEL_48:
    LODWORD(v55) = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v31 + 128) - 44LL) & 2) != 0
    && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 208LL))() )
  {
    v66 = WdLogNewEntry5_WdEvent(v65);
    LODWORD(v55) = -1073741790;
    *(_QWORD *)(v66 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v66);
LABEL_52:
    if ( v103 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v102);
    goto LABEL_45;
  }
  v22 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(v31 + 124) != (_DWORD)v22 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v67[3] = a1;
    v67[4] = *(unsigned int *)(v31 + 124);
    v67[5] = *(unsigned int *)(a2 + 8);
    v67[6] = -1073741811LL;
LABEL_99:
    WdLogEvent5_WdError(v67);
    goto LABEL_48;
  }
  if ( (*(_DWORD *)(v31 + 12) & 4) != 0 )
  {
LABEL_98:
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v67[4] = -1073741811LL;
    v67[3] = a1;
    goto LABEL_99;
  }
  v32 = v17 & 8;
  if ( !v32 )
  {
    v33 = *(_DWORD *)(v31 + 104);
    if ( *(_DWORD *)(a2 + 32) != v33 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      v62[3] = a1;
      v62[4] = *(unsigned int *)(a2 + 32);
      v68 = *(unsigned int *)(v31 + 104);
LABEL_57:
      v62[5] = v68;
      v62[6] = -1073741811LL;
      goto LABEL_47;
    }
    if ( v33 )
    {
      memmove(*(void **)(a2 + 24), *(const void **)(v31 + 96), v33);
      v22 = *(unsigned int *)(a2 + 8);
    }
  }
  v34 = 96 * v22;
  if ( !is_mul_ok(v22, 0x60uLL) )
    v34 = -1LL;
  v107 = (D3DDDI_ALLOCATIONINFO *)operator new[](v34, 0x4B677844u, PagedPool);
  v37 = v107;
  if ( !v107 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, 0LL);
    v69[3] = a1;
    v69[4] = *(unsigned int *)(a2 + 8);
    v69[5] = -1073741801LL;
LABEL_60:
    WdLogEvent5_WdWarning(v69);
    LODWORD(v55) = -1073741801;
    goto LABEL_52;
  }
  v38 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v39 = *(unsigned int *)(a2 + 48);
  v40 = *(unsigned int *)(a2 + 8);
  v105.hDevice = *(_DWORD *)a2;
  v105.hGlobalShare = v10;
  v105.pStandardAllocation = v38;
  v105.PrivateDriverDataSize = v39;
  v105.NumAllocations = v40;
  v105.pAllocationInfo = v107;
  v105.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v105.Flags & 0xFFFFFF3E | 1);
  if ( !v32 && (_DWORD)v39 != *(_DWORD *)(v31 + 120) )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v107);
    v62[3] = a1;
    v62[4] = *(unsigned int *)(a2 + 48);
    v68 = *(unsigned int *)(v31 + 120);
    goto LABEL_57;
  }
  if ( (_DWORD)v39 )
  {
    memmove(v38, *(const void **)(v31 + 112), v39);
    LODWORD(v40) = *(_DWORD *)(a2 + 8);
    v37 = v107;
  }
  v41 = *(char **)(a2 + 56);
  v42 = 0LL;
  v43 = *(_QWORD **)(v31 + 128);
  if ( (_DWORD)v40 )
  {
    v44 = 0LL;
    while ( 1 )
    {
      v45 = *((unsigned int *)v43 - 2);
      if ( (int)v45 + (int)v44 < (unsigned int)v44 )
        break;
      if ( (unsigned int)(v45 + v44) > *(_DWORD *)(a2 + 64) )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v37);
        v69[3] = a1;
        v69[4] = -1073741801LL;
        goto LABEL_60;
      }
      v46 = (const void *)*(v43 - 2);
      if ( v46 )
      {
        memmove(v41, v46, (unsigned int)v45);
        v37 = v107;
      }
      v47 = 3 * v42;
      v42 = (unsigned int)(v42 + 1);
      v47 *= 32LL;
      *(D3DKMT_HANDLE *)((char *)&v37->hAllocation + v47) = 0;
      *(const void **)((char *)&v37->pSystemMem + v47) = 0LL;
      v48 = *((_DWORD *)v43 - 11);
      *(UINT *)((char *)&v37->Flags.Value + v47) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v37->VidPnSourceId + v47) = (v48 >> 6) & 0xF;
      v49 = *((_DWORD *)v43 - 11);
      *(void **)((char *)&v37->pPrivateDriverData + v47) = v41;
      *(UINT *)((char *)&v37->Flags.Value + v47) = v49 & 1 | (((v49 | (v49 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v37->PrivateDriverDataSize + v47) = *((_DWORD *)v43 - 2);
      v50 = *((unsigned int *)v43 - 2);
      v41 += v50;
      v43 = (_QWORD *)*v43;
      v44 = (unsigned int)(v50 + a7);
      a7 += v50;
      if ( (unsigned int)v42 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_37;
    }
    LODWORD(v55) = -1073741675;
    v70 = WdLogNewEntry5_WdWarning(v45, v44, v37);
    *(_QWORD *)(v70 + 24) = a1;
    *(_QWORD *)(v70 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v70);
    goto LABEL_52;
  }
LABEL_37:
  if ( v103 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v102);
  v51 = DXGDEVICE::CreateAllocation(a1, &v105, 0, 1u, 0LL, 0LL, v16, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v55 = v51;
  if ( v51 < 0 )
  {
    v71 = WdLogNewEntry5_WdWarning(v53, v52, v54);
    *(_QWORD *)(v71 + 24) = v55;
    WdLogEvent5_WdWarning(v71);
    goto LABEL_45;
  }
  hResource = v105.hResource;
  if ( !v105.hResource )
  {
    v72 = WdLogNewEntry5_WdAssertion(v53, v52);
    *(_QWORD *)(v72 + 24) = 7580LL;
    WdLogEvent5_WdAssertion(v72);
    hResource = v105.hResource;
  }
  v57 = 0;
  v58 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = a7;
  for ( *(_DWORD *)(a2 + 68) = hResource;
        v57 < *(_DWORD *)(a2 + 8);
        *(v58 - 16) = *(&v105.pAllocationInfo->PrivateDriverDataSize + 24 * v59) )
  {
    v59 = v57++;
    *v58 = *(&v105.pAllocationInfo->hAllocation + 24 * v59);
    v58 += 20;
    *((_QWORD *)v58 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v105.pAllocationInfo->pPrivateDriverData + 24 * v59)
                                        - *(_DWORD *)(a2 + 56));
  }
  if ( (*((_BYTE *)a1 + 1749) & 1) != 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    v74 = 4LL * *(unsigned int *)(a2 + 8);
    if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
      v74 = -1LL;
    v76 = (unsigned int *)operator new[](v74, 0x4B677844u, PagedPool);
    if ( !v76 )
    {
      LODWORD(v55) = -1073741801;
      goto LABEL_45;
    }
    v77 = *(unsigned int *)(v31 + 12);
    if ( (v77 & 8) != 0 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v75, v77);
      *(_QWORD *)(v78 + 24) = 7610LL;
      WdLogEvent5_WdAssertion(v78);
      LODWORD(v77) = *(_DWORD *)(v31 + 12);
    }
    v79 = (unsigned int)v77 >> 3;
    if ( (v79 & 1) != 0 )
      v80 = MEMORY[0x28];
    else
      v80 = *(_DWORD *)(v31 + 28);
    LODWORD(v55) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 4144LL),
                     Current,
                     a1,
                     v79 & 1,
                     v80,
                     *(_DWORD *)(a2 + 8),
                     *(_DWORD *)(a2 + 64),
                     (unsigned int *)&v108,
                     v76);
    if ( (int)v55 < 0 )
      goto LABEL_97;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v106, (struct _KTHREAD **)Current);
    v81 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v81 < *((_DWORD *)Current + 56) )
    {
      v82 = *((_QWORD *)Current + 26);
      v83 = *(_DWORD *)(v82 + 16 * v81 + 8);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v82 + 16 * v81 + 8) & 0x60)
        && (v83 & 0x2000) == 0
        && (v83 & 0x1F) != 0 )
      {
        v84 = v83 & 0x1F;
        if ( (_BYTE)v84 == 4 )
        {
          v86 = *(struct DXGRESOURCE **)(v82 + 16LL * (unsigned int)v81);
          goto LABEL_80;
        }
        v85 = WdLogNewEntry5_WdError(v84, (*(_DWORD *)(a2 + 68) >> 25) & 0x60, 2LL * (unsigned int)v81);
        *(_QWORD *)(v85 + 24) = 267LL;
        WdLogEvent5_WdError(v85);
      }
    }
    v86 = 0LL;
LABEL_80:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v104, v86);
    if ( !v104[0] )
    {
      v90 = WdLogNewEntry5_WdWarning(v88, v87, v89);
      *(_QWORD *)(v90 + 24) = 7627LL;
      WdLogEvent5_WdWarning(v90);
      LODWORD(v55) = -1073741811;
      goto LABEL_96;
    }
    v91 = 0;
    *(_DWORD *)(v104[0] + 20LL) = v108;
    if ( *(_DWORD *)(a2 + 8) )
    {
      while ( 1 )
      {
        v92 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v91) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v92 >= *((_DWORD *)Current + 56) )
          goto LABEL_90;
        v93 = *((_QWORD *)Current + 26);
        v94 = *(_DWORD *)(v93 + 16 * v92 + 8);
        if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v91) >> 25) & 0x60) != (*(_BYTE *)(v93 + 16 * v92 + 8) & 0x60)
          || (v94 & 0x2000) != 0
          || (v94 & 0x1F) == 0 )
        {
          goto LABEL_90;
        }
        v95 = v94 & 0x1F;
        if ( (_BYTE)v95 != 5 )
          break;
        v97 = *(struct DXGALLOCATION **)(v93 + 16LL * (unsigned int)v92);
LABEL_91:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6, v97);
        if ( !a6 )
        {
          v101 = WdLogNewEntry5_WdWarning(v99, v98, v100);
          *(_QWORD *)(v101 + 24) = 7638LL;
          WdLogEvent5_WdWarning(v101);
          LODWORD(v55) = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6);
          goto LABEL_96;
        }
        *((_DWORD *)a6 + 24) = v76[v91];
        *((_DWORD *)a6 + 25) = v76[v91];
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6);
        if ( ++v91 >= *(_DWORD *)(a2 + 8) )
          goto LABEL_96;
      }
      v96 = WdLogNewEntry5_WdError(
              v95,
              (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v91) >> 25) & 0x60,
              2LL * (unsigned int)v92);
      *(_QWORD *)(v96 + 24) = 267LL;
      WdLogEvent5_WdError(v96);
LABEL_90:
      v97 = 0LL;
      goto LABEL_91;
    }
LABEL_96:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v104);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v106);
LABEL_97:
    operator delete[](v76);
  }
LABEL_45:
  operator delete[](v107);
  return (unsigned int)v55;
}
