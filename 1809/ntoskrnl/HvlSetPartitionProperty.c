/*
 * XREFs of HvlSetPartitionProperty @ 0x140275424
 * Callers:
 *     HvlResumePartition @ 0x140274F50 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x140275690 (HvlSuspendPartition.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int16 v7; // bx
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage(v8, 1, 0LL, 24LL);
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v7 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v8);
  return v7 != 0 ? 0xC0000001 : 0;
}
