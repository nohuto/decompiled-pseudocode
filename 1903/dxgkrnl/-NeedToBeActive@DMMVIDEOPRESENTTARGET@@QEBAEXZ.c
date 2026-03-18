/*
 * XREFs of ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0127460
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01261FC (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00FC190 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this, __int64 a2)
{
  char v3; // bl
  struct HDXGMONITOR__ *v4; // rcx
  int MonitorFromHandle; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  struct DXGMONITOR *v10; // rdi
  struct _ERESOURCE *v11; // rsi
  int v12; // eax
  bool v13; // di
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) != 1 )
    return 0;
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) )
    return 0;
  if ( !*((_BYTE *)this + 414) )
    return DMMVIDEOPRESENTTARGET::IsTargetForceable(this, a2);
  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v4 )
    return 1;
  v20 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v4, &v20);
  v9 = MonitorFromHandle;
  if ( MonitorFromHandle < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v19 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v19 + 32) = v9;
    WdLogEvent5_WdError(v19);
    v13 = 0;
  }
  else
  {
    v10 = v20;
    if ( !v20 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v15);
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v11 = (struct _ERESOURCE *)((char *)v10 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
    v12 = *((_DWORD *)v10 + 10);
    v13 = (v12 & 0x20) != 0 || (v12 & 2) != 0 && (v12 & 4) != 0;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
  }
  if ( !v13 )
    return 1;
  return v3;
}
