/*
 * XREFs of PopUserPresentOverride @ 0x140879230
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1406DC650 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DCAB8 (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopUserPresentOverride(char a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  PopAcquireAdaptiveLock(1);
  v2 = 0;
  if ( a1 )
  {
    v3 = PopUserPresentOverrideCount + 1;
  }
  else
  {
    if ( !PopUserPresentOverrideCount )
    {
      v2 = -1073741811;
      goto LABEL_11;
    }
    v3 = PopUserPresentOverrideCount - 1;
  }
  PopUserPresentOverrideCount = v3;
  if ( v3 == 1 && a1 || !v3 && !a1 )
    PopEvaluateGlobalUserStatus();
LABEL_11:
  PopReleaseAdaptiveLock();
  return v2;
}
