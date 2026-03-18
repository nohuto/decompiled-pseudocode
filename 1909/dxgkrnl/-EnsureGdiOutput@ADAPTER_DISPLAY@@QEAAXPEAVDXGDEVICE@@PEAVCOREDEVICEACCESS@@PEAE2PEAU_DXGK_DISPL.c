/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E994 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001F64 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0001FA8 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0002470 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C7454 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9388 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD4B0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CF96C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0129B44 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3DF4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rdi
  DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  struct _ETHREAD *CurrentThread; // r14
  DXGADAPTER *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rsi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r14
  _QWORD *v50; // rax
  _BYTE v52[8]; // [rsp+40h] [rbp-69h] BYREF
  DXGADAPTER *v53; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v54; // [rsp+50h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-51h] BYREF
  char v56; // [rsp+88h] [rbp-21h]
  _QWORD v57[2]; // [rsp+90h] [rbp-19h] BYREF

  v57[0] = 0LL;
  v9 = 0;
  v57[1] = 0LL;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 74);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                     CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v31 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v31 + 24) = 2573LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v56 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2328]);
  v14 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)this, v14) )
      {
        v22 = *((_QWORD *)this + 14);
        v23 = 3968LL * (unsigned int)v14;
        if ( *(_QWORD *)(v23 + v22 + 688) )
        {
          v24 = *(_DWORD *)(v23 + v22 + 696) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent();
          v24 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 304LL))(0LL) == 0;
        }
        *((_BYTE *)v57 + v14) = v24;
        if ( v24 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v14, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v14) )
          {
            v9 = 1;
            v32 = DmmEnablePathsFromVidPnSource(a2, v14, 1, a3, a6);
            v36 = v32;
            if ( v32 < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
              v38[3] = *((_QWORD *)this + 2);
              v38[4] = (unsigned int)v14;
              v38[5] = v36;
              WdLogEvent5_WdError(v38);
LABEL_43:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_26;
            }
            Global = DXGGLOBAL::GetGlobal(v34, v33);
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 139), 0);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < *((_DWORD *)this + 20) );
    if ( !v9 )
      goto LABEL_25;
    v15 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v16 = *((_QWORD *)a2 + 2);
    CurrentThread = KeGetCurrentThread();
    v53 = v15;
    v18 = *(DXGADAPTER **)(v16 + 16);
    v54 = v18;
    if ( v15 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v53, CurrentThread);
    if ( v18 && v15 != v18 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v54, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5)
                                                                                                  + 96LL)
                                                                                      + 184LL))(
            *((_QWORD *)this + 2),
            v57,
            *((unsigned int *)this + 20),
            a5) )
    {
      v39 = WdLogNewEntry5_WdEvent();
      v40 = 0LL;
      v41 = v39;
      *(_QWORD *)(v39 + 24) = a2;
      v42 = (_QWORD *)(v39 + 32);
      do
      {
        v43 = *((unsigned __int8 *)v57 + v40++);
        *v42++ = v43;
      }
      while ( v40 < 2 );
      *(_QWORD *)(v41 + 48) = *((unsigned int *)this + 20);
      WdLogEvent5_WdEvent(v41);
    }
    v19 = *((_DWORD *)this + 20);
    v20 = 0LL;
    if ( v19 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)v57 + v20) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v20, 1u) )
          {
            v25 = DmmDisablePathsFromVidPnSource(a2, v20);
            v29 = v25;
            if ( v25 < 0 )
              break;
          }
        }
        v19 = *((_DWORD *)this + 20);
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v19 )
          goto LABEL_19;
      }
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      v44[3] = *((_QWORD *)this + 2);
      v44[4] = (unsigned int)v20;
      v44[5] = v29;
      WdLogEvent5_WdError(v44);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v52);
      goto LABEL_43;
    }
LABEL_19:
    if ( v56 )
    {
      KeUnstackDetachProcess(&ApcState);
      v19 = *((_DWORD *)this + 20);
      v56 = 0;
    }
    v21 = 0LL;
    if ( v19 )
    {
      do
      {
        if ( *((_BYTE *)v57 + v21) )
        {
          v45 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(this, v21);
          v49 = v45;
          if ( v45 < 0 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48);
            v50[3] = *((_QWORD *)this + 2);
            v50[4] = (unsigned int)v21;
            v50[5] = v49;
            WdLogEvent5_WdError(v50);
          }
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < *((_DWORD *)this + 20) );
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v52);
  }
LABEL_25:
  *a4 = v9;
LABEL_26:
  if ( v56 )
    KeUnstackDetachProcess(&ApcState);
}
