/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0013BE4 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C011F670 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01229C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        PERESOURCE **a5)
{
  PERESOURCE **v5; // r15
  __int64 v6; // r12
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rdi
  DISPLAY_SOURCE *v13; // rcx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rax
  PERESOURCE *v16; // r8
  struct _LIST_ENTRY *Flink; // rcx
  UINT Width; // edx
  UINT Height; // r8d
  __int64 v20; // rax
  int StandardAllocation; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  PERESOURCE *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r13
  DXGPUSHLOCK *v30; // rdi
  unsigned int *v31; // rsi
  unsigned int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rcx
  struct _ERESOURCE *v37; // r15
  ADAPTER_RENDER *v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r15
  UINT v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // ecx
  unsigned int v50; // r14d
  __int64 v51; // rax
  __int64 v52; // r8
  int v53; // ecx
  __int64 v54; // rcx
  struct _ERESOURCE *v55; // r14
  __int64 v56; // rcx
  PERESOURCE *v57; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  ERESOURCE_THREAD OwnerThread; // rcx
  void *v64; // rax
  ADAPTER_RENDER *v65; // rcx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r15
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  PERESOURCE *v76; // rax
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  ERESOURCE_THREAD v82; // rax
  PERESOURCE *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  PERESOURCE *v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  int v97; // [rsp+34h] [rbp-CCh]
  struct DXGPROCESS *Current; // [rsp+40h] [rbp-C0h]
  __int64 v99; // [rsp+48h] [rbp-B8h] BYREF
  struct _ERESOURCE *v100; // [rsp+50h] [rbp-B0h]
  __int64 v101; // [rsp+60h] [rbp-A0h]
  const struct _D3DKMT_DISPLAYMODE *v102; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_DESCRIBEALLOCATION v103; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v104[54]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+250h] [rbp+150h] BYREF
  __int64 v106; // [rsp+258h] [rbp+158h]
  unsigned __int64 v107; // [rsp+260h] [rbp+160h] BYREF
  __int128 v108; // [rsp+268h] [rbp+168h]

  v5 = a5;
  v6 = a3;
  v99 = 0LL;
  v100 = 0LL;
  v9 = a4;
  v102 = a4;
  memset(v104, 0, 0x1A8uLL);
  memset(&v103, 0, sizeof(v103));
  v97 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v59 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v59 + 24) = 724LL;
    WdLogEvent5_WdAssertion(v59);
  }
  v11 = v6;
  v12 = 3760 * v6;
  Current = DXGPROCESS::GetCurrent();
  v13 = (DISPLAY_SOURCE *)&this[14][470 * v6];
  v105 = v6;
  v101 = 3760 * v6;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership(v13) )
  {
    v60 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v60 + 24) = this[2];
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v60);
    return 3221225485LL;
  }
  v15 = DXGPROCESS::GetCurrent();
  v16 = this[14];
  Flink = (*(PERESOURCE *)((char *)v16 + v12 + 24))->SystemResourcesList.Flink[1164].Flink;
  if ( *((struct _LIST_ENTRY **)v15 + 7) != Flink )
  {
    v61 = WdLogNewEntry5_WdAssertion(Flink);
    *(_QWORD *)(v61 + 24) = 744LL;
    WdLogEvent5_WdAssertion(v61);
    v16 = this[14];
  }
  if ( !*(PERESOURCE *)((char *)v16 + v12 + 88) )
    goto LABEL_7;
  if ( !*(PERESOURCE *)((char *)v16 + v12 + 600) )
  {
    v62 = WdLogNewEntry5_WdAssertion(Flink);
    *(_QWORD *)(v62 + 24) = 755LL;
    WdLogEvent5_WdAssertion(v62);
    v16 = this[14];
  }
  OwnerThread = (*(PERESOURCE *)((char *)v16 + v12 + 88))->OwnerEntry.OwnerThread;
  if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
  {
    v64 = *(void **)(OwnerThread + 16);
    v65 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
    v103.hAllocation = v64;
    v66 = ADAPTER_RENDER::DdiDescribeAllocation(v65, &v103);
    v70 = v66;
    if ( v66 >= 0 )
    {
      if ( v103.Width == v9->Width
        && v103.Height == v9->Height
        && v103.Format == D3DDDIFMT_A8R8G8B8
        && v103.RefreshRate.Numerator == v9->RefreshRate.Numerator
        && v103.RefreshRate.Denominator == v9->RefreshRate.Denominator
        && *(_DWORD *)((char *)this[14] + v12 + 1040) == v9->DisplayOrientation )
      {
        return 0LL;
      }
    }
    else
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v67, v69);
      v71[3] = a2;
      v71[4] = *(PERESOURCE *)((char *)this[14] + v12 + 88);
      v71[5] = v6;
      v71[6] = v70;
      WdLogEvent5_WdWarning(v71);
    }
  }
  v72 = ADAPTER_DISPLAY::DestroyCddAllocations(this, a2, v6);
  v25 = v72;
  if ( v72 >= 0 )
  {
    v76 = this[14];
    if ( *(PERESOURCE *)((char *)v76 + v12 + 88) || *(PERESOURCE *)((char *)v76 + v12 + 600) )
    {
      v77 = WdLogNewEntry5_WdAssertion(v73);
      *(_QWORD *)(v77 + 24) = 808LL;
      WdLogEvent5_WdAssertion(v77);
    }
    v5 = a5;
LABEL_7:
    v104[1] = 0LL;
    Width = v9->Width;
    Height = v9->Height;
    v107 = 0LL;
    v108 = 0uLL;
    *(D3DDDI_RATIONAL *)((char *)&v108 + 4) = v9->RefreshRate;
    v104[3] = &v107;
    v20 = *((_QWORD *)a2 + 2);
    HIDWORD(v108) = v6;
    v107 = __PAIR64__(Height, Width);
    LODWORD(v108) = 21;
    v104[0] = 2049LL;
    LODWORD(v104[2]) = 1;
    if ( *((_QWORD *)a2 + 216) != *(_QWORD *)(v20 + 16) && (*((_BYTE *)a2 + 1749) & 1) == 0 )
    {
      if ( *((_BYTE *)this + 132) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        v78 = Height * Width;
        Height = Width;
        HIDWORD(v99) = 4 * v78;
      }
      else
      {
        HIDWORD(v99) = 4 * Height * Width;
      }
      v104[4] = DxgkCreateDoDPrimarySection;
      v104[5] = &v99;
      v97 = 4 * Height;
    }
    StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v104, v5);
    v25 = StandardAllocation;
    if ( StandardAllocation < 0 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v75[3] = v9->Width;
      v75[4] = v9->Height;
      v75[5] = a2;
      v75[6] = v6;
      v75[7] = v25;
      WdLogEvent5_WdWarning(v75);
    }
    else
    {
      if ( !LODWORD(v104[1]) )
      {
        v79 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v79 + 24) = 878LL;
        WdLogEvent5_WdAssertion(v79);
      }
      if ( !HIDWORD(v104[1]) )
      {
        v80 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v80 + 24) = 880LL;
        WdLogEvent5_WdAssertion(v80);
      }
      v26 = this[2];
      if ( *((int *)v26 + 540) >= 0x2000 )
        v27 = *((_DWORD *)v26 + 64);
      else
        v27 = 1;
      if ( v27 )
      {
        v28 = v12 + 88;
        v29 = v27;
        v30 = (struct DXGPROCESS *)((char *)Current + 208);
        v31 = (unsigned int *)&v104[6] + 1;
        while ( 1 )
        {
          v32 = *v31;
          DXGPUSHLOCK::AcquireShared(v30);
          v33 = (v32 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v33 >= *((_DWORD *)Current + 62) )
            goto LABEL_80;
          v34 = *((_QWORD *)Current + 29);
          v35 = *(_DWORD *)(v34 + 16 * v33 + 8);
          if ( ((v32 >> 25) & 0x60) != (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60)
            || (v35 & 0x2000) != 0
            || (v35 & 0x1F) == 0 )
          {
            goto LABEL_80;
          }
          v36 = v35 & 0x1F;
          if ( (_BYTE)v36 != 5 )
            break;
          v37 = *(struct _ERESOURCE **)(v34 + 16LL * (unsigned int)v33);
LABEL_23:
          ExReleasePushLockSharedEx(v30, 0LL);
          KeLeaveCriticalRegion();
          *(PERESOURCE *)((char *)this[14] + v28) = v37;
          if ( (*((_BYTE *)a2 + 1749) & 1) != 0 )
          {
            v82 = (*(PERESOURCE *)((char *)this[14] + v28))->OwnerEntry.OwnerThread;
            *(_DWORD *)(v82 + 4) |= 2u;
          }
          v28 += 8LL;
          ++v31;
          if ( !--v29 )
          {
            v11 = v105;
            v12 = v101;
            v9 = v102;
            v6 = (unsigned int)v105;
            goto LABEL_27;
          }
        }
        v81 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v81 + 24) = 316LL;
        WdLogEvent5_WdError(v81);
