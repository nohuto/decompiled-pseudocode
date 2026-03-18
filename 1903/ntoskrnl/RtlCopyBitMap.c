/*
 * XREFs of RtlCopyBitMap @ 0x140083CD0
 * Callers:
 *     HvpGrowDirtyVectors @ 0x1401372A4 (HvpGrowDirtyVectors.c)
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 *     PspQueryRateControlHistory @ 0x1406154EC (PspQueryRateControlHistory.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x140083E18 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rcx
  int *v8; // r11
  int *v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r9
  __int64 v15; // r8
  int v16; // esi
  char v17; // di
  int v18; // ebp
  int v19; // esi
  int v20; // r13d
  unsigned __int64 v21; // rbp
  unsigned int v22; // eax
  int v23; // r10d

  result = *a1;
  v5 = *(_DWORD *)a2 - a3;
  if ( (unsigned int)result <= (unsigned int)v5 )
    v5 = (unsigned int)result;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v9 = (int *)(v7 + 4 * result);
    if ( v8 > v9 || (result = (unsigned __int64)&v8[(v5 - 1) >> 5], (unsigned __int64)v9 > result) )
    {
      v10 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v15 = a3 & 0x1F;
        if ( v5 >= 0x20 )
        {
          v19 = *v9;
          v20 = 1 << (32 - v15);
          v21 = v5 >> 5;
          v5 += -32LL * (v5 >> 5);
          do
          {
            *v9++ = ((*v8 & (v20 - 1)) << v15) | v19 & ((1 << v15) - 1);
            v22 = *v8++ & ~(v20 - 1);
            result = v22 >> (32 - v15);
            v19 = result | *v9 & ~((1 << v15) - 1);
            *v9 = v19;
            --v21;
          }
          while ( v21 );
        }
        if ( v5 )
        {
          v16 = *v8;
          v17 = 32 - v15;
          v18 = *v9;
          if ( v5 > 32 - v15 )
          {
            *v9 = v18 & ((1 << v15) - 1) | ((v16 & ((1 << v17) - 1)) << v15);
            v23 = 1 << (v5 + v15 - 32);
            result = (*v8 & (unsigned int)((v23 - 1) << v17)) >> v17;
            v9[1] = result | v9[1] & -v23;
          }
          else
          {
            result = (v16 & (unsigned int)((1 << v5) - 1)) << v15;
            *v9 = result | v18 & ~(((1 << v5) - 1) << v15);
          }
        }
      }
      else
      {
        v11 = v5;
        v12 = v5 & 7;
        v13 = v11 >> 3;
        if ( v13 )
          result = (unsigned __int64)memmove((void *)(v10 + v7), *((const void **)a1 + 1), v13);
        if ( v12 )
        {
          v14 = (_BYTE *)(v10 + v13 + *(_QWORD *)(a2 + 8));
          *v14 &= ~((1 << v12) - 1);
          result = *((_QWORD *)a1 + 1);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, (unsigned int)v5);
    }
  }
  return result;
}
