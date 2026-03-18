/*
 * XREFs of MiFreeLargePageSubPageAsSmall @ 0x1402DF514
 * Callers:
 *     MiReadyLargePageToFree @ 0x140146F40 (MiReadyLargePageToFree.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiFreeLargePageSubPageAsSmall(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned int v4; // esi
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // bp
  unsigned __int64 v9; // rdx
  unsigned __int16 v10; // bp
  bool v11; // zf
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = 1;
  v13 = 0;
  v5 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(BugCheckParameter2 + 40) = v6;
  if ( a2 )
  {
    MiInsertPageInFreeOrZeroedList(v5, 2);
  }
  else
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 24);
    v8 = (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 5;
    v9 = v6 & 0xFDFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(BugCheckParameter2 + 40) = v9;
    v10 = v8 + 1;
    if ( (v7 & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(BugCheckParameter2 + 24) = v7 | 0x4000000000000000LL;
    if ( ((v9 >> 54) & 7) == 3 )
      MiClearPfnImageVerified(BugCheckParameter2, 12);
    *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    v11 = *(_WORD *)(BugCheckParameter2 + 32) == v10;
    *(_WORD *)(BugCheckParameter2 + 32) -= v10;
    if ( v11 )
    {
      MiPfnReferenceCountIsZero(BugCheckParameter2, v5);
    }
    else
    {
      *(_BYTE *)(BugCheckParameter2 + 34) |= 7u;
      v4 = 0;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v4;
}
