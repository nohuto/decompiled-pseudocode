/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8E10
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C52F0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C7454 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0001738 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00C77B4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00CB054 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F30A8 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  struct COREDEVICEACCESS *v5; // r15
  unsigned __int64 v6; // r13
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  PERESOURCE *v13; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGPROCESS *v19; // rax
  PERESOURCE *v20; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v22; // rcx
  __int64 v23; // rcx
  bool v24; // r13
  UINT Width; // ecx
  UINT Height; // edx
  int StandardAllocation; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r15
  PERESOURCE *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rsi
  DXGPUSHLOCK *v35; // rdi
  unsigned int *v36; // r13
  unsigned int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rax
  struct _ERESOURCE *v42; // r15
  PERESOURCE *v43; // rax
  ADAPTER_RENDER *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r15
  UINT v49; // edx
  UINT v50; // ecx
  D3DDDIFORMAT Format; // eax
  int v52; // r13d
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // ecx
  struct DXGPROCESS *v58; // r12
  unsigned int v59; // r14d
  __int64 v60; // rax
  __int64 v61; // r8
  int v62; // ecx
  __int64 v63; // rax
  struct _ERESOURCE *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  PERESOURCE *v67; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  ERESOURCE_THREAD OwnerThread; // rcx
  void *v76; // rax
  ADAPTER_RENDER *v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r15
  _QWORD *v83; // rax
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r8
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  PERESOURCE *v89; // rax
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  ERESOURCE_THREAD v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  PERESOURCE *v97; // rax
  unsigned int v98; // eax
  __int64 v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  PERESOURCE *v104; // rcx
  __int64 v105; // rax
  int v106; // ecx
  __int64 v107; // rax
  PERESOURCE *v108; // rcx
  __int64 v109; // rax
  char v110; // [rsp+30h] [rbp-D0h]
  char v111; // [rsp+31h] [rbp-CFh]
  bool v112; // [rsp+32h] [rbp-CEh]
  int v113; // [rsp+34h] [rbp-CCh]
  __int64 v115; // [rsp+40h] [rbp-C0h] BYREF
  struct _ERESOURCE *v116; // [rsp+48h] [rbp-B8h]
  struct COREDEVICEACCESS *v117; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v118; // [rsp+58h] [rbp-A8h]
  __int64 v119; // [rsp+68h] [rbp-98h]
  const struct _D3DKMT_DISPLAYMODE *v120; // [rsp+70h] [rbp-90h]
  _DXGKARG_DESCRIBEALLOCATION v121; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v122[54]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v123; // [rsp+260h] [rbp+160h] BYREF
  __int64 v124; // [rsp+268h] [rbp+168h]
  _DWORD v125[3]; // [rsp+270h] [rbp+170h] BYREF
  D3DDDI_RATIONAL RefreshRate; // [rsp+27Ch] [rbp+17Ch]
  int v127; // [rsp+284h] [rbp+184h]

  v5 = a5;
  v6 = a3;
  v117 = a5;
  v115 = 0LL;
  v116 = 0LL;
  v9 = a4;
  v120 = a4;
  memset(v122, 0, 0x1A8uLL);
  memset(&v121, 0, sizeof(v121));
  v113 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v71 + 24) = 739LL;
    WdLogEvent5_WdAssertion(v71);
  }
  Current = DXGPROCESS::GetCurrent();
  v13 = this[14];
  v14 = v6;
  v15 = 3968 * v6;
  v118 = Current;
  v123 = v6;
  v119 = 3968 * v6;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&v13[496 * v6]) )
  {
    v72 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v72 + 24) = this[2];
    *(_QWORD *)(v72 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    return 3221225485LL;
  }
  v19 = DXGPROCESS::GetCurrent();
  v20 = this[14];
  Flink = (*(PERESOURCE *)((char *)v20 + v15 + 24))->SystemResourcesList.Flink;
  v22 = Flink[1164].Flink;
  if ( *((struct _LIST_ENTRY **)v19 + 7) != v22 )
  {
    v73 = WdLogNewEntry5_WdAssertion(v22, Flink);
    *(_QWORD *)(v73 + 24) = 759LL;
    WdLogEvent5_WdAssertion(v73);
    v20 = this[14];
  }
  if ( *(PERESOURCE *)((char *)v20 + v15 + 88) )
  {
    if ( !*(PERESOURCE *)((char *)v20 + v15 + 600) )
    {
      v74 = WdLogNewEntry5_WdAssertion(v22, Flink);
      *(_QWORD *)(v74 + 24) = 766LL;
      WdLogEvent5_WdAssertion(v74);
      v20 = this[14];
    }
    OwnerThread = (*(PERESOURCE *)((char *)v20 + v15 + 88))->OwnerEntry.OwnerThread;
    if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
    {
      v76 = *(void **)(OwnerThread + 16);
      v77 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v121.hAllocation = v76;
      v78 = ADAPTER_RENDER::DdiDescribeAllocation(v77, &v121);
      v82 = v78;
      if ( v78 >= 0 )
      {
        if ( v121.Width == v9->Width
          && v121.Height == v9->Height
          && v121.Format == D3DDDIFMT_A8R8G8B8
          && v121.RefreshRate.Numerator == v9->RefreshRate.Numerator
          && v121.RefreshRate.Denominator == v9->RefreshRate.Denominator
          && *(_DWORD *)((char *)this[14] + v15 + 1040) == v9->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v80, v79, v81);
        v83[3] = a2;
        v83[4] = *(PERESOURCE *)((char *)this[14] + v15 + 88);
        v83[5] = v6;
        v83[6] = v82;
        WdLogEvent5_WdWarning(v83);
      }
    }
    v84 = ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)this, a2, v6);
    v30 = v84;
    if ( v84 < 0 )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdError(v85, Flink, v86);
      v87[3] = a2;
      v87[4] = v6;
      v87[5] = v30;
      WdLogEvent5_WdError(v87);
      return (unsigned int)v30;
    }
    v89 = this[14];
    if ( *(PERESOURCE *)((char *)v89 + v15 + 88) || *(PERESOURCE *)((char *)v89 + v15 + 600) )
    {
      v90 = WdLogNewEntry5_WdAssertion(v85, Flink);
      *(_QWORD *)(v90 + 24) = 819LL;
      WdLogEvent5_WdAssertion(v90);
    }
    v5 = v117;
  }
  v23 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *((_QWORD *)a2 + 216) == v23 || (*((_BYTE *)a2 + 1749) & 1) != 0 )
  {
    v24 = 0;
    v110 = 1;
    v112 = 0;
  }
  else
  {
    v110 = 0;
    v24 = (*(_DWORD *)(v23 + 308) & 0x10) != 0;
    v112 = v24;
    if ( (*(_DWORD *)(v23 + 308) & 0x10) == 0 )
    {
      v111 = 1;
      goto LABEL_28;
    }
  }
  v122[1] = 0LL;
  Width = v9->Width;
  Height = v9->Height;
  v127 = v14;
  RefreshRate = v9->RefreshRate;
  v122[3] = v125;
  v111 = 0;
  v125[0] = Width;
  v125[1] = Height;
  v125[2] = 21;
  v122[0] = 2049LL;
  LODWORD(v122[2]) = 1;
  if ( v24 )
  {
    if ( *((_BYTE *)this + 233) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      v91 = Height * Width;
      Height = Width;
      HIDWORD(v115) = 4 * v91;
    }
    else
    {
      HIDWORD(v115) = 4 * Height * Width;
    }
    v122[4] = DxgkCreateDoDPrimarySection;
    v122[5] = &v115;
    v113 = 4 * Height;
  }
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v122, v5);
  v30 = StandardAllocation;
  if ( StandardAllocation >= 0 )
  {
    if ( !LODWORD(v122[1]) )
    {
      v92 = WdLogNewEntry5_WdAssertion(v28, Flink);
      *(_QWORD *)(v92 + 24) = 903LL;
      WdLogEvent5_WdAssertion(v92);
    }
    if ( !HIDWORD(v122[1]) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v28, Flink);
      *(_QWORD *)(v93 + 24) = 905LL;
      WdLogEvent5_WdAssertion(v93);
    }
    v31 = this[2];
    if ( *((int *)v31 + 546) >= 0x2000 )
      v32 = *((_DWORD *)v31 + 64);
    else
      v32 = 1;
    if ( !v32 )
    {
LABEL_28:
      v43 = this[14];
      if ( v110 )
      {
        v44 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
        v121.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)v43 + v15 + 88))->OwnerEntry.OwnerThread + 16);
        v45 = ADAPTER_RENDER::DdiDescribeAllocation(v44, &v121);
        v48 = v45;
        if ( v45 >= 0 )
        {
          *(PERESOURCE *)((char *)this[14] + v15 + 1056) = (PERESOURCE)v121.MultisampleMethod;
          *(_DWORD *)((char *)this[14] + v15 + 1064) = v121.PrivateDriverFormatAttribute;
LABEL_31:
          if ( v24 )
          {
            v106 = v115;
            if ( !(_DWORD)v115 || !v116 )
            {
              v107 = WdLogNewEntry5_WdAssertion((unsigned int)v115, Flink);
              *(_QWORD *)(v107 + 24) = 1101LL;
              WdLogEvent5_WdAssertion(v107);
              v106 = v115;
            }
            *(_DWORD *)((char *)this[14] + v15 + 612) = v106;
            *(PERESOURCE *)((char *)this[14] + v15 + 616) = v116;
            v108 = this[14];
            *(PERESOURCE *)((char *)v108 + v15 + 600) = *(PERESOURCE *)((char *)v108 + v15 + 88);
            if ( !v113 )
            {
              v109 = WdLogNewEntry5_WdAssertion(v108, Flink);
              *(_QWORD *)(v109 + 24) = 1114LL;
              WdLogEvent5_WdAssertion(v109);
            }
            *(_DWORD *)((char *)this[14] + v15 + 608) = v113;
            goto LABEL_50;
          }
          v123 = 0LL;
          v124 = 0LL;
          if ( *((_BYTE *)this + 233) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
          {
            v49 = v9->Width;
            v50 = v9->Height;
          }
          else
          {
            v49 = v9->Height;
            v50 = v9->Width;
          }
          Format = v9->Format;
          v122[0] = 0LL;
          LODWORD(v124) = Format;
          v122[3] = &v123;
          v123 = __PAIR64__(v50, v49);
          LODWORD(v122[2]) = 2;
          if ( v111 )
          {
            v122[4] = DxgkCreateDoDPrimarySection;
            v52 = 4 * v49;
            LODWORD(v122[0]) = 2049;
            v122[5] = &v115;
            HIDWORD(v115) = 4 * v49 * v50;
          }
          else
          {
            v52 = v113;
          }
          v53 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v122, v117);
          v30 = v53;
          if ( v53 >= 0 )
          {
            if ( !HIDWORD(v122[6]) || !LODWORD(v122[1]) )
            {
              v101 = WdLogNewEntry5_WdAssertion(v55, v54);
              *(_QWORD *)(v101 + 24) = 1055LL;
              WdLogEvent5_WdAssertion(v101);
            }
            v57 = HIDWORD(v124);
            if ( !HIDWORD(v124) )
            {
              v102 = WdLogNewEntry5_WdAssertion(0LL, v54);
              *(_QWORD *)(v102 + 24) = 1060LL;
              WdLogEvent5_WdAssertion(v102);
              v57 = HIDWORD(v124);
            }
            v58 = v118;
            *(_DWORD *)((char *)this[14] + v15 + 608) = v57;
            v59 = HIDWORD(v122[6]);
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v58 + 184));
            v60 = (v59 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v60 < *((_DWORD *)v58 + 56) )
            {
              v61 = *((_QWORD *)v58 + 26);
              v62 = *(_DWORD *)(v61 + 16 * v60 + 8);
              if ( ((v59 >> 25) & 0x60) == (*(_BYTE *)(v61 + 16 * v60 + 8) & 0x60)
                && (v62 & 0x2000) == 0
                && (v62 & 0x1F) != 0 )
              {
                v70 = v62 & 0x1F;
                if ( (_BYTE)v70 == 5 )
                {
                  v64 = *(struct _ERESOURCE **)(v61 + 16LL * (unsigned int)v60);
                  goto LABEL_47;
                }
                v63 = WdLogNewEntry5_WdError(v70, 2LL * (unsigned int)v60, v61);
                *(_QWORD *)(v63 + 24) = 267LL;
                WdLogEvent5_WdError(v63);
              }
            }
            v64 = 0LL;
