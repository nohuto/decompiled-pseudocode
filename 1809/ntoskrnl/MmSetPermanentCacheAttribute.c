/*
 * XREFs of MmSetPermanentCacheAttribute @ 0x140850160
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmSetPermanentCacheAttribute(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *v5; // rdi
  unsigned __int64 v6; // rsi
  struct _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  struct _SINGLE_LIST_ENTRY *v8; // rbx
  struct _SINGLE_LIST_ENTRY v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225714LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v5 = (struct _SINGLE_LIST_ENTRY *)(a1 >> 12);
  v6 = a2 >> 12;
  if ( !(a2 >> 12) )
    return 3221225712LL;
  if ( a3 != 1 )
    return 3221225713LL;
  PoolWithTag = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F49694Du);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[3].Next = v5;
  LODWORD(PoolWithTag[5].Next) = 1;
  PoolWithTag[4].Next = (struct _SINGLE_LIST_ENTRY *)((char *)&(&v5->Next)[-1] + v6 + 7);
  v10 = 0;
  v9.Next = PoolWithTag;
  KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiMakeIoRangePermanentDpc, &v9);
  result = (unsigned int)v10;
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v10;
  }
  return result;
}
