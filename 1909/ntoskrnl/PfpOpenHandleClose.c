/*
 * XREFs of PfpOpenHandleClose @ 0x14062CC38
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14062A850 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14062AE1C (PfSnQueryVolumeInfo.c)
 *     PfpFileBuildReadSupport @ 0x14062B454 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchEntireDirectory @ 0x14062BA94 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x14062C478 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x14062C8E8 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14062C9F4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x140646AAC (PfpReadSupportCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x1406AADFC (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AB540 (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x1406AB7BC (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406ABB38 (PfpPrefetchVolumesCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A07E8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_140467978 + 8))(v5);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
