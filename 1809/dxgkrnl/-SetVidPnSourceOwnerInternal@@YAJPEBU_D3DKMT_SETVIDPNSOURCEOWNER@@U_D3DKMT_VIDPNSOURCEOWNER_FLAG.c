/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C011E180 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000E62C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000F724 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010918 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C001096C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0013120 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0020FE4 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00CF054 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CFD48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00D0758 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D08B0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D0F14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C011D5B0 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C011DE84 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkShutdownBootGraphics @ 0x1C011EE80 (DxgkShutdownBootGraphics.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C011F45C (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C011F670 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C011FB44 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0122B04 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v7; // rcx
  struct DXGFASTMUTEX **Current; // r14
  unsigned int v9; // r12d
  const void *v10; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rax
  void *const *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r13
  int v21; // eax
  DISPLAY_SOURCE *v22; // rcx
  __int64 v23; // rsi
  unsigned int i; // esi
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rsi
  struct DXGDEVICE *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rcx
  int DeviceExecutionState; // r14d
  ADAPTER_DISPLAY *v37; // r15
  char v38; // cl
  __int64 v39; // rcx
  struct DXGFASTMUTEX **v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // edx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  char v69; // [rsp+30h] [rbp-3F8h] BYREF
  unsigned __int8 v70; // [rsp+31h] [rbp-3F7h] BYREF
  unsigned __int8 v71[6]; // [rsp+32h] [rbp-3F6h] BYREF
  struct DXGDEVICE *v72; // [rsp+38h] [rbp-3F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v73; // [rsp+40h] [rbp-3E8h]
  struct DXGFASTMUTEX **v74; // [rsp+48h] [rbp-3E0h]
  _QWORD v75[2]; // [rsp+50h] [rbp-3D8h] BYREF
  struct DXGDEVICE *v76; // [rsp+60h] [rbp-3C8h] BYREF
  _BYTE v77[16]; // [rsp+68h] [rbp-3C0h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v78; // [rsp+78h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v79; // [rsp+80h] [rbp-3A8h] BYREF
  _BYTE v80[24]; // [rsp+88h] [rbp-3A0h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-388h]
  void *v82[2]; // [rsp+B0h] [rbp-378h]
  int v83; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-360h]
  _BYTE v85[96]; // [rsp+D0h] [rbp-358h] BYREF
  _BYTE v86[432]; // [rsp+130h] [rbp-2F8h] BYREF
  unsigned int v87[16]; // [rsp+2E0h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v88[16]; // [rsp+320h] [rbp-108h] BYREF
  HANDLE Handle[16]; // [rsp+360h] [rbp-C8h] BYREF

  v73 = a4;
  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent();
  v74 = Current;
  if ( !Current )
  {
    v50 = WdLogNewEntry5_WdError(v7);
    v51 = -1073741811;
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v50);
    return v51;
  }
  memset(Handle, 0, sizeof(Handle));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77, Current);
  v87[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v82 = *(_OWORD *)&a1->pVidPnSourceId;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v82, 8));
  if ( v9 )
  {
    if ( v9 > 0x10 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
      v12[3] = LODWORD(Src[0]);
      v12[4] = v9;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
      return 3221225485LL;
    }
    v10 = Src[1];
    if ( !Src[1] || !v82[0] )
    {
      v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v15 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v15 + 32) = v9;
      *(_QWORD *)(v15 + 40) = v10;
      *(void **)(v15 + 48) = v82[0];
      *(_QWORD *)(v15 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
      return 3221225485LL;
    }
    v11 = 4LL * v9;
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v88, v10, 4LL * v9);
    if ( (char *)v82[0] + v11 < v82[0] || (char *)v82[0] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v87, v82[0], 4LL * v9);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v14 = &a3[v9];
      if ( v14 < a3 || (unsigned __int64)v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Handle, a3, 8LL * v9);
    }
    Current = v74;
  }
  v16 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v72, (unsigned int)Src[0], Current, &v79);
  v18 = v79;
  if ( !v79 )
  {
    v52 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v52 + 24) = v16;
    v51 = -1073741811;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v52);
