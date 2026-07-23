/*
 * XREFs of HvlpCommitLpIndices @ 0x1401B3B5C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x140322740 (HvcallInitiateHypercall.c)
 */

__int64 HvlpCommitLpIndices()
{
  _DWORD *v0; // rax
  __int64 v1; // rdx
  unsigned int v2; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1LL, 0LL, 8LL);
  v1 = v5;
  v0[1] = HvlpActiveProcessorCount;
  *v0 = 5;
  v2 = (unsigned __int16)HvcallInitiateHypercall(135LL, v1, 0LL) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(v4);
  return v2;
}
