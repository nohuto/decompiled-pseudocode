/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408A5CB0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5370 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408A5750 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408A58CC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408A6398 (PopFxResetSocSubsystemAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxLookupSocSubsystemsByPlatformIdleState(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = SocSubsystemsList;
  result = 0LL;
  while ( (__int64 *)v1 != &SocSubsystemsList )
  {
    result = v1;
    if ( !v1 || *(_DWORD *)(v1 + 16) == a1 )
      break;
    v1 = *(_QWORD *)v1;
  }
  return result;
}
