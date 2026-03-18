/*
 * XREFs of HvlpLogHypervisorProcessorConfigurationWarning @ 0x1401B3E94
 * Callers:
 *     HvlPhase2Initialize @ 0x1401932E4 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpWriteEventLog @ 0x140278938 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogHypervisorProcessorConfigurationWarning()
{
  return HvlpWriteEventLog(&HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING, 0, 0LL);
}