LABEL_112:
    if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
LABEL_105:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
    return v51;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v79);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v80, (struct _KTHREAD **)v18 + 14);
  v20 = *((_QWORD *)v18 + 216);
  if ( !v20 )
  {
    v53 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v53 + 24) = v16;
    v51 = -1073741637;
    *(_QWORD *)(v53 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v53);
LABEL_110:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    goto LABEL_112;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v86,
    *(struct ADAPTER_DISPLAY **)(v20 + 2520),
    (struct DXGPROCESS *)Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v86);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
  v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v69, 1);
  v23 = v21;
  if ( v21 < 0 )
  {
    v55 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v55 + 24) = v23;
    WdLogEvent5_WdError(v55);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v86);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
    v51 = v23;
    goto LABEL_105;
  }
  for ( i = 0; i < v9; ++i )
  {
    v25 = *(_QWORD *)(v20 + 2520);
    v26 = v87[i];
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 80) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v54[3] = v87[i];
      v54[4] = i;
      v51 = -1073741811;
      v54[5] = -1073741811LL;
      WdLogEvent5_WdError(v54);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v86);
      goto LABEL_110;
    }
    v22 = (DISPLAY_SOURCE *)(*(_QWORD *)(v25 + 112) + 3760 * v26);
    if ( v88[i] )
    {
      if ( !v22 || !DISPLAY_SOURCE::CheckSessionOwnership(v22) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v86);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
        v51 = -1071774910;
        goto LABEL_105;
      }
      v27 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v20 + 276), v87[i], Handle[i]);
      if ( v27 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v56 + 24) = v87[i];
        WdLogEvent5_WdError(v56);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v86);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
        v51 = v27;
        goto LABEL_105;
      }
    }
  }
  v76 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v20 + 276),
                                           &v76,
                                           0LL,
                                           0LL);
  v32 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v49 = WdLogNewEntry5_WdEvent(v30, v29);
    *(_QWORD *)(v49 + 24) = v32;
    WdLogEvent5_WdEvent(v49);
  }
  v33 = v76;
  if ( v76 )
  {
    DxgkShutdownBootGraphics(v76, 0LL);
    if ( *((_BYTE *)v33 + 1784) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v57 + 24) = 2968LL;
      WdLogEvent5_WdAssertion(v57);
    }
    if ( v33 )
    {
      if ( *((_QWORD *)v33 + 2) != *((_QWORD *)v18 + 2)
        && ((*((_BYTE *)v33 + 1749) & 1) != 0 || (*((_BYTE *)v18 + 1749) & 1) != 0) )
      {
        v33 = 0LL;
        v76 = 0LL;
      }
      if ( v33 )
      {
        if ( *((_QWORD *)v33 + 2) != *((_QWORD *)v18 + 2) || *((_QWORD *)v33 + 216) != *((_QWORD *)v18 + 216) )
        {
          v58 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v58 + 24) = 2985LL;
          WdLogEvent5_WdAssertion(v58);
        }
        *((_BYTE *)v33 + 1785) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, (__int64)v18, 1, v31, 0);
  DeviceExecutionState = COREDEVICEACCESS::AcquireExclusive((__int64)v85, 2LL);
  if ( DeviceExecutionState < 0 )
  {
    if ( v33 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
      *((_BYTE *)v33 + 1785) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v86);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
    v51 = DeviceExecutionState;
    goto LABEL_105;
  }
  v37 = *(ADAPTER_DISPLAY **)(v20 + 2520);
  if ( !v37 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v59 + 24) = 3021LL;
    WdLogEvent5_WdAssertion(v59);
    v37 = *(ADAPTER_DISPLAY **)(v20 + 2520);
  }
  v38 = 0;
  if ( !v9 || v88[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v9 == 1 && v87[0] < *((_DWORD *)v37 + 20) )
    v38 = 1;
  if ( v38 )
  {
    if ( !v9 && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v37, v18) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v37, v18))
      || v9 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v37, v18, v87[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v37, v18, v87[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v86, (struct _KTHREAD **)v18, -1);
      if ( v9 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v37, v18, v87[0]);
        v48 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v37, v18);
        v48 = *((_DWORD *)v18 + 435);
      }
      DXGDEVICE::RemoveVidPnOwnership(v18, v48);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, 0);
    }
    v40 = v74;
    goto LABEL_60;
  }
  if ( g_OSTestSigningEnabled && *(char *)(*((_QWORD *)v18 + 5) + 323LL) < 0 )
  {
    v60 = v88[0];
    if ( v88[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      v60 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
    v88[0] = v60;
  }
  v39 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( (*(_DWORD *)(v39 + 308) & 0x10) != 0 )
  {
    v61 = *((_QWORD *)DXGGLOBAL::GetGlobal(v39) + 80);
    if ( v61 )
    {
      if ( (*(_DWORD *)(v61 + 308) & 0x4000) != 0 )
      {
        DeviceExecutionState = DXGDEVICE::GetDeviceExecutionState(v18, &v78);
        if ( DeviceExecutionState < 0 || v78 != D3DKMT_DEVICEEXECUTION_ACTIVE )
        {
          v65 = WdLogNewEntry5_WdWarning(v63, v62, v64);
          *(_QWORD *)(v65 + 24) = 3071LL;
          WdLogEvent5_WdWarning(v65);
          DeviceExecutionState = -1073741130;
        }
      }
    }
  }
  v40 = v74;
  if ( DeviceExecutionState >= 0 )
  {
    if ( (*((unsigned int (**)(void))v74[13] + 26))()
      && (v88[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v88[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
       || (*((unsigned int (__fastcall **)(_QWORD))v40[13] + 39))(0LL)) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v86, 0LL, -1);
      DeviceExecutionState = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
                               (PERESOURCE **)v37,
                               (struct _ERESOURCE *)v18,
                               v88,
                               (char *)v87,
                               v9,
                               a2);
      if ( DeviceExecutionState < 0 )
        goto LABEL_60;
      if ( v88[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v44 = 3;
      }
      else
      {
        if ( v88[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
          goto LABEL_154;
        v44 = 3;
        if ( v88[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
        {
          v44 = 7;
          goto LABEL_59;
        }
        if ( v88[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
        {
LABEL_154:
          v66 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v66 + 24) = 3126LL;
          WdLogEvent5_WdAssertion(v66);
          v44 = 0;
        }
      }
LABEL_59:
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, v44);
      *((_DWORD *)v18 + 435) += v9;
      goto LABEL_60;
    }
    v67 = WdLogNewEntry5_WdEvent(v42, v41);
    DeviceExecutionState = -1073741790;
    *(_QWORD *)(v67 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v67);
  }
LABEL_60:
  v70 = 0;
  v71[0] = 0;
  if ( DeviceExecutionState < 0 )
    goto LABEL_100;
  if ( v33 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v37, v33, (struct COREDEVICEACCESS *)v85, &v70, v71, v73);
  v45 = 1;
  if ( !v70 )
LABEL_100:
    v45 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v86, v45);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v85);
  if ( v33 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
    *((_BYTE *)v33 + 1785) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
    v18 = v79;
  }
  if ( v69 )
  {
    v69 = 0;
    DxgkReleaseSessionModeChangeLock(v46);
  }
  if ( DeviceExecutionState >= 0 )
  {
    if ( v71[0] && v70 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v18 + 5) + 104LL) + 192LL))();
    (*((void (**)(void))v40[13] + 44))();
    v83 = 1;
    v84 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v83) < 0 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v68 + 24) = 3240LL;
      WdLogEvent5_WdAssertion(v68);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v69);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v86);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
  if ( v75[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
  return (unsigned int)DeviceExecutionState;
}
