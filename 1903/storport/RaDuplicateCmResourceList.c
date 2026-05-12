/*
 * XREFs of RaDuplicateCmResourceList @ 0x1C006E020
 * Callers:
 *     RaidInitializeResourceList @ 0x1C006DFC8 (RaidInitializeResourceList.c)
 * Callees:
 *     memmove @ 0x1C0023500 (memmove.c)
 */

PVOID __fastcall RaDuplicateCmResourceList(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // esi
  PVOID PoolWithTag; // rax
  PVOID v13; // rbx

  v2 = *a2;
  v3 = 0;
  v5 = 40;
  if ( *a2 )
  {
    v6 = a2 + 4;
    do
    {
      v7 = *v6;
      v8 = v5 + 36;
      if ( !v3 )
        v8 = v5;
      v5 = v8;
      v9 = 0;
      if ( v7 )
      {
        v10 = v5;
        do
        {
          v5 = v10 + 20;
          if ( !v9 )
            v5 = v10;
          ++v9;
          v10 = v5;
        }
        while ( v9 < v7 );
      }
      ++v3;
      v6 += 9;
    }
    while ( v3 < v2 );
  }
  v11 = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4C526152u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, a2, v11);
  return v13;
}
