/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x140750E98
 * Callers:
 *     MiInitializePartition @ 0x1407506C0 (MiInitializePartition.c)
 * Callees:
 *     MiInitializeColorTable @ 0x140175164 (MiInitializeColorTable.c)
 */

__int64 __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int64 result; // rax
  _DWORD *v4; // rsi
  int *v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rcx

  v1 = *(_QWORD **)(a1 + 5032);
  v2 = 0;
  result = 0LL;
  if ( dword_140465E00 )
  {
    do
    {
      v1[1] = v1;
      result = (unsigned int)(result + 1);
      *v1 = v1;
      v1 += 3;
    }
    while ( (unsigned int)result < dword_140465E00 );
    v1 = *(_QWORD **)(a1 + 5032);
  }
  if ( KeNumberNodes )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 16) + 1960LL);
    do
    {
      v5 = dword_140465840;
      v6 = 3LL;
      v7 = v4 - 454;
      do
      {
        v8 = 2LL;
        v9 = v7;
        v10 = 24LL * (unsigned int)*v5;
        do
        {
          v11 = 2LL;
          do
          {
            v12 = 4LL;
            do
            {
              *v9 = v1;
              v1 = (_QWORD *)((char *)v1 + v10);
              ++v9;
              --v12;
            }
            while ( v12 );
            --v11;
          }
          while ( v11 );
          --v8;
        }
        while ( v8 );
        ++v5;
        v7 += 34;
        --v6;
      }
      while ( v6 );
      MiInitializeColorTable(v4, v2);
      result = (unsigned __int16)KeNumberNodes;
      v4 += 496;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