LABEL_47:
            ExReleasePushLockSharedEx((char *)v58 + 184, 0LL);
            KeLeaveCriticalRegion();
            *(PERESOURCE *)((char *)this[14] + v15 + 600) = v64;
            v67 = this[14];
            if ( !*(PERESOURCE *)((char *)v67 + v15 + 600) )
            {
              v103 = WdLogNewEntry5_WdAssertion(v66, v65);
              *(_QWORD *)(v103 + 24) = 1064LL;
              WdLogEvent5_WdAssertion(v103);
              v67 = this[14];
            }
            *(_DWORD *)((char *)v67 + v15 + 612) = 0;
            *(PERESOURCE *)((char *)this[14] + v15 + 616) = 0LL;
            if ( v111 )
            {
              if ( (_DWORD)v115 && v116 )
              {
                *(_DWORD *)((char *)this[14] + v15 + 612) = v115;
                *(PERESOURCE *)((char *)this[14] + v15 + 616) = v116;
              }
              v104 = this[14];
              *(PERESOURCE *)((char *)v104 + v15 + 88) = *(PERESOURCE *)((char *)v104 + v15 + 600);
              if ( !v52 )
              {
                v105 = WdLogNewEntry5_WdAssertion(v104, v65);
                *(_QWORD *)(v105 + 24) = 1090LL;
                WdLogEvent5_WdAssertion(v105);
              }
              *(_DWORD *)((char *)this[14] + v15 + 608) = v52;
            }
