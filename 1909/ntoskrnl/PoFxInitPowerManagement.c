/*
 * XREFs of PoFxInitPowerManagement @ 0x140A1BDF0
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxInitializeWorkPool @ 0x1405B1D88 (PopFxInitializeWorkPool.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 result; // rax

  qword_1404442D8 = (__int64)&PopFxPluginList;
  qword_140444298 = (__int64)&PopFxDeviceList;
  PopFxDeviceList = (ULONG_PTR)&PopFxDeviceList;
  PopFxPluginList = (ULONG_PTR)&PopFxPluginList;
  qword_1404442B8 = (__int64)&PopFxAcpiDeviceList;
  PopFxAcpiDeviceList = (__int64)&PopFxAcpiDeviceList;
  qword_1404443E8 = (__int64)&PopWorkOrderList;
  PopWorkOrderList = (__int64)&PopWorkOrderList;
  PopFxDeviceRegisterHead = (__int64)&PopFxPluginList;
  qword_140444310 = (__int64)PopFxResidentTimeoutRoutine;
  PopFxDeviceListLock = 0LL;
  PopFxPluginLock = 0LL;
  PopWorkOrderLock = 0LL;
  qword_140444318 = 0LL;
  PopFxResidentWorkItem = 0LL;
  PopFxBlockingDeviceListLock = 0LL;
  KeInitializeDpc(&PopFxResidentDpc, (PKDEFERRED_ROUTINE)PopFxResidentTimeoutDpcRoutine, 0LL);
  *(_QWORD *)&PopFxResidentTimer.Header.Lock = 9LL;
  PopFxResidentTimer.Header.WaitListHead.Blink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.Header.WaitListHead.Flink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopFxResidentTimer.Processor = 0LL;
  PopFxActiveIdleThreshold *= 10000;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxGlobalDeviceAccountingLock = 0LL;
  memset(&byte_140444401, 0, 0x6FuLL);
  PopFxGlobalDeviceAccountingInfo[0] = 1;
  PopFxDeviceAccountingLevel = PopSleepStudyDeviceAccountingLevel;
  if ( PopSleepStudyDisabled )
    PopFxDeviceAccountingLevel = 0;
  qword_1404443C8 = (__int64)&SocSubsystemsList;
  SocSubsystemsList = (__int64)&SocSubsystemsList;
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&PopFxSystemWorkPool, 0LL);
  *(_QWORD *)&PopPepIdleTimer.Header.Lock = 9LL;
  qword_140442798 = (__int64)&PopPepDeviceList;
  PopPepDeviceList = (__int64)&PopPepDeviceList;
  qword_140442870 = (__int64)PopPepIdleTimeoutRoutine;
  PopPepIdleDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopPepIdleTimeoutDpcRoutine;
  PopPepIdleTimer.Header.WaitListHead.Blink = &PopPepIdleTimer.Header.WaitListHead;
  PopPepIdleTimer.Header.WaitListHead.Flink = &PopPepIdleTimer.Header.WaitListHead;
  PopFxPlatformInterface = 0LL;
  qword_140436C48 = 0LL;
  qword_140436C50 = 0LL;
  PopPepDeviceListLock = 0LL;
  qword_140442878 = 0LL;
  PopPepIdleWorkItem = 0LL;
  PopPepIdleDpc.TargetInfoAsUlong = 275;
  PopPepIdleDpc.DeferredContext = 0LL;
  PopPepIdleDpc.DpcData = 0LL;
  PopPepIdleDpc.ProcessorHistory = 0LL;
  PopPepIdleTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopPepIdleTimer.Processor = 0LL;
  PopPepVetoMaskReadyLock = 0LL;
  PopFxDirectedPowerUpTimeoutMs = 0;
  if ( PopWatchdogResumeTimeout )
    PopFxDirectedPowerUpTimeoutMs = 1000 * (PopWatchdogResumeTimeout + 120);
  result = (unsigned int)PopWatchdogSleepTimeout;
  PopFxDirectedPowerDownTimeoutMs = 0;
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    result = (unsigned int)(PopWatchdogSleepTimeout + 120);
    PopFxDirectedPowerDownTimeoutMs = 1000 * result;
  }
  return result;
}
