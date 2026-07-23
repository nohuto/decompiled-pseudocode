/*
 * XREFs of HvlpLogHypervisorProcessorConfigurationWarning @ 0x1401B3D54
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpWriteEventLog @ 0x140278C28 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogHypervisorProcessorConfigurationWarning()
{
  return HvlpWriteEventLog(&HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING, 0, 0LL);
}
