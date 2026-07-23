/*
 * XREFs of KeAllocateInterrupt @ 0x14017C908
 * Callers:
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall KeAllocateInterrupt(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rsi
  unsigned __int16 v3; // bx
  __int64 result; // rax
  int v5; // r14d
  _SLIST_ENTRY *v6; // rbx
  __int64 v7; // rbp

  v1 = a1 + 732;
  v3 = *(_WORD *)(a1[12].Alignment + 146);
  result = (__int64)RtlpInterlockedPopEntrySList(a1 + 732);
  if ( result )
  {
LABEL_2:
    *(_QWORD *)(result + 256) = a1;
  }
  else
  {
    v5 = v3;
    while ( 1 )
    {
      result = MmAllocateIndependentPagesEx(0x1000uLL, v5, 0LL, 0);
      v6 = (_SLIST_ENTRY *)result;
      if ( !result )
        break;
      v7 = 12LL;
      do
      {
        RtlpInterlockedPushEntrySList(v1, v6);
        v6 += 20;
        --v7;
      }
      while ( v7 );
      result = (__int64)RtlpInterlockedPopEntrySList(v1);
      if ( result )
        goto LABEL_2;
    }
  }
  return result;
}
