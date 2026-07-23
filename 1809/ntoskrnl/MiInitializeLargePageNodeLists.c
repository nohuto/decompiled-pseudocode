/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x14072C52C
 * Callers:
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 * Callees:
 *     MiInitializeColorTable @ 0x14016A5CC (MiInitializeColorTable.c)
 */

__int64 __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi
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
  if ( dword_14043B7B8 )
  {
    do
    {
      v1[1] = v1;
      result = (unsigned int)(result + 1);
      *v1 = v1;
      v1 += 3;
    }
    while ( (unsigned int)result < dword_14043B7B8 );
    v1 = *(_QWORD **)(a1 + 5032);
  }
  if ( KeNumberNodes )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 16) + 1936LL);
    do
    {
      v5 = dword_14043B1C0;
      v6 = 3LL;
      v7 = v4 - 448;
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
