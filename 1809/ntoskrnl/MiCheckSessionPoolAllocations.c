/*
 * XREFs of MiCheckSessionPoolAllocations @ 0x1406E1AA4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExPoolCleanupExpansionTable @ 0x140142060 (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E1BA0 (MiDeleteLeakedSessionPool.c)
 */

__int64 MiCheckSessionPoolAllocations()
{
  __int64 v0; // rax
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 i; // r8
  void *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v10 = qword_14043B080 + 12288;
  v0 = 146LL;
  if ( _BitScanReverse64((unsigned __int64 *)&v2, 0x92uLL) )
    v0 = 1LL << v2;
  v11 = v0;
  v3 = &v11;
  v4 = 2LL;
  v5 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v12 = v5[1029];
  v13 = v5[1030];
  do
  {
    v6 = *(v3 - 1);
    if ( v6 )
    {
      for ( i = *v3; i; --i )
        v6 += 56LL;
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
  if ( v12 )
  {
    ExPoolCleanupExpansionTable(v12, (56 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v5[1029] = 0LL;
    v5[1030] = 0LL;
  }
  v8 = (void *)v5[1031];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    v5[1031] = 0LL;
  }
  return MiDeleteLeakedSessionPool(v8, v3);
}
