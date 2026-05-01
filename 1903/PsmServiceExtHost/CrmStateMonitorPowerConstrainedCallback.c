/*
 * XREFs of CrmStateMonitorPowerConstrainedCallback @ 0x1800463A0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall CrmStateMonitorPowerConstrainedCallback(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 4 )
  {
    v5 = -72LL;
  }
  else
  {
    if ( a2 != 23 )
      return;
    v5 = -96LL;
  }
  v6 = a1 + v5;
  RtlAcquireSRWLockExclusive(a1 + v5 + 8);
  *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
  v8 = *(_OWORD *)(v6 + 56);
  if ( a2 == 4 )
  {
    LODWORD(v8) = *a3;
  }
  else
  {
    v7 = a3[2];
    *(_QWORD *)((char *)&v8 + 4) = *(_QWORD *)a3;
    HIDWORD(v8) = v7;
  }
  CrmStateMonitorStateSet((void **)v6, &v8, 0x10uLL, 1);
  *(_DWORD *)(v6 + 16) = 0;
  RtlReleaseSRWLockExclusive(v6 + 8);
}