LABEL_80:
        v37 = 0LL;
        goto LABEL_23;
      }
LABEL_27:
      v38 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      if ( *((_QWORD *)a2 + 216) != *((_QWORD *)v38 + 2) && (*((_BYTE *)a2 + 1749) & 1) == 0 )
      {
        *(_DWORD *)((char *)this[14] + v12 + 612) = v99;
        *(PERESOURCE *)((char *)this[14] + v12 + 616) = v100;
        v83 = this[14];
        if ( !*(_DWORD *)((char *)v83 + v12 + 612) || !*(PERESOURCE *)((char *)v83 + v12 + 616) )
        {
          v84 = WdLogNewEntry5_WdAssertion(v83);
          *(_QWORD *)(v84 + 24) = 1018LL;
          WdLogEvent5_WdAssertion(v84);
          v83 = this[14];
        }
        *(PERESOURCE *)((char *)v83 + v12 + 600) = *(PERESOURCE *)((char *)v83 + v12 + 88);
        if ( !v97 )
        {
          v85 = WdLogNewEntry5_WdAssertion(v83);
          *(_QWORD *)(v85 + 24) = 1029LL;
          WdLogEvent5_WdAssertion(v85);
        }
        *(_DWORD *)((char *)this[14] + v12 + 608) = v97;
        *(_DWORD *)((char *)this[14] + v12 + 1056) = 1;
        *(_DWORD *)((char *)this[14] + v12 + 1060) = 1;
        *(_DWORD *)((char *)this[14] + v12 + 1064) = 0;
LABEL_47:
        if ( LODWORD(this[14][470 * v11 + 87]) == 1 )
          ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, a3);
        ADAPTER_DISPLAY::SetCddDisplayMode(this, a3, v9);
        return 0LL;
      }
      v105 = 0LL;
      v106 = 0LL;
      v103.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)this[14] + v12 + 88))->OwnerEntry.OwnerThread + 16);
      v39 = ADAPTER_RENDER::DdiDescribeAllocation(v38, &v103);
      v43 = v39;
      if ( v39 < 0 )
      {
        v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
        v86[3] = a2;
        v86[4] = *(PERESOURCE *)((char *)this[14] + v12 + 88);
        v86[5] = v11;
        v86[6] = v43;
        WdLogEvent5_WdWarning(v86);
        v6 = v11;
        *(_DWORD *)((char *)this[14] + v12 + 1056) = 1;
        *(_DWORD *)((char *)this[14] + v12 + 1060) = 1;
        *(_DWORD *)((char *)this[14] + v12 + 1064) = 0;
      }
      else
      {
        *(PERESOURCE *)((char *)this[14] + v12 + 1056) = (PERESOURCE)v103.MultisampleMethod;
        *(_DWORD *)((char *)this[14] + v12 + 1064) = v103.PrivateDriverFormatAttribute;
      }
      if ( *((_BYTE *)this + 132) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        LODWORD(v105) = v9->Width;
        v44 = v9->Height;
      }
      else
      {
        LODWORD(v105) = v9->Height;
        v44 = v9->Width;
      }
      v104[0] = 0LL;
      HIDWORD(v105) = v44;
      LODWORD(v106) = v9->Format;
      v104[3] = &v105;
      LODWORD(v104[2]) = 2;
      v45 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v104, a5);
      v25 = v45;
      if ( v45 >= 0 )
      {
        if ( !HIDWORD(v104[6]) || !LODWORD(v104[1]) )
        {
          v92 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v92 + 24) = 995LL;
          WdLogEvent5_WdAssertion(v92);
        }
        v49 = HIDWORD(v106);
        if ( !HIDWORD(v106) )
        {
          v93 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v93 + 24) = 1000LL;
          WdLogEvent5_WdAssertion(v93);
          v49 = HIDWORD(v106);
        }
        *(_DWORD *)((char *)this[14] + v12 + 608) = v49;
        v50 = HIDWORD(v104[6]);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
        v51 = (v50 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v51 < *((_DWORD *)Current + 62) )
        {
          v52 = *((_QWORD *)Current + 29);
          v53 = *(_DWORD *)(v52 + 16 * v51 + 8);
          if ( ((v50 >> 25) & 0x60) == (*(_BYTE *)(v52 + 16 * v51 + 8) & 0x60)
            && (v53 & 0x2000) == 0
            && (v53 & 0x1F) != 0 )
          {
            v54 = v53 & 0x1F;
            if ( (_BYTE)v54 == 5 )
            {
              v55 = *(struct _ERESOURCE **)(v52 + 16LL * (unsigned int)v51);
LABEL_44:
              ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
              KeLeaveCriticalRegion();
              *(PERESOURCE *)((char *)this[14] + v12 + 600) = v55;
              v57 = this[14];
              if ( !*(PERESOURCE *)((char *)v57 + v12 + 600) )
              {
                v95 = WdLogNewEntry5_WdAssertion(v56);
                *(_QWORD *)(v95 + 24) = 1004LL;
                WdLogEvent5_WdAssertion(v95);
                v57 = this[14];
              }
              *(_DWORD *)((char *)v57 + v12 + 612) = 0;
              *(PERESOURCE *)((char *)this[14] + v12 + 616) = 0LL;
              goto LABEL_47;
            }
            v94 = WdLogNewEntry5_WdError(v54);
            *(_QWORD *)(v94 + 24) = 316LL;
            WdLogEvent5_WdError(v94);
          }
        }
        v55 = 0LL;
        goto LABEL_44;
      }
      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
      v87[3] = (unsigned int)v105;
      v87[4] = HIDWORD(v105);
      v87[5] = a2;
      v87[6] = v6;
      v87[7] = v25;
      WdLogEvent5_WdWarning(v87);
      DXGDEVICE::DestroyAllocationInternal(
        a2,
        0,
        0LL,
        (struct DXGRESOURCE *)(*(PERESOURCE *)((char *)this[14] + v12 + 88))->ExclusiveWaiters,
        0LL,
        DXGDEVICE::DestroyFlagsDefault);
      v88 = this[2];
      if ( *((int *)v88 + 540) < 0x2000 )
        v89 = 1;
      else
        v89 = *((_DWORD *)v88 + 64);
      if ( v89 )
      {
        v90 = v12 + 88;
        v91 = v89;
        do
        {
          *(PERESOURCE *)((char *)this[14] + v90) = 0LL;
          v90 += 8LL;
          --v91;
        }
        while ( v91 );
      }
    }
    return (unsigned int)v25;
  }
  v74 = (_QWORD *)WdLogNewEntry5_WdError(v73);
  v74[3] = a2;
  v74[4] = v6;
  v74[5] = v25;
  WdLogEvent5_WdError(v74);
  return (unsigned int)v25;
}
