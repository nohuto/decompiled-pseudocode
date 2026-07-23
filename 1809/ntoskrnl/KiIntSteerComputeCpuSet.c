/*
 * XREFs of KiIntSteerComputeCpuSet @ 0x14029AB20
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x1400632E0 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerAssignCpuSet @ 0x14029AA9C (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x140131C14 (KiIntSteerVerifyDestination.c)
 *     KiComputeCpuSetAffinityMask @ 0x140297114 (KiComputeCpuSetAffinityMask.c)
 */

__int64 __fastcall KiIntSteerComputeCpuSet(__int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // r9
  __int64 result; // rax
  __int64 v5; // r9
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 136);
  v6[1] = 0LL;
  v6[0] = KiComputeCpuSetAffinityMask(0LL, (__int64 *)(a1 + 152), v1, v2);
  result = ((int)KiIntSteerVerifyDestination(a1, (__int64)v6) >> 31) & 0xC0000001;
  if ( (int)result < 0 )
  {
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 176) = v5;
  }
  return result;
}
