/*
 * XREFs of MiRemoveMdlPages @ 0x14084F140
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x14012969C (MiSetPfnOwnedAndActive.c)
 *     MiSortMdlFrames @ 0x1402AA4D0 (MiSortMdlFrames.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, unsigned int a2)
{
  __int64 *v2; // r14
  unsigned __int64 v3; // r12
  _DWORD *v4; // rbx
  char *v5; // rbp
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  ULONG_PTR v10; // r13
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  int v18; // [rsp+A0h] [rbp+18h]
  char *v19; // [rsp+A8h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v4 = P;
  v5 = &P[8 * v3 + 48];
  v19 = v5;
  MiSortMdlFrames((__int64)P);
  v6 = -1LL;
  v7 = 0;
  v18 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = -1LL;
  v11 = -1LL;
  v12 = v2 == (__int64 *)v5;
  if ( v2 <= (__int64 *)v5 )
  {
    do
    {
      if ( v12 || (v6 = *v2, *v2 != v11) )
      {
        if ( v8 )
        {
          if ( v7 < 0 || (v18 = MiRemovePhysicalMemory(v10, v8, HIWORD(a2) & 8), v7 = v18, v18 < 0) )
          {
            v13 = 48 * v10 - 0x58000000000LL;
            v14 = v8;
            do
            {
              MiSetPfnOwnedAndActive(v13, 0, -8LL, *(unsigned __int8 *)(v13 + 34) >> 6, 2);
              v13 += 48LL;
              --v14;
            }
            while ( v14 );
            v5 = v19;
            MiFreeContiguousPages((__int64)&MiSystemPartition, v10, v8);
            v7 = v18;
            v9 += v8;
          }
        }
        v10 = v6;
        v8 = 1LL;
      }
      else
      {
        ++v8;
      }
      ++v2;
      v11 = v6 + 1;
      v12 = v2 == (__int64 *)v5;
    }
    while ( v2 <= (__int64 *)v5 );
    v4 = P;
  }
  _InterlockedExchangeAdd64(&qword_14043C0D8, -(__int64)v3);
  if ( v9 )
  {
    if ( v9 == v3 )
    {
      ExFreePoolWithTag(v4, 0);
      return 0LL;
    }
    else
    {
      v4[10] += -4096 * v9;
    }
  }
  return v4;
}
