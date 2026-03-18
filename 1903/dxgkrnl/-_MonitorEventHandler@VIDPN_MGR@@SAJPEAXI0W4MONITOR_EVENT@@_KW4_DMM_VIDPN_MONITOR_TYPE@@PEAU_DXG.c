/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C0054DF4 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0154E38 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C0158B1C (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C017C870 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F38D0 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // r14
  unsigned int *NextTarget; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v41; // r13
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  DMMVIDEOPRESENTTARGET *v52; // rax
  unsigned int v53; // r11d
  __int64 v54; // r8
  unsigned int v55; // [rsp+30h] [rbp-38h] BYREF
  __int64 v56; // [rsp+38h] [rbp-30h]
  unsigned __int64 v57; // [rsp+40h] [rbp-28h]
  int v58; // [rsp+48h] [rbp-20h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a6;
  v10 = a2;
  v11 = (int)a4;
  v55 = a4;
  v56 = a5;
  v57 = __PAIR64__(a2, a6);
  LOBYTE(v58) = 1;
  if ( a4 > 3 && a4 - 7 > 3 )
  {
    v29 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v29 + 24) = v11;
    WdLogEvent5_WdError(v29);
    LODWORD(v8) = -1073741811;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    v30 = WdLogNewEntry5_WdError(0LL, a2, a3);
    WdLogEvent5_WdError(v30);
    LODWORD(v8) = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v31);
  }
  v16 = *(_QWORD *)(a1 + 2552);
  if ( !v16 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v32);
    v16 = *(_QWORD *)(a1 + 2552);
  }
  v17 = *(_QWORD *)(v16 + 88);
  if ( !v17 )
  {
    v33 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdError(v33);
    LODWORD(v8) = -1071774923;
    goto LABEL_15;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, v17);
  v20 = (unsigned int)v11;
  if ( !(_DWORD)v11 )
    goto LABEL_18;
  if ( (_DWORD)v11 == 1 )
  {
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v17, v10, v19, 1LL);
    if ( !*(_DWORD *)(v17 + 480) )
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2552), v10, 1LL, v7, 1, a7, v55, v56, v57, v58);
    goto LABEL_14;
  }
  v21 = (unsigned int)(v11 - 2);
  if ( (_DWORD)v11 != 2 )
  {
    if ( (_DWORD)v11 == 3 )
    {
      if ( v10 == -1 )
      {
        v38 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 3), v18);
        WdLogEvent5_WdAssertion(v38);
      }
      if ( *(_DWORD *)(v17 + 480) )
        goto LABEL_14;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
      v27 = *(_QWORD **)(v17 + 80);
      v28 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v27, v10);
      if ( v28 && *(_QWORD *)(v28 + 112) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
          *(_QWORD *)(a1 + 2552),
          v10,
          3LL,
          v7,
          0,
          a7,
          v55,
          v56,
          v57,
          v58);
      if ( !v27 )
        goto LABEL_14;
      goto LABEL_33;
    }
    v20 = (unsigned int)(v11 - 7);
    if ( (_DWORD)v11 != 7 )
    {
      v21 = (unsigned int)(v11 - 8);
      if ( (_DWORD)v11 == 8 )
        goto LABEL_11;
      v34 = (unsigned int)(v11 - 9);
      if ( (_DWORD)v11 == 9 )
      {
        if ( v10 == -1 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v34, v18);
          WdLogEvent5_WdAssertion(v37);
        }
        if ( !*(_DWORD *)(v17 + 480) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2552),
            v10,
            9LL,
            v7,
            0,
            a7,
            v55,
            v56,
            v57,
            v58);
        goto LABEL_14;
      }
      if ( (_DWORD)v11 != 10 )
      {
        v35 = WdLogNewEntry5_WdError(v34, v18, v19);
        *(_QWORD *)(v35 + 24) = v11;
LABEL_41:
        WdLogEvent5_WdError(v35);
        LODWORD(v8) = -1073741811;
        goto LABEL_14;
      }
      if ( v10 == -1 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v34, v18);
        WdLogEvent5_WdAssertion(v36);
      }
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v17, v10, v19, 10LL);
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2552), v10, 10LL, v7, 1, a7, v55, v56, v57, v58);
LABEL_23:
      Global = DXGGLOBAL::GetGlobal(v25, v24);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
      goto LABEL_14;
    }
LABEL_18:
    v23 = v10;
    if ( v10 == -1 )
    {
      if ( (_DWORD)v11 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v20, v10);
        WdLogEvent5_WdAssertion(v47);
      }
      v48 = (_QWORD *)(*(_QWORD *)(v17 + 80) + 24LL);
      v49 = (_QWORD *)*v48;
      if ( (_QWORD *)*v48 == v48 || v49 == (_QWORD *)8 || (v23 = *((unsigned int *)v49 + 4), (_DWORD)v23 == -1) )
      {
        v50 = WdLogNewEntry5_WdError(v49, v23, v19);
        *(_QWORD *)(v50 + 24) = v17;
        WdLogEvent5_WdError(v50);
        LODWORD(v8) = -1071774971;
        goto LABEL_14;
      }
    }
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v17, v23, v19, (unsigned int)v11);
    if ( !*(_DWORD *)(v17 + 480)
      && !(_DWORD)v11
      && !*(_BYTE *)(a1 + 2465)
      && (unsigned __int64)(v7 - 1) <= 4
      && v9 - 1 <= 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
      v51 = *(_QWORD *)(v17 + 80);
      v52 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v51, v10);
      if ( v52 && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v52, *(_DWORD *)(v17 + 484), *(_DWORD *)(v17 + 488)) )
      {
        v53 = 6;
        v7 = 0LL;
      }
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2552), v10, v53, v7, 1, a7, v55, v56, v57, v58);
      LOBYTE(v58) = 0;
      if ( v51 )
        ReferenceCounted::Release((ReferenceCounted *)(v51 + 64), v24, v54);
    }
    goto LABEL_23;
  }
LABEL_11:
  if ( (unsigned int)v7 > 3 )
  {
    v35 = WdLogNewEntry5_WdError(v21, v18, v19);
    *(_QWORD *)(v35 + 24) = v7;
    goto LABEL_41;
  }
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 2552) + 16LL) + 2452LL) < 1105 && v10 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
    v27 = *(_QWORD **)(v17 + 80);
    v39 = (_QWORD *)v27[3];
    if ( v39 != v27 + 3 )
    {
      NextTarget = (unsigned int *)(v39 - 1);
      if ( NextTarget )
      {
        v41 = a7;
        do
        {
          v42 = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v17, 0xFFFFFFFFLL, v11, v7, v41);
          v8 = v42;
          if ( v42 < 0 )
          {
            v46 = WdLogNewEntry5_WdError(v44, v43, v45);
            *(_QWORD *)(v46 + 24) = NextTarget[6];
            *(_QWORD *)(v46 + 32) = v8;
            WdLogEvent5_WdError(v46);
          }
          NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                         (DMMVIDEOPRESENTTARGETSET *)v27,
                                         (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
        }
        while ( NextTarget );
      }
    }
LABEL_33:
    ReferenceCounted::Release((ReferenceCounted *)(v27 + 8), v18, v19);
    goto LABEL_14;
  }
  LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v17, v10, v11, v7, a7);
LABEL_14:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40));
LABEL_15:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v55);
  return (unsigned int)v8;
}
