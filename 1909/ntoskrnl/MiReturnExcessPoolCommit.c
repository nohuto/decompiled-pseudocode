/*
 * XREFs of MiReturnExcessPoolCommit @ 0x140023500
 * Callers:
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x140110524 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFreeLargePageChain @ 0x1402E677C (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 88);
    v3 = *(_QWORD *)(a1 + 80);
    if ( result != v3 )
      return MiReturnCommit(
               *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 174LL)),
               v3 - result);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( (*(_DWORD *)(a1 + 72) & 0x20000000) != 0 )
    {
      if ( v4 )
        result = MiFreeLargePageChain();
      v5 = *(_QWORD *)(a1 + 88);
      v6 = *(_QWORD *)(a1 + 80);
      if ( v5 != v6 )
      {
        memset(v7, 0, 0x30uLL);
        v7[3] = v6 - v5;
        v7[0] = v6 - v5;
        return MiReturnPoolCharges(v7, 0LL);
      }
    }
    else if ( v4 )
    {
      return MiReturnPhysicalPoolPages(v4, 0LL);
    }
  }
  return result;
}
