/*
 * XREFs of ExHeapLookasideReplenish @ 0x1401B7514
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA170 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpVsContextMultiAlloc @ 0x1401B6C40 (RtlpHpVsContextMultiAlloc.c)
 *     InterlockedPushListSList @ 0x1401C5480 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY *__fastcall ExHeapLookasideReplenish(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  union _SLIST_HEADER *v5; // rdi
  unsigned int v6; // r8d
  PSLIST_ENTRY *v7; // rbx
  unsigned int v8; // r8d
  int v9; // eax
  ULONG v10; // eax
  PSLIST_ENTRY ListEnd; // [rsp+30h] [rbp-18h] BYREF
  PSLIST_ENTRY *v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = (union _SLIST_HEADER *)(a1 + ((a2 + 1LL) << 6));
  v6 = ((LOWORD(v5[1].Alignment) - LOWORD(v5->Alignment)) & (unsigned int)-(LOWORD(v5->Alignment) < (unsigned int)LOWORD(v5[1].Alignment))) >> 1;
  if ( !v6 )
    return 0LL;
  v8 = v6 + 1;
  v7 = 0LL;
  if ( a4 <= 0x20000 )
  {
    v9 = RtlpHpVsContextMultiAlloc(a3 + 640, a4, v8, a4, (char **)&v13, (char **)&ListEnd);
    if ( v9 )
    {
      v7 = v13;
      v10 = v9 - 1;
      if ( v10 )
        InterlockedPushListSList(v5, *v13, ListEnd, v10);
    }
  }
  return v7;
}
