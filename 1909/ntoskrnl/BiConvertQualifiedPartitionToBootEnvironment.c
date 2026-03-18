/*
 * XREFs of BiConvertQualifiedPartitionToBootEnvironment @ 0x14092E710
 * Callers:
 *     BiConvertElementToRegistryData @ 0x140740194 (BiConvertElementToRegistryData.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertQualifiedPartitionToBootEnvironment(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // eax

  if ( a2 >= 0x3C )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v5 = 0;
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *v7 = 6;
      v7[2] = 72;
      v8 = *(_DWORD *)(a1 + 20);
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v5 = -1073741811;
          ExFreePoolWithTag(v7, 0x4B444342u);
          return v5;
        }
        v7[9] = 0;
        *(_OWORD *)(v7 + 10) = *(_OWORD *)(a1 + 28);
        *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 44);
      }
      else
      {
        v7[9] = 1;
        v7[10] = *(_DWORD *)(a1 + 28);
        *((_QWORD *)v7 + 2) = *(_QWORD *)(a1 + 32);
      }
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
