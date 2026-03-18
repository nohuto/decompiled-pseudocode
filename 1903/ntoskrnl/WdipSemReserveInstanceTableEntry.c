/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140744C0C
 * Callers:
 *     WdipSemEnableScenario @ 0x1407448AC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140716678 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140744CE0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408EE3B0 (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140435238, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140435230 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v3 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v3 )
      {
        v6 = (_QWORD *)qword_140435228;
        if ( *(__int64 **)qword_140435228 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v3 = &WdipSemEnabledInstanceTable;
        v3[1] = v6;
        *v6 = v3;
        ++dword_140435230;
        qword_140435228 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140435238, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
