/*
 * XREFs of CrmStateMonitorCompositeTestStart @ 0x180070B8C
 * Callers:
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorCompositeTestStart(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // rdx
  void *v4; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v4, v3, v2);
  result = CrmRegisterToStateMonitor(a1 + 64, 0);
  if ( (int)result >= 0 )
    return CrmRegisterToStateMonitor(a1 + 96, 1);
  return result;
}
