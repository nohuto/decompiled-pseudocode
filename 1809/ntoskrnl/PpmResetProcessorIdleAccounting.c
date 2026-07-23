/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x14018BA24
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 *     PpmResetIdlePolicy @ 0x14018B9E0 (PpmResetIdlePolicy.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(char *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // r13d
  char *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  char *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *(_DWORD *)a1;
  v4 = *((_DWORD *)a1 + 2);
  memset(a1, 0, 0x28uLL);
  if ( v2 )
  {
    v6 = a1 + 208;
    v7 = v2;
    v8 = v2;
    do
    {
      memset(a1, 0, 0x28uLL);
      memset(v6, 0, 0x340uLL);
      v6 += 1000;
      --v8;
    }
    while ( v8 );
    v9 = a1 + 216;
    do
    {
      *((_QWORD *)v9 - 19) = -1LL;
      v10 = v9;
      v11 = 26LL;
      do
      {
        *v10 = -1LL;
        v10 += 4;
        --v11;
      }
      while ( v11 );
      v9 += 1000;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)a1 + 8) = 0;
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)a1 = v2;
  *((_DWORD *)a1 + 2) = result;
  *((_QWORD *)a1 + 2) = a2;
  return result;
}
