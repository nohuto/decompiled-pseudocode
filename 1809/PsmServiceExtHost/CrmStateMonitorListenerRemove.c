/*
 * XREFs of CrmStateMonitorListenerRemove @ 0x180031D18
 * Callers:
 *     CrmActivityCleanup @ 0x1800067E4 (CrmActivityCleanup.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x180031CB4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003F044 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorSystemDiskUsageCleanup @ 0x18007090C (CrmStateMonitorSystemDiskUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x180070B3C (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x180070BE0 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x180070C30 (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x180070CF4 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x180070D98 (CrmStateMonitorPowerConstrainedCleanup.c)
 * Callees:
 *     CrmLogStateMonitorActivityRemove @ 0x180031E88 (CrmLogStateMonitorActivityRemove.c)
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 *     CempLockReleaseExclusive @ 0x180070FE4 (CempLockReleaseExclusive.c)
 */

__int64 __fastcall CrmStateMonitorListenerRemove(char *P, __int64 a2, int a3)
{
  __int64 v3; // r12
  char *v4; // rsi
  int *v5; // rdi
  int v8; // r14d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  BOOL v13; // ebx
  __int64 v14; // rax
  __int64 result; // rax

  v3 = *(int *)P;
  v4 = P + 8;
  v5 = (int *)P;
  v8 = 1;
  RtlAcquireSRWLockExclusive(P + 8);
  v9 = (_QWORD *)(a2 + 8);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = v5 + 6;
  *(_QWORD *)(v10 + 8) = v11;
  v9[1] = v9;
  *v9 = v9;
  v13 = *v12 == (_QWORD)v12;
  if ( (_QWORD *)*v12 == v12 )
  {
    if ( !a3 )
    {
      CempLockReleaseExclusive(v4);
      v8 = 0;
      RtlAcquireSRWLockExclusive(CrmGlobals);
      LODWORD(qword_18009BB68) = GetCurrentThreadId();
      if ( (int *)CrmGlobals[v3 + 2] != v5 )
      {
        CempLockReleaseExclusive(CrmGlobals);
        v5 = 0LL;
        goto LABEL_15;
      }
      RtlAcquireSRWLockExclusive(v4);
      *((_DWORD *)v4 + 2) = GetCurrentThreadId();
      v13 = *v12 == (_QWORD)v12;
    }
    if ( v13 )
    {
      v14 = *v5;
      if ( (int *)CrmGlobals[v14 + 2] == v5 )
        CrmGlobals[v14 + 2] = 0LL;
    }
    CempLockReleaseExclusive(v4);
    v8 = 0;
    if ( !a3 )
      CempLockReleaseExclusive(CrmGlobals);
    if ( v13 )
    {
      CrmStateMonitorCleanup(v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
LABEL_15:
  result = CrmLogStateMonitorActivityRemove((unsigned int)v3, v13);
  if ( v8 )
    return CempLockReleaseExclusive(v5 + 2);
  return result;
}
