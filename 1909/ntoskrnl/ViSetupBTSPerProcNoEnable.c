/*
 * XREFs of ViSetupBTSPerProcNoEnable @ 0x140975D2C
 * Callers:
 *     VfInitializeBranchTracing @ 0x140975968 (VfInitializeBranchTracing.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 ViSetupBTSPerProcNoEnable()
{
  __int64 v0; // rdi
  unsigned int v1; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  for ( *(_QWORD *)&PreviousAffinity.Group = 0LL;
        (unsigned int)v0 < (unsigned int)KeNumberProcessors_0;
        v0 = (unsigned int)(v0 + 1) )
  {
    v1 = KiProcessorIndexToNumberMappingTable[v0];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v1 >> 6);
    Affinity.Mask = 1LL << (v1 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    __writemsr(0x600u, VfBTSDataManagementArea[v0]);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  return 1LL;
}
