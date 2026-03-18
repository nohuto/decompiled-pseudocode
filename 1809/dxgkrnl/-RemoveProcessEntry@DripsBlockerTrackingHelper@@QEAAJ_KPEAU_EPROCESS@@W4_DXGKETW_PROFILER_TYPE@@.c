/*
 * XREFs of ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02116A4
 * Callers:
 *     ?StopCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E42EC (-StopCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetProcessEntry@DripsBlockerTrackingHelper@@AEAAE_KPEAD0PEAI@Z @ 0x1C020FCB8 (-GetProcessEntry@DripsBlockerTrackingHelper@@AEAAE_KPEAD0PEAI@Z.c)
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEEPSTUDY_CONNECTION_ID@@PEADIPEA_KH@Z @ 0x1C0210EC4 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEE.c)
 *     ?StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z @ 0x1C021237C (-StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::RemoveProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        __int64 a3,
        ULONG a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  __int64 v10; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  size_t v16; // rcx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+28h] [rbp-90h]
  unsigned int v22; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-70h] BYREF
  char v24[40]; // [rsp+50h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v22 = 0;
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached() )
      goto LABEL_12;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread )
      goto LABEL_12;
    v13 = *ThreadWin32Thread;
    if ( !v13 )
      goto LABEL_12;
    v14 = *(_QWORD *)(v13 + 80);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
    a4 = *(_DWORD *)(v14 + 144);
LABEL_12:
  v23 = 0LL;
  memset(v24, 0, 0x21uLL);
  DXGGLOBAL::GetGlobal(v15);
  DXGGLOBAL::PrepareDripsBlockerProcessName(v16, a3, a4, 3, v24, v21, (__int64 *)&v23, 1);
  if ( DripsBlockerTrackingHelper::GetProcessEntry(a1, a2, v24, v23, &v22)
    && (v17 = v22, (v18 = *((_DWORD *)a1 + 18 * v22 + 6)) != 0) )
  {
    v19 = v18 - 1;
    *((_DWORD *)a1 + 18 * v22 + 6) = v19;
    if ( !v19 )
      DripsBlockerTrackingHelper::StartStopEntryAccounting(a1, v17, 0);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
