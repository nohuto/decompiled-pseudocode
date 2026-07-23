/*
 * XREFs of RtlCreateUserFiberShadowStack @ 0x1800E0A90
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1800E09E4 (RtlCalculateUserShadowStackSizes.c)
 */

int __fastcall RtlCreateUserFiberShadowStack(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  int result; // eax
  unsigned __int64 ProcessInformation[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = HIBYTE(a2);
  if ( HIBYTE(a2) > 0x40u )
    return -1073741811;
  memset(ProcessInformation, 0, 0x20uLL);
  result = RtlCalculateUserShadowStackSizes(a1, ProcessInformation);
  if ( result >= 0 )
  {
    LODWORD(ProcessInformation[2]) = v4;
    result = NtSetInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessFiberShadowStackAllocation,
               ProcessInformation,
               0x20u);
    if ( result >= 0 )
      *a3 = ProcessInformation[3];
  }
  return result;
}
