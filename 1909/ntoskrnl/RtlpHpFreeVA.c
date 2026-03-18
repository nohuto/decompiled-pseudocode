/*
 * XREFs of RtlpHpFreeVA @ 0x14010DAD4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlpHpSegMgrReserve @ 0x14010F724 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x14015A254 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x140166214 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x1401664A8 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14031BC4C (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x1400201A8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpEnvFreeVA @ 0x14010DB68 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010DEFC (RtlpHpVaMgrCtxFree.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int128 *a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  char *HeapManager; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = 0;
  v6 = a3 & 0x1000000;
  LODWORD(a3) = a3 & 0xFEFFFFFF;
  v17 = *a4;
  if ( (_DWORD)a3 != 0x8000 || v6 )
  {
    if ( BYTE1(v17) < 2u )
      return (unsigned int)RtlpHpEnvFreeVA(a1, a2, a3, a4);
  }
  else
  {
    v10 = *a1;
    v11 = v10 + *a2;
    v12 = (v10 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v13 = v11 - v12;
    *a1 = v12;
    *a2 = v13;
    if ( v13 )
    {
      v17 = v4;
      HeapManager = (char *)RtlpHpEnvGetHeapManager(&v17);
      RtlpHpVaMgrCtxFree(HeapManager + 88, v16, v15);
    }
  }
  return v5;
}
