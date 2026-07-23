/*
 * XREFs of AslHashFree @ 0x1408EB138
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x14067FB84 (SdbpReleaseSearchDBContext.c)
 *     SdbCloseDatabaseRead @ 0x140681C54 (SdbCloseDatabaseRead.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall AslHashFree(_QWORD *P)
{
  char *v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  _QWORD *v5; // rax
  char *v6; // rdx
  _QWORD *v7; // rbx

  if ( P )
  {
    v2 = (char *)P[1];
    if ( v2 )
    {
      v3 = 0;
      if ( *(int *)P > 0 )
      {
        v4 = 0LL;
        do
        {
          v5 = *(_QWORD **)&v2[v4];
          v6 = v2;
          if ( v5 )
          {
            do
            {
              v7 = (_QWORD *)v5[2];
              ExFreePoolWithTag(v5, 0x74705041u);
              v5 = v7;
            }
            while ( v7 );
            v2 = (char *)P[1];
            v6 = v2;
          }
          ++v3;
          v4 += 8LL;
        }
        while ( v3 < *(_DWORD *)P );
        v2 = v6;
      }
      if ( v2 )
        ExFreePoolWithTag(v2, 0x74705041u);
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
