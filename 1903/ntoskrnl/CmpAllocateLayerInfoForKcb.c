/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x140832D28
 * Callers:
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpCreateLayerLink @ 0x1408330B8 (CmpCreateLayerLink.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *PoolWithTag; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x696C4D43u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[5] = 0LL;
      PoolWithTag[2] = a1;
      PoolWithTag[5] = PoolWithTag + 4;
      PoolWithTag[4] = PoolWithTag + 4;
      *(_QWORD *)(a1 + 192) = PoolWithTag;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
