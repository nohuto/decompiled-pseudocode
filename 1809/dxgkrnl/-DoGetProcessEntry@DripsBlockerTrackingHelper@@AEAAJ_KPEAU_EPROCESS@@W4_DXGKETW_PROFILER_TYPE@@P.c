/*
 * XREFs of ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C020E988
 * Callers:
 *     ?IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E4290 (-IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C020E020 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetProcessEntry@DripsBlockerTrackingHelper@@AEAAE_KPEAD0PEAI@Z @ 0x1C020FCB8 (-GetProcessEntry@DripsBlockerTrackingHelper@@AEAAE_KPEAD0PEAI@Z.c)
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEEPSTUDY_CONNECTION_ID@@PEADIPEA_KH@Z @ 0x1C0210EC4 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEE.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::DoGetProcessEntry(
        DripsBlockerTrackingHelper *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v6; // ebx
  __int64 v11; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v20[40]; // [rsp+48h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached() )
      goto LABEL_12;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread )
      goto LABEL_12;
    v14 = *ThreadWin32Thread;
    if ( !v14 )
      goto LABEL_12;
    v15 = *(_QWORD *)(v14 + 80);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
    a4 = *(_DWORD *)(v15 + 144);
LABEL_12:
  memset(v20, 0, 0x21uLL);
  DXGGLOBAL::GetGlobal(v16);
  DXGGLOBAL::PrepareDripsBlockerProcessName(v17, a3, a4, 3LL, v20);
  if ( !DripsBlockerTrackingHelper::GetProcessEntry(a1, a2, v20, 0LL, a5) )
  {
    if ( DripsBlockerTrackingHelper::GetProcessEntry(a1, 0LL, (char *)File, 0LL, a5) )
    {
      v18 = 9LL * *a5;
      *(_OWORD *)((char *)a1 + 8 * v18 + 33) = *(_OWORD *)v20;
      *(_OWORD *)((char *)a1 + 8 * v18 + 49) = *(_OWORD *)&v20[16];
      *((_BYTE *)a1 + 8 * v18 + 65) = v20[32];
      *((_QWORD *)a1 + 9 * *a5 + 2) = a2;
      *((_BYTE *)a1 + 18432) = 0;
    }
    else
    {
      return (unsigned int)-2147483622;
    }
  }
  return v6;
}
