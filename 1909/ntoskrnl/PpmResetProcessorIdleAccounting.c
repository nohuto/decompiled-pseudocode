/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x1401958A4
 * Callers:
 *     PoIdle @ 0x140031410 (PoIdle.c)
 *     PpmResetIdlePolicy @ 0x140195860 (PpmResetIdlePolicy.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r13d
  char *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *a1;
  v4 = a1[2];
  a1[1] = 0;
  a1[3] = 0;
  *((_QWORD *)a1 + 3) = 0LL;
  a1[9] = 0;
  if ( v2 )
  {
    v6 = (char *)(a1 + 52);
    v7 = v2;
    v8 = v2;
    do
    {
      a1[1] = 0;
      a1[3] = 0;
      *((_QWORD *)a1 + 3) = 0LL;
      a1[9] = 0;
      memset(v6, 0, 0x340uLL);
      v6 += 1000;
      --v8;
    }
    while ( v8 );
    v9 = a1 + 54;
    do
    {
      *(v9 - 19) = -1LL;
      v10 = v9;
      v11 = 26LL;
      do
      {
        *v10 = -1LL;
        v10 += 4;
        --v11;
      }
      while ( v11 );
      v9 += 125;
      --v7;
    }
    while ( v7 );
  }
  a1[8] = 0;
  result = v4 + 1;
  *a1 = v2;
  a1[2] = result;
  *((_QWORD *)a1 + 2) = a2;
  return result;
}
