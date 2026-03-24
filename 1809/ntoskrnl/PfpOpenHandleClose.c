/*
 * XREFs of PfpOpenHandleClose @ 0x1406604CC
 * Callers:
 *     PfpPrefetchVolumesCleanup @ 0x14065B8F0 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x14065B99C (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x14065C414 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x14065D3CC (PfpPrefetchDirectoryStream.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC4C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14065E318 (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x14065EFA8 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x14065F2C0 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x14065FC98 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x14066018C (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140660298 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x140662A0C (PfpReadSupportCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x140864728 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[3];
  if ( (v2 & 0x1000000000LL) == 0 )
  {
    memset(v6, 0, 0x20uLL);
    v6[1] = *a1;
    v6[2] = a1[1];
    v6[3] = a1[2];
    v6[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_14043C1B8 + 8))(v6);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
