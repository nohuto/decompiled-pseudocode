/*
 * XREFs of CrmStateMonitorPowerConstrainedStart @ 0x180047074
 * Callers:
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorPowerConstrainedStart(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 60) = 0;
  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 0;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = CrmRegisterToStateMonitor(a1 + 72, 4);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 96, 23);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
