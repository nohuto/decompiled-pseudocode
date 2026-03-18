/*
 * XREFs of MiPreparePfnDatabasePageForFree @ 0x140186598
 * Callers:
 *     MiPfnRangeIsZero @ 0x14018618C (MiPfnRangeIsZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiPreparePfnDatabasePageForFree(unsigned __int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rsi
  char v12; // al
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v15 = MI_READ_PTE_LOCK_FREE(a1);
  v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v6 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  result = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = result ^ (result ^ (result - 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)v3 != 3 )
  {
    result = v3;
    v8 = 0LL;
    v9 = MiLargePageSizes[v3];
    v10 = MiLargePageContainingFrames[v3];
    if ( v9 )
    {
      v11 = v10 & 0xFFFFFFFFFLL;
      do
      {
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v14);
          while ( *(__int64 *)(v5 + 24) < 0 );
        }
        *(_WORD *)(v5 + 32) = 0;
        *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
        v12 = *(_BYTE *)(v5 + 34) & 0xEF;
        *(_BYTE *)(v5 + 34) = v12;
        if ( v8 )
          *(_BYTE *)(v5 + 34) = v12 & 0xF8;
        result = v11 | *(_QWORD *)(v5 + 40) & 0xFFFFFFF000000000uLL;
        *(_QWORD *)(v5 + 40) = result;
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 += 48LL;
        ++v8;
      }
      while ( v8 < v9 );
    }
  }
  if ( !a2 )
  {
    result = ZeroPte;
    *(_QWORD *)(v5 + 16) = ZeroPte;
  }
  return result;
}
