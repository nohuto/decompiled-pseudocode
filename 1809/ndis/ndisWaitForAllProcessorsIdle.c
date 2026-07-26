/*
 * XREFs of ndisWaitForAllProcessorsIdle @ 0x1C0103838
 * Callers:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C0103414 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisWaitForExternalDriver @ 0x1C0103A24 (ndisWaitForExternalDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

void ndisWaitForAllProcessorsIdle()
{
  _GROUP_AFFINITY *p_PreviousAffinity; // r15
  USHORT ActiveGroupCount; // bp
  unsigned int v2; // r14d
  USHORT i; // bx
  ULONG ActiveProcessorCount; // eax
  ULONG v5; // edi
  ULONG j; // esi
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  ActiveGroupCount = KeQueryActiveGroupCount();
  v2 = KeSetActualBasePriorityThread(KeGetCurrentThread(), 2LL);
  for ( i = 0; i < ActiveGroupCount; ++i )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(i);
    Affinity.Group = i;
    v5 = 0;
    for ( j = ActiveProcessorCount; v5 < j; p_PreviousAffinity = 0LL )
    {
      Affinity.Mask = 1LL << v5;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      ++v5;
    }
  }
  KeSetActualBasePriorityThread(KeGetCurrentThread(), v2);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
