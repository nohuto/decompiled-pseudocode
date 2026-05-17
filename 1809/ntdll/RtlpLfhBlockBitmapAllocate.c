/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x18010C354
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x18010CE74 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhBlockBitmapAllocate(
        unsigned __int64 *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // r11
  volatile signed __int64 *v7; // r10
  volatile signed __int64 *v8; // rbp
  signed __int64 v9; // rdi
  unsigned int v10; // eax
  volatile signed __int64 *v11; // rax
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // ecx
  bool v17; // zf
  signed __int64 v18; // rax
  volatile signed __int64 *v19; // rax

  v5 = (volatile signed __int64 *)a1[1];
  v6 = *a1;
  v7 = &v5[(unsigned __int64)(unsigned int)(2 * a2) >> 6];
  v8 = &v5[(*a1 - 1) >> 6];
LABEL_2:
  if ( v6 >= 0x40 )
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( (*v7 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v11 = v7++;
      if ( v11 == v8 )
        v7 = v5;
    }
    if ( v7 == v8 && (v6 & 0x3F) != 0 && (v6 & 0x3F) < a4 )
      a4 = v6 & 0x3F;
  }
  else
  {
    v9 = *v7;
    v10 = v6;
    if ( (unsigned int)v6 >= a4 )
      v10 = a4;
    a4 = v10;
  }
  a3 = ((a4 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v12 = ~v9;
    if ( a4 >= 0x40 )
    {
      v14 = 0x5555555555555555LL;
    }
    else
    {
      _BitScanForward64(&v13, v12 & 0x5555555555555555LL);
      a3 += v13;
      v14 = (((1LL << a4) - 1) << v13) & 0x5555555555555555LL;
    }
    _BitScanForward64(&v15, __ROR8__(v14 & v12, a3));
    v16 = ((_BYTE)a3 + (_BYTE)v15) & 0x3F;
    v18 = _InterlockedCompareExchange64(v7, v9 | (a5 << v16), v9);
    v17 = v9 == v18;
    v9 = v18;
    if ( v17 )
      return (v16 + ((unsigned int)(v7 - v5) << 6)) >> 1;
    if ( (v18 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v19 = v7 + 1;
      v7 = v5;
      if ( v19 <= v8 )
        v7 = v19;
      goto LABEL_2;
    }
  }
}
