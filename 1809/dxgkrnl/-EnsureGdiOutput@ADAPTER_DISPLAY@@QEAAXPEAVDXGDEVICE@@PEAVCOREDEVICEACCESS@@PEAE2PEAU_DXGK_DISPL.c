/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0005D80 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C00131A8 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF180 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C011FD6C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C48B4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r12
  __int64 v10; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rdi
  DXGADAPTER *v14; // rsi
  __int64 v15; // rax
  struct _ETHREAD *CurrentThread; // r14
  DXGADAPTER *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // zf
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r14
  _QWORD *v48; // rax
  _BYTE v50[8]; // [rsp+40h] [rbp-69h] BYREF
  DXGADAPTER *v51; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v52; // [rsp+50h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-51h] BYREF
  char v54; // [rsp+88h] [rbp-21h]
  _QWORD v55[2]; // [rsp+90h] [rbp-19h] BYREF

  v55[0] = 0LL;
  v9 = 0;
  v55[1] = 0LL;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v30 + 24) = 2401LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v54 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2328]);
  v13 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v13) )
      {
        v23 = *((_QWORD *)this + 14);
        v24 = 3760LL * (unsigned int)v13;
        if ( *(_QWORD *)(v24 + v23 + 688) )
        {
          v25 = *(_DWORD *)(v24 + v23 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent();
          v25 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 312LL))(0LL) == 0;
        }
        *((_BYTE *)v55 + v13) = v25;
        if ( v25 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v13, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v13) )
          {
            v9 = 1;
            v31 = DmmEnablePathsFromVidPnSource(a2, v13, 1u, a3, a6);
            v33 = v31;
            if ( v31 < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v32);
              v38[3] = *((_QWORD *)this + 2);
              v38[4] = (unsigned int)v13;
              v38[5] = v33;
              WdLogEvent5_WdError(v38);
LABEL_43:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_26;
            }
            Global = DXGGLOBAL::GetGlobal(v32);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 143), v35, v36, v37);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_25;
    v14 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v15 = *((_QWORD *)a2 + 2);
    CurrentThread = KeGetCurrentThread();
    v51 = v14;
    v17 = *(DXGADAPTER **)(v15 + 16);
    v52 = v17;
    if ( v14 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v51, CurrentThread);
    if ( v17 && v14 != v17 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v52, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 104LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v55,
            *((unsigned int *)this + 20),
            a5) )
    {
      v39 = WdLogNewEntry5_WdEvent(v19, v18);
      v40 = 0LL;
      v41 = v39;
      *(_QWORD *)(v39 + 24) = a2;
      v42 = (_QWORD *)(v39 + 32);
      do
      {
        v43 = *((unsigned __int8 *)v55 + v40++);
        *v42++ = v43;
      }
      while ( v40 < 2 );
      *(_QWORD *)(v41 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v41);
    }
    v20 = *((_DWORD *)this + 20);
    v21 = 0LL;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v55 + v21) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v21, 1u) )
          {
            v26 = DmmDisablePathsFromVidPnSource(a2, v21);
            v28 = v26;
            if ( v26 < 0 )
              break;
          }
        }
        v20 = *((_DWORD *)this + 20);
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v20 )
          goto LABEL_19;
      }
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v44[3] = *((_QWORD *)this + 2);
      v44[4] = (unsigned int)v21;
      v44[5] = v28;
      WdLogEvent5_WdError(v44);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v50);
      goto LABEL_43;
    }
LABEL_19:
    if ( v54 )
    {
      KeUnstackDetachProcess(&ApcState);
      v20 = *((_DWORD *)this + 20);
      v54 = 0;
    }
    v22 = 0LL;
    if ( v20 )
    {
      do
      {
        if ( *((_BYTE *)v55 + v22) )
        {
          v45 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, v22);
          v47 = v45;
          if ( v45 < 0 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v48[3] = *((_QWORD *)this + 2);
            v48[4] = (unsigned int)v22;
            v48[5] = v47;
            WdLogEvent5_WdError(v48);
          }
        }
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < *((_DWORD *)this + 20) );
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v50);
  }
LABEL_25:
  *a4 = v9;
LABEL_26:
  if ( v54 )
    KeUnstackDetachProcess(&ApcState);
}
