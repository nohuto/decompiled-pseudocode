/*
 * XREFs of RtlpHpFreeVA @ 0x14000D214
 * Callers:
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140009ED8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x14000D98C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapAllocate @ 0x1401411D0 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1401545C4 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x14015484C (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1402FE304 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
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
  void *HeapManager; // rax
  _QWORD *v15; // r10
  _QWORD *v16; // r11
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = 0;
  v6 = a3 & 0x1000000;
  LODWORD(a3) = a3 & 0xFEFFFFFF;
  v17 = *a4;
  if ( (_DWORD)a3 != 0x8000 || v6 )
  {
    if ( BYTE1(v17) < 2u )
      return (unsigned int)RtlpHpEnvFreeVA(a1, a2, a3);
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
      HeapManager = RtlpHpEnvGetHeapManager(&v17);
      RtlpHpVaMgrCtxFree((__int64)HeapManager + 80, v16, v15);
    }
  }
  return v5;
}
