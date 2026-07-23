/*
 * XREFs of KeSwapDirectoryTableBase @ 0x140160FB0
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 * Callees:
 *     KeFlushProcessTb @ 0x140091AD4 (KeFlushProcessTb.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 */

char __fastcall KeSwapDirectoryTableBase(struct _SINGLE_LIST_ENTRY *a1, int a2, struct _SINGLE_LIST_ENTRY *a3)
{
  __int64 Next; // rbx
  struct _SINGLE_LIST_ENTRY v5[5]; // [rsp+20h] [rbp-28h] BYREF

  Next = 0LL;
  v5[1].Next = a1;
  LOBYTE(v5[0].Next) = 0;
  HIDWORD(v5[0].Next) = a2;
  v5[2].Next = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      Next = (__int64)a1[79].Next;
  }
  else
  {
    Next = (__int64)a1[5].Next;
  }
  KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)KiSwapDirectoryTableBaseTarget, v5);
  return KeFlushProcessTb(Next);
}
