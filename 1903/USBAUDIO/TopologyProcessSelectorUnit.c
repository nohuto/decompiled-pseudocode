/*
 * XREFs of TopologyProcessSelectorUnit @ 0x1C0023E30
 * Callers:
 *     <none>
 * Callees:
 *     PropertyInitializeMuxCache @ 0x1C0027500 (PropertyInitializeMuxCache.c)
 */

__int64 __fastcall TopologyProcessSelectorUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  NTSTATUS v8; // esi
  __int64 v9; // rdi
  __int64 v10; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbx
  __int64 v13; // r8
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  int v16; // eax

  v8 = -1073741670;
  v9 = a3 + 152LL * *a5;
  v10 = a4 + 16LL * (unsigned int)*a6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x41627845u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
    if ( v8 < 0 )
    {
      ExFreePool(v12);
    }
    else
    {
      *(_DWORD *)(v9 + 76) = 5;
      *(_QWORD *)(v9 + 8) = &KSNODETYPE_MUX;
      v13 = 0LL;
      *(_QWORD *)(v9 + 16) = &KSNODETYPE_MUX;
      *(_DWORD *)(v9 + 80) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v9 + 136) = USBCntrlMuxSource;
      v14 = *(_DWORD *)(a2 + 32);
      if ( v14 )
      {
        v15 = (_DWORD *)(v10 + 8);
        do
        {
          *((_QWORD *)v15 - 1) = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 12 * v13);
          v13 = (unsigned int)(v13 + 1);
          v16 = *a5;
          v15[1] = v13;
          *v15 = v16;
          v15 += 4;
          ++*a6;
          v14 = *(_DWORD *)(a2 + 32);
        }
        while ( (unsigned int)v13 < v14 );
      }
      v12[1] = v14;
      v8 = PropertyInitializeMuxCache(a1, v9, v12);
      if ( v8 >= 0 )
        *(_QWORD *)(v9 + 128) = v12;
      ++*a5;
    }
  }
  return (unsigned int)v8;
}
