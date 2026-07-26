/*
 * XREFs of ethAllocateOpenMulticastBuffer @ 0x1C001AA0C
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ethAllocateOpenMulticastBuffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  PVOID PoolWithTag; // rax
  PVOID v6; // rax

  v2 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 296) + 464LL) )
  {
    v4 = *(unsigned int *)(a1 + 344);
    *(_DWORD *)(a2 + 440) = v4;
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(a2 + 472) = 0;
      *(_DWORD *)(a2 + 456) = 0;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 12 * v4, 0x6166444Eu);
      *(_QWORD *)(a2 + 448) = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 12LL * *(unsigned int *)(a2 + 440), 0x6166444Eu);
        *(_QWORD *)(a2 + 464) = v6;
        if ( v6 )
          return v2;
        ExFreePoolWithTag(*(PVOID *)(a2 + 448), 0);
        *(_QWORD *)(a2 + 448) = 0LL;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
