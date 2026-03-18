/*
 * XREFs of PfpOpenHandleClose @ 0x140628DE8
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x140626F6C (PfSnQueryVolumeInfo.c)
 *     PfpReadSupportCleanup @ 0x14062750C (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140627600 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchEntireDirectory @ 0x140627C40 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140628628 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x140628A98 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140628BA4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchDirectoryStream @ 0x1406A97DC (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x1406A9A58 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406A9DD4 (PfpPrefetchVolumesCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[3];
  if ( (v2 & 0x1000000000LL) == 0 )
  {
    v5[1] = *a1;
    v5[2] = a1[1];
    v5[3] = a1[2];
    v5[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140467C78 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
