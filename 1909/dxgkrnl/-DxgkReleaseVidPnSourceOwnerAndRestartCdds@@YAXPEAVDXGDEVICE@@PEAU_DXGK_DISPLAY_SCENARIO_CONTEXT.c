/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E994
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C012542C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014B524 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001E54 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00023D0 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CCA0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CD54 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C003F298 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00CC2AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00D0454 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D07B4 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D1CE8 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0156290 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
  __int64 v8; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  char v31; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  struct DXGDEVICE *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct DXGDEVICE *v43; // rbx
  __int64 v44; // rax
  ADAPTER_DISPLAY *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v54; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v55[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v56; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v57[16]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v58[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v59[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v60[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v61[88]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v62[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v63[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v64[88]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v65[432]; // [rsp+1B0h] [rbp+B0h] BYREF

  v3 = *((_QWORD *)a1 + 216);
  v54 = 0;
  v55[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 2503LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v11, v10) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 2509LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 2511LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2552) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 2512LL;
    WdLogEvent5_WdAssertion(v20);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v65,
    *(struct ADAPTER_DISPLAY **)(v3 + 2552),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v57, *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 288LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v65, v21);
  v53 = 0;
  v22 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v53, 1);
  v26 = v22;
  if ( v22 >= 0 )
  {
    v56 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 276),
                                             &v56,
                                             0LL,
                                             0LL,
                                             0);
    v36 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v37 = WdLogNewEntry5_WdEvent(v34);
      *(_QWORD *)(v37 + 24) = v36;
      WdLogEvent5_WdEvent(v37);
    }
    v38 = v56;
    if ( v56 )
    {
      v39 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v56 + 2) != v39 )
        v38 = 0LL;
      v56 = v38;
      if ( v38 )
      {
        if ( *((_QWORD *)v38 + 2) != v39 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v34, v33);
          *(_QWORD *)(v40 + 24) = 2580LL;
          WdLogEvent5_WdAssertion(v40);
        }
        *((_BYTE *)v38 + 1785) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v57);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)a1, 1, v35, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v59);
    v43 = v56;
    if ( *(_DWORD *)(v3 + 176) != 1 )
      goto LABEL_26;
    v45 = *(ADAPTER_DISPLAY **)(v3 + 2552);
    if ( !v45 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v41);
      *(_QWORD *)(v46 + 24) = 2616LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = *(ADAPTER_DISPLAY **)(v3 + 2552);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v45, a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2552), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v65, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2552), a1);
      v7 = 1;
      if ( v43 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2552),
          v43,
          (struct COREDEVICEACCESS *)v59,
          &v54,
          v55,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v65, v54);
    }
    else
    {
LABEL_26:
      v44 = WdLogNewEntry5_WdEvent(v42);
      *(_QWORD *)(v44 + 24) = a1;
      *(_QWORD *)(v44 + 32) = v3;
      WdLogEvent5_WdEvent(v44);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2552), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2552), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2552), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v59);
    if ( v43 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v57);
      *((_BYTE *)v43 + 1785) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
    }
    v31 = v53;
    if ( v53 )
    {
      v31 = 0;
      DxgkReleaseSessionModeChangeLock(v48, v47);
    }
    if ( v54 && v55[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 192LL))();
    if ( v7 )
    {
      v58[0] = 1LL;
      v58[1] = 0LL;
      if ( (int)DxgkStatusChangeNotify((int *)v58, v47, v49) < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v51, v50);
        *(_QWORD *)(v52 + 24) = 2696LL;
        WdLogEvent5_WdAssertion(v52);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v61);
    COREACCESS::~COREACCESS((COREACCESS *)v60);
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v27 + 24) = v26;
    WdLogEvent5_WdError(v27);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)a1, 1, v30, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v62);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2552), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2552), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2552), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v64);
      COREACCESS::~COREACCESS((COREACCESS *)v63);
    }
    v31 = v53;
  }
  if ( v31 )
    DxgkReleaseSessionModeChangeLock(v29, v28);
  if ( v57[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v57);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v65, v28);
}
