/*
 * XREFs of MiGetPageSlist @ 0x14010CD20
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400EB150 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 */

_QWORD *__fastcall MiGetPageSlist(__int64 a1, unsigned int a2, __int16 a3)
{
  int v3; // ebp
  int *v4; // r14
  int v5; // r15d
  unsigned int v8; // ebx
  int i; // esi
  _SLIST_HEADER *v10; // rcx
  PSLIST_ENTRY v12; // rax
  _QWORD *p_Next; // r8
  PSLIST_ENTRY v14; // [rsp+50h] [rbp+8h]

  v3 = dword_14043B148;
  v4 = (int *)&MiFreeThenFree;
  v5 = 1;
  if ( (a3 & 0x4000) != 0 )
    v5 = 16;
  v8 = a2;
  if ( (a3 & 2) != 0 )
    v4 = (int *)&MiZeroThenZero;
  while ( 2 )
  {
    for ( i = *v4; ; i = v4[1] )
    {
      v10 = (_SLIST_HEADER *)(16LL * v8 + *(_QWORD *)(a1 + 8LL * i + 4136));
      if ( LOWORD(v10->Alignment) )
      {
        v12 = RtlpInterlockedPopEntrySList(v10);
        v14 = v12;
        p_Next = &v12->Next;
        if ( v12 )
        {
          v12[1].Next = (_SLIST_ENTRY *)ZeroPte;
          if ( i )
          {
            MiSetOriginalPtePfnFromFreeList(&v12[1].Next);
          }
          else if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero((__int64)&v12[0x5800000000LL] / 48);
            p_Next = &v14->Next;
          }
          *p_Next = 0LL;
          return p_Next;
        }
      }
      if ( i == v4[1] )
        break;
    }
    v8 = v8 & ~v3 | v3 & (v8 + v5);
    if ( v8 != a2 )
      continue;
    break;
  }
  return 0LL;
}
