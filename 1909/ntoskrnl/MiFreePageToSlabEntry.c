/*
 * XREFs of MiFreePageToSlabEntry @ 0x1402DB830
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1402DB6C0 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePageToSlabEntry(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rbx
  volatile signed __int32 *v6; // r8
  unsigned int v7; // eax
  int v8; // r9d
  unsigned __int64 v9; // rax
  __int64 result; // rax

  v4 = (int)a1 / 48 - *(_DWORD *)(a2 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 132));
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 32));
  LOBYTE(a1) = 1;
  v5 = v4 & 0x1F;
  v6 = (volatile signed __int32 *)(*(_QWORD *)(a2 + 56) + 4 * ((unsigned __int64)v4 >> 5));
  if ( (unsigned __int64)(v5 + 1) <= 0x20 )
  {
    v7 = ~(1 << v5);
LABEL_9:
    _InterlockedAnd(v6, v7);
    goto LABEL_10;
  }
  v8 = v4 & 0x1F;
  if ( !v8 )
    goto LABEL_8;
  _InterlockedAnd(v6++, ~(((1 << (32 - v8)) - 1) << v5));
  a1 = 1 - (32 - v8);
  if ( a1 >= 0x20 )
  {
    v9 = (unsigned __int64)a1 >> 5;
    do
    {
      *v6 = 0;
      a1 -= 32;
      ++v6;
      --v9;
    }
    while ( v9 );
  }
  if ( a1 )
  {
LABEL_8:
    v7 = -1 << a1;
    goto LABEL_9;
  }
LABEL_10:
  result = (unsigned int)(*(_DWORD *)(a2 + 132) + *(_DWORD *)(a2 + 136));
  if ( (unsigned int)result >= 0x200 )
    _InterlockedOr((volatile signed __int32 *)(a3 + 56), 1u);
  return result;
}
