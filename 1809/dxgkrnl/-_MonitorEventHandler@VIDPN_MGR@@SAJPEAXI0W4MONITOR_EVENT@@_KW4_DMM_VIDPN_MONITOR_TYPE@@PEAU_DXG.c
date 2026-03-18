/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B6C20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C004DB98 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C00B71C4 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01432B4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4A00 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rsi
  unsigned int *NextTarget; // rsi
  __int64 v34; // r15
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  DMMVIDEOPRESENTTARGET *v44; // rax
  unsigned int v45; // r11d
  struct DXGGLOBAL *Global; // rax
  int v48; // [rsp+30h] [rbp-38h] BYREF
  __int64 v49; // [rsp+38h] [rbp-30h]
  unsigned __int64 v50; // [rsp+40h] [rbp-28h]
  int v51; // [rsp+48h] [rbp-20h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a6;
  v11 = a4;
  v48 = a4;
  v49 = a5;
  v50 = __PAIR64__(a2, a6);
  LOBYTE(v51) = 1;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = *(_QWORD *)(a1 + 2520);
    if ( !v16 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v17);
      v16 = *(_QWORD *)(a1 + 2520);
    }
    v18 = *(_QWORD *)(v16 + 88);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      LODWORD(v8) = -1071774923;
      goto LABEL_71;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, v18);
    v21 = (unsigned int)v11;
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v18, a2, v20, 1LL);
        if ( !*(_DWORD *)(v18 + 480) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2520),
            a2,
            1LL,
            v7,
            1,
            a7,
            v48,
            v49,
            v50,
            v51);
        goto LABEL_70;
      }
      v22 = (unsigned int)(v11 - 2);
      if ( (_DWORD)v11 == 2 )
      {
LABEL_38:
        if ( (unsigned int)v7 > 3 )
        {
          v24 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v24 + 24) = v7;
LABEL_19:
          WdLogEvent5_WdError(v24);
          LODWORD(v8) = -1073741811;
LABEL_70:
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5);
          goto LABEL_71;
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2520) + 16LL)) >= 1105 || a2 != -1 )
        {
          LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget(v18, a2, (unsigned int)v11, (unsigned int)v7, a7);
          goto LABEL_70;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
        v30 = *(_QWORD **)(v18 + 80);
        v32 = (_QWORD *)v30[3];
        if ( v32 != v30 + 3 )
        {
          NextTarget = (unsigned int *)(v32 - 1);
          if ( NextTarget )
          {
            v34 = a7;
            do
            {
              v35 = VIDPN_MGR::PowerOnOffVidPnTarget(v18, 0xFFFFFFFFLL, (unsigned int)v11, (unsigned int)v7, v34);
              v8 = v35;
              if ( v35 < 0 )
              {
                v37 = WdLogNewEntry5_WdError(v36);
                *(_QWORD *)(v37 + 24) = NextTarget[6];
                *(_QWORD *)(v37 + 32) = v8;
                WdLogEvent5_WdError(v37);
              }
              NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                             (DMMVIDEOPRESENTTARGETSET *)v30,
                                             (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
            }
            while ( NextTarget );
          }
        }
LABEL_37:
        ReferenceCounted::Release((ReferenceCounted *)(v30 + 8));
        goto LABEL_70;
      }
      if ( (_DWORD)v11 == 3 )
      {
        if ( a2 == -1 )
        {
          v29 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 3));
          WdLogEvent5_WdAssertion(v29);
        }
        if ( *(_DWORD *)(v18 + 480) )
          goto LABEL_70;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
        v30 = *(_QWORD **)(v18 + 80);
        v31 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v30, a2);
        if ( v31 && *(_QWORD *)(v31 + 112) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2520),
            a2,
            3LL,
            v7,
            0,
            a7,
            v48,
            v49,
            v50,
            v51);
        if ( !v30 )
          goto LABEL_70;
        goto LABEL_37;
      }
      v21 = (unsigned int)(v11 - 7);
      if ( (_DWORD)v11 != 7 )
      {
        v22 = (unsigned int)(v11 - 8);
        if ( (_DWORD)v11 != 8 )
        {
          if ( (_DWORD)v11 == 9 )
          {
            if ( a2 == -1 )
            {
              v28 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 9));
              WdLogEvent5_WdAssertion(v28);
            }
            if ( !*(_DWORD *)(v18 + 480) )
              ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                *(_QWORD *)(a1 + 2520),
                a2,
                9LL,
                v7,
                0,
                a7,
                v48,
                v49,
                v50,
                v51);
            goto LABEL_70;
          }
          v23 = (unsigned int)(v11 - 10);
          if ( (_DWORD)v11 != 10 )
          {
            if ( (_DWORD)v11 == 11 )
            {
              if ( a2 == -1 )
              {
                v25 = WdLogNewEntry5_WdAssertion(v23);
                WdLogEvent5_WdAssertion(v25);
              }
              ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                *(_QWORD *)(a1 + 2520),
                a2,
                11LL,
                v7,
                0,
                a7,
                v48,
                v49,
                v50,
                v51);
              goto LABEL_70;
            }
            v24 = WdLogNewEntry5_WdError(v23);
            *(_QWORD *)(v24 + 24) = v11;
            goto LABEL_19;
          }
          if ( a2 == -1 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v23);
            WdLogEvent5_WdAssertion(v26);
          }
          LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v18, a2, v20, 10LL);
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 2520),
            a2,
            10LL,
            v7,
            1,
            a7,
            v48,
            v49,
            v50,
            v51);
LABEL_69:
          Global = DXGGLOBAL::GetGlobal(v27);
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 143));
          goto LABEL_70;
        }
        goto LABEL_38;
      }
    }
    v38 = a2;
    if ( a2 == -1 )
    {
      if ( (_DWORD)v11 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v39);
      }
      v40 = (_QWORD *)(*(_QWORD *)(v18 + 80) + 24LL);
      v41 = (_QWORD *)*v40;
      if ( (_QWORD *)*v40 == v40 || v41 == (_QWORD *)8 || (v38 = *((unsigned int *)v41 + 4), (_DWORD)v38 == -1) )
      {
        v42 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v42 + 24) = v18;
        WdLogEvent5_WdError(v42);
        LODWORD(v8) = -1071774971;
        goto LABEL_70;
      }
    }
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v18, v38, v20, (unsigned int)v11);
    if ( !*(_DWORD *)(v18 + 480)
      && !(_DWORD)v11
      && !*(_BYTE *)(a1 + 2429)
      && (unsigned __int64)(v7 - 1) <= 4
      && v9 - 1 <= 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
      v43 = *(_QWORD *)(v18 + 80);
      v44 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v43, a2);
      if ( v44 && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v44, *(_DWORD *)(v18 + 484), *(_DWORD *)(v18 + 488)) )
      {
        v45 = 6;
        v7 = 0LL;
      }
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2520), a2, v45, v7, 1, a7, v48, v49, v50, v51);
      LOBYTE(v51) = 0;
      if ( v43 )
        ReferenceCounted::Release((ReferenceCounted *)(v43 + 64));
    }
    goto LABEL_69;
  }
  v13 = WdLogNewEntry5_WdError(0LL);
  WdLogEvent5_WdError(v13);
  LODWORD(v8) = -1071775742;
LABEL_71:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v48);
  return (unsigned int)v8;
}
