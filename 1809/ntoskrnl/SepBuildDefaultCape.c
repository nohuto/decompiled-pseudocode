/*
 * XREFs of SepBuildDefaultCape @ 0x1401909AC
 * Callers:
 *     SepBuildDefaultCap @ 0x14075DB9C (SepBuildDefaultCap.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepBuildDefaultCape(_QWORD *a1)
{
  unsigned int v1; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  __int128 v5; // xmm0
  __int64 v6; // rcx

  v1 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x70536553u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v5 = DefaultCapeName;
    v6 = SeDefaultCapeSd;
    v4[4] = 0;
    *(_OWORD *)v4 = v5;
    *((_QWORD *)v4 + 3) = 0LL;
    v4[12] = 1;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 4) = v6;
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
