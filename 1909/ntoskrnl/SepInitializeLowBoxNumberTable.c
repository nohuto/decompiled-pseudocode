/*
 * XREFs of SepInitializeLowBoxNumberTable @ 0x14074958C
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x14061FBD8 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     RtlCreateHashTable @ 0x140157F10 (RtlCreateHashTable.c)
 *     RtlDeleteHashTable @ 0x1401750E0 (RtlDeleteHashTable.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepInitializeLowBoxNumberTable(__int64 a1)
{
  PRTL_DYNAMIC_HASH_TABLE *v1; // rsi
  unsigned int v3; // ebx
  PVOID PoolWithTag; // rax

  v1 = (PRTL_DYNAMIC_HASH_TABLE *)(a1 + 24);
  v3 = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(a1 + 24), 0, 0) )
    return 3221225626LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x734C6553u);
  if ( PoolWithTag )
  {
    *(_DWORD *)(a1 + 8) = 1024;
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    RtlClearAllBits((PRTL_BITMAP)(a1 + 8));
    *(_BYTE *)(a1 + 32) = 1;
  }
  else
  {
    RtlDeleteHashTable(*v1);
    return (unsigned int)-1073741670;
  }
  return v3;
}
