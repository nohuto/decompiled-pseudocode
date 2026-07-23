/*
 * XREFs of PfTAllocateBuffers @ 0x140753EEC
 * Callers:
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PfTGetFreeBuffer @ 0x14066BA1C (PfTGetFreeBuffer.c)
 *     PfTLbInitialize @ 0x140685548 (PfTLbInitialize.c)
 */

__int64 __fastcall PfTAllocateBuffers(__int64 a1, unsigned int a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // esi
  SIZE_T v5; // rbp
  unsigned int v9; // r15d
  _QWORD *PoolWithTag; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx

  v4 = 0;
  v5 = a2;
  *(_DWORD *)a1 = (16 * a2) | *(_DWORD *)a1 & 0xF;
  v9 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, a4);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      if ( (*(_DWORD *)a1 & 0xF) != 0 )
      {
        memset(PoolWithTag, 0, v5);
        PoolWithTag[1] = PoolWithTag;
        *PoolWithTag = PoolWithTag;
        *((_DWORD *)PoolWithTag + 8) = 2048;
      }
      else
      {
        PfTLbInitialize(PoolWithTag, v5, 0);
      }
      *PoolWithTag = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = PoolWithTag;
      ++v9;
      ++*(_WORD *)(a1 + 10);
      ++*(_DWORD *)(a1 + 4);
      if ( v9 >= a3 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v11 = PfTGetFreeBuffer(a1);
    v12 = a1 + 24;
    v13 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      __fastfail(3u);
    *v11 = v13;
    v11[1] = v12;
    *(_QWORD *)(v13 + 8) = v11;
    *(_QWORD *)v12 = v11;
  }
  return v4;
}
