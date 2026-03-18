/*
 * XREFs of ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C0242464
 * Callers:
 *     ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241748 (-AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02419A0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241B94 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AddNewProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C0241838 (-AddNewProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 *     ?AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C02418BC (-AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@P.c)
 *     ?GetProcessEntry@DripsBlockerTrackingHelper@@AEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C0244404 (-GetProcessEntry@DripsBlockerTrackingHelper@@AEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z @ 0x1C02455E0 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@AEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02465C8 (-ShouldIgnore@DripsBlockerTrackingHelper@@AEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::DoGetProcessEntry(
        __int64 a1,
        __int64 a2,
        char *a3,
        struct _EPROCESS *a4,
        unsigned int a5,
        unsigned int *a6,
        _DWORD *a7,
        _BYTE *a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  int CurrentProcessSessionId; // ebp
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  DripsBlockerTrackingHelper *v20; // rcx
  unsigned __int64 v21; // [rsp+40h] [rbp-88h] BYREF
  _BYTE *v22; // [rsp+48h] [rbp-80h]
  struct _EPROCESS *v23; // [rsp+50h] [rbp-78h]
  char *v24; // [rsp+58h] [rbp-70h]
  char v25[40]; // [rsp+60h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v23 = a4;
  v24 = a3;
  v22 = a8;
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached() )
      goto LABEL_12;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread )
      goto LABEL_12;
    v17 = *ThreadWin32Thread;
    if ( !v17 )
      goto LABEL_12;
    v18 = *(_QWORD *)(v17 + 80);
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
    a5 = *(_DWORD *)(v18 + 144);
LABEL_12:
  if ( (unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(v14, a5) )
  {
    *v22 = 1;
    return 0LL;
  }
  else
  {
    v21 = 0LL;
    memset(v25, 0, 0x21uLL);
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v20, v24, v23, v25, 0x21u, &v21);
    if ( !(unsigned __int8)DripsBlockerTrackingHelper::GetProcessEntry(a1, a2, v25, v21, a5, a6, a7) )
    {
      v9 = DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(a1, a2, v25, v21, a5, a6, a7);
      if ( v9 == -1073741275 )
        return (unsigned int)DripsBlockerTrackingHelper::AddNewProcessEntry(a1, a2, (__int64)v25, a5, a6, a7);
    }
    return v9;
  }
}
