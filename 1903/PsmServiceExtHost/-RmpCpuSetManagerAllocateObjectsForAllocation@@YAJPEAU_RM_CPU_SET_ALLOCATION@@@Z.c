/*
 * XREFs of ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180068E98
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180068CD4 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     RmpWnfCreateStateNameForClient @ 0x180031190 (RmpWnfCreateStateNameForClient.c)
 *     RmpWnfGetPublisherSid @ 0x1800323B8 (RmpWnfGetPublisherSid.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateObjectsForAllocation(struct _WNF_STATE_NAME *a1)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+20h] [rbp-68h] BYREF

  result = RmpWnfGetPublisherSid(DestinationSid);
  if ( (int)result >= 0 )
  {
    result = RmpWnfCreateStateNameForClient(DestinationSid, 0x808u, 0, a1 + 12);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
