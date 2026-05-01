/*
 * XREFs of RmpWnfGetPublisherSid @ 0x180013B88
 * Callers:
 *     RmpWnfCreateStateNameForClient @ 0x180013918 (RmpWnfCreateStateNameForClient.c)
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x1800317CC (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005BE94 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfGetPublisherSid(PSID DestinationSid)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS v3; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-80h] BYREF
  PSID TokenInformation[12]; // [rsp+40h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v3 = NtOpenProcessToken(CurrentProcess, 8u, &TokenHandle);
  if ( v3 >= 0 )
  {
    v3 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    if ( v3 >= 0 )
      RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)v3;
}
