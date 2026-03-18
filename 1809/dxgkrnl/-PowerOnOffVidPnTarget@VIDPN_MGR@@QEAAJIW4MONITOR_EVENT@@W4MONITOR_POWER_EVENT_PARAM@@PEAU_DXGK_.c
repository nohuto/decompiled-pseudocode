/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01432B4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B6C20 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CFAB4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C0143544 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        VIDPN_MGR *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebx
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int8 v14; // si
  char v15; // r14
  _QWORD *v16; // rbx
  _QWORD *v17; // rbp
  unsigned int *i; // rbp
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // esi
  unsigned int j; // ebx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  const GUID *v29; // r8
  __int64 v30; // rcx
  int v32; // ebx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47[8]; // [rsp+50h] [rbp-168h] BYREF
  int v48; // [rsp+58h] [rbp-160h] BYREF
  __int64 v49; // [rsp+60h] [rbp-158h]
  _DWORD v50[64]; // [rsp+70h] [rbp-148h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
  v10 = (unsigned int)v7;
  *(_QWORD *)(v9 + 24) = v7;
  *(_QWORD *)(v9 + 32) = a1;
  WdLogEvent5_WdDmmEvent(v9);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 8LL) != CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v5 )
  {
    v13 = v5 - 1;
    if ( v13 )
    {
      v32 = v13 - 1;
      if ( v32 )
      {
        if ( v32 != 1 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(CurrentThread);
          v33[3] = (unsigned int)v7;
          v33[4] = a1;
          v33[5] = -1073741811LL;
          WdLogEvent5_WdError(v33);
          return 3221225485LL;
        }
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      v15 = 0;
    }
    else
    {
      v14 = 0;
      v15 = 1;
    }
  }
  else
  {
    v14 = 1;
    v15 = 1;
  }
  if ( (_DWORD)v7 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v16 = (_QWORD *)*((_QWORD *)a1 + 10);
    v17 = (_QWORD *)v16[3];
    if ( v17 != v16 + 3 )
    {
      for ( i = (unsigned int *)(v17 - 1);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v16,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( v6 != 8 || v14 || !i[22] )
          VIDPN_MGR::SetTargetOwnership(a1, i[6], (v14 ^ 1u) + 1);
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(a1, (unsigned int)v7, (v14 ^ 1u) + 1);
  }
  if ( v15 )
  {
    memset(v50, 0, 0xF8uLL);
    v19 = *((_QWORD *)a1 + 1);
    v47[0] = 0;
    if ( !v19 )
    {
      v34 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v34);
      v19 = *((_QWORD *)a1 + 1);
    }
    if ( !*(_QWORD *)(*(_QWORD *)(v19 + 16) + 2528LL) )
      goto LABEL_20;
    if ( !v19 )
    {
      v35 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v35);
      v19 = *((_QWORD *)a1 + 1);
    }
    v20 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 2528LL) + 540LL) )
LABEL_20:
      v20 = 1;
    v21 = VIDPN_MGR::SetTimingsFromVidPn(
            a1,
            0,
            4,
            0LL,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)v50,
            (struct DMMVIDPN *)v47,
            v20,
            0LL,
            0LL);
    v23 = v21;
    if ( v21 < 0 )
    {
      v47[0] = 2;
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v37[3] = v10;
      v38 = *((_QWORD *)a1 + 1);
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v36);
        WdLogEvent5_WdAssertion(v39);
        v38 = *((_QWORD *)a1 + 1);
      }
      v40 = *(int *)(*(_QWORD *)(v38 + 16) + 280LL);
      v37[4] = v40;
      v41 = *((_QWORD *)a1 + 1);
      if ( !v41 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v40);
        WdLogEvent5_WdAssertion(v42);
        v41 = *((_QWORD *)a1 + 1);
      }
      v37[5] = *(unsigned int *)(*(_QWORD *)(v41 + 16) + 276LL);
      v37[6] = v23;
      WdLogEvent5_WdError(v37);
    }
    v24 = v50[6];
    if ( v50[6] )
    {
      for ( j = 0; ; ++j )
      {
        v26 = *((_QWORD *)a1 + 1);
        v27 = v26;
        if ( !v26 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v43);
          v26 = *((_QWORD *)a1 + 1);
          v27 = v26;
        }
        v22 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 2520LL);
        if ( j >= *(_DWORD *)(v22 + 80) )
          break;
        if ( _bittest(&v24, j) )
        {
          if ( !v27 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v22);
            WdLogEvent5_WdAssertion(v44);
            v27 = *((_QWORD *)a1 + 1);
          }
          DisplayRestoreVidPnResult(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 276LL), j, 3LL, (unsigned int)v50[j + 20], a5);
        }
      }
    }
    else
    {
      v27 = *((_QWORD *)a1 + 1);
    }
    if ( !v27 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v45);
      v27 = *((_QWORD *)a1 + 1);
    }
    DmmHandleSetTimingsResult(*(ADAPTER_DISPLAY ***)(v27 + 16), (struct _DMM_SET_TIMING_RESULT *)v47, a5);
    v48 = 1;
    v49 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v48, v28, v29) < 0 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v46);
    }
  }
  return 0LL;
}
