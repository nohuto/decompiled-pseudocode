/*
 * XREFs of NtQuerySystemInformation @ 0x140627260
 * Callers:
 *     AlpcpInitSystem @ 0x14075E47C (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *p_Group; // rdx
  __int64 v7; // r8
  NTSTATUS result; // eax
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  if ( SystemInformationClass >= SystemWow64SharedInformationObsolete
    && SystemInformationClass < SystemProcessorIdleCycleTimeInformation
    || SystemInformationClass < SystemProcessorPerformanceInformation )
  {
LABEL_3:
    p_Group = 0LL;
    v7 = 0LL;
    return ExpQuerySystemInformation(
             SystemInformationClass,
             p_Group,
             v7,
             SystemInformation,
             SystemInformationLength,
             ReturnLength);
  }
  else
  {
    switch ( SystemInformationClass )
    {
      case SystemProcessorPerformanceInformation:
      case SystemInterruptInformation:
      case SystemProcessorIdleInformation:
      case SystemProcessorPowerInformation:
      case SystemProcessorIdleCycleTimeInformation:
      case SystemProcessorPerformanceDistribution:
      case SystemProcessorCycleTimeInformation:
      case SystemProcessorPerformanceInformationEx:
        v7 = 2LL;
        Group = KeGetCurrentPrcb()->Group;
        p_Group = &Group;
        return ExpQuerySystemInformation(
                 SystemInformationClass,
                 p_Group,
                 v7,
                 SystemInformation,
                 SystemInformationLength,
                 ReturnLength);
      case SystemLogicalProcessorInformation:
        v7 = 2LL;
        Group = 0;
        p_Group = &Group;
        return ExpQuerySystemInformation(
                 SystemInformationClass,
                 p_Group,
                 v7,
                 SystemInformation,
                 SystemInformationLength,
                 ReturnLength);
      case SystemLogicalProcessorAndGroupInformation:
      case SystemNodeDistanceInformation:
      case SystemInterruptSteeringInformation:
        result = -1073741821;
        break;
      default:
        goto LABEL_3;
    }
  }
  return result;
}
