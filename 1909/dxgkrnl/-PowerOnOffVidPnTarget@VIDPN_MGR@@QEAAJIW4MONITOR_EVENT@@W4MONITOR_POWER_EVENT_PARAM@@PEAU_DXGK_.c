/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158CF8
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015C7D0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003E00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128B44 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C0158F7C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        VIDPN_MGR *a1,
        __int64 a2,
        int a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rax
  int v15; // ebx
  unsigned __int8 v16; // si
  char v17; // r15
  _QWORD *v18; // rbx
  _QWORD *v19; // r14
  unsigned int *i; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  int v31; // esi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32; // r14
  unsigned int j; // ebx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  const GUID *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v41; // ebx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v57; // [rsp+58h] [rbp-A8h]
  _QWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v59[64]; // [rsp+70h] [rbp-90h] BYREF

  v57 = a5;
  v7 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdDmmEvent(a1, a2);
  v10 = (unsigned int)v7;
  *(_QWORD *)(v9 + 24) = v7;
  *(_QWORD *)(v9 + 32) = a1;
  WdLogEvent5_WdDmmEvent(v9);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 16LL) != CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a4 )
  {
    v15 = a4 - 1;
    if ( v15 )
    {
      v41 = v15 - 1;
      if ( v41 )
      {
        if ( v41 != 1 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(CurrentThread, v11, v12);
          v42[3] = (unsigned int)v7;
          v42[4] = a1;
          v42[5] = -1073741811LL;
          WdLogEvent5_WdError(v42);
          return 3221225485LL;
        }
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      v17 = 0;
    }
    else
    {
      v16 = 0;
      v17 = 1;
    }
  }
  else
  {
    v16 = 1;
    v17 = 1;
  }
  if ( (_DWORD)v7 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v18 = (_QWORD *)*((_QWORD *)a1 + 10);
    v19 = (_QWORD *)v18[3];
    if ( v19 != v18 + 3 )
    {
      for ( i = (unsigned int *)(v19 - 1);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v18,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( a3 != 8 || v16 || !i[22] )
          VIDPN_MGR::SetTargetOwnership(a1, i[6], (v16 ^ 1u) + 1);
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 8), v11, v12);
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(a1, (unsigned int)v7, (v16 ^ 1u) + 1);
  }
  if ( v17 )
  {
    memset(v59, 0, 0xFCuLL);
    v23 = *((_QWORD *)a1 + 1);
    LOBYTE(v56) = 0;
    if ( !v23 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v43);
      v23 = *((_QWORD *)a1 + 1);
    }
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 2560LL);
    if ( !v24 || (v25 = 0, *(_DWORD *)(v24 + 540)) )
      v25 = 1;
    v26 = VIDPN_MGR::SetTimingsFromVidPn(a1, 0LL, 4u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v59, &v56, v25, 0LL, 0LL);
    v30 = v26;
    if ( v26 < 0 )
    {
      LOBYTE(v56) = 2;
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
      v46[3] = v10;
      v47 = *((_QWORD *)a1 + 1);
      if ( !v47 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v45, v44);
        WdLogEvent5_WdAssertion(v48);
        v47 = *((_QWORD *)a1 + 1);
      }
      v49 = *(int *)(*(_QWORD *)(v47 + 16) + 280LL);
      v46[4] = v49;
      v50 = *((_QWORD *)a1 + 1);
      if ( !v50 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v49, v44);
        WdLogEvent5_WdAssertion(v51);
        v50 = *((_QWORD *)a1 + 1);
      }
      v46[5] = *(unsigned int *)(*(_QWORD *)(v50 + 16) + 276LL);
      v46[6] = v30;
      WdLogEvent5_WdError(v46);
    }
    v31 = v59[6];
    v32 = v57;
    if ( v59[6] )
    {
      for ( j = 0; ; ++j )
      {
        v34 = *((_QWORD *)a1 + 1);
        v35 = v34;
        if ( !v34 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v52);
          v34 = *((_QWORD *)a1 + 1);
          v35 = v34;
        }
        v28 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 2552LL);
        if ( j >= *(_DWORD *)(v28 + 80) )
          break;
        if ( _bittest(&v31, j) )
        {
          if ( !v35 )
          {
            v53 = WdLogNewEntry5_WdAssertion(v28, v27);
            WdLogEvent5_WdAssertion(v53);
            v35 = *((_QWORD *)a1 + 1);
          }
          DisplayRestoreVidPnResult(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 276LL), j, 3LL, (unsigned int)v59[j + 21], v32);
        }
      }
    }
    else
    {
      v35 = *((_QWORD *)a1 + 1);
    }
    if ( !v35 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v54);
      v35 = *((_QWORD *)a1 + 1);
    }
    DmmHandleSetTimingsResult(*(ADAPTER_DISPLAY ***)(v35 + 16), (struct _DMM_SET_TIMING_RESULT *)&v56, v32);
    v58[0] = 1LL;
    v58[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v58, v36, v37) < 0 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v39, v38);
      WdLogEvent5_WdAssertion(v55);
    }
  }
  return 0LL;
}
