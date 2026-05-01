/*
 * XREFs of CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x1800035F0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x1800036B4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadyTimeSinceLogonCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 64;
  if ( !*a3 )
  {
    TpSetTimer(*(_QWORD *)(v3 + 136), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 136), 1LL);
    CrmStateMonitorPostShellReadySetAndReset(v3, 0LL);
    *(_DWORD *)(v3 + 160) = 0;
    *(_QWORD *)(v3 + 144) = 0LL;
    *(_QWORD *)(v3 + 152) = 0LL;
    CrmRegisterToStateMonitor(v3 + 88, 24LL);
    *(_DWORD *)(v3 + 180) = 0;
    *(_QWORD *)(v3 + 164) = 0LL;
    *(_QWORD *)(v3 + 172) = 0LL;
    CrmRegisterToStateMonitor(v3 + 112, 25LL);
    v4 = *(_QWORD *)(v3 + 136);
    v6 = -3000000000LL;
    return TpSetTimer(v4, &v6, 0LL, 2000LL);
  }
  return result;
}
