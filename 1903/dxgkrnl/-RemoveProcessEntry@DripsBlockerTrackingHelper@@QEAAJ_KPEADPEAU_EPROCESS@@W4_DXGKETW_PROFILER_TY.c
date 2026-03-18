/*
 * XREFs of ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245534
 * Callers:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z @ 0x1C0242F18 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z.c)
 *     ?GetProcessEntry@DripsBlockerTrackingHelper@@AEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C0243D84 (-GetProcessEntry@DripsBlockerTrackingHelper@@AEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z @ 0x1C0244F60 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@AEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245F48 (-ShouldIgnore@DripsBlockerTrackingHelper@@AEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?UpdateLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXII@Z @ 0x1C02464BC (-UpdateLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXII@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::RemoveProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        char *a3,
        struct _EPROCESS *a4,
        unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  DripsBlockerTrackingHelper *v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // edi
  char *v20; // r8
  int v21; // eax
  int v22; // eax
  size_t v24; // [rsp+20h] [rbp-51h]
  unsigned int v25; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-2Dh] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-29h] BYREF
  struct _EPROCESS *v28; // [rsp+50h] [rbp-21h]
  char v29[40]; // [rsp+58h] [rbp-19h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v28 = a4;
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached() )
      goto LABEL_12;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread )
      goto LABEL_12;
    v15 = *ThreadWin32Thread;
    if ( !v15 )
      goto LABEL_12;
    v16 = *(_QWORD *)(v15 + 80);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
    a5 = *(_DWORD *)(v16 + 144);
LABEL_12:
  if ( !(unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(v12, a5) )
  {
    v27 = 0LL;
    memset(v29, 0, 0x21uLL);
    LODWORD(v24) = 33;
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v17, a3, v28, v29, v24, &v27);
    v26 = 0;
    v25 = 0;
    if ( DripsBlockerTrackingHelper::GetProcessEntry((__int64)a1, a2, v29, v27, a5, &v26, &v25)
      && (v18 = v26, v19 = v25, v20 = (char *)a1 + 4720 * v26, (v21 = *(_DWORD *)&v20[72 * v25 + 144]) != 0) )
    {
      v22 = v21 - 1;
      *(_DWORD *)&v20[72 * v25 + 144] = v22;
      if ( !v22 )
      {
        DripsBlockerTrackingHelper::EnableEntryAccounting(a1, v18, v19, 0);
        DripsBlockerTrackingHelper::UpdateLastActiveEntry(a1, v18, v19);
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return v6;
}
