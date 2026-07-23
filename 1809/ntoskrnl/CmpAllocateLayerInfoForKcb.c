/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x1407FAA74
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCreateLayerLink @ 0x1407FADF0 (CmpCreateLayerLink.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x696C4D43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      v4[2] = a1;
      v4[5] = v4 + 4;
      v4[4] = v4 + 4;
      v4[7] = v4 + 6;
      v4[6] = v4 + 6;
      *(_QWORD *)(a1 + 184) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
