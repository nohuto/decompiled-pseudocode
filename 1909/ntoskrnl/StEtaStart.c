/*
 * XREFs of StEtaStart @ 0x1400D7378
 * Callers:
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400D72B0 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall StEtaStart(__int64 a1, int **a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v7; // rbp
  __int64 v8; // r15
  int *v9; // r14
  int *v10; // rax
  unsigned int v11; // esi
  int *PoolWithTag; // rax
  int *v13; // r8
  int *v14; // r9
  __int64 v15; // r10
  LONGLONG v16; // rdx
  int v17; // eax
  LARGE_INTEGER v19; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v19.QuadPart = 0LL;
  KeQueryPerformanceCounter(&v19);
  if ( v19.QuadPart )
  {
    v7 = 0LL;
    v8 = a1 - (_QWORD)a2;
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 )
      {
        v10 = *a2;
        v11 = 1;
        if ( *v9 != -1 )
        {
          do
          {
            v10 += 2;
            ++v11;
          }
          while ( *v10 != -1 );
        }
        PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 32 * v11, 0x74496D73u);
        v13 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        if ( v11 )
        {
          v14 = PoolWithTag;
          v15 = v11;
          do
          {
            v16 = v19.QuadPart * (unsigned int)v9[1] / 1000000;
            v17 = *v9;
            v14[1] = 0;
            v9 += 2;
            *((_QWORD *)v14 + 2) = 0LL;
            *((_QWORD *)v14 + 3) = 0LL;
            *v14 = v17;
            *((_QWORD *)v14 + 1) = v16;
            v14 += 8;
            --v15;
          }
          while ( v15 );
        }
        *(int **)((char *)a2 + v8 + 16) = v13;
      }
      ++v7;
      ++a2;
      if ( v7 >= 2 )
      {
        *(_QWORD *)(a1 + 32) = *a3;
        return v4;
      }
    }
  }
  return (unsigned int)-1073741637;
}
