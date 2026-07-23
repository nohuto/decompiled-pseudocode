/*
 * XREFs of PopEtEnergyTrackerCleanupAggregates @ 0x14069E114
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14069D39C (PopEtEnergyTrackerQuery.c)
 *     PopEtEnergyTrackerCleanup @ 0x140878D08 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x1406011A4 (PopEtAggregateKeyCleanup.c)
 */

unsigned __int64 __fastcall PopEtEnergyTrackerCleanupAggregates(__int64 a1)
{
  unsigned __int64 *v1; // rbp
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 *v8; // rsi
  unsigned __int64 *i; // rcx

  v1 = *(unsigned __int64 **)(a1 + 56);
  v3 = v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_6;
    v4 = *v3;
    result = *v3 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v4 = *v3;
    }
    if ( (v4 & 1) == 0 )
    {
      v3 = (unsigned __int64 *)v4;
    }
    else
    {
LABEL_6:
      v6 = v1 + 1;
      result = *(_QWORD *)(a1 + 56);
      v7 = result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5);
      while ( (unsigned __int64)v6 < v7 )
      {
        result = *v6;
        if ( (*v6 & 1) == 0 )
        {
          v3 = (unsigned __int64 *)*v6;
          v1 = v6;
          v4 = *v6;
          goto LABEL_10;
        }
        ++v6;
      }
      v4 = 0LL;
    }
LABEL_10:
    if ( !v4 )
      return result;
    v8 = v3;
    for ( i = v1; (*i & 1) == 0; i = (unsigned __int64 *)*i )
    {
      if ( (unsigned __int64 *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 48);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_15;
      }
    }
    v8 = 0LL;
LABEL_15:
    if ( v8 == (unsigned __int64 *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 636) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x1C8uLL);
    }
    else
    {
      PopEtAggregateKeyCleanup(v8 + 2);
      ExFreePoolWithTag(v8, 0x54456F50u);
    }
  }
}
