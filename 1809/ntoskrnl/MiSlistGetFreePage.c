/*
 * XREFs of MiSlistGetFreePage @ 0x1400EB3E4
 * Callers:
 *     MiRemovePageAnyColor @ 0x1400EB1FC (MiRemovePageAnyColor.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 */

_QWORD *__fastcall MiSlistGetFreePage(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rsi
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // rbx

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (_SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 4136));
    if ( LOWORD(v7->Alignment) )
    {
      v8 = RtlpInterlockedPopEntrySList(v7);
      p_Next = &v8->Next;
      if ( v8 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v8[1].Next = (_SLIST_ENTRY *)ZeroPte;
  if ( v3 )
  {
    MiSetOriginalPtePfnFromFreeList(&v8[1].Next);
  }
  else if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((__int64)&v8[0x5800000000LL] / 48);
  }
  *p_Next = 0LL;
  return p_Next;
}
