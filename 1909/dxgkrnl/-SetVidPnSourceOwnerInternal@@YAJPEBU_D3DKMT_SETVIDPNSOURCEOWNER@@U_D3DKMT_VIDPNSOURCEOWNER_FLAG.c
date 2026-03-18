/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00CB800 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001E54 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00027B0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000391C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003998 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C5F4 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CCA0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CD54 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CDA8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023B20 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00C7698 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C00C9350 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00CB054 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CB098 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CB2F0 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00CC2AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     DxgkShutdownBootGraphics @ 0x1C00CC620 (DxgkShutdownBootGraphics.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00CC840 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00D0454 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D07B4 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D1CE8 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0156290 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGFASTMUTEX **Current; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r12d
  const void *v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // rax
  void *const *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGDEVICE *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // rdx
  DISPLAY_SOURCE *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  unsigned int i; // edi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v40; // r9
  __int64 v41; // rdi
  struct DXGDEVICE *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // r14d
  __int64 v48; // r15
  struct DXGFASTMUTEX **v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int8 v73; // [rsp+31h] [rbp-437h] BYREF
  unsigned __int8 v74[6]; // [rsp+32h] [rbp-436h] BYREF
  struct DXGDEVICE *v75; // [rsp+38h] [rbp-430h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v76; // [rsp+40h] [rbp-428h]
  _QWORD v77[2]; // [rsp+48h] [rbp-420h] BYREF
  struct DXGFASTMUTEX **v78; // [rsp+58h] [rbp-410h]
  struct DXGDEVICE *v79; // [rsp+60h] [rbp-408h]
  _BYTE v80[16]; // [rsp+68h] [rbp-400h] BYREF
  struct DXGDEVICE *v81; // [rsp+78h] [rbp-3F0h] BYREF
  _BYTE v82[24]; // [rsp+80h] [rbp-3E8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-3D0h]
  void *v84[2]; // [rsp+A8h] [rbp-3C0h]
  _QWORD v85[3]; // [rsp+B8h] [rbp-3B0h] BYREF
  _BYTE v86[160]; // [rsp+D0h] [rbp-398h] BYREF
  _BYTE v87[432]; // [rsp+170h] [rbp-2F8h] BYREF
  unsigned int v88[16]; // [rsp+320h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v89[16]; // [rsp+360h] [rbp-108h] BYREF
  void *v90[16]; // [rsp+3A0h] [rbp-C8h] BYREF

  v76 = a4;
  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent();
  v78 = Current;
  if ( !Current )
  {
    v58 = WdLogNewEntry5_WdError(v8, v7, v9);
    v59 = -1073741811;
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    return v59;
  }
  memset(v90, 0, sizeof(v90));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80, Current);
  v88[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v84 = *(_OWORD *)&a1->pVidPnSourceId;
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v84, 8));
  if ( v13 )
  {
    if ( v13 > 0x10 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v11, v12);
      v16[3] = LODWORD(Src[0]);
      v16[4] = v13;
      v16[5] = -1073741811LL;
      WdLogEvent5_WdError(v16);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
      return 3221225485LL;
    }
    v14 = Src[1];
    if ( !Src[1] || !v84[0] )
    {
      v19 = WdLogNewEntry5_WdError(MmUserProbeAddress, v11, v12);
      *(_QWORD *)(v19 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v19 + 32) = v13;
      *(_QWORD *)(v19 + 40) = v14;
      *(void **)(v19 + 48) = v84[0];
      *(_QWORD *)(v19 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v19);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
      return 3221225485LL;
    }
    v15 = 4LL * v13;
    if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v89, v14, 4LL * v13);
    if ( (char *)v84[0] + v15 < v84[0] || (char *)v84[0] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v88, v84[0], 4LL * v13);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v18 = &a3[v13];
      if ( v18 < a3 || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v90, a3, 8LL * v13);
    }
    Current = v78;
  }
  v20 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, (unsigned int)Src[0], Current, &v81);
  v24 = v81;
  if ( !v81 )
  {
    v60 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v60 + 24) = v20;
    v59 = -1073741811;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v60);
LABEL_112:
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
LABEL_105:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
    return v59;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77, v81);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82, (struct _KTHREAD **)v24 + 14);
  v28 = *((_QWORD *)v24 + 216);
  if ( !v28 )
  {
    v61 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v61 + 24) = v20;
    v59 = -1073741637;
    *(_QWORD *)(v61 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v61);
