/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F5F3C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010918 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0011174 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0013120 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0038D40 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00D0758 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D08B0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D0F14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C011DE84 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v4; // r15
  __int64 v8; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  char v23; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  struct DXGDEVICE *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGDEVICE *v35; // rbx
  __int64 v36; // rax
  ADAPTER_DISPLAY *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v45; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v46[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v47; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v48[16]; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h]
  _BYTE v51[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v52[32]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v53[56]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v54[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v55[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v56[56]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v57[432]; // [rsp+130h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a1 + 216);
  v4 = 0;
  v45 = 0;
  v46[0] = 0;
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 2457LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v10) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2463LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 2465LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2520) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 2466LL;
    WdLogEvent5_WdAssertion(v16);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v57,
    *(struct ADAPTER_DISPLAY **)(v3 + 2520),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 312LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v57);
  v44 = 0;
  v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v44, 1);
  v19 = v17;
  if ( v17 >= 0 )
  {
    v47 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 276),
                                             &v47,
                                             0LL,
                                             0LL);
    v28 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v29 = WdLogNewEntry5_WdEvent(v26, v25);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdEvent(v29);
    }
    v30 = v47;
    if ( v47 )
    {
      v31 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v47 + 2) != v31 && ((*((_BYTE *)v47 + 1749) & 1) != 0 || (*((_BYTE *)a1 + 1749) & 1) != 0) )
      {
        v30 = 0LL;
        v47 = 0LL;
      }
      if ( v30 )
      {
        if ( *((_QWORD *)v30 + 2) != v31 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v32 + 24) = 2535LL;
          WdLogEvent5_WdAssertion(v32);
        }
        *((_BYTE *)v30 + 1785) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)a1, 1, v27, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v51);
    v35 = v47;
    if ( *(_DWORD *)(v3 + 176) != 1 )
      goto LABEL_28;
    v37 = *(ADAPTER_DISPLAY **)(v3 + 2520);
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v38 + 24) = 2571LL;
      WdLogEvent5_WdAssertion(v38);
      v37 = *(ADAPTER_DISPLAY **)(v3 + 2520);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v37, a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2520), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v57, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2520), a1);
      v4 = 1;
      if ( v35 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2520),
          v35,
          (struct COREDEVICEACCESS *)v51,
          &v45,
          v46,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v57, v45);
    }
    else
    {
LABEL_28:
      v36 = WdLogNewEntry5_WdEvent(v34, v33);
      *(_QWORD *)(v36 + 24) = a1;
      *(_QWORD *)(v36 + 32) = v3;
      WdLogEvent5_WdEvent(v36);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2520), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2520), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2520), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v51);
    if ( v35 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v48);
      *((_BYTE *)v35 + 1785) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    }
    v23 = v44;
    if ( v44 )
    {
      v23 = 0;
      DxgkReleaseSessionModeChangeLock(v40);
    }
    if ( v45 && v46[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 192LL))();
    if ( v4 )
    {
      v50 = 0LL;
      v49 = 1;
      if ( (int)DxgkStatusChangeNotify(&v49, v39, v41) < 0 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v43 + 24) = 2651LL;
        WdLogEvent5_WdAssertion(v43);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v53);
    COREACCESS::~COREACCESS((COREACCESS *)v52);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)a1, 1, v22, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v54);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2520), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2520), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2520), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v56);
      COREACCESS::~COREACCESS((COREACCESS *)v55);
    }
    v23 = v44;
  }
  if ( v23 )
    DxgkReleaseSessionModeChangeLock(v21);
  if ( v48[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v48);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v57);
}
