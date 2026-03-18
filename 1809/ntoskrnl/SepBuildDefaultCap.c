/*
 * XREFs of SepBuildDefaultCap @ 0x14075C9CC
 * Callers:
 *     SepRmDbInitialization @ 0x1409D8F90 (SepRmDbInitialization.c)
 * Callees:
 *     SepBuildDefaultCape @ 0x14019084C (SepBuildDefaultCape.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 SepBuildDefaultCap()
{
  int v0; // edi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  __int128 v3; // xmm0
  PVOID v4; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v0 = SepBuildDefaultCape(&P);
  if ( v0 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x70536553u);
    v2 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_QWORD *)(v2 + 32) = 0LL;
      v3 = DefaultCapName;
      v4 = P;
      *(_DWORD *)(v2 + 56) = 1;
      *(_OWORD *)(v2 + 40) = v3;
      *(_DWORD *)(v2 + 60) = 1;
      *(_QWORD *)(v2 + 64) = v4;
      *(_QWORD *)(v2 + 24) = 0LL;
      SepRmDefaultCap = v2;
      return (unsigned int)v0;
    }
    v0 = -1073741670;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x70536553u);
  return (unsigned int)v0;
}