LABEL_110:
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    goto LABEL_112;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v87,
    *(struct ADAPTER_DISPLAY **)(v28 + 2552),
    (struct DXGPROCESS *)Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v87);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
  v29 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v72, 1);
  v33 = v29;
  if ( v29 < 0 )
  {
    v63 = WdLogNewEntry5_WdError(v31, v30, v32);
    *(_QWORD *)(v63 + 24) = v33;
    WdLogEvent5_WdError(v63);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    v59 = v33;
    goto LABEL_105;
  }
  for ( i = 0; i < v13; ++i )
  {
    v35 = *(_QWORD *)(v28 + 2552);
    v36 = v88[i];
    if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 80) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v31, v35, v32);
      v62[3] = v88[i];
      v62[4] = i;
      v59 = -1073741811;
      v62[5] = -1073741811LL;
      WdLogEvent5_WdError(v62);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
      goto LABEL_110;
    }
    v31 = (DISPLAY_SOURCE *)(*(_QWORD *)(v35 + 112) + 3968 * v36);
    if ( v89[i] )
    {
      if ( !v31 || !DISPLAY_SOURCE::CheckSessionOwnership(v31, v35) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
        DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82);
        if ( v77[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
        if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
        v59 = -1071774910;
        goto LABEL_105;
      }
      v38 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v28 + 276), v88[i], v90[i]);
      if ( v38 < 0 )
      {
        v64 = WdLogNewEntry5_WdError(v31, v37, v32);
        *(_QWORD *)(v64 + 24) = v88[i];
        WdLogEvent5_WdError(v64);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
        DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82);
        if ( v77[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
        if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
        v59 = v38;
        goto LABEL_105;
      }
    }
  }
  v79 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v28 + 276), 0);
  v41 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v57 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v57 + 24) = v41;
    WdLogEvent5_WdEvent(v57);
  }
  v42 = v79;
  if ( v79 )
  {
    DxgkShutdownBootGraphics(v79, 0LL);
    if ( *((_BYTE *)v42 + 1784) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v44, v43);
      *(_QWORD *)(v65 + 24) = 3013LL;
      WdLogEvent5_WdAssertion(v65);
    }
    if ( v42 )
    {
      v45 = *((_QWORD *)v24 + 2);
      if ( *((_QWORD *)v42 + 2) != v45 )
        v42 = 0LL;
      v79 = v42;
      if ( v42 )
      {
        if ( *((_QWORD *)v42 + 2) != v45 || *((_QWORD *)v42 + 216) != *((_QWORD *)v24 + 216) )
        {
          v66 = WdLogNewEntry5_WdAssertion(v44, v43);
          *(_QWORD *)(v66 + 24) = 3028LL;
          WdLogEvent5_WdAssertion(v66);
        }
        *((_BYTE *)v42 + 1785) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v24, 1, v40, 0);
  v47 = COREDEVICEACCESS::AcquireExclusive((__int64)v86, 2LL);
  if ( v47 < 0 )
  {
    if ( v42 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
      *((_BYTE *)v42 + 1785) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    v59 = v47;
    goto LABEL_105;
  }
  v48 = *(_QWORD *)(v28 + 2552);
  if ( !v48 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v46, 0LL);
    *(_QWORD *)(v67 + 24) = 3064LL;
    WdLogEvent5_WdAssertion(v67);
    v48 = *(_QWORD *)(v28 + 2552);
  }
  LOBYTE(v46) = 0;
  if ( !v13 || v89[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v13 == 1 && v88[0] < *(_DWORD *)(v48 + 80) )
    LOBYTE(v46) = 1;
  if ( (_BYTE)v46 )
  {
    if ( !v13
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)v48, v24)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)v48, v24))
      || v13 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v48, v24, v88[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v48, v24, v88[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v87, v24, 0xFFFFFFFF);
      if ( v13 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v48, v24, v88[0]);
        v56 = 1LL;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((ADAPTER_DISPLAY *)v48, v24);
        v56 = *((unsigned int *)v24 + 435);
      }
      DXGDEVICE::RemoveVidPnOwnership(v24, v56, v55);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v24, 0);
    }
    v49 = v78;
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled && *(char *)(*((_QWORD *)v24 + 5) + 299LL) < 0 )
  {
    v68 = v89[0];
    v46 = 2LL;
    if ( v89[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      v68 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
    v89[0] = v68;
  }
  v49 = v78;
  if ( (*((unsigned int (__fastcall **)(__int64, _QWORD))v78[12] + 26))(v46, 0LL)
    && (v89[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v89[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*((unsigned int (__fastcall **)(_QWORD))v49[12] + 38))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v87, 0LL, 0xFFFFFFFF);
    v47 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
            (PERESOURCE **)v48,
            (struct _ERESOURCE *)v24,
            v89,
            (char *)v88,
            v13,
            a2);
    if ( v47 < 0 )
      goto LABEL_59;
    if ( v89[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      LODWORD(v50) = 3;
    }
    else
    {
      if ( v89[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
        goto LABEL_146;
      v50 = 3LL;
      if ( v89[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        LODWORD(v50) = 7;
        goto LABEL_58;
      }
      if ( v89[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
LABEL_146:
        v69 = WdLogNewEntry5_WdAssertion(v51, v50);
        *(_QWORD *)(v69 + 24) = 3148LL;
        WdLogEvent5_WdAssertion(v69);
        LODWORD(v50) = 0;
      }
    }
LABEL_58:
    DXGDEVICE::SetSchedulingPriorityAdjustment(v24, v50);
    *((_DWORD *)v24 + 435) += v13;
    goto LABEL_59;
  }
  v70 = WdLogNewEntry5_WdEvent();
  v47 = -1073741790;
  *(_QWORD *)(v70 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v70);
LABEL_59:
  v73 = 0;
  v74[0] = 0;
  if ( v47 < 0 )
    goto LABEL_95;
  if ( v42 )
    ADAPTER_DISPLAY::EnsureGdiOutput((ADAPTER_DISPLAY *)v48, v42, (struct COREDEVICEACCESS *)v86, &v73, v74, v76);
  v52 = 1;
  if ( !v73 )
LABEL_95:
    v52 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v87, v52);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v86);
  if ( v42 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
    *((_BYTE *)v42 + 1785) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
    v24 = v81;
  }
  if ( v72 )
  {
    v72 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v47 >= 0 )
  {
    if ( v74[0] && v73 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v24 + 5) + 96LL) + 192LL))();
    (*((void (**)(void))v49[12] + 43))();
    v85[0] = 1LL;
    v85[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify(v85) < 0 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v54, v53);
      *(_QWORD *)(v71 + 24) = 3262LL;
      WdLogEvent5_WdAssertion(v71);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v72);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82);
  if ( v77[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
  if ( v75 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
  return (unsigned int)v47;
}
