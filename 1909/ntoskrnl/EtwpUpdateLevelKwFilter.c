/*
 * XREFs of EtwpUpdateLevelKwFilter @ 0x1408FEF64
 * Callers:
 *     EtwpUpdateFilterData @ 0x140692660 (EtwpUpdateFilterData.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateLevelKwFilter(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rcx
  _QWORD *PoolWithTag; // rax
  _OWORD *v9; // rax

  v3 = 0;
  if ( !a3 )
  {
    if ( *(_DWORD *)(a2 + 8) != 24 )
      return 3221225485LL;
    v7 = *(_QWORD **)(a1 + 64);
    if ( !v7 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x46777445u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a1 + 64) = PoolWithTag;
    }
    v9 = *(_OWORD **)a2;
    *(_OWORD *)v7 = *(_OWORD *)*(_QWORD *)a2;
    v7[2] = *((_QWORD *)v9 + 2);
    if ( !*v7 )
      *v7 = -1LL;
    if ( !*((_BYTE *)v7 + 16) )
      *((_BYTE *)v7 + 16) = -1;
    return v3;
  }
  ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  return v3;
}
