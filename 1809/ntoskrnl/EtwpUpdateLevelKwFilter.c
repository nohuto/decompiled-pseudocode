/*
 * XREFs of EtwpUpdateLevelKwFilter @ 0x1408C36D8
 * Callers:
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateLevelKwFilter(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // rcx
  _OWORD *v9; // rax

  v4 = 0;
  if ( a3 )
  {
    *a4 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) != 24 )
      return 3221225485LL;
    PoolWithTag = *(_QWORD **)(a1 + 64);
    if ( PoolWithTag || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, 0x18uLL, 0x46777445u)) != 0LL )
    {
      v9 = *(_OWORD **)a2;
      *(_OWORD *)PoolWithTag = *(_OWORD *)*(_QWORD *)a2;
      PoolWithTag[2] = *((_QWORD *)v9 + 2);
      if ( !*PoolWithTag )
        *PoolWithTag = -1LL;
      if ( !*((_BYTE *)PoolWithTag + 16) )
        *((_BYTE *)PoolWithTag + 16) = -1;
      *(_QWORD *)(a1 + 64) = PoolWithTag;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v4;
}
