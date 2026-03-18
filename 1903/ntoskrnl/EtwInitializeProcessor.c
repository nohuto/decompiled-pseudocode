/*
 * XREFs of EtwInitializeProcessor @ 0x14076B26C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     EtwpInitializeActivityIdSeed @ 0x14076B308 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  char *PoolWithTag; // rax
  unsigned int v3; // ebx
  char *v4; // rsi
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  PVOID v8; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x150uLL, 0x70777445u);
  v3 = 0;
  *(_QWORD *)(a1 + 24616) = PoolWithTag;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x150uLL);
    EtwpInitializeActivityIdSeed(v4, *(unsigned int *)(a1 + 36));
    v5 = v4 + 296;
    v6 = 0LL;
    while ( 1 )
    {
      if ( CCSwapNumLoggersPerClockType[v6] )
      {
        if ( !*v5 )
        {
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
          *v5 = v8;
          if ( !v8 )
            break;
        }
      }
      ++v6;
      ++v5;
      if ( v6 >= 5 )
        return v3;
    }
  }
  return (unsigned int)-1073741801;
}
