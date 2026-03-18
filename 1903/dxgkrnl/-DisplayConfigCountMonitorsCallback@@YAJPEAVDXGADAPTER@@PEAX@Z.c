/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DE6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00DE8C8 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     MonitorGetMonitorType @ 0x1C00DF994 (MonitorGetMonitorType.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0149C14 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int EmergentSimulatedTarget; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rbx
  _QWORD *v18; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbp
  struct HDXGMONITOR__ *v20; // rcx
  _QWORD *v22; // rax
  int MonitorType; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // [rsp+20h] [rbp-C8h] BYREF
  int v32; // [rsp+24h] [rbp-C4h]
  __int64 v33; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v34[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v35[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v36[72]; // [rsp+78h] [rbp-70h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    *(_QWORD *)(v28 + 24) = 2324LL;
    WdLogEvent5_WdAssertion(v28);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, a1, 0LL);
  v6 = COREADAPTERACCESS::AcquireShared((__int64)v34, 0xFFFFFFFFLL, v5);
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
      v22[3] = a1;
      v22[4] = *((int *)a1 + 70);
      v22[5] = *((unsigned int *)a1 + 69);
    }
    else
    {
      v2 = v6;
    }
  }
  else if ( *((_QWORD *)a1 + 319) )
  {
    if ( a2[24] )
    {
      v31 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v31);
      v13 = EmergentSimulatedTarget;
      if ( EmergentSimulatedTarget < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v29[3] = *((int *)a1 + 70);
        v29[4] = *((unsigned int *)a1 + 69);
        v29[5] = v13;
        WdLogEvent5_WdWarning(v29);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v31) >= 0
             && (*((_DWORD *)a1 + 77) & 1) != 0 )
      {
        a2[24] = 0;
      }
    }
    v14 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, v14);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
    v17 = *(_QWORD **)(v14 + 80);
    v18 = (_QWORD *)v17[3];
    if ( v18 != v17 + 3 )
    {
      for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v18 - 1);
            i;
            i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v17, i) )
      {
        v20 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 14);
        if ( v20 && !*((_DWORD *)i + 22) )
        {
          MonitorType = MonitorGetMonitorType(v20);
          v27 = MonitorType;
          if ( MonitorType < 0 )
          {
            v30 = WdLogNewEntry5_WdWarning(v25, v24, v26);
            *(_QWORD *)(v30 + 24) = i;
            *(_QWORD *)(v30 + 32) = v27;
            WdLogEvent5_WdWarning(v30);
            break;
          }
          ++*(_DWORD *)a2;
          if ( v32 > 0 )
          {
            if ( v32 > 2 )
            {
              if ( v32 == 5 )
                ++*((_DWORD *)a2 + 2);
            }
            else
            {
              ++*((_DWORD *)a2 + 1);
            }
          }
        }
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 8), v15, v16);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
  }
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  return v2;
}
