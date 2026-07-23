/*
 * XREFs of MiGetNodeChannelPageCounts @ 0x140090E54
 * Callers:
 *     MiGetChannelInformation @ 0x1406096FC (MiGetChannelInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiGetNodeChannelPageCounts(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 *v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // r11
  __int64 *v10; // r10
  __int64 v11; // rbx
  __int64 *v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  unsigned __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 *result; // rax
  unsigned int v20; // ebp
  __int64 *v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 *v23; // r10
  __int64 v24; // rdi
  __int64 *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax

  v7 = (__int64 *)(*(_QWORD *)(a1 + 16) + 1984LL * a2);
  if ( a3 == 4 )
    v8 = v7[226];
  else
    v8 = v7[a3 + 222];
  do
  {
    if ( MmNumberOfChannels == 1 || a3 == 4 )
    {
      v9 = v7[220];
      v10 = MiLargePageSizes;
      v11 = v7[221];
      v12 = v7;
      v13 = 3LL;
      do
      {
        v14 = *v10++;
        v15 = *v12;
        v12 += 34;
        v9 += v14 * v15;
        v11 += v14 * *(v12 - 33);
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v23 = MiLargePageSizes;
      v24 = 3LL;
      v25 = &v7[a3 + 14];
      v9 = v7[2 * a3 + 228];
      v11 = v7[2 * a3 + 229];
      do
      {
        v26 = *v23++;
        v9 += v26 * *(v25 - 4);
        v27 = *v25 + *(v25 - 8);
        v25 += 34;
        v11 += v26 * v27;
        --v24;
      }
      while ( v24 );
    }
    v16 = MmNumberOfChannels;
    v17 = 0LL;
    if ( a3 != 4 )
      v16 = a3 + 1;
    v18 = 0LL;
    if ( a3 != 4 )
      v18 = a3;
    a3 = v18;
LABEL_11:
    if ( (_DWORD)v18 != v16 )
    {
      v20 = 0;
      v21 = &v7[24 * v18 + 107];
      while ( 1 )
      {
        v22 = v17 + *v21;
        if ( v22 < v17 || v22 == -1LL )
          break;
        ++v20;
        v21 += 3;
        v17 = v22;
        if ( v20 >= 8 )
        {
          v18 = (unsigned int)(v18 + 1);
          goto LABEL_11;
        }
      }
      v17 = -2LL;
    }
  }
  while ( v9 + v17 + v11 > v8 );
  *a5 = v11;
  result = a6;
  *a4 = v9;
  *a6 = v17;
  return result;
}