LABEL_50:
            if ( *(_DWORD *)((char *)this[14] + v15 + 696) == 1 )
              ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, a3);
            ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)this, a3, v9);
            return 0LL;
          }
          v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56);
          v96[3] = (unsigned int)v123;
          v96[4] = HIDWORD(v123);
          v96[5] = a2;
          v96[6] = v14;
          v96[7] = v30;
          WdLogEvent5_WdWarning(v96);
          if ( v110 )
          {
            DXGDEVICE::DestroyAllocationInternal(
              a2,
              0,
              0LL,
              (struct DXGRESOURCE *)(*(PERESOURCE *)((char *)this[14] + v15 + 88))->ExclusiveWaiters,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            v97 = this[2];
            v98 = *((int *)v97 + 546) < 0x2000 ? 1 : *((_DWORD *)v97 + 64);
            if ( v98 )
            {
              v99 = v15 + 88;
              v100 = v98;
              do
              {
                *(PERESOURCE *)((char *)this[14] + v99) = 0LL;
                v99 += 8LL;
                --v100;
              }
              while ( v100 );
            }
          }
          return (unsigned int)v30;
        }
        v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, Flink, v47);
        v95[3] = a2;
        v95[4] = *(PERESOURCE *)((char *)this[14] + v15 + 88);
        v95[5] = v14;
        v95[6] = v48;
        WdLogEvent5_WdWarning(v95);
        *(_DWORD *)((char *)this[14] + v15 + 1056) = 1;
      }
      else
      {
        *(_DWORD *)((char *)v43 + v15 + 1056) = 1;
      }
      *(_DWORD *)((char *)this[14] + v15 + 1060) = 1;
      *(_DWORD *)((char *)this[14] + v15 + 1064) = 0;
      goto LABEL_31;
    }
    v33 = v15 + 88;
    v34 = v32;
    v35 = (struct DXGPROCESS *)((char *)v118 + 184);
    v36 = (unsigned int *)&v122[6] + 1;
    while ( 1 )
    {
      v37 = *v36;
      DXGPUSHLOCK::AcquireShared(v35);
      v38 = (v37 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 < *((_DWORD *)v118 + 56) )
      {
        v39 = *((_QWORD *)v118 + 26);
        v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
        if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
        {
          v69 = v40 & 0x1F;
          if ( (_BYTE)v69 == 5 )
          {
            v42 = *(struct _ERESOURCE **)(v39 + 16LL * (unsigned int)v38);
            goto LABEL_24;
          }
          v41 = WdLogNewEntry5_WdError(v69, 2LL * (unsigned int)v38, v39);
          *(_QWORD *)(v41 + 24) = 267LL;
          WdLogEvent5_WdError(v41);
        }
      }
      v42 = 0LL;
LABEL_24:
      ExReleasePushLockSharedEx(v35, 0LL);
      KeLeaveCriticalRegion();
      *(PERESOURCE *)((char *)this[14] + v33) = v42;
      if ( (*((_BYTE *)a2 + 1749) & 1) != 0 )
      {
        v94 = (*(PERESOURCE *)((char *)this[14] + v33))->OwnerEntry.OwnerThread;
        *(_DWORD *)(v94 + 4) |= 2u;
      }
      v33 += 8LL;
      ++v36;
      if ( !--v34 )
      {
        v15 = v119;
        v9 = v120;
        v14 = v123;
        v24 = v112;
        goto LABEL_28;
      }
    }
  }
  v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, Flink, v29);
  v88[3] = v9->Width;
  v88[4] = v9->Height;
  v88[5] = a2;
  v88[6] = v14;
  v88[7] = v30;
  WdLogEvent5_WdWarning(v88);
  return (unsigned int)v30;
}
