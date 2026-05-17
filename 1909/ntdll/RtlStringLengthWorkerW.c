/*
 * XREFs of RtlStringLengthWorkerW @ 0x180003214
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180002FD8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlStringCbCatW @ 0x180003144 (RtlStringCbCatW.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetVolumeHandle @ 0x18008C6D8 (RtlpGetVolumeHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CC524 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180114458 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringLengthWorkerW(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
