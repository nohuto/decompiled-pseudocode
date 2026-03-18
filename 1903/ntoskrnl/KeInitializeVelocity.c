/*
 * XREFs of KeInitializeVelocity @ 0x1405B0A28
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     Feature_BamQosGrouping__private_IsEnabled @ 0x1401BE204 (Feature_BamQosGrouping__private_IsEnabled.c)
 *     Feature_SchedulerFavoredCoreRotation__private_IsEnabled @ 0x1401BE290 (Feature_SchedulerFavoredCoreRotation__private_IsEnabled.c)
 */

__int64 KeInitializeVelocity()
{
  __int64 result; // rax

  if ( (unsigned int)Feature_BamQosGrouping__private_IsEnabled() )
    KiVelocityFlags |= 0x800u;
  result = Feature_SchedulerFavoredCoreRotation__private_IsEnabled();
  if ( (_DWORD)result )
    KiVelocityFlags |= 0x1000u;
  return result;
}
