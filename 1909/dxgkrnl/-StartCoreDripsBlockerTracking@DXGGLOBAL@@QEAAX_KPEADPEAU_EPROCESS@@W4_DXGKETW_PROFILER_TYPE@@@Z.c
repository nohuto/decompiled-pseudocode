/*
 * XREFs of ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00D37D4
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02419A0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v9 + 24) = 5156LL;
LABEL_3:
    WdLogEvent5_WdEvent(v9);
    return;
  }
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v9 + 24) = 5162LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 1688) && *(_BYTE *)(a1 + 303824) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(a1 + 1696), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DripsBlockerTrackingHelper::AddProcessEntry(a1 + 1744, a2, a3, a4, a5);
    if ( v10[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  }
}
