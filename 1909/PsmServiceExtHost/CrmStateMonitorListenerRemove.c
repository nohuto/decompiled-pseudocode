/*
 * XREFs of CrmStateMonitorListenerRemove @ 0x180004AA4
 * Callers:
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x1800036B4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorGPUUsageCleanup @ 0x180004A40 (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003FC2C (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x18007E38C (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x18007E430 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x18007E480 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x18007E51C (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x18007E56C (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x18007E624 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x18007E6C8 (CrmStateMonitorPowerConstrainedCleanup.c)
 * Callees:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall CrmStateMonitorListenerRemove(char *P, __int64 a2, int a3)
{
  int v3; // r13d
  char *v4; // rdi
  int v8; // r15d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  BOOL v13; // ebx
  const struct _TlgProvider_t *v14; // rcx
  __int64 v15; // rax
  bool v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  UUID *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  bool *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]

  v3 = *(_DWORD *)P;
  v4 = P + 8;
  v8 = 1;
  RtlAcquireSRWLockExclusive(P + 8);
  v9 = (_QWORD *)(a2 + 8);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = P + 24;
  *(_QWORD *)(v10 + 8) = v11;
  v9[1] = v9;
  *v9 = v9;
  v13 = *v12 == (_QWORD)v12;
  if ( (_QWORD *)*v12 == v12 )
  {
    if ( !a3 )
    {
      *((_DWORD *)v4 + 2) = 0;
      RtlReleaseSRWLockExclusive(v4);
      RtlAcquireSRWLockExclusive(CrmGlobals);
      LODWORD(qword_1800ABE08) = GetCurrentThreadId();
      RtlAcquireSRWLockExclusive(v4);
      *((_DWORD *)v4 + 2) = GetCurrentThreadId();
      v13 = *v12 == (_QWORD)v12;
    }
    if ( v13 )
    {
      v15 = *(int *)P;
      if ( (char *)CrmGlobals[v15 + 2] == P )
        CrmGlobals[v15 + 2] = 0LL;
    }
    *((_DWORD *)v4 + 2) = 0;
    LOBYTE(v11) = RtlReleaseSRWLockExclusive(v4);
    v8 = 0;
    if ( !a3 )
    {
      LODWORD(qword_1800ABE08) = 0;
      LOBYTE(v11) = RtlReleaseSRWLockExclusive(CrmGlobals);
    }
    if ( v13 )
    {
      CrmStateMonitorCleanup((__int64)P);
      LOBYTE(v11) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
  }
  if ( dword_1800AB2F8 > 5u )
  {
    LOBYTE(v11) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 8uLL);
    if ( (_BYTE)v11 )
    {
      v18 = v3;
      v20 = &Uuid;
      v21 = 16;
      v17 = v13;
      v23 = &v18;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v26 = &v17;
      v24 = 4;
      v27 = 1;
      LOBYTE(v11) = TlgWrite(v14, &unk_18009AFA4, 0LL, 0LL, 5u, &pData);
    }
  }
  if ( v8 )
  {
    *((_DWORD *)v4 + 2) = 0;
    LOBYTE(v11) = RtlReleaseSRWLockExclusive(v4);
  }
  return (char)v11;
}
