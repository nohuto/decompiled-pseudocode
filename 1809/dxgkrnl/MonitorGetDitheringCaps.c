/*
 * XREFs of MonitorGetDitheringCaps @ 0x1C00D6040
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D5E14 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDitheringCaps(struct HDXGMONITOR__ *a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGMONITOR *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v9 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v9);
  if ( (int)result >= 0 )
  {
    v5 = v9;
    if ( !v9 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 296), 1u);
    *a2 = *((_DWORD *)v5 + 119);
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
