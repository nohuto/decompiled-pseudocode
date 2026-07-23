/*
 * XREFs of PfpOpenHandleClose @ 0x14066168C
 * Callers:
 *     PfpPrefetchVolumesCleanup @ 0x14065CAB0 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x14065D5D4 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x14065E58C (PfpPrefetchDirectoryStream.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14065F4D8 (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x140660168 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x140660480 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x14066134C (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140661458 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x140663BCC (PfpReadSupportCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_14043D278 + 8))(v6);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
