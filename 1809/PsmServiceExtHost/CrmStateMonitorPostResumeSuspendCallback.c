/*
 * XREFs of CrmStateMonitorPostResumeSuspendCallback @ 0x180040440
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003F044 (CrmStateMonitorPostResumeSetAndReset.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSuspendCallback(__int64 a1, __int64 a2, int *a3)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = a1 - 64;
  if ( !*a3 && *(_DWORD *)(v4 + 88) )
  {
    TpSetTimer(*(_QWORD *)(v4 + 144), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v4 + 144), 1LL);
    CrmStateMonitorPostResumeSetAndReset(v4, 0);
    *(_DWORD *)(v4 + 168) = 0;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_QWORD *)(v4 + 160) = 0LL;
    CrmRegisterToStateMonitor(v4 + 96, 24);
    *(_DWORD *)(v4 + 188) = 0;
    *(_QWORD *)(v4 + 172) = 0LL;
    *(_QWORD *)(v4 + 180) = 0LL;
    CrmRegisterToStateMonitor(v4 + 120, 25);
    v5 = *(_QWORD *)(v4 + 144);
    v7 = -3000000000LL;
    result = TpSetTimer(v5, &v7, 0LL, 2000LL);
  }
  *(_DWORD *)(v4 + 88) = v3;
  return result;
}
